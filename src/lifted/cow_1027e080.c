/* f_0x1027e080 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1027e080 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1027e080(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32((uint32_t)param_1, 1);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), 0x3f800000);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), 0x3eaaaaab);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x18)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x19)), 0);
      cow_bridge_tail_1028d710(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x1028d710`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x1028d710.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_1027e080(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x1027e080: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x1027e084: the value the entry loaded and the decompiler dropped */
    cow_lift_1027e080(g, param_1);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
