/* f_0x1007efb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007efb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007efb0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1047D490)) < 2) {
        g->eax = (CowU32)(-param_3); return;
      }
      iVar1 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_1007EFCE), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 4)) }, g->ecx, g->edx, g->eax, 4u);
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        g->eax = (CowU32)(-param_3); return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_1047D490)) < 3) {
        cow_bridge_101ddb30(g, COW_IMG(COW_ADDR_LIFT_1007EFF7), 1u, (const CowU32[]){ 272448644u }, rd32(COW_IMG(COW_ADDR_LIFT_10663484)), COW_IMG(COW_ADDR_LIFT_103D3C84), g->eax, 0u);
        g->eax = (CowU32)(param_3); return;
      }
      uVar2 = cow_bridge_10076a70(g, COW_IMG(COW_ADDR_LIFT_1007F00B), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E4)) + 8)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101ddb30(g, COW_IMG(COW_ADDR_LIFT_1007F01A), 1u, (const CowU32[]){ iVar1 }, rd32(COW_IMG(COW_ADDR_LIFT_10663484)), uVar2, g->eax, 0u);
      g->eax = (CowU32)(param_3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007efb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));

    cow_lift_1007efb0(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
