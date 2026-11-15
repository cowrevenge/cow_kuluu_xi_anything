/* f_0x1007c220 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007c220 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007c220(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    cVar1 = cow_bridge_101cc0d0(g, COW_IMG(COW_ADDR_LIFT_1007C229), 2u, (const CowU32[]){ 96u, 0u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 != '\0') {
        if (rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)) == 0) {
          g->eax = (CowU32)(-param_3); return;
        }
        if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) == 0) {
          g->eax = (CowU32)(-param_3); return;
        }
        cVar1 = cow_bridge_100882c0(g, COW_IMG(COW_ADDR_LIFT_1007C260), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((cVar1 != '\0') &&
           (((iVar3 = (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) + 0x170)), iVar3 == 0 || (iVar3 == 7)) ||
            (iVar3 == 0x21)))) {
          uVar2 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_1007C28C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((uVar2 & 0x80000) != 0) {
            wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) & 0xfffffff7);
            cow_bridge_100fc2b0(g, COW_IMG(COW_ADDR_LIFT_1007C2A6), 1u, (const CowU32[]){ 524288u }, g->ecx, g->edx, g->eax, 4u);
          }
          iVar3 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_1007C2B7), 3u, (const CowU32[]){ 232u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 != 0) {
            uVar4 = cow_bridge_10079170(g, COW_IMG(COW_ADDR_LIFT_1007C2CE), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 4)) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(iVar3 + 4), uVar4);
            cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_1007C2DB), 3u, (const CowU32[]){ iVar3, 8, 0 }, g->ecx, g->edx, g->eax, 16u);
          }
        }
      }
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
void cow_adapter_1007c220(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));

    cow_lift_1007c220(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
