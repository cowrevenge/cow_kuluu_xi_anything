/* f_0x10197be0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10197be0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10197be0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    iVar1 = (int32_t)rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + 0x88));
      switch(param_2) {
      case 1:
        if ((short)param_3 == 0x1a) {
          if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 0xe < rd32((uint32_t)(param_1 + 4u * (uint32_t)(5)))) {
            iVar2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 1;
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar2);
            wr32((uint32_t)(iVar1 + 0x14), iVar2);
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10197C31), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197C3F), 2u, (const CowU32[]){ 14u, 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197C46), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        break;
      case 2:
        if ((short)param_3 == 0x10) {
          if (0 < rd32((uint32_t)(param_1 + 4u * (uint32_t)(6)))) {
            iVar2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + -1;
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar2);
            wr32((uint32_t)(iVar1 + 0x14), iVar2);
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10197C6B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197C79), 2u, (const CowU32[]){ 1u, 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197C80), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        break;
      case 3:
      case 0x19:
        iVar2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 0xe;
        if (iVar2 < rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) + -0xf) {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar2);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197CB3), 2u, (const CowU32[]){ param_3 + -1, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197CBA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10197CA0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))));
          return;
        }
        iVar2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) + -0xe;
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) != iVar2) {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar2);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197CED), 2u, (const CowU32[]){ param_3 + -1, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197CF4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10197CDA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))));
          return;
        }
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197D40), 1u, (const CowU32[]){ 0 }, 0xe, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197D47), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((short)param_3 == 0x1a) {
          return;
        }
        break;
      case 4:
      case 0x18:
        iVar2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + -0xe;
        if (-1 < iVar2) {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar2);
          if ((short)param_3 == 0x10) {
            param_3 = 1;
          }
          else {
            param_3 = param_3 + 1;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197D70), 1u, (const CowU32[]){ 0 }, param_3, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197D77), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10197D4C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))));
          return;
        }
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) != 0) {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), 0);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197D8F), 1u, (const CowU32[]){ 1u }, param_3 + 1, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197D96), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10197D7C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))));
          return;
        }
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197DCC), 1u, (const CowU32[]){ 0 }, 1, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197DD3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((short)param_3 == 0x10) {
          return;
        }
        break;
      case 5:
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x4cu))), COW_IMG(COW_ADDR_LIFT_10197D14), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + -1 + (int)(short)param_3 }, g->ecx, g->edx, g->eax, 0u);
        return;
      default:
        goto switchD_10197c05_caseD_6;
      case 9:
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) < rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 0xe) {
          return;
        }
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) < 0) {
          return;
        }
        break;
      case 0x16:
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) < 1) {
          return;
        }
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + -1);
        cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10197DD8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197DFB), 1u, (const CowU32[]){ 0 }, (int16_t)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + 0x4c)) + 1, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197E02), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))));
        return;
      case 0x17:
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 0xe < rd32((uint32_t)(param_1 + 4u * (uint32_t)(5)))) {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 1);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10197E07), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197E1C), 1u, (const CowU32[]){ 14u }, (int16_t)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + 0x4c)) + -1, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197E23), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar1 + 0x14), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))));
          return;
        }
        return;
      case 0x1b:
        iVar1 = (int32_t)rd32((uint32_t)(iVar1 + 0x14));
        iVar2 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(6)));
        iVar3 = (int)(int16_t)rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + 0x4c));
        if (iVar2 < iVar1) {
          iVar3 = iVar3 + (iVar2 - iVar1);
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197E57), 2u, (const CowU32[]){ iVar3, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197E5E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar1);
          return;
        }
        if (iVar1 < iVar2) {
          iVar3 = iVar3 + (iVar2 - iVar1);
          if (0xe < iVar3) {
            iVar3 = 0xe;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10197E81), 2u, (const CowU32[]){ iVar3, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10197E88), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar1);
          return;
        }
        goto switchD_10197c05_caseD_6;
      }
      cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10197EA7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    switchD_10197c05_caseD_6:
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
void cow_adapter_10197be0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10197be0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10197be5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10197be6: push esi */
    g->esi = g->ecx;   /* 0x10197be7: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10197be9: push edi */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x10197bea: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10197beb: register edi, replayed as the entry ran it */
    cow_lift_10197be0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
