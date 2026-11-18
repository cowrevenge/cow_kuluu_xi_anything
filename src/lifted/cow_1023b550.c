/* f_0x1023b550 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1023b550 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1023b550(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3, int32_t param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar3;
    int iVar4;
    int iVar5;
    CowU32 pcVar6;
    int iVar7;
    int iVar8;
    CowU32 pcVar9;
    CowU32 uVar10;
    char local_100[256];
    _Bool bVar2;
      
      bVar2 = 0;
      iVar3 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B56D), 1u, (const CowU32[]){ 1 }, g->ecx, g->edx, g->eax, 0u);
      if (param_3 != 0) {
        iVar4 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B587), 1u, (const CowU32[]){ 19u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = iVar3 + iVar4;
      }
      if (param_4 == 1) {
    L_1023b67e:
        uVar10 = 3;
    L_1023b680:
        iVar4 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B5C6), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
    L_1023b68b:
        iVar3 = iVar3 + iVar4;
      }
      else {
        if (param_4 == 2) {
          uVar10 = 5;
    L_1023b62c:
          iVar4 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B5D5), 1u, (const CowU32[]){ 19u }, g->ecx, g->edx, g->eax, 0u);
          iVar5 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B5E5), 1u, (const CowU32[]){ 20u }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = iVar3 + iVar4 + iVar5;
          uVar10 = 2;
          goto L_1023b680;
        }
        if (param_4 == 3) {
          iVar4 = cow_bridge_100dbc50(g, COW_IMG(COW_ADDR_LIFT_1023B5B5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar4 == 0) {
            iVar4 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B5F4), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
            iVar5 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B603), 1u, (const CowU32[]){ 19u }, g->ecx, g->edx, g->eax, 0u);
            iVar3 = iVar3 + iVar4 + iVar5;
            uVar10 = 2;
            goto L_1023b680;
          }
          iVar4 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B612), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          iVar5 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B637), 1u, (const CowU32[]){ 4 }, g->ecx, g->edx, g->eax, 0u);
          iVar8 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B646), 1u, (const CowU32[]){ 19u }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = iVar3 + iVar4 + iVar5 + iVar8;
          iVar4 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B65E), 1u, (const CowU32[]){ 23u }, g->ecx, g->edx, g->eax, 0u);
          bVar2 = 1;
          goto L_1023b68b;
        }
        if (param_4 == 4) {
          uVar10 = 0x14;
          goto L_1023b680;
        }
        if (param_4 == 5) {
          uVar10 = 0x16;
          goto L_1023b62c;
        }
        if (param_4 == 6) {
          iVar4 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B66D), 1u, (const CowU32[]){ 19u }, g->ecx, g->edx, g->eax, 0u);
          iVar5 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B67C), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          iVar8 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B68B), 1u, (const CowU32[]){ 2 }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = iVar3 + iVar4 + iVar5 + iVar8;
          goto L_1023b67e;
        }
      }
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669058)) + 0x14), 0);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066905C)) + 0x14), 0);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1023B6B1), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10388354), 1, 0 }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1023B6C3), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10388340), 1, 0 }, 274864184u, g->edx, g->eax, 0u);
      if (param_1 != 0) {
        cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023B6D2), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_1023B6E2), 2u, (const CowU32[]){ 0, 0 }, g->ecx, g->edx, g->eax, 0u);
        iVar4 = cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023B6E8), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 4u);
        while (-1 < iVar4) {
          iVar4 = cow_bridge_100db140(g, COW_IMG(COW_ADDR_LIFT_1023B6FE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar4 == 0) goto L_1023b71f;
          if (200 < iVar4) break;
          iVar4 = cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023B713), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 4u);
        }
    L_1023bb06:
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023B7F2), 1u, (const CowU32[]){ 272139092u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023B801), 1u, (const CowU32[]){ 272139072u }, 274864184u, g->edx, g->eax, 0u);
        uVar10 = cow_bridge_100db130(g, COW_IMG(COW_ADDR_LIFT_1023BABF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1023e4a0(g, COW_IMG(COW_ADDR_LIFT_1023B868), 1u, (const CowU32[]){ 103u }, g->ecx, g->edx, g->eax, 4u);
        cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023B7DD), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
        g->eax = (CowU32)(0xffffffff); return;
      }
    L_1023b71f:
      if (param_4 == 5) {
        pcVar6 = (CowU32)cow_bridge_100db6d0(g, COW_IMG(COW_ADDR_LIFT_1023B737), 1u, (const CowU32[]){ param_5 }, g->ecx, g->edx, g->eax, 0u);
        pcVar9 = local_100;
        do {
          cVar1 = rd8((uint32_t)pcVar6);
          pcVar6 = pcVar6 + 1;
          wr8((uint32_t)pcVar9, cVar1);
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
      }
      iVar4 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B74F), 4u, (const CowU32[]){ 1, 0, 0, iVar3 }, g->ecx, g->edx, g->eax, 16u);
      if (iVar4 < 0) goto L_1023bb06;
      iVar4 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B767), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      if (param_3 != 0) {
        iVar5 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B77F), 4u, (const CowU32[]){ 0x13, 0, iVar4, iVar3 }, g->ecx, g->edx, g->eax, 16u);
        if (iVar5 < 0) goto L_1023ba96;
        iVar5 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B797), 1u, (const CowU32[]){ 19u }, g->ecx, g->edx, g->eax, 0u);
        iVar4 = iVar4 + iVar5;
      }
      if (param_4 == 1) {
        iVar3 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B7A8), 4u, (const CowU32[]){ 3, param_5, iVar4, iVar3 }, g->ecx, g->edx, g->eax, 16u);
        if (iVar3 < 0) goto L_1023bb06;
        uVar10 = 3;
    L_1023b7b5:
        cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B7C0), 1u, (const CowU32[]){ uVar10 }, g->ecx, g->edx, g->eax, 0u);
      }
      else {
        if (param_4 == 2) {
          iVar5 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B81D), 4u, (const CowU32[]){ 5, param_5, iVar4, iVar3 }, g->ecx, g->edx, g->eax, 16u);
          if (iVar5 < 0) goto L_1023bb06;
          uVar10 = 5;
    L_1023b9e0:
          iVar5 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B8AD), 1u, (const CowU32[]){ 20u }, g->ecx, g->edx, g->eax, 0u);
          iVar8 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B88B), 4u, (const CowU32[]){ 0x13, 0, iVar4 + iVar5, iVar3 }, g->ecx, g->edx, g->eax, 16u);
          if (iVar8 < 0) {
    L_1023ba96:
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023B852), 1u, (const CowU32[]){ 272139092u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023B861), 1u, (const CowU32[]){ 272139072u }, 274864184u, g->edx, g->eax, 0u);
            uVar10 = cow_bridge_100db130(g, COW_IMG(COW_ADDR_LIFT_1023BB2F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_1023e4a0(g, COW_IMG(COW_ADDR_LIFT_1023B968), 1u, (const CowU32[]){ 103u }, g->ecx, g->edx, g->eax, 4u);
            cow_bridge_1023e4a0(g, COW_IMG(COW_ADDR_LIFT_1023BAC5), 1u, (const CowU32[]){ 0x73 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023BAD3), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 12u);
            g->eax = (CowU32)(0xfffffffe); return;
          }
          iVar8 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B8DB), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B8B9), 4u, (const CowU32[]){ 2, 0, iVar4 + iVar5 + iVar8, iVar3 }, g->ecx, g->edx, g->eax, 16u);
          if (iVar3 < 0) goto L_1023ba96;
          cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B90A), 1u, (const CowU32[]){ 19u }, g->ecx, g->edx, g->eax, 0u);
          goto L_1023b7c5;
        }
        if (param_4 == 3) {
          iVar5 = cow_bridge_1023df20(g, COW_IMG(COW_ADDR_LIFT_1023B83D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar5 < 0) {
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023B952), 1u, (const CowU32[]){ 272139092u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023B961), 1u, (const CowU32[]){ 272139072u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_1023e4a0(g, COW_IMG(COW_ADDR_LIFT_1023BACC), 1u, (const CowU32[]){ 115u }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(0xffffffff); return;
          }
          if (bVar2) {
            iVar8 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B8E8), 4u, (const CowU32[]){ 0x14, iVar5, iVar4, iVar3 }, g->ecx, g->edx, g->eax, 16u);
            if (iVar8 < 0) {
              cow_bridge_1023df00(g, COW_IMG(COW_ADDR_LIFT_1023B898), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->eax, 4u);
              goto L_1023bb06;
            }
            iVar8 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B9A5), 1u, (const CowU32[]){ 20u }, g->ecx, g->edx, g->eax, 0u);
            iVar4 = iVar4 + iVar8;
          }
          iVar8 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B917), 4u, (const CowU32[]){ 4, iVar5, iVar4, iVar3 }, g->ecx, g->edx, g->eax, 16u);
          if (iVar8 < 0) {
            cow_bridge_1023df00(g, COW_IMG(COW_ADDR_LIFT_1023B8C6), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->eax, 4u);
            goto L_1023bb06;
          }
          iVar8 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023B9EB), 1u, (const CowU32[]){ 4 }, g->ecx, g->edx, g->eax, 0u);
          iVar7 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B983), 4u, (const CowU32[]){ 0x13, 0, iVar4 + iVar8, iVar3 }, g->ecx, g->edx, g->eax, 16u);
          if (iVar7 < 0) {
            cow_bridge_1023df00(g, COW_IMG(COW_ADDR_LIFT_1023B8F5), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->eax, 4u);
            goto L_1023ba96;
          }
          iVar7 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023BA10), 1u, (const CowU32[]){ 19u }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B9D3), 4u, (const CowU32[]){ 2, 0, iVar4 + iVar8 + iVar7, iVar3 }, g->ecx, g->edx, g->eax, 16u);
          if (iVar3 < 0) {
            cow_bridge_1023df00(g, COW_IMG(COW_ADDR_LIFT_1023B924), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->eax, 4u);
            goto L_1023ba96;
          }
          uVar10 = 2;
          goto L_1023b7b5;
        }
        if (param_4 == 4) {
          iVar5 = cow_bridge_1023df20(g, COW_IMG(COW_ADDR_LIFT_1023B93D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar5 < 0) {
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023BAA5), 1u, (const CowU32[]){ 272139092u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023BAB4), 1u, (const CowU32[]){ 272139072u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_1023e4a0(g, COW_IMG(COW_ADDR_LIFT_1023BB35), 1u, (const CowU32[]){ 0x67 }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(0xffffffff); return;
          }
          iVar3 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023B9F8), 4u, (const CowU32[]){ 0x14, iVar5, iVar4, iVar3 }, g->ecx, g->edx, g->eax, 16u);
          if (iVar3 < 0) {
            cow_bridge_1023df00(g, COW_IMG(COW_ADDR_LIFT_1023B990), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->eax, 4u);
            goto L_1023bb06;
          }
          cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023BA31), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1023df00(g, COW_IMG(COW_ADDR_LIFT_1023B9AB), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->eax, 4u);
        }
        else {
          if (param_4 == 5) {
            cow_bridge_100db810(g, COW_IMG(COW_ADDR_LIFT_1023B9C9), 2u, (const CowU32[]){ param_5, local_100 }, g->ecx, g->edx, g->eax, 0u);
            iVar5 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023BA1D), 4u, (const CowU32[]){ 0x16, param_5, iVar4, iVar3 }, g->ecx, g->edx, g->eax, 16u);
            if (iVar5 < 0) goto L_1023bb06;
            uVar10 = 0x16;
            goto L_1023b9e0;
          }
          if (param_4 == 6) {
            iVar5 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023BA49), 4u, (const CowU32[]){ 0x17, param_5, iVar4, iVar3 }, g->ecx, g->edx, g->eax, 16u);
            if (iVar5 < 0) goto L_1023bb06;
            iVar5 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023BA61), 1u, (const CowU32[]){ 23u }, g->ecx, g->edx, g->eax, 0u);
            iVar8 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023BA6E), 4u, (const CowU32[]){ 0x13, 0, iVar4 + iVar5, iVar3 }, g->ecx, g->edx, g->eax, 16u);
            if (iVar8 < 0) goto L_1023ba96;
            iVar8 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023BA82), 1u, (const CowU32[]){ 19u }, g->ecx, g->edx, g->eax, 0u);
            iVar8 = iVar4 + iVar5 + iVar8;
            iVar4 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023BA8F), 4u, (const CowU32[]){ 2, 0, iVar8, iVar3 }, g->ecx, g->edx, g->eax, 16u);
            if (iVar4 < 0) goto L_1023ba96;
            iVar4 = cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023BAF3), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
            iVar3 = cow_bridge_1023bb60(g, COW_IMG(COW_ADDR_LIFT_1023BAFF), 4u, (const CowU32[]){ 3, param_5, iVar8 + iVar4, iVar3 }, g->ecx, g->edx, g->eax, 16u);
            if (iVar3 < 0) goto L_1023bb06;
            cow_bridge_100dbac0(g, COW_IMG(COW_ADDR_LIFT_1023BB5A), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
            goto L_1023b7c5;
          }
        }
      }
      cow_bridge_1023dbb0(g, COW_IMG(COW_ADDR_LIFT_1023B7C5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    L_1023b7c5:
      iVar3 = 10;
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066905C)) + 0x14), 0x3f800000);
      do {
        cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023BB3C), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 8u);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023BB15), 1u, (const CowU32[]){ 272139092u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023BB24), 1u, (const CowU32[]){ 272139072u }, 274864184u, g->edx, g->eax, 0u);
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 260 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1023b550(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->esp -= 0x104u;                      /* 0x1023b550: 260 bytes of locals */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_103601BC));   /* 0x1023b556: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1023b55c: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1023b55d: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1023b55e: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1023b55f: push edi */
    g->edi = 0u;   /* 0x1023b560: the value the entry loaded and the decompiler dropped */
    cow_lift_1023b550(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
