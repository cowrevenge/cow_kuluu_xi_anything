/* f_0x102ca600 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102ca600 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102ca600(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    uVar1 = cow_bridge_102ca6b0(g, COW_IMG(COW_ADDR_LIFT_102CA605), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((uVar1 & 0x400) == 0) {
        wr32((uint32_t)(param_1 + 0x6760), COW_IMG(COW_ADDR_LIFT_102CBAB0));
        wr32((uint32_t)(param_1 + 0x6764), COW_IMG(COW_ADDR_LIFT_102CBF00));
        wr32((uint32_t)(param_1 + 0x6768), COW_IMG(COW_ADDR_LIFT_102CF940));
        wr32((uint32_t)(param_1 + 0x676c), COW_IMG(COW_ADDR_LIFT_102CC6D0));
        wr32((uint32_t)(param_1 + 0x6770), COW_IMG(COW_ADDR_LIFT_103169E0));
        wr32((uint32_t)(param_1 + 0x6774), COW_IMG(COW_ADDR_LIFT_102CB260));
        wr32((uint32_t)(param_1 + 0x6778), COW_IMG(COW_ADDR_LIFT_102CB290));
        wr32((uint32_t)(param_1 + 0x677c), COW_IMG(COW_ADDR_LIFT_102CFD80));
        return;
      }
      wr32((uint32_t)(param_1 + 0x6760), COW_IMG(COW_ADDR_LIFT_102CB700));
      wr32((uint32_t)(param_1 + 0x6764), COW_IMG(COW_ADDR_LIFT_102CBE30));
      wr32((uint32_t)(param_1 + 0x6768), COW_IMG(COW_ADDR_LIFT_102CF7B0));
      wr32((uint32_t)(param_1 + 0x676c), COW_IMG(COW_ADDR_LIFT_102CBFD0));
      wr32((uint32_t)(param_1 + 0x6770), COW_IMG(COW_ADDR_LIFT_102CA860));
      wr32((uint32_t)(param_1 + 0x6774), COW_IMG(COW_ADDR_LIFT_102CA960));
      wr32((uint32_t)(param_1 + 0x6778), COW_IMG(COW_ADDR_LIFT_102CA990));
      wr32((uint32_t)(param_1 + 0x677c), COW_IMG(COW_ADDR_LIFT_102CFAD0));
      return;
/* COW_LIFTED END */
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
void cow_adapter_102ca600(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));

    cow_lift_102ca600(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
