/* f_0x101d3380 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d3380 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d3380(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU16 uVar2;
    short sVar3;
    int iVar4;
    CowU32 uVar5;
    int iVar6;
    int iVar7;
    CowU32 piVar8;
    CowU32 uVar9;
    if (-1 < param_2) {
        iVar6 = param_3;
        iVar7 = param_4;
        param_4 = (CowU32)(param_4 == 9);
    L_101d33a6:
        if (4 < param_2) {
          return;
        }
        cVar1 = cow_bridge_10097b40(g, COW_IMG(COW_ADDR_LIFT_101D33B6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
        if ((cVar1 == '\0') && (param_2 != 0)) {
          return;
        }
        cVar1 = cow_bridge_10087070(g, COW_IMG(COW_ADDR_LIFT_101D33CD), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 4u);
        if ((cVar1 != '\0') && (param_2 != 0)) {
          return;
        }
        iVar4 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_101D33EA), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, 0u, 0u);
        if (iVar4 == 0) {
          return;
        }
        switch(param_2) {
        case 0:
          cVar1 = cow_bridge_101d5fe0(g, COW_IMG(COW_ADDR_LIFT_101D343F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
          if (cVar1 == '\0') {
            wr16((uint32_t)(param_1 + 0x7e6), 0);
            cow_bridge_101d39a0(g, COW_IMG(COW_ADDR_LIFT_101D345A), 1u, (const CowU32[]){ 2155905152u }, g->ecx, g->edx, 0u, 0u);
            cow_bridge_1017a590(g, COW_IMG(COW_ADDR_LIFT_101D3467), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, 0u, 0u);
            piVar8 = (CowU32)(param_1 + 0x4c);
            iVar6 = 2;
            do {
              iVar7 = 0x51;
              do {
                if (rd32((uint32_t)piVar8) != 0) {
                  cow_bridge_101ce1e0(g, COW_IMG(COW_ADDR_LIFT_101D3483), 2u, (const CowU32[]){ 0u, 5u }, g->ecx, g->edx, 0u, 0u);
                }
                piVar8 = piVar8 + 4u * (uint32_t)(1);
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            if ((int32_t)rd32((uint32_t)(param_1 + 0x38)) != 0) {
              wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x38)) + 0xc0), 1);
            }
            cow_bridge_101d3fb0(g, COW_IMG(COW_ADDR_LIFT_101D34A1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
            cow_bridge_101236e0(g, COW_IMG(COW_ADDR_LIFT_101D34AB), 1u, (const CowU32[]){ 65535u }, g->ecx, g->edx, 0u, 0u);
            wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x74), rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x74)) & 0xef);
            cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_101D34CB), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, 0u, 0u);
            cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_101D34DA), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, 0u, 0u);
            if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105782B4)) + 8)) == 0) {
              cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101D34FA), 3u, (const CowU32[]){ 272039920u, 1u, 0u }, 274864184u, g->edx, 0u, 0u);
            }
            if ((int16_t)rd16((uint32_t)(param_1 + 0x1c)) == 1) {
              cow_bridge_100f0c80(g, COW_IMG(COW_ADDR_LIFT_101D350A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
            }
          }
          else if ((int16_t)rd16((uint32_t)(param_1 + 0x1c)) != 0) {
            cow_bridge_101d55d0(g, COW_IMG(COW_ADDR_LIFT_101D3522), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, 0u, 0u);
          }
          goto switchD_101d33ff_default;
        case 1:
          cVar1 = cow_bridge_101d5fe0(g, COW_IMG(COW_ADDR_LIFT_101D352E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
          if (cVar1 == '\0') {
            cow_bridge_101d39a0(g, COW_IMG(COW_ADDR_LIFT_101D3542), 1u, (const CowU32[]){ 2155905152u }, g->ecx, g->edx, 0u, 0u);
            if ((int8_t)rd8((uint32_t)(param_1 + 0x24)) == '\0') {
              cow_bridge_1017a590(g, COW_IMG(COW_ADDR_LIFT_101D3555), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, 0u, 0u);
            }
            piVar8 = (CowU32)(param_1 + 0x4c);
            param_3 = 2;
            do {
              iVar7 = 0x51;
              do {
                if (rd32((uint32_t)piVar8) != 0) {
                  cow_bridge_101ce1e0(g, COW_IMG(COW_ADDR_LIFT_101D3574), 2u, (const CowU32[]){ 1u, 5u }, g->ecx, g->edx, 0u, 0u);
                }
                piVar8 = piVar8 + 4u * (uint32_t)(1);
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              param_3 = param_3 + -1;
            } while (param_3 != 0);
            if ((int32_t)rd32((uint32_t)(param_1 + 0x38)) != 0) {
              wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x38)) + 0xc0), 2);
            }
            cow_bridge_101d3f60(g, COW_IMG(COW_ADDR_LIFT_101D359A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
            wr32((uint32_t)(param_1 + 0x7e8), 1);
            wr32((uint32_t)(param_1 + 0x7f0), 0);
            cow_bridge_101236e0(g, COW_IMG(COW_ADDR_LIFT_101D35B5), 1u, (const CowU32[]){ 66u }, g->ecx, g->edx, 0u, 4u);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D35C7), 1u, (const CowU32[]){ 272037300u }, 274864184u, g->edx, 0u, 0u);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D35D6), 1u, (const CowU32[]){ 271956696u }, 274864184u, g->edx, 0u, 0u);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D35E5), 1u, (const CowU32[]){ 272046924u }, 274864184u, g->edx, 0u, 0u);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D35F4), 1u, (const CowU32[]){ 272039920u }, 274864184u, g->edx, 0u, 0u);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D3603), 1u, (const CowU32[]){ 272045580u }, 274864184u, g->edx, 0u, 0u);
            wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x74), rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x74)) | 0x10);
            cow_bridge_10157660(g, COW_IMG(COW_ADDR_LIFT_101D361E), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
            uVar9 = 0;
            uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D3629), 3u, (const CowU32[]){ 13u, 4u, 0u }, g->ecx, g->edx, 0u, 0u);
            cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_101D3638), 1u, (const CowU32[]){ uVar9 }, uVar5, g->edx, 0u, 0u);
            uVar9 = 0;
            uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D3643), 3u, (const CowU32[]){ 14u, 14u, 0u }, g->ecx, g->edx, 0u, 0u);
            cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_101D3652), 1u, (const CowU32[]){ uVar9 }, uVar5, g->edx, 0u, 0u);
            if (((iVar6 < 0) || (0x50 < iVar6)) ||
               ((int32_t)rd32((uint32_t)(param_1 + 0x4c + (iVar6 + param_4 * 0x51) * 4)) == 0)) {
              sVar3 = cow_bridge_101d3e70(g, COW_IMG(COW_ADDR_LIFT_101D3689), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
              wr16((uint32_t)(param_1 + 0x7e6), sVar3);
              if (((int16_t)rd16((uint32_t)(param_1 + 0x48)) == 0) && (sVar3 == 0)) {
                cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101D36B7), 3u, (const CowU32[]){ 272100500u, 1u, 0u }, 274864184u, g->edx, 0u, 0u);
              }
            }
            else {
              uVar2 = cow_bridge_101cd990(g, COW_IMG(COW_ADDR_LIFT_101D3676), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
              wr16((uint32_t)(param_1 + 0x7e6), uVar2);
            }
          }
          goto switchD_101d33ff_default;
        case 2:
          if (rd32(COW_IMG(COW_ADDR_LIFT_106631E4)) != 0) {
            cow_bridge_101d6c90(g, COW_IMG(COW_ADDR_LIFT_101D36D4), 1u, (const CowU32[]){ 270351344u }, g->ecx, g->edx, 0u, 0u);
          }
          goto switchD_101d33ff_default;
        case 3:
          cVar1 = cow_bridge_10207360(g, COW_IMG(COW_ADDR_LIFT_101D3411), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
          if (cVar1 != '\0') {
            cVar1 = cow_bridge_101d5fe0(g, COW_IMG(COW_ADDR_LIFT_101D36E0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
            if ((cVar1 == '\0') || (cVar1 = cow_bridge_101d6020(g, COW_IMG(COW_ADDR_LIFT_101D36EB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u), cVar1 == '\0')) {
              cow_bridge_101236e0(g, COW_IMG(COW_ADDR_LIFT_101D370C), 1u, (const CowU32[]){ 66u }, g->ecx, g->edx, 0u, 0u);
              cow_bridge_101f23a0(g, COW_IMG(COW_ADDR_LIFT_101D3720), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10664420)) }, g->ecx, g->edx, 0u, 0u);
              cow_bridge_10157660(g, COW_IMG(COW_ADDR_LIFT_101D3703), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, 0u, 0u);
            }
            else {
              cow_bridge_101d55d0(g, COW_IMG(COW_ADDR_LIFT_101D36F7), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, 0u, 0u);
              cow_bridge_10157660(g, COW_IMG(COW_ADDR_LIFT_101D372C), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, 0u, 0u);
            }
            goto L_101d3778;
          }
          cow_bridge_100a1860(g, COW_IMG(COW_ADDR_LIFT_101D3420), 1u, (const CowU32[]){ 59u }, g->ecx, g->edx, 0u, 4u);
          iVar7 = 1;
          iVar6 = -1;
          param_2 = 0;
          param_4 = 0;
          goto L_101d33a6;
        case 4:
          cVar1 = cow_bridge_101d5fe0(g, COW_IMG(COW_ADDR_LIFT_101D3735), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
          if (cVar1 == '\0') {
            cow_bridge_101236e0(g, COW_IMG(COW_ADDR_LIFT_101D3740), 1u, (const CowU32[]){ 66u }, g->ecx, g->edx, 0u, 4u);
            if (((-1 < iVar6) && (iVar6 < 0x51)) &&
               ((int32_t)rd32((uint32_t)(param_1 + 0x4c + (iVar6 + param_4 * 0x51) * 4)) != 0)) {
              cow_bridge_101d3910(g, COW_IMG(COW_ADDR_LIFT_101D376D), 2u, (const CowU32[]){ iVar6, iVar7 }, g->ecx, g->edx, 0u, 0u);
            }
          }
          else {
            cow_bridge_101d55d0(g, COW_IMG(COW_ADDR_LIFT_101D3778), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
          }
    L_101d3778:
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D3787), 1u, (const CowU32[]){ 271956696u }, 274864184u, g->edx, 0u, 0u);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D3796), 1u, (const CowU32[]){ 272046924u }, 274864184u, g->edx, 0u, 0u);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D37A5), 1u, (const CowU32[]){ 272100480u }, 274864184u, g->edx, 0u, 0u);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101D37B4), 1u, (const CowU32[]){ 272045580u }, 274864184u, g->edx, 0u, 0u);
    switchD_101d33ff_default:
          wr16((uint32_t)(param_1 + 0x1e), rd16((uint32_t)(param_1 + 0x1c)));
          wr16((uint32_t)(param_1 + 0x1c), (CowU16)param_2);
          break;
        default:
          goto switchD_101d33ff_default;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 2 register argument(s) [ecx, edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d3380(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101d3380: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101d3381: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d3382: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->esi = (uint32_t)(rd32(A)); }   /* 0x101d3383: register esi, replayed as the entry ran it */
    g->eax = 0u;   /* 0x101d3387: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_101d3380(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
