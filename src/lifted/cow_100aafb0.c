/* f_0x100aafb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100aafb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100aafb0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (param_2 == (CowU32)0x0) {
        wr32((uint32_t)param_1, 0);
        return;
      }
      if (rd32((uint32_t)param_2) == 1) {
        wr32((uint32_t)param_1, 1);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(3))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(4))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xd))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xe))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xf))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x13))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x17)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x17))));
        return;
      }
      if (rd32((uint32_t)param_2) == 3) {
        wr32((uint32_t)param_1, 3);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(3))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(4))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x10))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x11)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x11))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x12)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x12))));
        return;
      }
      wr32((uint32_t)param_1, 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100aafb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_2;   /* 0x100aafb0: the value the entry loaded and the decompiler dropped */
    cow_lift_100aafb0(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
