/* f_0x102f3ee0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f3ee0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f3ee0(Guest* g, CowU32 param_1)
{

    wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1c)), COW_IMG(COW_ADDR_LIFT_102FB770));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), COW_IMG(COW_ADDR_LIFT_102FB4F0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1b)), COW_IMG(COW_ADDR_LIFT_102FB5E0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), COW_IMG(COW_ADDR_LIFT_102FB420));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x30)), COW_IMG(COW_ADDR_LIFT_102F9DF0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2f)), COW_IMG(COW_ADDR_LIFT_102F9A10));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x11)), COW_IMG(COW_ADDR_LIFT_102F9CB0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x36)), COW_IMG(COW_ADDR_LIFT_102F9DA0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x35)), COW_IMG(COW_ADDR_LIFT_102F9AA0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x34)), COW_IMG(COW_ADDR_LIFT_102F9C10));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x33)), COW_IMG(COW_ADDR_LIFT_102F9D40));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x32)), COW_IMG(COW_ADDR_LIFT_102F9950));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x31)), COW_IMG(COW_ADDR_LIFT_102F9B50));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x12)), COW_IMG(COW_ADDR_LIFT_102FAE40));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x16)), COW_IMG(COW_ADDR_LIFT_102F9E50));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x19)), COW_IMG(COW_ADDR_LIFT_102FBB30));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x18)), COW_IMG(COW_ADDR_LIFT_102FBA10));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1f)), COW_IMG(COW_ADDR_LIFT_102FB390));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1e)), COW_IMG(COW_ADDR_LIFT_102FB310));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)), COW_IMG(COW_ADDR_LIFT_102FA3D0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x14)), COW_IMG(COW_ADDR_LIFT_102FA460));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), COW_IMG(COW_ADDR_LIFT_102FB260));wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x15)), COW_IMG(COW_ADDR_LIFT_102FACC0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), COW_IMG(COW_ADDR_LIFT_102F97A0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), COW_IMG(COW_ADDR_LIFT_102FABF0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(10)), COW_IMG(COW_ADDR_LIFT_102FA8E0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), COW_IMG(COW_ADDR_LIFT_102F8B50));wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), COW_IMG(COW_ADDR_LIFT_102FA760));wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), COW_IMG(COW_ADDR_LIFT_102F8BB0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), COW_IMG(COW_ADDR_LIFT_102FB100));wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), COW_IMG(COW_ADDR_LIFT_102FAAA0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), COW_IMG(COW_ADDR_LIFT_102FA9E0));wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), COW_IMG(COW_ADDR_LIFT_102FA820));
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f3ee0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x102f3ee0: the value the entry loaded and the decompiler dropped */
    cow_lift_102f3ee0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
