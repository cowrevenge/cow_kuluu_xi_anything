/* f_0x1018ef00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018ef00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018ef00(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_103368F0));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
      cow_bridge_101b4780(g, COW_IMG(COW_ADDR_LIFT_1018EF18), 0u, (const CowU32[]){ 0u }, param_1 + 4u * (uint32_t)(6), g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10333360));
      { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
      cow_bridge_tail_10126330(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x10126330`, not `call`+`ret`; the frame's own pops run in the body just above, before the jump.
   Frame, pushes and locals read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi] in the body above, no ret - ends in jmp 0x10126330; tail epilogue pops [esi] emitted in the body above the tail bridge.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_1018ef00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018ef00: push esi */
    g->esi = g->ecx;   /* 0x1018ef01: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x18u)); }   /* 0x1018ef03: register ecx, replayed as the entry ran it */
    cow_lift_1018ef00(g, param_1);
    /* the guest's epilogue on this path - pop esi - ran in the BODY above, just
       before the tail jump, restoring the saves this entry made; the target's own
       `ret` then returned for this entry, so nothing is left to run here. */
}
/* COW_ADAPTER END */
