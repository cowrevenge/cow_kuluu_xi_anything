/* f_100dbe50 - stand the net clock up: publish the static object, clear it, seed its tick.

   The clock is one static block that the game reaches through a single global. This entry publishes
   it, zeroes it, calls the reset that seeds the two accumulator fields, takes the millisecond tick
   and stamps it as the clock's last-seen tick, clears the "alive" flag the pump raises, and lets
   f_100dc1f0 stamp the pair - after which the pump (f_100dbeb0) owns the object.

   Evidence
   - the object is static, not allocated ..... 0x100dbe51 `mov edi,0x10492db8` - the address is an
                                               immediate in the instruction, and it is the same one
                                               layout/addresses.h books as COW_ADDR_FRAME_NET_CLOCK_OBJ
   - the global is published before the clear  0x100dbe5d `mov dword ptr [0x10492e10],edi`, two
                                               instructions before the `rep stosd` at 0x100dbe63 that
                                               zeroes it, so a callee reached during the clear already
                                               sees the address; the conversion keeps that order
   - the clear is 0x16 dwords ................ 0x100dbe56 `mov ecx,0x16` / 0x100dbe5b `xor eax,eax` with
                                               the `rep stosd` - the 0x58 bytes that
                                               layout/structs.h's CowFrameNetClock covers, which is
                                               what makes the loop below derive its bound from the
                                               struct instead of repeating the count
   - the callee that seeds the accumulators ... 0x100dbe77 calls f_100dbe30 (in this cluster) with the
                                               two words pushed at 0x100dbe75-0x100dbe76, which are
                                               +0x10 and +0x0c of the pointer loaded at 0x100dbe6a; the
                                               callee is cdecl and this entry cleans them at 0x100dbe7c
   - the tick comes from an import ........... 0x100dbe7f calls 0x100dbe00, one instruction
                                               `jmp dword ptr [0x10329400]`, whose hint/name record
                                               reads timeGetTime (tools/cow/iat_slot.py). Bridged. Its
                                               eax is stored at +0x00 at 0x100dbe8a through the pointer
                                               loaded at 0x100dbe84 - so that load is also what edx
                                               holds when the entry returns
   - the alive flag starts cleared ........... 0x100dbe91 `mov dword ptr [eax+0x54],0` through the
                                               pointer loaded at 0x100dbe8c, the field f_100dbeb0
                                               raises once a frame
   - and the tick pair is stamped ........... 0x100dbe98 calls the converted f_100dc1f0
                                               (cow_stamp_net_clock_tick), the one code site its own
                                               ledger row records
   - eax is the tick with its low byte set .. 0x100dbe9d `mov al,1` writes AL alone over what that
                                               callee left in eax; returning a bare 1 would be a
                                               difference from the game, and cowdiff compares all of eax
   - the save block is real stack traffic .... 0x100dbe50 `push edi` and 0x100dbe9f `pop edi`, between
                                               which edi is the object pointer for the publish and the
                                               destination of the `rep stosd`
   - two callers ............................. 0x10011dc2 and 0x1010243a (tools/cow/owner_index.py
                                               0x100dbe50): the clock is stood up by the connection's
                                               own start path and by one other, and nothing else does

   Proof: tools/cow/cowdiff.py 0x100dbe50 - PASS on eax, edx, callee-saved, esp, memory writes (address,
   size, value, order - which is what pins the publish-before-clear order and the twenty-two zero stores
   individually) and calls out, with every generated instruction site reached.

   Name: cow_net_clock_stand_up (guess) - from what the entry does to the object. That the callers are
   the connection's start path is supported by the fields it resets and the vendor reading of the same
   global (meta/builds.json names it frame_net_clock); no scheduling claim is made for the second caller.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the calls and the memory effects. Not a
   guest layout: it never appears in guest memory. It exists so that the four things the stand-up does
   to the clock are stated as decisions, in the order that makes the publish-before-clear meaningful. */
typedef struct CowNetClockStandUp
{
    uint32_t publish;      /* the object the global is set to (0x100dbe51/0x100dbe5d) */
    int cleared;           /* whether the object is zeroed before anything else touches it (0x100dbe63) */
    uint32_t marked_alive; /* the flag the pump raises, started cleared (0x100dbe91) */
} CowNetClockStandUp;

void cow_net_clock_stand_up(CowNetClockStandUp* out)
{
    out->publish = COW_ADDR_FRAME_NET_CLOCK_OBJ; /* it is a static block, not an allocation */
    out->cleared = 1;                            /* nothing else in the image writes it but this entry */
    out->marked_alive = 0u;                      /* f_100dbeb0 raises it once a frame from here on */
}

/* COW_ADAPTER BEGIN - cdecl, no arguments: the only word the entry's `ret` pops is the return address
   (rt_return's pop of 0 does the `esp += 4` the generated body does), and f_100dbe30 is cdecl with two
   arguments that THIS entry pushes at 0x100dbe75-0x100dbe76 and drops at 0x100dbe7c. The stores below
   are the entry's own memory effects in the original's order - publish, clear, then the fields -
   because cowdiff compares the guest memory trace byte for byte and the order is the whole meaning of
   the first two. The readability gate skips this block. */
void cow_adapter_100dbe50(Guest* g)
{
    g->esp -= 4u; /* 0x100dbe50: push edi */
    wr32(g->esp, g->edi);

    CowNetClockStandUp plan;
    cow_net_clock_stand_up(&plan);

    g->edi = plan.publish; /* 0x100dbe51: the object is edi for the publish and the clear */

    wr32(COW_ADDR_FRAME_NET_CLOCK_PTR, plan.publish); /* 0x100dbe5d: publish, before the clear */

    if (plan.cleared)
    {
        /* 0x100dbe63: `rep stosd` of eax (=0, from 0x100dbe5b) over 0x16 dwords, one dword at a time.
           The count is the struct's own size, which is what the `mov ecx,0x16` at 0x100dbe56 says it
           is; the DIRECTION is the direction flag's, because that is what the instruction takes it
           from (the generated body's own loop is `edi += (df ? -4 : 4)`) and the harness fuzzes df - a
           conversion that always filled upward was caught writing over a sentinel side A left behind. */
        const int step = g->df ? -4 : 4;
        uint32_t dst = plan.publish;
        for (unsigned i = 0u; i < sizeof(CowFrameNetClock) / sizeof(uint32_t); ++i)
        {
            wr32(dst, 0u);
            dst = (uint32_t)(dst + step);
            g->edi = dst; /* the instruction's own edi; the `pop edi` at 0x100dbe9f puts the caller's back */
        }
    }

    cow_call_net_clock_init_hook_at(COW_ADDR_NET_CLOCK_INIT_HOOK_RETURN); /* 0x100dbe65 */

    uint32_t clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbe6a */
    const uint32_t seconds_field = clock_addr + offsetof(CowFrameNetClock, seconds);
    const uint32_t ms_field = clock_addr + offsetof(CowFrameNetClock, ms_accum);

    g->esp -= 4u; /* 0x100dbe75: push ecx - the accumulator, the argument pushed FIRST */
    wr32(g->esp, ms_field);
    g->esp -= 4u; /* 0x100dbe76: push eax - the seconds field, pushed LAST, so it is the callee's
                     first argument and the one its `mov [ecx],eax` writes */
    wr32(g->esp, seconds_field);

    cow_call_net_clock_reset_accum_at(COW_ADDR_NET_CLOCK_RESET_ACCUM_RETURN); /* 0x100dbe77 */
    g->esp += 4u * 2u; /* 0x100dbe7c: add esp,8 */

    const uint32_t now = cow_call_net_clock_tick_at(COW_ADDR_NET_CLOCK_INIT_TICK_RETURN); /* 0x100dbe7f */

    clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbe84 */
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, clock_addr);
    g->edx = clock_addr; /* the load the entry makes here; nothing after it writes edx */
    clock->tick_last = now; /* 0x100dbe8a: the tick this entry took for itself, at 0x100dbe7f */

    clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbe8c */
    clock = COW_AS(CowFrameNetClock, clock_addr);
    clock->marked_alive = plan.marked_alive; /* 0x100dbe91 */

    const uint32_t stamped = cow_call_stamp_net_clock_tick_at(COW_ADDR_STAMP_NET_CLOCK_TICK_RETURN); /* 0x100dbe98 */

    g->edi = rd32(g->esp); /* 0x100dbe9f: pop edi */
    g->esp += 4u;

    rt_return(g, (stamped & ~0xffu) | 1u, 0); /* 0x100dbe9d: `mov al,1` over what the callee left */
}
/* COW_ADAPTER END */
