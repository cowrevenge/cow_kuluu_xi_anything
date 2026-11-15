/* f_0x10207e80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10207e80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10207e80(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 uVar6;
    uint64_t uVar7;
    switch((short)param_2) {
      case 1:
      case 2:
        if ((((((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x10))))) && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x14)) != 0)) &&
            ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x14)) != 1)) &&
           ((uVar7 = cow_bridge_10207980(g, COW_IMG(COW_ADDR_LIFT_102080D6), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (int)((uint64_t)uVar7 >> 0x20) == (int)uVar7 ||
            (uVar7 = cow_bridge_10207980(g, COW_IMG(COW_ADDR_LIFT_102080E3), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u), (int)((uint64_t)uVar7 >> 0x20) == (int)uVar7)))) {
          cow_bridge_10118260(g, COW_IMG(COW_ADDR_LIFT_102080EF), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
        }
      default:
        return;
      case 5:
        break;
      case 6:
        if ((int32_t)rd32((uint32_t)((int)param_1 + 0x14)) < 0) {
          if (((int32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x10))) < (int32_t)(0))) {
            cow_bridge_10207710(g, COW_IMG(COW_ADDR_LIFT_10208031), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
            return;
          }
        }
        else if (((int32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x10))) < (int32_t)(0))) {
          return;
        }
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x10), 0xffffffff);
        wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x1e), 0);
        cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10207F23), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066369C)) + 8)), 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, g->eax, 0u);
        cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_1020806C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 8:
        if (((int32_t)rd32((uint32_t)((int)param_1 + 0x14)) < 0) && (((int32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x10))) < (int32_t)(0)))) {
          cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_1020800C), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066369C)) + 8)), 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, g->eax, 0u);
          cow_bridge_10037e90(g, COW_IMG(COW_ADDR_LIFT_102080A8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
    L_10207f5e:
        cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_10207F38), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      uVar3 = cow_bridge_10207990(g, COW_IMG(COW_ADDR_LIFT_10207EA4), 0u, (const CowU32[]){ 0u }, param_1, param_2, g->eax, 0u);
      iVar5 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x10));
      if (iVar5 < 0) {
        if ((int32_t)rd32((uint32_t)((int)param_1 + 0x14)) < 0) {
          cVar2 = cow_bridge_101cc400(g, COW_IMG(COW_ADDR_LIFT_10207F4A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (cVar2 != '\0') {
            cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_10207F5E), 1u, (const CowU32[]){ 184u }, g->ecx, g->edx, g->eax, 0u);
            goto L_10207f5e;
          }
          iVar5 = cow_bridge_10207960(g, COW_IMG(COW_ADDR_LIFT_10207EC4), 1u, (const CowU32[]){ (int)param_3 }, param_1, g->edx, g->eax, 0u);
          wr32((uint32_t)((int)param_1 + 0x14), iVar5);
          if (iVar5 == 0) {
            if (uVar3 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = uVar3 + 0x2000;
            }
            wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x1e), 1);
          }
          else if (iVar5 == 1) {
            if (uVar3 == 0) {
              iVar5 = 0;
              wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x1e), 2);
            }
            else {
              iVar5 = uVar3 + 0x2000;
              wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x1e), 2);
            }
          }
          else if (uVar3 == 0) {
            iVar5 = 0;
            wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x1e), 3);
          }
          else {
            iVar5 = uVar3 + 0x2100;
            wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x1e), 3);
          }
          iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10664438));
          wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x18), iVar5);
          wr8((uint32_t)(iVar1 + 0x20), 1);
          cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10208067), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066369C)) + 8)), 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, g->eax, 0u);
        }
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10207EEA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      uVar4 = cow_bridge_10207960(g, COW_IMG(COW_ADDR_LIFT_10207F76), 1u, (const CowU32[]){ (int)param_3 }, g->ecx, g->edx, g->eax, 0u);
      uVar6 = iVar5 - 0x2000;
      if ((int)uVar6 < 0x100) {
        if (uVar3 == uVar6) {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_10207F63), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          goto L_10207f01;
        }
      }
      else {
        uVar6 = -(CowU32)(uVar3 != iVar5 - 0x2100U) & iVar5 - 0x2100U;
      }
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10207F29), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (-1 < (int)uVar6) {
        cow_bridge_100fcf80(g, COW_IMG(COW_ADDR_LIFT_10207EFE), 4u, (const CowU32[]){ (((uint32_t)(((CowU32)g->edx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)param_1 + 0x1c))) & 0xffu)), 0x1200, uVar4, uVar6 }, g->ecx, g->edx, g->eax, 16u);
      }
    L_10207f01:
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664438)) + 0x10), 0xffffffff);
      cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_102080A3), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066369C)) + 8)), 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, g->eax, 0u);
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10208011), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10207e80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10207e80: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10207e81: register ebx, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)(uint16_t)g->ebx)); }   /* 0x10207e85: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x10207e88: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10207e89: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10207e8a: push edi */
    cow_lift_10207e80(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
