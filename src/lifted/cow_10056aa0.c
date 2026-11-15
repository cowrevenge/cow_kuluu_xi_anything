/* f_0x10056aa0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10056aa0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10056aa0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_10074cf0(g, COW_IMG(COW_ADDR_LIFT_10056AB4), 2u, (const CowU32[]){ g->esi, 1299382272u }, rd32(COW_IMG(COW_ADDR_LIFT_1047D140)), g->edx, g->eax, 0u);
      { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
      cow_bridge_tail_100720b0(g, rd32(COW_IMG(COW_ADDR_LIFT_1047D140)), g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), 0 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x100720b0`, not `call`+`ret`; the frame's own pops run in the body just above, before the jump.
   Frame, pushes and locals read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi] in the body above, no ret - ends in jmp 0x100720b0; tail epilogue pops [esi] emitted in the body above the tail bridge.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_10056aa0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10056aa0: push esi */
    g->esi = g->ecx;   /* 0x10056aa1: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_1047D140));   /* 0x10056aa3: the value the entry loaded and the decompiler dropped */
    cow_lift_10056aa0(g);
    /* the guest's epilogue on this path - pop esi - ran in the BODY above, just
       before the tail jump, restoring the saves this entry made; the target's own
       `ret` then returned for this entry, so nothing is left to run here. */
}
/* COW_ADAPTER END */
