/* f_0x1019c9b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1019c9b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1019c9b0(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    iVar1 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x88));
      switch(param_2) {
      case 1:
        if ((short)param_3 == 0x1a) {
          uVar4 = 0xe;
          if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) + ((int32_t)(0xe) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))))) {
            wr32((uint32_t)(param_1 + 0x14), (int32_t)rd32((uint32_t)(param_1 + 0x14)) + 1);
            cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CA04), 0u, (const CowU32[]){ 0u }, 0xe, 0, g->eax, 0u);
            cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CA0B), 0u, (const CowU32[]){ 0u }, g->edi, g->edx, g->eax, 0u);
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019CA10), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 0x14)));
            return;
          }
    L_1019ca56:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CA3E), 0u, (const CowU32[]){ 0u }, uVar4, 0, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CA45), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        break;
      case 2:
        if ((short)param_3 == 0x10) {
          uVar4 = 1;
          if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x14))))) {
            wr32((uint32_t)(param_1 + 0x14), (int32_t)rd32((uint32_t)(param_1 + 0x14)) + -1);
            cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CA5B), 0u, (const CowU32[]){ 0u }, 1, 0, g->eax, 0u);
            cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CA62), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019CA4A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 0x14)));
            return;
          }
          goto L_1019ca56;
        }
        break;
      case 3:
      case 0x19:
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x14)) + 0xe;
        if (((int32_t)(iVar2) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24)))) + -0xf) {
          wr32((uint32_t)(param_1 + 0x14), iVar2);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CA95), 2u, (const CowU32[]){ param_3 + -1, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CA9C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019CA82), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 0x14)));
          return;
        }
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + -0xe;
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) != iVar2) {
          wr32((uint32_t)(param_1 + 0x14), iVar2);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CACF), 2u, (const CowU32[]){ param_3 + -1, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CAD6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019CABC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 0x14)));
          return;
        }
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CB08), 1u, (const CowU32[]){ 0 }, 0xe, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CB0F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((short)param_3 == 0x1a) {
          return;
        }
        break;
      case 4:
      case 0x18:
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x14)) + -0xe;
        if (-1 < iVar2) {
          wr32((uint32_t)(param_1 + 0x14), iVar2);
          if ((short)param_3 == 0x10) {
            param_3 = 1;
          }
          else {
            param_3 = param_3 + 1;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CB38), 1u, (const CowU32[]){ 0 }, param_3, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CB3F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019CB14), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 0x14)));
          return;
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) != 0) {
          wr32((uint32_t)(param_1 + 0x14), 0);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CB57), 1u, (const CowU32[]){ 1u }, param_3 + 1, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CB5E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019CB44), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 0x14)));
          return;
        }
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CB94), 1u, (const CowU32[]){ 0 }, 1, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CB9B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((short)param_3 == 0x10) {
          return;
        }
        break;
      default:
        goto switchD_1019c9d5_caseD_5;
      case 9:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) < (int32_t)rd32((uint32_t)(param_1 + 0x14)) + 0xe) {
          return;
        }
        if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x14))) < (int32_t)(0))) {
          return;
        }
        break;
      case 0x16:
        if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x14))) < (int32_t)(1))) {
          return;
        }
        wr32((uint32_t)(param_1 + 0x14), (int32_t)rd32((uint32_t)(param_1 + 0x14)) + -1);
        cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019CBA0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CBC3), 1u, (const CowU32[]){ 0 }, (int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)) + 1, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CBCA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 0x14)));
        return;
      case 0x17:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) + ((int32_t)(0xe) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))))) {
          wr32((uint32_t)(param_1 + 0x14), (int32_t)rd32((uint32_t)(param_1 + 0x14)) + 1);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019CBCF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CBE2), 1u, (const CowU32[]){ 14u }, (int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)) + -1, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CBE9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 0x14)));
          return;
        }
        return;
      case 0x1b:
        iVar1 = (int32_t)rd32((uint32_t)(iVar1 + 0x14));
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x14));
        iVar3 = (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c));
        if (iVar2 < iVar1) {
          iVar3 = iVar3 + (iVar2 - iVar1);
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CC1D), 2u, (const CowU32[]){ iVar3, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CC24), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x14), iVar1);
          return;
        }
        if (iVar1 < iVar2) {
          iVar3 = iVar3 + (iVar2 - iVar1);
          if (0xe < iVar3) {
            iVar3 = 0xe;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019CC47), 2u, (const CowU32[]){ iVar3, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019CC4E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x14), iVar1);
          return;
        }
        goto switchD_1019c9d5_caseD_5;
      }
      cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019CC6D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    switchD_1019c9d5_caseD_5:
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1019c9b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x1019c9b0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1019c9b5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1019c9b6: push esi */
    g->esi = g->ecx;   /* 0x1019c9b7: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1019c9b9: push edi */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x1019c9ba: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1019c9bb: register edi, replayed as the entry ran it */
    cow_lift_1019c9b0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
