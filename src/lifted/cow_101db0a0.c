/* f_0x101db0a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101db0a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101db0a0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    iVar1 = cow_bridge_indirect(g, rd32((uint32_t)(g->eax + 0x64u)), COW_IMG(COW_ADDR_LIFT_101DB0A5), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (iVar1 == 1) {
        uVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663468))) + 0x58u))))) + 0x54u))), COW_IMG(COW_ADDR_LIFT_101DB0B8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      else {
        uVar2 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663740)) + 100));
      }
      switch(uVar2) {
      case 0:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB0DE), 2u, (const CowU32[]){ 14u, 1069u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 1:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB0EE), 2u, (const CowU32[]){ 14u, 1070u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 2:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB0FE), 2u, (const CowU32[]){ 14u, 1071u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      default:
        g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_1034F2B8)); return;
      case 4:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB10E), 2u, (const CowU32[]){ 14u, 1072u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 5:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB11E), 2u, (const CowU32[]){ 14u, 1073u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 6:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB12E), 2u, (const CowU32[]){ 14u, 1074u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 7:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB13E), 2u, (const CowU32[]){ 14u, 1075u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 8:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB14E), 2u, (const CowU32[]){ 14u, 1076u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 9:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB15E), 2u, (const CowU32[]){ 14u, 1077u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 10:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB16E), 2u, (const CowU32[]){ 14u, 1078u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 0xb:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB17E), 2u, (const CowU32[]){ 14u, 1079u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 0xc:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB18E), 2u, (const CowU32[]){ 14u, 1080u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 0xd:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB19E), 2u, (const CowU32[]){ 14u, 1081u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 0xe:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB1AE), 2u, (const CowU32[]){ 14u, 1082u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 0xf:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB1BE), 2u, (const CowU32[]){ 14u, 1083u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      case 0x10:
        puVar3 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DB1CE), 2u, (const CowU32[]){ 14u, 1084u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(puVar3); return;
      }
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101db0a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(g->ecx); g->eax = (uint32_t)(rd32(A)); }   /* 0x101db0a0: register eax, replayed as the entry ran it */
    cow_lift_101db0a0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
