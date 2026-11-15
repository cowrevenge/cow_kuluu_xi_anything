/* f_0x101959a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101959a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101959a0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int local_cf4;
    int local_cf0[145];
    int local_aac;
    int local_aa8;
    int local_aa4;
    int aiStack_aa0[680];
    iVar2 = cow_bridge_101c4790(g, COW_IMG(COW_ADDR_LIFT_101959CA), 5u, (const CowU32[]){ 272079368u, g->eax, 828u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((iVar2 < 1) || ((local_cf0[0] != 5 && (local_cf0[0] != 0x5000000)))) {
    switchD_10195ac4_caseD_87:
        g->eax = (CowU32)(0xffffffff); return;
      }
      iVar2 = iVar2 >> 2;
      if (iVar2 < 0x92) {
        switch(iVar2) {
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
          goto switchD_10195ac4_caseD_80;
        default:
          goto switchD_10195ac4_caseD_87;
        case 0x89:
        case 0x8a:
        case 0x8b:
        case 0x8c:
        case 0x8d:
        case 0x8e:
        case 0x8f:
    switchD_10195ac4_caseD_89:
          iVar6 = 1;
          iVar5 = 0;
          do {
            if (iVar2 <= iVar6) break;
            if ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + 0xc + iVar5)) == 4) {
              piVar1 = local_cf0 + iVar6;
              iVar6 = iVar6 + 1;
              cow_bridge_10196040(g, COW_IMG(COW_ADDR_LIFT_10195A70), 2u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar5, rd32((uint32_t)piVar1) }, g->ecx, g->edx, g->eax, 0u);
            }
            iVar5 = iVar5 + 0x2c;
          } while (iVar5 < 0x1b54);
          if (local_cf0[0] != 5) {
            iVar5 = 0xcb8;
            do {
              iVar6 = (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar5;
              if ((int32_t)rd32((uint32_t)(iVar6 + 4)) == 0x43) {
                uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195AA8), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
              }
              else {
                uVar3 = rd32((uint32_t)(iVar6 + 0x20));
              }
              wr32((uint32_t)(iVar6 + 8), uVar3);
              if (rd32((uint32_t)(iVar6 + 0x24)) != (CowU32)0x0) {
                cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195B44), 2u, (const CowU32[]){ rd32((uint32_t)(iVar6 + 4)), uVar3 }, rd32((uint32_t)(iVar6 + 0x24)), g->edx, g->eax, 0u);
              }
              iVar5 = iVar5 + 0x2c;
            } while (iVar5 < 0x178d);
            iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4));
            if ((int32_t)rd32((uint32_t)(iVar5 + 0x9fc)) == 0x43) {
              uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195B22), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
              wr32((uint32_t)(iVar5 + 0xa00), uVar3);
            }
            else {
              wr32((uint32_t)(iVar5 + 0xa00), rd32((uint32_t)(iVar5 + 0xa18)));
            }
            if (rd32((uint32_t)(iVar5 + 0xa1c)) != (CowU32)0x0) {
              cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195BA5), 2u, (const CowU32[]){ rd32((uint32_t)(iVar5 + 0x9fc)), rd32((uint32_t)(iVar5 + 0xa00)) }, rd32((uint32_t)(iVar5 + 0xa1c)), g->edx, g->eax, 0u);
            }
            iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4));
            if ((int32_t)rd32((uint32_t)(iVar5 + 0xa28)) == 0x43) {
              uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195B83), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
              wr32((uint32_t)(iVar5 + 0xa2c), uVar3);
            }
            else {
              wr32((uint32_t)(iVar5 + 0xa2c), rd32((uint32_t)(iVar5 + 0xa44)));
            }
            if (rd32((uint32_t)(iVar5 + 0xa48)) != (CowU32)0x0) {
              cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195BDB), 2u, (const CowU32[]){ rd32((uint32_t)(iVar5 + 0xa28)), rd32((uint32_t)(iVar5 + 0xa2c)) }, rd32((uint32_t)(iVar5 + 0xa48)), g->edx, g->eax, 0u);
            }
            iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4));
            if ((int32_t)rd32((uint32_t)(iVar5 + 0xb04)) == 0x43) {
              uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195BBD), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
              wr32((uint32_t)(iVar5 + 0xb08), uVar3);
            }
            else {
              wr32((uint32_t)(iVar5 + 0xb08), rd32((uint32_t)(iVar5 + 0xb20)));
            }
            if (rd32((uint32_t)(iVar5 + 0xb24)) != (CowU32)0x0) {
              cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195C15), 2u, (const CowU32[]){ rd32((uint32_t)(iVar5 + 0xb04)), rd32((uint32_t)(iVar5 + 0xb08)) }, rd32((uint32_t)(iVar5 + 0xb24)), g->edx, g->eax, 0u);
            }
            iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4));
            if ((int32_t)rd32((uint32_t)(iVar5 + 0xaac)) == 0x43) {
              uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195BF3), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
              wr32((uint32_t)(iVar5 + 0xab0), uVar3);
            }
            else {
              wr32((uint32_t)(iVar5 + 0xab0), rd32((uint32_t)(iVar5 + 0xac8)));
            }
            if (rd32((uint32_t)(iVar5 + 0xacc)) != (CowU32)0x0) {
              cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195C66), 2u, (const CowU32[]){ rd32((uint32_t)(iVar5 + 0xaac)), rd32((uint32_t)(iVar5 + 0xab0)) }, rd32((uint32_t)(iVar5 + 0xacc)), g->edx, g->eax, 0u);
            }
            iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4));
            if ((int32_t)rd32((uint32_t)(iVar5 + 0xad8)) == 0x43) {
              uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195C44), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
              wr32((uint32_t)(iVar5 + 0xadc), uVar3);
            }
            else {
              wr32((uint32_t)(iVar5 + 0xadc), rd32((uint32_t)(iVar5 + 0xaf4)));
            }
            if (rd32((uint32_t)(iVar5 + 0xaf8)) != (CowU32)0x0) {
              cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195CDB), 2u, (const CowU32[]){ rd32((uint32_t)(iVar5 + 0xad8)), rd32((uint32_t)(iVar5 + 0xadc)) }, rd32((uint32_t)(iVar5 + 0xaf8)), g->edx, g->eax, 0u);
            }
            iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4));
            if ((int32_t)rd32((uint32_t)(iVar5 + 0xb88)) == 0x43) {
              uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195CB9), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
              wr32((uint32_t)(iVar5 + 0xb8c), uVar3);
            }
            else {
              wr32((uint32_t)(iVar5 + 0xb8c), rd32((uint32_t)(iVar5 + 0xba4)));
            }
            if (rd32((uint32_t)(iVar5 + 0xba8)) != (CowU32)0x0) {
              cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195D82), 2u, (const CowU32[]){ rd32((uint32_t)(iVar5 + 0xb88)), rd32((uint32_t)(iVar5 + 0xb8c)) }, rd32((uint32_t)(iVar5 + 0xba8)), g->edx, g->eax, 0u);
            }
          }
          goto L_10195ef2;
        }
      }
      if (local_aac == 0x6b617473) {
        if (local_aa4 != 0x7368696e) {
          g->eax = (CowU32)(0xffffffff); return;
        }
      }
      else {
        if (local_aac != 0x1234567) {
          g->eax = (CowU32)(0xffffffff); return;
        }
        if (local_aa4 != -0x76543211) {
          g->eax = (CowU32)(0xffffffff); return;
        }
      }
      if (local_aa8 != 1) {
        if ((local_aa8 != 2) && (local_aa8 != 3)) {
          g->eax = (CowU32)(0xffffffff); return;
        }
        goto switchD_10195ac4_caseD_89;
      }
    switchD_10195ac4_caseD_80:
      iVar5 = 1;
      iVar6 = 0;
      do {
        if (iVar2 <= iVar5) break;
        iVar4 = (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar6;
        if ((int32_t)rd32((uint32_t)(iVar4 + 0xc)) == 4) {
          piVar1 = local_cf0 + iVar5;
          iVar5 = iVar5 + 1;
          cow_bridge_10196040(g, COW_IMG(COW_ADDR_LIFT_10195AF3), 2u, (const CowU32[]){ iVar4, rd32((uint32_t)piVar1) }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar6 = iVar6 + 0x2c;
      } while (iVar6 < 0x949);
      iVar6 = 0x974;
      do {
        if (iVar2 <= iVar5) break;
        iVar4 = (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar6;
        if ((int32_t)rd32((uint32_t)(iVar4 + 4)) == 0x43) {
          uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195DAE), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
          wr32((uint32_t)(iVar4 + 8), uVar3);
        }
        else {
          wr32((uint32_t)(iVar4 + 8), rd32((uint32_t)(iVar4 + 0x20)));
        }
        if (rd32((uint32_t)(iVar4 + 0x24)) != (CowU32)0x0) {
          cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195DD0), 2u, (const CowU32[]){ rd32((uint32_t)(iVar4 + 4)), rd32((uint32_t)(iVar4 + 8)) }, rd32((uint32_t)(iVar4 + 0x24)), g->edx, g->eax, 0u);
        }
        iVar6 = iVar6 + 0x2c;
      } while (iVar6 < 0xa51);
      cow_bridge_10196040(g, COW_IMG(COW_ADDR_LIFT_10195B66), 2u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 4)) + 0xa7c, local_cf0[iVar5] }, g->ecx, g->edx, g->eax, 0u);
      iVar6 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((int32_t)rd32((uint32_t)(iVar6 + 0xaac)) == 0x43) {
        uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195DE8), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(iVar6 + 0xab0), uVar3);
      }
      else {
        wr32((uint32_t)(iVar6 + 0xab0), rd32((uint32_t)(iVar6 + 0xac8)));
      }
      if (rd32((uint32_t)(iVar6 + 0xacc)) != (CowU32)0x0) {
        cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195E0A), 2u, (const CowU32[]){ rd32((uint32_t)(iVar6 + 0xaac)), rd32((uint32_t)(iVar6 + 0xab0)) }, rd32((uint32_t)(iVar6 + 0xacc)), g->edx, g->eax, 0u);
      }
      iVar6 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((int32_t)rd32((uint32_t)(iVar6 + 0xad8)) == 0x43) {
        uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195E22), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
      }
      else {
        uVar3 = rd32((uint32_t)(iVar6 + 0xaf4));
      }
      wr32((uint32_t)(iVar6 + 0xadc), uVar3);
      if (rd32((uint32_t)(iVar6 + 0xaf8)) != (CowU32)0x0) {
        cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195E44), 2u, (const CowU32[]){ rd32((uint32_t)(iVar6 + 0xad8)), uVar3 }, rd32((uint32_t)(iVar6 + 0xaf8)), g->edx, g->eax, 0u);
      }
      iVar6 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((int32_t)rd32((uint32_t)(iVar6 + 0xb04)) == 0x43) {
        uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195E5C), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(iVar6 + 0xb08), uVar3);
      }
      else {
        wr32((uint32_t)(iVar6 + 0xb08), rd32((uint32_t)(iVar6 + 0xb20)));
      }
      if (rd32((uint32_t)(iVar6 + 0xb24)) != (CowU32)0x0) {
        cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195E7E), 2u, (const CowU32[]){ rd32((uint32_t)(iVar6 + 0xb04)), rd32((uint32_t)(iVar6 + 0xb08)) }, rd32((uint32_t)(iVar6 + 0xb24)), g->edx, g->eax, 0u);
      }
      iVar6 = iVar5 + 2;
      cow_bridge_10196040(g, COW_IMG(COW_ADDR_LIFT_10195C2C), 2u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 4)) + 0xb58, local_cf0[iVar5 + 1] }, g->ecx, g->edx, g->eax, 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if ((int32_t)rd32((uint32_t)(iVar5 + 0xb88)) == 0x43) {
        uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195E96), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(iVar5 + 0xb8c), uVar3);
      }
      else {
        wr32((uint32_t)(iVar5 + 0xb8c), rd32((uint32_t)(iVar5 + 0xba4)));
      }
      if (rd32((uint32_t)(iVar5 + 0xba8)) != (CowU32)0x0) {
        cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195EB8), 2u, (const CowU32[]){ rd32((uint32_t)(iVar5 + 0xb88)), rd32((uint32_t)(iVar5 + 0xb8c)) }, rd32((uint32_t)(iVar5 + 0xba8)), g->edx, g->eax, 0u);
      }
      iVar5 = 0xbb0;
      do {
        if (iVar2 <= iVar6) break;
        iVar4 = (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar5;
        if ((int32_t)rd32((uint32_t)(iVar4 + 0xc)) == 4) {
          piVar1 = local_cf0 + iVar6;
          iVar6 = iVar6 + 1;
          cow_bridge_10196040(g, COW_IMG(COW_ADDR_LIFT_10195C8E), 2u, (const CowU32[]){ iVar4, rd32((uint32_t)piVar1) }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar5 = iVar5 + 0x2c;
      } while (iVar5 < 0xc8d);
      iVar5 = 0xcb8;
      do {
        if (iVar2 <= iVar6) break;
        iVar4 = (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar5;
        if ((int32_t)rd32((uint32_t)(iVar4 + 4)) == 0x43) {
          uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195ED0), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
          wr32((uint32_t)(iVar4 + 8), uVar3);
        }
        else {
          wr32((uint32_t)(iVar4 + 8), rd32((uint32_t)(iVar4 + 0x20)));
        }
        if (rd32((uint32_t)(iVar4 + 0x24)) != (CowU32)0x0) {
          cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195EF2), 2u, (const CowU32[]){ rd32((uint32_t)(iVar4 + 4)), rd32((uint32_t)(iVar4 + 8)) }, rd32((uint32_t)(iVar4 + 0x24)), g->edx, g->eax, 0u);
        }
        iVar5 = iVar5 + 0x2c;
        iVar6 = iVar6 + 1;
      } while (iVar5 < 0x178d);
      iVar5 = 0x17b8;
      do {
        if (iVar2 <= iVar6) break;
        if ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + 0xc + iVar5)) == 4) {
          piVar1 = local_cf0 + iVar6;
          iVar6 = iVar6 + 1;
          cow_bridge_10196040(g, COW_IMG(COW_ADDR_LIFT_10195D0F), 2u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar5, rd32((uint32_t)piVar1) }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar5 = iVar5 + 0x2c;
      } while (iVar5 < 0x1971);
      iVar5 = iVar6 + 1;
      cow_bridge_10196040(g, COW_IMG(COW_ADDR_LIFT_10195D31), 2u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 4)) + 0xa50, local_cf0[iVar6] }, g->ecx, g->edx, g->eax, 0u);
      iVar6 = 0x199c;
      do {
        if (iVar2 <= iVar5) break;
        iVar4 = (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar6;
        if ((int32_t)rd32((uint32_t)(iVar4 + 0xc)) == 4) {
          piVar1 = local_cf0 + iVar5;
          iVar5 = iVar5 + 1;
          cow_bridge_10196040(g, COW_IMG(COW_ADDR_LIFT_10195D59), 2u, (const CowU32[]){ iVar4, rd32((uint32_t)piVar1) }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar6 = iVar6 + 0x2c;
      } while (iVar6 < 0x1b54);
    L_10195ef2:
      iVar5 = 0x94;
      local_cf4 = 0xa4;
      iVar6 = 0x1c30;
      do {
        if (iVar2 <= iVar5) break;
        if ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + 0xc + iVar6)) == 4) {
          piVar1 = local_cf0 + iVar5;
          iVar5 = iVar5 + 1;
          cow_bridge_10196040(g, COW_IMG(COW_ADDR_LIFT_10195F2B), 2u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 4)) + iVar6, rd32((uint32_t)piVar1) }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar6 = iVar6 + 0x2c;
        local_cf4 = local_cf4 + 1;
      } while (iVar6 < 0x2394);
      if (local_cf4 < 0xb1) {
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 4));
        if ((int32_t)rd32((uint32_t)(iVar2 + 0x16b4)) == 0x43) {
          uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195F67), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
          wr32((uint32_t)(iVar2 + 0x16b8), uVar3);
        }
        else {
          wr32((uint32_t)(iVar2 + 0x16b8), rd32((uint32_t)(iVar2 + 0x16d0)));
        }
        if (rd32((uint32_t)(iVar2 + 0x16d4)) != (CowU32)0x0) {
          cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195F89), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x16b4)), rd32((uint32_t)(iVar2 + 0x16b8)) }, rd32((uint32_t)(iVar2 + 0x16d4)), g->edx, g->eax, 0u);
        }
      }
      if (local_cf4 < 0xbd) {
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 4));
        if ((int32_t)rd32((uint32_t)(iVar2 + 0x16e0)) == 0x43) {
          uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195FAB), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
        }
        else {
          uVar3 = rd32((uint32_t)(iVar2 + 0x16fc));
        }
        wr32((uint32_t)(iVar2 + 0x16e4), uVar3);
        if (rd32((uint32_t)(iVar2 + 0x1700)) != (CowU32)0x0) {
          cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_10195FC9), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x16e0)), uVar3 }, rd32((uint32_t)(iVar2 + 0x1700)), g->edx, g->eax, 0u);
        }
      }
      if (local_cf4 < 0xcd) {
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 4));
        if ((int32_t)rd32((uint32_t)(iVar2 + 0x170c)) == 0x43) {
          uVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10195FEB), 1u, (const CowU32[]){ 171u }, g->ecx, g->edx, g->eax, 4u);
          wr32((uint32_t)(iVar2 + 0x1710), uVar3);
        }
        else {
          wr32((uint32_t)(iVar2 + 0x1710), rd32((uint32_t)(iVar2 + 0x1728)));
        }
        if (rd32((uint32_t)(iVar2 + 0x172c)) != (CowU32)0x0) {
          cow_bridge_10193bc0(g, COW_IMG(COW_ADDR_LIFT_1019600D), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x170c)), rd32((uint32_t)(iVar2 + 0x1710)) }, rd32((uint32_t)(iVar2 + 0x172c)), g->edx, g->eax, 0u);
        }
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 3320 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101959a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0xcf8u;                      /* 0x101959a0: 3320 bytes of locals */
    { g->eax = (uint32_t)((uint32_t)(g->esp + 0x8u)); }   /* 0x101959a6: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101959aa: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101959ab: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101959ac: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101959ad: push edi */
    cow_lift_101959a0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
