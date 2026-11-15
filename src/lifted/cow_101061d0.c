/* f_0x101061d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101061d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101061d0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    CowU16 uVar3;
    CowU16 uVar4;
    int iVar5;
    CowU16 uVar6;
    CowU16 uVar7;
    CowU32 uVar8;
    short sVar9;
    CowU16 uVar10;
    CowU16 uVar11;
    short sVar12;
    CowU32 puVar13;
    sVar9 = 8;
      puVar13 = param_2;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        wr32((uint32_t)puVar13, 0);
        puVar13 = puVar13 + 4u * (uint32_t)(1);
      }
      uVar6 = (CowU16)rd8((uint32_t)param_1);
      bVar1 = 0;
      uVar7 = uVar6;
      do {
        uVar3 = (CowU16)param_4;
        uVar10 = 0;
        uVar11 = 0;
        if (param_4 != 0) {
          do {
            uVar3 = uVar3 - 1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            uVar10 = uVar11 * 2;
            if ((char)bVar1 < '\0') {
              uVar10 = uVar10 | 1;
            }
            uVar11 = uVar10;
          } while (0 < (short)uVar3);
        }
        if ((param_5 == 0) || (param_5 != uVar10)) {
          uVar8 = 1 << ((CowU8)uVar10 & 0x1f);
          if ((uVar8 & rd32((uint32_t)param_2)) != 0) break;
          wr32((uint32_t)param_2, rd32((uint32_t)param_2) | uVar8);
        }
        uVar7 = uVar6;
        if ((param_5 != 0) && (param_5 == uVar10)) {
          uVar4 = (CowU16)param_4;
          uVar11 = 0;
          uVar3 = 0;
          if (param_4 != 0) {
            do {
              uVar4 = uVar4 - 1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar6 = uVar7 - 1;
                sVar9 = 1;
                uVar7 = uVar6;
              }
              uVar11 = uVar3 * 2;
              if ((char)bVar1 < '\0') {
                uVar11 = uVar11 | 1;
              }
              uVar3 = uVar11;
            } while (0 < (short)uVar4);
          }
          uVar11 = uVar11 | 8;
          if (uVar11 == 8) {
            sVar12 = 0x14;
            uVar8 = 0;
            do {
              sVar12 = sVar12 + -1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar7 = uVar7 - 1;
                sVar9 = 1;
                uVar6 = uVar7;
              }
              uVar8 = uVar8 * 2;
              if ((char)bVar1 < '\0') {
                uVar8 = uVar8 | 1;
              }
            } while (0 < sVar12);
            if (param_3 != 0) {
              wr32((uint32_t)(param_2 + 4u * (uint32_t)(6)), uVar8);
              wr32((uint32_t)param_2, rd32((uint32_t)param_2) | 0x100);
            }
          }
          else if (uVar11 == 0xd) {
            sVar12 = 8;
            bVar2 = 0;
            do {
              sVar12 = sVar12 + -1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar7 = uVar7 - 1;
                sVar9 = 1;
                uVar6 = uVar7;
              }
              bVar2 = bVar2 * '\x02';
              if ((char)bVar1 < '\0') {
                bVar2 = bVar2 | 1;
              }
            } while (0 < sVar12);
            wr8((uint32_t)(param_2 + 4u * (uint32_t)(0xe)), bVar2);
            bVar2 = 0;
            wr32((uint32_t)param_2, rd32((uint32_t)param_2) | 0x2000);
            sVar12 = 8;
            do {
              sVar12 = sVar12 + -1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar7 = uVar7 - 1;
                sVar9 = 1;
                uVar6 = uVar7;
              }
              bVar2 = bVar2 * '\x02';
              if ((char)bVar1 < '\0') {
                bVar2 = bVar2 | 1;
              }
            } while (0 < sVar12);
            wr8((uint32_t)((int)param_2 + 0x39), bVar2);
            sVar12 = 8;
            bVar2 = 0;
            do {
              sVar12 = sVar12 + -1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar7 = uVar7 - 1;
                sVar9 = 1;
                uVar6 = uVar7;
              }
              bVar2 = bVar2 * '\x02';
              if ((char)bVar1 < '\0') {
                bVar2 = bVar2 | 1;
              }
            } while (0 < sVar12);
            wr8((uint32_t)((int)param_2 + 0x3a), bVar2);
            sVar12 = 0x20;
            uVar8 = 0;
            do {
              sVar12 = sVar12 + -1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar7 = uVar7 - 1;
                sVar9 = 1;
                uVar6 = uVar7;
              }
              uVar8 = uVar8 * 2;
              if ((char)bVar1 < '\0') {
                uVar8 = uVar8 | 1;
              }
            } while (0 < sVar12);
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xf)), uVar8);
            sVar12 = 0x20;
            uVar8 = 0;
            do {
              sVar12 = sVar12 + -1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar7 = uVar7 - 1;
                sVar9 = 1;
                uVar6 = uVar7;
              }
              uVar8 = uVar8 * 2;
              if ((char)bVar1 < '\0') {
                uVar8 = uVar8 | 1;
              }
            } while (0 < sVar12);
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(0x10)), uVar8);
            sVar12 = 0x20;
            uVar8 = 0;
            do {
              sVar12 = sVar12 + -1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar7 = uVar7 - 1;
                sVar9 = 1;
                uVar6 = uVar7;
              }
              uVar8 = uVar8 * 2;
              if ((char)bVar1 < '\0') {
                uVar8 = uVar8 | 1;
              }
            } while (0 < sVar12);
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(0x11)), uVar8);
          }
          else if (uVar11 == 0xe) {
            sVar12 = 0x20;
            uVar8 = 0;
            do {
              sVar12 = sVar12 + -1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar6 = uVar7 - 1;
                sVar9 = 1;
                uVar7 = uVar6;
              }
              uVar8 = uVar8 * 2;
              if ((char)bVar1 < '\0') {
                uVar8 = uVar8 | 1;
              }
            } while (0 < sVar12);
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(5)), uVar8);
            wr32((uint32_t)param_2, rd32((uint32_t)param_2) | 0x4000);
          }
        }
        switch(uVar10) {
        case 0:
          puVar13 = param_2 + 4u * (uint32_t)(1);
          sVar12 = 4;
          uVar10 = 0;
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) {
    L_10106bcd:
                wr16((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), 0);
                wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xc))) | (CowU32)rd16((uint32_t)((int)param_2 + 0x2a)));
                g->eax = (CowU32)((CowU32)0x0); return;
              }
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            uVar10 = uVar10 * 2;
            if ((char)bVar1 < '\0') {
              uVar10 = uVar10 | 1;
            }
          } while (0 < sVar12);
          while (0 < (short)uVar10) {
            uVar10 = uVar10 - 1;
            sVar12 = 7;
            bVar2 = 0;
            do {
              sVar12 = sVar12 + -1;
              if (sVar9 < 8) {
                bVar1 = bVar1 * '\x02';
                sVar9 = sVar9 + 1;
              }
              else {
                if ((short)uVar7 < 1) goto L_10106bcd;
                bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
                param_1 = param_1 + 1;
                uVar6 = uVar7 - 1;
                sVar9 = 1;
                uVar7 = uVar6;
              }
              bVar2 = bVar2 * '\x02';
              if ((char)bVar1 < '\0') {
                bVar2 = bVar2 | 1;
              }
            } while (0 < sVar12);
            wr8((uint32_t)puVar13, bVar2 & 0x7f);
            puVar13 = (CowU32)((int)puVar13 + 1);
          }
          wr8((uint32_t)puVar13, 0);
          break;
        case 1:
          sVar12 = 10;
          wr16((uint32_t)(param_2 + 4u * (uint32_t)(10)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            wr16((uint32_t)(param_2 + 4u * (uint32_t)(10)), (short)rd32((uint32_t)(param_2 + 4u * (uint32_t)(10))) << 1);
            if ((char)bVar1 < '\0') {
              wr16((uint32_t)(param_2 + 4u * (uint32_t)(10)), (CowU16)rd32((uint32_t)(param_2 + 4u * (uint32_t)(10))) | 1);
            }
          } while (0 < sVar12);
          break;
        case 2:
          sVar12 = 2;
          wr8((uint32_t)(param_2 + 4u * (uint32_t)(7)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (char)rd32((uint32_t)(param_2 + 4u * (uint32_t)(7))) * '\x02';
            wr8((uint32_t)(param_2 + 4u * (uint32_t)(7)), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)(param_2 + 4u * (uint32_t)(7)), bVar2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 3:
          sVar12 = 5;
          wr8((uint32_t)(param_2 + 4u * (uint32_t)(8)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (char)rd32((uint32_t)(param_2 + 4u * (uint32_t)(8))) * '\x02';
            wr8((uint32_t)(param_2 + 4u * (uint32_t)(8)), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)(param_2 + 4u * (uint32_t)(8)), bVar2 | 1);
            }
          } while (0 < sVar12);
          sVar12 = 5;
          wr8((uint32_t)((int)param_2 + 0x21), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (int8_t)rd8((uint32_t)((int)param_2 + 0x21)) * '\x02';
            wr8((uint32_t)((int)param_2 + 0x21), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)((int)param_2 + 0x21), bVar2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 4:
          sVar12 = 8;
          wr8((uint32_t)((int)param_2 + 0x22), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (int8_t)rd8((uint32_t)((int)param_2 + 0x22)) * '\x02';
            wr8((uint32_t)((int)param_2 + 0x22), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)((int)param_2 + 0x22), bVar2 | 1);
            }
          } while (0 < sVar12);
          sVar12 = 8;
          wr8((uint32_t)((int)param_2 + 0x23), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (int8_t)rd8((uint32_t)((int)param_2 + 0x23)) * '\x02';
            wr8((uint32_t)((int)param_2 + 0x23), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)((int)param_2 + 0x23), bVar2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 5:
          sVar12 = 4;
          wr8((uint32_t)((int)param_2 + 0x1d), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (int8_t)rd8((uint32_t)((int)param_2 + 0x1d)) * '\x02';
            wr8((uint32_t)((int)param_2 + 0x1d), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)((int)param_2 + 0x1d), bVar2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 6:
          sVar12 = 0x10;
          wr16((uint32_t)((int)param_2 + 0x2a), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            wr16((uint32_t)((int)param_2 + 0x2a), (int16_t)rd16((uint32_t)((int)param_2 + 0x2a)) << 1);
            if ((char)bVar1 < '\0') {
              wr16((uint32_t)((int)param_2 + 0x2a), rd16((uint32_t)((int)param_2 + 0x2a)) | 1);
            }
          } while (0 < sVar12);
          break;
        case 7:
          sVar12 = 8;
          wr8((uint32_t)(param_2 + 4u * (uint32_t)(9)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (char)rd32((uint32_t)(param_2 + 4u * (uint32_t)(9))) * '\x02';
            wr8((uint32_t)(param_2 + 4u * (uint32_t)(9)), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)(param_2 + 4u * (uint32_t)(9)), bVar2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 8:
          sVar12 = 0x14;
          wr32((uint32_t)(param_2 + 4u * (uint32_t)(6)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            uVar8 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(6)));
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(6)), uVar8 * 2);
            if ((char)bVar1 < '\0') {
              wr32((uint32_t)(param_2 + 4u * (uint32_t)(6)), uVar8 * 2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 0xd:
          sVar12 = 8;
          wr8((uint32_t)(param_2 + 4u * (uint32_t)(0xe)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (char)rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xe))) * '\x02';
            wr8((uint32_t)(param_2 + 4u * (uint32_t)(0xe)), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)(param_2 + 4u * (uint32_t)(0xe)), bVar2 | 1);
            }
          } while (0 < sVar12);
          sVar12 = 8;
          wr8((uint32_t)((int)param_2 + 0x39), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (int8_t)rd8((uint32_t)((int)param_2 + 0x39)) * '\x02';
            wr8((uint32_t)((int)param_2 + 0x39), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)((int)param_2 + 0x39), bVar2 | 1);
            }
          } while (0 < sVar12);
          sVar12 = 8;
          wr8((uint32_t)((int)param_2 + 0x3a), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (int8_t)rd8((uint32_t)((int)param_2 + 0x3a)) * '\x02';
            wr8((uint32_t)((int)param_2 + 0x3a), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)((int)param_2 + 0x3a), bVar2 | 1);
            }
          } while (0 < sVar12);
          sVar12 = 0x20;
          wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xf)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            uVar8 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xf)));
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xf)), uVar8 * 2);
            if ((char)bVar1 < '\0') {
              wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xf)), uVar8 * 2 | 1);
            }
          } while (0 < sVar12);
          sVar12 = 0x20;
          wr32((uint32_t)(param_2 + 4u * (uint32_t)(0x10)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            uVar8 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x10)));
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(0x10)), uVar8 * 2);
            if ((char)bVar1 < '\0') {
              wr32((uint32_t)(param_2 + 4u * (uint32_t)(0x10)), uVar8 * 2 | 1);
            }
          } while (0 < sVar12);
          sVar12 = 0x20;
          wr32((uint32_t)(param_2 + 4u * (uint32_t)(0x11)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            uVar8 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0x11)));
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(0x11)), uVar8 * 2);
            if ((char)bVar1 < '\0') {
              wr32((uint32_t)(param_2 + 4u * (uint32_t)(0x11)), uVar8 * 2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 0xe:
          sVar12 = 0x20;
          wr32((uint32_t)(param_2 + 4u * (uint32_t)(5)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            uVar8 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(5)));
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(5)), uVar8 * 2);
            if ((char)bVar1 < '\0') {
              wr32((uint32_t)(param_2 + 4u * (uint32_t)(5)), uVar8 * 2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 0x10:
          sVar12 = 8;
          wr8((uint32_t)((int)param_2 + 0x1e), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            bVar2 = (int8_t)rd8((uint32_t)((int)param_2 + 0x1e)) * '\x02';
            wr8((uint32_t)((int)param_2 + 0x1e), bVar2);
            if ((char)bVar1 < '\0') {
              wr8((uint32_t)((int)param_2 + 0x1e), bVar2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 0x11:
          sVar12 = 0x20;
          wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            uVar8 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)));
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)), uVar8 * 2);
            if ((char)bVar1 < '\0') {
              wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)), uVar8 * 2 | 1);
            }
          } while (0 < sVar12);
          break;
        case 0x16:
          sVar12 = 0x20;
          wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), 0);
          uVar10 = uVar7;
          uVar7 = uVar6;
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar10 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar7 = uVar10 - 1;
              sVar9 = 1;
              uVar10 = uVar7;
            }
            uVar8 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)));
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), uVar8 * 2);
            if ((char)bVar1 < '\0') {
              wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), uVar8 * 2 | 1);
            }
          } while (0 < sVar12);
          wr8((uint32_t)((int)param_2 + 0x25), ((CowU8)(rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xc))) >> 0x1e) ^ rd8((uint32_t)((int)param_2 + 0x25))) & 1 ^
               rd8((uint32_t)((int)param_2 + 0x25)));
          uVar6 = uVar7;
          break;
        case 0x17:
          sVar12 = 0x10;
          wr16((uint32_t)(param_2 + 4u * (uint32_t)(0xb)), 0);
          do {
            sVar12 = sVar12 + -1;
            if (sVar9 < 8) {
              bVar1 = bVar1 * '\x02';
              sVar9 = sVar9 + 1;
            }
            else {
              if ((short)uVar7 < 1) goto L_10106bcd;
              bVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
              param_1 = param_1 + 1;
              uVar6 = uVar7 - 1;
              sVar9 = 1;
              uVar7 = uVar6;
            }
            wr16((uint32_t)(param_2 + 4u * (uint32_t)(0xb)), (short)rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xb))) << 1);
            if ((char)bVar1 < '\0') {
              wr16((uint32_t)(param_2 + 4u * (uint32_t)(0xb)), (CowU16)rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xb))) | 1);
            }
          } while (0 < sVar12);
        }
      } while (-1 < (short)uVar7);
      wr16((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), 0);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xc))) | (CowU32)rd16((uint32_t)((int)param_2 + 0x2a)));
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(param_1 + 1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101061d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101061d0: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->edx = (uint32_t)(rd32(A)); }   /* 0x101061d1: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101061d5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101061d6: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x101061d7: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101061db: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101061dc: push edi */
    g->ecx = 18u;   /* 0x101061dd: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x101061e2: the value the entry loaded and the decompiler dropped */
    g->edi = g->ebp;   /* 0x101061e4: the value the entry loaded and the decompiler dropped */
    g->esi = 8u;   /* 0x101061e6: the value the entry loaded and the decompiler dropped */
    cow_lift_101061d0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
