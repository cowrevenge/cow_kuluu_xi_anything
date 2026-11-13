/* f_0x1007abf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007abf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007abf0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    int iVar3;
    cVar2 = cow_bridge_101cc070(g, COW_IMG(COW_ADDR_LIFT_1007ABF7), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
      if ((cVar2 != '\0') && (cVar2 = cow_bridge_101cc1b0(g, COW_IMG(COW_ADDR_LIFT_1007AC03), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar2 == '\0')) {
        g->eax = (CowU32)(param_3); return;
      }
      cVar2 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_1007AC12), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
      if (((cVar2 == '\0') && (cVar2 = cow_bridge_101cc350(g, COW_IMG(COW_ADDR_LIFT_1007AC26), 2u, (const CowU32[]){ 1u, 1u }, g->ecx, g->edx, g->eax, 8u), cVar2 == '\0')) &&
         (cVar2 = cow_bridge_101cc0d0(g, COW_IMG(COW_ADDR_LIFT_1007AC3A), 2u, (const CowU32[]){ 117u, 0u }, g->ecx, g->edx, g->eax, 8u), cVar2 != '\0')) {
        cVar2 = cow_bridge_10177730(g, COW_IMG(COW_ADDR_LIFT_1007AC4A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (((cVar2 != '\0') && (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0)) &&
           (cVar2 = cow_bridge_101cc320(g, COW_IMG(COW_ADDR_LIFT_1007AC6B), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350)) }, g->ecx, g->edx, g->eax, 4u), cVar2 != '\0')) {
          iVar3 = cow_bridge_100fc510(g, COW_IMG(COW_ADDR_LIFT_1007AC7B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 == 0) {
            g->eax = (CowU32)(-param_3); return;
          }
          if (rd32(COW_IMG(COW_ADDR_LIFT_10487E49)) != '\0') {
            g->eax = (CowU32)(param_3); return;
          }
          iVar3 = cow_bridge_1009fb50(g, COW_IMG(COW_ADDR_LIFT_1007AC98), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 != 0) {
            g->eax = (CowU32)(param_3); return;
          }
          wr32(COW_IMG(COW_ADDR_LIFT_10485A70), 0);
          wr32(COW_IMG(COW_ADDR_LIFT_10487E49), 1);
          iVar3 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_1007ACB6), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, g->eax, 0u);
          if (iVar3 != 0) {
            iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)))));
            wr32((uint32_t)(iVar1 + 4), rd32((uint32_t)(iVar3 + 0x34)));
            wr32((uint32_t)(iVar1 + 8), rd32((uint32_t)(iVar3 + 0x38)));
            wr32((uint32_t)(iVar1 + 0xc), rd32((uint32_t)(iVar3 + 0x3c)));
            iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)))));
            wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(iVar3 + 0x44)));
            wr32((uint32_t)(iVar1 + 0x18), rd32((uint32_t)(iVar3 + 0x48)));
            wr32((uint32_t)(iVar1 + 0x1c), rd32((uint32_t)(iVar3 + 0x4c)));
            cow_bridge_10092c20(g, COW_IMG(COW_ADDR_LIFT_1007AD13), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          cow_bridge_101590a0(g, COW_IMG(COW_ADDR_LIFT_1007AD1E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(param_3); return;
        }
        cow_bridge_10129d90(g, COW_IMG(COW_ADDR_LIFT_1007AD30), 1u, (const CowU32[]){ 7u }, g->ecx, g->edx, g->eax, 0u);
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
void cow_adapter_1007abf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));

    cow_lift_1007abf0(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
