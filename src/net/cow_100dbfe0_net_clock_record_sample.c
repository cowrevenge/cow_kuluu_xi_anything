/* f_100dbfe0 - add this frame's milliseconds into one of the clock's ten sample slots, and close the
   slot once it has filled up.

   The clock keeps ten sample accumulators with one "taken" byte each. A slot that has never been used is
   opened empty; a slot already in progress collects this frame's elapsed milliseconds and, once it has
   reached the limit the caller names, is closed and cleared. The answer says whether the slot is now
   closed, which is what tells the caller to move on to the next one.

   Evidence
   - the object is the net clock ............ 0x100dbfec loads [0x10492e10], again at 0x100dc008 and
                                              0x100dc023; layout/addresses.h
                                              COW_ADDR_FRAME_NET_CLOCK_PTR
   - arg0 is a sample index, bounded unsigned 0x100dbfe0 `mov eax,[esp+4]`, then `cmp eax,0xa / jb` at
                                              0x100dbfe4-0x100dbfe7 - COW_NET_CLOCK_SAMPLES, matching the
                                              10 words at +0x18 and the 10 bytes at +0x40
   - the per-slot flag is +0x40 ............. read `mov dl,[ecx+eax+0x40]` at 0x100dbff2, set
                                              `mov byte [ecx+eax+0x40],1` at 0x100dc01e
   - the per-slot accumulator is +0x18 ...... added into at 0x100dbffe-0x100dc004, zeroed at 0x100dc029,
                                              stride 4 (`[ecx + eax*4 + 0x18]`)
   - the amount added is [clock+0x08] ....... `mov edx,[ecx+8]` at 0x100dbffa - the field f_100dbeb0
                                              stores at 0x100dbed5 and f_100dc040 hands out
   - arg1 is the close limit ................ read at 0x100dc00e as [esp+0xc], which after the
                                              `push esi` at 0x100dbffd is the caller's SECOND word
   - eax is a byte-level answer only ........ 0x100dbfe9 and 0x100dc01b are `xor al,al`, 0x100dc031 is
                                              `mov al,1`: each writes AL alone, so the upper three bytes
                                              keep whatever the index left there. Returning a tidy 0/1
                                              would be a difference from the game - cowdiff compares all
                                              of eax, so this masks rather than tidies
   - edx is an output too, and not just the total: `mov dl,[ecx+eax+0x40]` at 0x100dbff2 puts the FLAG
                                              BYTE into edx's low byte on every path that reads the
                                              clock, and the accumulate path then overwrites all of edx
                                              at 0x100dc012 with the new total. Both facts came out of
                                              the seeded states, not from the first reading
   - the close path is jump-only ............ 0x100dc01b falls through to the `ret` at 0x100dc01d, and
                                              0x100dc01e is entered only by the jumps at 0x100dbff8 and
                                              0x100dc019: an unfilled slot returns al=0 WITHOUT closing
                                              or clearing anything, which is the whole point of the test
   - five callers, no table ................. 0x100fa289, 0x100fa30f, 0x100fa4c1, 0x100fa55e, 0x100fcae7
                                              (tools/cow/callers_of.py 0x100dbfe0)

   Proof: tools/cow/cowdiff.py 0x100dbfe0 - PASS on eax, edx, callee-saved, esp, guest memory writes
   (address, size, value, order - which is what pins the open path's two writes and the close path's
   store/push/pop/store/store sequence) and calls out. cow/seeds/100dbfe0.json exists because the
   entry indexes a 10-slot array and a fuzzed 32-bit argument lands outside it almost always: without
   the seeds 20 of the 28 instruction sites were never compared and the accumulate/close logic was
   untested. The seeds caught the two edx facts above and the conditional `push esi`.

   Name: cow_net_clock_record_sample (guess) - from the writes into the sample array and its flag; that
   the limit closes a slot is read from the comparison, what the ten slots schedule is not established.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the memory effects. Not a guest layout:
   no offset assertions, and nothing in layout/ names it, because it never appears in guest memory. It
   exists so the decisions (which path, what index, what total) stay in the user function while the
   stores, the conditional `push esi` and the global re-reads stay where the ABI work belongs. */
typedef struct CowSampleEdit
{
    uint32_t eax;      /* what the entry returns in eax, al-masked as the original's byte writes do */
    uint32_t edx;      /* what the entry leaves in edx on this path (the flag byte, or the total) */
    uint32_t new_total; /* the accumulated value, meaningful when took != 0 */
    int took;          /* the sample was added into (0x100dbffe-0x100dc004, and the push/pop at 0x100dbffd/0x100dc018) */
    int opened;        /* an untouched slot was opened (the two writes at 0x100dc01e/0x100dc029) */
    int closed;        /* a full slot was closed (the same two writes, reached from 0x100dc019) */
} CowSampleEdit;

void cow_net_clock_record_sample(uint32_t index, uint32_t close_limit, uint32_t caller_edx,
                                 CowSampleEdit* edit)
{
    edit->took = 0;
    edit->opened = 0;
    edit->closed = 0;
    edit->new_total = 0u;

    if (index >= COW_NET_CLOCK_SAMPLES) /* 0x100dbfe4-0x100dbfe7: unsigned */
    {
        edit->eax = index & ~0xffu; /* 0x100dbfe9: xor al,al - al only, upper bytes keep the index */
        edit->edx = caller_edx; /* the clock was never read, so edx was never touched */
        return;
    }

    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR)); /* 0x100dbfec */
    const uint32_t taken = clock->sample_taken[index]; /* 0x100dbff2: and dl becomes the flag byte */
    edit->edx = (caller_edx & ~0xffu) | (taken & 0xffu);

    if (taken == 0u) /* 0x100dbff6-0x100dbff8 */
    {
        edit->eax = (index & ~0xffu) | 1u; /* 0x100dc031: mov al,1 */
        edit->opened = 1; /* the two writes at 0x100dc01e and 0x100dc029 */
        return;
    }

    /* in progress: add this frame's elapsed milliseconds (0x100dbffa-0x100dc004) */
    edit->took = 1;
    edit->new_total = clock->sample[index] + clock->ms_since_frame;
    edit->edx = edit->new_total; /* 0x100dc012 overwrites all of edx with what was just stored */

    if (edit->new_total < close_limit) /* 0x100dc016-0x100dc019: unsigned */
    {
        edit->eax = index & ~0xffu; /* 0x100dc01b-0x100dc01d: not full, leave it open */
        return;
    }

    edit->eax = (index & ~0xffu) | 1u; /* 0x100dc031 */
    edit->closed = 1; /* the two writes at 0x100dc01e and 0x100dc029 */
}

/* COW_ADAPTER BEGIN - cdecl, two arguments, bare ret: the caller cleans, so rt_return pops nothing
   beyond the return address. The writes below are the entry's own memory effects in the original's
   order, because cowdiff compares the guest memory trace byte for byte and the entry stores into the
   clock from three different places, saves esi between two of them, and re-reads the global pointer
   before the last store. The `push esi` at 0x100dbffd only happens on the accumulate path - it sits
   after the branch at 0x100dbff8 that opens an untouched slot - so it is reproduced under the same
   condition, and the pop at 0x100dc018 is what restores both esi and esp. The readability gate skips
   this block. */
void cow_adapter_100dbfe0(Guest* g)
{
    CowSampleEdit edit;
    const uint32_t index = rt_arg(g, 0);
    const uint32_t limit = rt_arg(g, 1);

    cow_net_clock_record_sample(index, limit, g->edx, &edit);

    if (edit.took)
    {
        CowFrameNetClock* clock = COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR));
        clock->sample[index] = edit.new_total; /* 0x100dc004 */

        g->esp -= 4u; /* 0x100dbffd push esi */
        wr32(g->esp, g->esi);
        g->esp += 4u; /* 0x100dc018 pop esi - the value never leaves the stack, so esi is unchanged */
    }

    if (edit.opened || edit.closed)
    {
        /* ecx here is the pointer loaded at 0x100dbfec (open) or 0x100dc008 (close); the second store
           at 0x100dc029 follows its own re-load of the global at 0x100dc023 */
        COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR))->sample_taken[index] = 1u; /* 0x100dc01e */
        COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR))->sample[index] = 0u; /* 0x100dc023-0x100dc029 */
    }

    g->edx = edit.edx;
    rt_return(g, edit.eax, 0);
}
/* COW_ADAPTER END */
