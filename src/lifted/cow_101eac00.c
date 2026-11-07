/* f_0x101eac00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101eac00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101eac00(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10339C40));
      iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10662F68));
      if (rd32(COW_IMG(COW_ADDR_LIFT_10662F68)) != 0) {
        cow_bridge_101ccb40(g, COW_IMG(COW_ADDR_LIFT_101EAC1B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_101EAC21), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 4u);
        wr32(COW_IMG(COW_ADDR_LIFT_10662F68), 0);
      }
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10333360));
      cow_bridge_tail_10126330(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x10126330`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x10126330.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_101eac00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101eac00: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101eac01: push edi */
    g->edi = g->ecx;   /* 0x101eac02: the value the entry loaded and the decompiler dropped */
    cow_lift_101eac00(g, param_1);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
