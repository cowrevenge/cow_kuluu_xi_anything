/* f_0x1014e7b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014e7b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014e7b0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    switch(param_2) {
      case 3:
      case 4:
      case 7:
      case 0x1c:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1014E7E6), 3u, (const CowU32[]){ 272046924u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        if (((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057823C)) + 8)) != 0) && (iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))), iVar3 != 0)) {
          uVar4 = 0;
          uVar1 = cow_bridge_101403d0(g, COW_IMG(COW_ADDR_LIFT_1014E806), 2u, (const CowU32[]){ (((uint32_t)((short)((CowU32)iVar3 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(iVar3 + 0x4c))) & 0xffffu)), 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1014E81C), 1u, (const CowU32[]){ uVar4 }, uVar1, g->edx, g->eax, 0u);
        }
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1014E82C), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))), 1 }, 274864184u, g->edx, g->eax, 0u);
        return;
      case 5:
        if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) {
          switch((short)param_3) {
          case 1:
            cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1014E880), 3u, (const CowU32[]){ 272046892u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E869), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 2:
            cow_bridge_10080dc0(g, COW_IMG(COW_ADDR_LIFT_1014E861), 2u, (const CowU32[]){ 272046912u, 0u }, g->ecx, g->edx, g->eax, 8u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E885), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 3:
            cow_bridge_10080dc0(g, COW_IMG(COW_ADDR_LIFT_1014E895), 2u, (const CowU32[]){ 272046884u, 0u }, g->ecx, g->edx, g->eax, 8u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E89D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 4:
            cVar2 = cow_bridge_101cc070(g, COW_IMG(COW_ADDR_LIFT_1014E8FC), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
            if (cVar2 != '\0') {
              cVar2 = cow_bridge_100f9680(g, COW_IMG(COW_ADDR_LIFT_1014E90E), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) }, g->ecx, g->edx, g->eax, 4u);
              if (cVar2 == '\0') {
                cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_1014E91A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E8B9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                return;
              }
              iVar3 = cow_bridge_100f9600(g, COW_IMG(COW_ADDR_LIFT_1014E92F), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) }, g->ecx, g->edx, g->eax, 4u);
              if (iVar3 != 0) {
                cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_1014E946), 1u, (const CowU32[]){ 188u }, g->ecx, g->edx, g->eax, 0u);
                cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_1014E94B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E8D5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                return;
              }
            }
            cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1014E8B4), 3u, (const CowU32[]){ 272046864u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E8F1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 5:
            cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1014E8D0), 3u, (const CowU32[]){ 272046844u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E91F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 6:
            cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1014E8EC), 3u, (const CowU32[]){ 272046824u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E950), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 7:
            cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1014E967), 3u, (const CowU32[]){ 272046804u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E96C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 8:
            cow_bridge_102174c0(g, COW_IMG(COW_ADDR_LIFT_1014E9C5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E988), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 9:
            cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1014E983), 3u, (const CowU32[]){ 272046784u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E9A0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 10:
            cow_bridge_10080dc0(g, COW_IMG(COW_ADDR_LIFT_1014E998), 2u, (const CowU32[]){ 272046776u, 0u }, g->ecx, g->edx, g->eax, 8u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E9AE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 0xb:
            cow_bridge_10160960(g, COW_IMG(COW_ADDR_LIFT_1014E9A9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E9BC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 0xc:
            cow_bridge_101609f0(g, COW_IMG(COW_ADDR_LIFT_1014E9B7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014E9CA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 0xd:
          case 0xe:
          case 0xf:
            cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x18u))), COW_IMG(COW_ADDR_LIFT_1014E9D8), 2u, (const CowU32[]){ 4, param_3 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
        }
        break;
      case 6:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1014E9EF), 3u, (const CowU32[]){ 272046924u, 0u, 0u }, 274864184u, g->edx, g->eax, 0u);
        if (((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057823C)) + 8)) != 0) && (iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))), iVar3 != 0)) {
          uVar4 = 0;
          uVar1 = cow_bridge_101403d0(g, COW_IMG(COW_ADDR_LIFT_1014EA0E), 2u, (const CowU32[]){ (((uint32_t)((short)((CowU32)iVar3 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(iVar3 + 0x4c))) & 0xffffu)), 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1014EA25), 1u, (const CowU32[]){ uVar4 }, (((uint32_t)(((CowU32)g->ecx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(uVar1) & 0xffu)) & 0xffff00ff, g->edx, g->eax, 0u);
          cow_bridge_10118830(g, COW_IMG(COW_ADDR_LIFT_1014EA32), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1014EA41), 1u, (const CowU32[]){ 272046924u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1014EA51), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))), 1 }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_1014EA56), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014e7b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x1014e7b0: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFDu; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x1014e7b5: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014e7b8: push esi */
    cow_lift_1014e7b0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
