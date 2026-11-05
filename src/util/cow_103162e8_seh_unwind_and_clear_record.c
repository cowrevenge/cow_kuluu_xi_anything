/* f_103162e8 - unwind the SEH chain to a frame, then clean the exception record's unwind bit.

   A wrapper around RtlUnwind that a __try/__finally compilation leaves behind: it hands the unwinder a
   caller-supplied exception record and its own finally block as the resume address, and the block that
   runs afterwards does the two pieces of housekeeping the compiler expected - clear EH_UNWINDING in the
   record (the unwinder had set it) and re-thread the chain head it had saved, so a record or handler
   the unwinder unlinked is stitched back. It returns with eax holding the live chain head.

   Evidence
   - it is RtlUnwind behind a thunk .......... the call at 0x1031630b goes to 0x1032731c, one
                                                 instruction `jmp [0x103290e4]`; tools/cow/iat_slot.py
                                                 0x103290e4 reads the hint/name record and answers
                                                 RtlUnwind - the same thunk and bridge
                                                 (cow_call_rtl_unwind) f_103165a8 uses
   - the four arguments, in push order ....... 0x10316300-0x10316308: push 0 (ReturnValue),
                                                 push [ebp+0xc] (ExceptionRecord - a caller object, not
                                                 NULL: this is the record whose flag gets cleaned),
                                                 push [ebp-4] (TargetIp), push [ebp+8] (TargetFrame).
                                                 stdcall, and the entry has no `add esp`, so the callee
                                                 pops them
   - TargetIp is the block right after the call 0x10316310 doubles as the value stored at [ebp-4]
                                                 (0x103162f9) and the call's own return address: the
                                                 "finally" is the straight-line continuation, so the
                                                 cleanup runs whether the unwind arrived there or the
                                                 call simply returned
   - the finally clears EH_UNWINDING only .... `mov eax,[eax+4] / and al,0xfd / mov [ecx+4],eax` at
                                                 0x10316313-0x1031631b: the record's ExceptionFlags
                                                 word, its LOW BYTE masked by 0xfd (bit 1 only), and
                                                 the whole dword written back - every other bit,
                                                 EH_EXIT_UNWIND included, survives. The 0x...000e seed
                                                 state is what proves a mask of 0xfd and not 0xfb
   - then the chain is re-threaded ........... `mov eax,fs:[0]` 0x1031631e; `mov ebx,[ebp-8]`
                                                 0x10316324 reads back the head saved at 0x103162f6;
                                                 `mov [ebx],eax` 0x10316327 writes the live head into
                                                 the saved frame's link word; `mov fs:[0],ebx`
                                                 0x10316329 installs the saved head. eax out is the
                                                 LIVE head read at 0x1031631e, before the install
   - callee-saved registers come back from memory  `pop edi / pop esi / pop ebx` at
                                                 0x10316330-0x10316332 after a trip through handlers
   - two arguments, callee-cleaned ........... `ret 8` at 0x10316334 over `leave`
   - no callers in the image ................. tools/cow/refs_to.py 0x103162e8 finds 0 references: a
                                                 compiler-emitted helper reached through a table or a
                                                 thunk outside the scan, which does not change its
                                                 behaviour

   Proof: tools/cow/cowdiff.py 0x103162e8 - PASS on eax, edx, callee-saved, esp, guest memory writes and
   the call trace. cow/seeds/103162e8.json lays an SEH chain into the harness TEB (@teb - a new pin
   region, since the chain head is gthread.c:131 fs_base), pins an exception record whose flags start at
   0x08 (so the unwinder's EH_UNWINDING write is visible and the finally's clearing of it is compared),
   and covers the loop-not-run (head == TargetFrame), one-handler, and EH_EXIT_UNWIND
   (TargetFrame == 0 -> 0xc survives) shapes.

   Name: cow_seh_unwind_and_clear_record (guess) - from the import, the record argument, and the single
   bit the finally removes; who allocates the record and what the frame at [ebp+8] establishes is not
   established.
*/
#include "cow.h"

/* The register contract and the request, filled the way f_103165a8 fills its own: the four words are
   written where the original's pushes put them, and the bridge reads them back from there. */
uint32_t cow_seh_unwind_to_clear(CowSehUnwindRequest* request, uint32_t target_frame,
                                 uint32_t record_addr)
{
    request->target_frame = target_frame;               /* 0x10316308 push [ebp+8] */
    request->target_ip = COW_IMG(COW_ADDR_SEH_UNWIND_CLEAR_RESUME); /* 0x10316305: the finally's address,
                                                 the value the entry stored at [ebp-4] and the word the
                                                 callee pops - here all three at once */
    request->exception_record = record_addr;            /* 0x10316302 push [ebp+0xc] */
    request->return_value = 0u;                         /* 0x10316300 push 0 */
    return cow_call_rtl_unwind(request);
}

/* The finally block's own work, as one readable decision: the record is not the unwinder's to keep
   marked, so EH_UNWINDING comes off and nothing else does. Returns the live chain head, which is also
   the entry's eax. The order is the entry's: read the flags, clear the bit, store the word back whole,
   then take the head. */
uint32_t cow_seh_clear_record_and_take_head(uint32_t record_addr, uint32_t fs0_addr)
{
    CowExceptionRecord* record = COW_AS(CowExceptionRecord, record_addr); /* 0x10316310 */
    const uint32_t flags = record->exception_flags; /* 0x10316313 mov eax,[eax+4] */

    /* 0x10316316: `and al, 0xfd` - the mask lives in the LOW BYTE, so this clears EH_UNWINDING and
       nothing above bit 7; then the whole dword goes back (0x1031631b). Written as the mask it is, not
       as a bit test. */
    record->exception_flags = (flags & ~0xffu) | (flags & 0xfdu);

    return rd32(fs0_addr); /* 0x1031631e: eax out, read BEFORE the install in the adapter */
}

/* COW_ADAPTER BEGIN - cdecl with two arguments, cleaned by the callee (`ret 8` at 0x10316334). The
   entry's own stack effects are the frame and the seven words below it - `push ebp / mov ebp,esp` at
   0x103162e8-0x103162e9, the two locals at 0x103162eb-0x103162ec, the three register saves at
   0x103162ed-0x103162ef - and the four argument words the RtlUnwind call consumes, which the bridges
   lay down where the original's pushes did. The readability gate skips this block. */
void cow_adapter_103162e8(Guest* g)
{
    const uint32_t e0 = g->esp;               /* [e0] is the return address */
    const uint32_t ebp = e0 - 4u;             /* the value `mov ebp, esp` leaves in ebp */

    g->esp = ebp;                             /* 0x103162e8 push ebp */
    wr32(g->esp, g->ebp);
    g->esp -= 4u;                             /* 0x103162eb push ecx - the TargetIp local's slot */
    wr32(g->esp, g->ecx);
    g->esp -= 4u;                             /* 0x103162ec push ecx - the saved-head slot */
    wr32(g->esp, g->ecx);
    g->esp -= 4u;                             /* 0x103162ed push ebx */
    wr32(g->esp, g->ebx);
    g->esp -= 4u;                             /* 0x103162ee push esi */
    wr32(g->esp, g->esi);
    g->esp -= 4u;                             /* 0x103162ef push edi */
    wr32(g->esp, g->edi);
    wr32(ebp - 8u, rd32(g->fs_base));         /* 0x103162f0-0x103162f6: save the live chain head */
    wr32(ebp - 4u, COW_IMG(COW_ADDR_SEH_UNWIND_CLEAR_RESUME)); /* 0x103162f9: the finally's address */

    const uint32_t target_frame = rd32(ebp + 8u);  /* 0x10316308 push [ebp+8] */
    const uint32_t record_addr = rd32(ebp + 0xcu); /* 0x10316302 push [ebp+0xc] */

    /* The four argument words and the word the callee pops are laid down by the bridge, at exactly the
       addresses the original's pushes used - the same contract f_103165a8 keeps. The request lives
       where those words will be. */
    cow_seh_unwind_to_clear(COW_AS(CowSehUnwindRequest, g->esp - 16u), target_frame, record_addr);
    /* gthread.c's call() restores the whole Guest afterwards, so esp is back at the save block, which
       is also where the original's stdcall `ret 16` left it. */

    /* 0x10316310 onwards: the finally. */
    const uint32_t chain_head = cow_seh_clear_record_and_take_head(record_addr, g->fs_base);

    const uint32_t saved_head = rd32(ebp - 8u);    /* 0x10316324: the head saved at 0x103162f6 */
    wr32(saved_head, chain_head);                  /* 0x10316327: mov [ebx],eax - faults if it is not
                                                      a writable address, exactly as the original */
    wr32(g->fs_base, saved_head);                  /* 0x10316329: mov fs:[0],ebx */

    uint32_t sp = g->esp;                          /* the stdcall callee left esp at the save block */
    g->edi = rd32(sp); sp += 4u;                   /* 0x10316330 pop edi */
    g->esi = rd32(sp); sp += 4u;                   /* 0x10316331 pop esi */
    g->ebx = rd32(sp);                             /* 0x10316332 pop ebx */

    g->ebp = rd32(ebp);                            /* 0x10316333 leave: pop ebp (from memory: a handler
                                                      could have written it), then esp = ebp + 4 */
    g->esp = ebp + 4u;
    rt_return(g, chain_head, 8);                     /* 0x10316334 ret 8 - eax is the live head */
}
/* COW_ADAPTER END */
