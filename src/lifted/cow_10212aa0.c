/* f_0x10212aa0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10212aa0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10212aa0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    switch(rd32((uint32_t)(param_1 + 0x110))) {
      case 3:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x10c)) == 0) {
          switch(param_2) {
          case 1:
            wr8((uint32_t)(param_1 + 300), 1);
            if ((int32_t)rd32((uint32_t)(param_1 + 0x128)) < (int32_t)rd32((uint32_t)(param_1 + 0x124)) + -1) {
              cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10212CB0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)(param_1 + 0x128), (int32_t)rd32((uint32_t)(param_1 + 0x128)) + 1);
              return;
            }
            break;
          case 2:
            wr8((uint32_t)(param_1 + 300), 1);
            if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x128))))) {
              cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10212CE3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)(param_1 + 0x128), (int32_t)rd32((uint32_t)(param_1 + 0x128)) + -1);
              return;
            }
            break;
          case 5:
            wr8((uint32_t)(param_1 + 0x13c), 1);
            if ((int32_t)rd32((uint32_t)(param_1 + 0x128)) == (int32_t)rd32((uint32_t)(param_1 + 0x124)) + -1) {
              cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10212B5B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10216620(g, COW_IMG(COW_ADDR_LIFT_10212B6E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              return;
            }
            switch((int32_t)rd32((uint32_t)(param_1 + 0x128))) {
            case 0:
              if ((int8_t)rd8((uint32_t)(param_1 + 0x1c2)) == '\x01') {
                cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10212BBF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                cow_bridge_101c68a0(g, COW_IMG(COW_ADDR_LIFT_10212BCA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                wr32((uint32_t)(param_1 + 0x10c), (int32_t)rd32((uint32_t)(param_1 + 0x108)));
                cow_bridge_101c6870(g, COW_IMG(COW_ADDR_LIFT_10212BE5), 1u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x108)) + 0x24)) }, g->ecx, g->edx, g->eax, 0u);
                return;
              }
              goto L_10213057;
            case 1:
              cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10212BEF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_1015e6e0(g, COW_IMG(COW_ADDR_LIFT_10212C08), 5u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578468)) + 8)), 1, 1, 0, 0 }, 274864184u, g->edx, g->eax, 0u);
              cow_bridge_10233b80(g, COW_IMG(COW_ADDR_LIFT_10212C0D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              return;
            case 2:
              cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10212C17), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10216500(g, COW_IMG(COW_ADDR_LIFT_10212C1E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              return;
            case 3:
              cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10212C28), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              if (rd32(COW_IMG(COW_ADDR_LIFT_10664530)) != 0) {
                cow_bridge_102169c0(g, COW_IMG(COW_ADDR_LIFT_10212C37), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              }
              if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
                cow_bridge_10221300(g, COW_IMG(COW_ADDR_LIFT_10212C4A), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
              }
              cow_bridge_1021bb60(g, COW_IMG(COW_ADDR_LIFT_10212C4F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              return;
            case 4:
              cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10212C59), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              if (rd32(COW_IMG(COW_ADDR_LIFT_10664530)) != 0) {
                cow_bridge_102169c0(g, COW_IMG(COW_ADDR_LIFT_10212C68), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              }
              if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
                cow_bridge_10221300(g, COW_IMG(COW_ADDR_LIFT_10212C7B), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
              }
              wr32((uint32_t)(param_1 + 0x110), 0xd);
              wr8((uint32_t)(param_1 + 0x114), 0);
              wr8((uint32_t)(param_1 + 0x120), 0);
              return;
            }
            break;
          case 6:
            cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10212B90), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (param_3 != 0) {
              cow_bridge_10216620(g, COW_IMG(COW_ADDR_LIFT_10212B98), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              return;
            }
            break;
          case 9:
            goto switchD_10212ff3_caseD_9;
          }
        }
        else {
          switch(param_2) {
          case 3:
            cow_bridge_101c6920(g, COW_IMG(COW_ADDR_LIFT_10212AF6), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 4:
            cow_bridge_101c6920(g, COW_IMG(COW_ADDR_LIFT_10212B08), 1u, (const CowU32[]){ 7u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 5:
            cow_bridge_101c6920(g, COW_IMG(COW_ADDR_LIFT_10212B1A), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 6:
            cow_bridge_101c6920(g, COW_IMG(COW_ADDR_LIFT_10212B2C), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 0x12:
            cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10662D40))))) + 0x8u))), COW_IMG(COW_ADDR_LIFT_10212B40), 3u, (const CowU32[]){ 2, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
        }
        break;
      case 5:
      case 10:
        if (param_2 == 6) {
          cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10212D06), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr8((uint32_t)(param_1 + 0x120), 1);
          return;
        }
        break;
      case 8:
        switch(param_2) {
        case 1:
          wr8((uint32_t)(param_1 + 0x13c), 1);
          if ((int32_t)rd32((uint32_t)(param_1 + 0x138)) < (int32_t)rd32((uint32_t)(param_1 + 0x130)) + -1) {
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10212DA0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x138), (int32_t)rd32((uint32_t)(param_1 + 0x138)) + 1);
            return;
          }
          break;
        case 2:
          wr8((uint32_t)(param_1 + 0x13c), 1);
          if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x138))))) {
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10212DBC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x138), (int32_t)rd32((uint32_t)(param_1 + 0x138)) + -1);
            return;
          }
          break;
        case 3:
          wr8((uint32_t)(param_1 + 0x13c), 0);
          cow_bridge_10214530(g, COW_IMG(COW_ADDR_LIFT_10212E2B), 1u, (const CowU32[]){ 15u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 4:
        case 0x18:
          wr8((uint32_t)(param_1 + 0x13c), 0);
          cow_bridge_10214530(g, COW_IMG(COW_ADDR_LIFT_10212E40), 1u, (const CowU32[]){ 0x96 }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 5:
          wr8((uint32_t)(param_1 + 0x13c), 1);
          if (((int32_t)rd32((uint32_t)(param_1 + 0x138)) != (int32_t)rd32((uint32_t)(param_1 + 0x130)) + -1) &&
             ((rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x10 + (int32_t)rd32((uint32_t)(param_1 + 0x138)) * 4)) + 0x29)) & 1) != 1)) {
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10212D7E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x110), 9);
            wr8((uint32_t)(param_1 + 0x114), 0);
            wr8((uint32_t)(param_1 + 0x120), 0);
            return;
          }
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10212DEF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          goto L_10212d35;
        case 6:
          cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10212D35), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    L_10212d35:
          wr32((uint32_t)(param_1 + 0x110), 2);
          wr8((uint32_t)(param_1 + 0x114), 0);
          wr8((uint32_t)(param_1 + 0x120), 0);
          return;
        case 9:
    switchD_10212ff3_caseD_9:
          wr16((uint32_t)(param_1 + 0x178), rd16((uint32_t)(param_1 + 0x178)) & 0xfff1 | 1);
          return;
        case 0x16:
          wr8((uint32_t)(param_1 + 0x13c), 0);
          cow_bridge_10214530(g, COW_IMG(COW_ADDR_LIFT_10212E58), 1u, (const CowU32[]){ 150u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0x17:
          wr8((uint32_t)(param_1 + 0x13c), 0);
          cow_bridge_10214530(g, COW_IMG(COW_ADDR_LIFT_10212E70), 1u, (const CowU32[]){ 4294967146u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0x19:
          wr8((uint32_t)(param_1 + 0x13c), 0);
          cow_bridge_10214530(g, COW_IMG(COW_ADDR_LIFT_10212E88), 1u, (const CowU32[]){ 4294967146u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0x1b:
          iVar2 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x88));
          if (iVar2 != 0) {
            wr8((uint32_t)(param_1 + 0x13c), 0);
            cow_bridge_10214570(g, COW_IMG(COW_ADDR_LIFT_10212EB2), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x14)), 0 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
        }
        break;
      case 0xc:
        switch(param_2) {
        case 1:
          wr8((uint32_t)(param_1 + 0x14c), 0);
          cow_bridge_102145c0(g, COW_IMG(COW_ADDR_LIFT_10212F37), 1u, (const CowU32[]){ 15u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 2:
        case 0x16:
          wr8((uint32_t)(param_1 + 0x14c), 0);
          cow_bridge_102145c0(g, COW_IMG(COW_ADDR_LIFT_10212F4C), 1u, (const CowU32[]){ 0xf }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 3:
        case 0x19:
          wr8((uint32_t)(param_1 + 0x14c), 0);
          cow_bridge_102145c0(g, COW_IMG(COW_ADDR_LIFT_10212F7D), 1u, (const CowU32[]){ 0xffffff6a }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 4:
        case 0x18:
          wr8((uint32_t)(param_1 + 0x14c), 0);
          cow_bridge_102145c0(g, COW_IMG(COW_ADDR_LIFT_10212FBF), 1u, (const CowU32[]){ 4294967146u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 5:
          if ((int32_t)rd32((uint32_t)(param_1 + 0x148)) == 0) {
            cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10212EDA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x110), 7);
            wr8((uint32_t)(param_1 + 0x114), 0);
            wr8((uint32_t)(param_1 + 0x120), 0);
            return;
          }
          break;
        case 6:
          cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10212F0C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x110), 7);
          wr8((uint32_t)(param_1 + 0x114), 0);
          wr8((uint32_t)(param_1 + 0x120), 0);
          return;
        case 9:
          wr16((uint32_t)(param_1 + 0x178), rd16((uint32_t)(param_1 + 0x178)) & 0xfff1 | 1);
          return;
        case 0x17:
          wr8((uint32_t)(param_1 + 0x14c), 0);
          cow_bridge_102145c0(g, COW_IMG(COW_ADDR_LIFT_10212FD7), 1u, (const CowU32[]){ 150u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0x1b:
          iVar2 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x88));
          if (iVar2 != 0) {
            wr8((uint32_t)(param_1 + 0x14c), 0);
            cow_bridge_10214610(g, COW_IMG(COW_ADDR_LIFT_10212FA7), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x14)), 0 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
        }
        break;
      case 0xe:
        switch(param_2) {
        case 1:
          if ((int32_t)rd32((uint32_t)(param_1 + 0x154)) < (int32_t)rd32((uint32_t)(param_1 + 0x150)) + -1) {
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1021309C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x154), (int32_t)rd32((uint32_t)(param_1 + 0x154)) + 1);
            return;
          }
          break;
        case 2:
          if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x154))))) {
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_102130C8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x154), (int32_t)rd32((uint32_t)(param_1 + 0x154)) + -1);
            return;
          }
          break;
        case 3:
        case 0x19:
          wr8((uint32_t)(param_1 + 0x158), 0);
          cow_bridge_10214660(g, COW_IMG(COW_ADDR_LIFT_102130EA), 1u, (const CowU32[]){ 15u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 4:
        case 0x18:
          wr8((uint32_t)(param_1 + 0x158), 0);
          cow_bridge_10214660(g, COW_IMG(COW_ADDR_LIFT_102130FF), 1u, (const CowU32[]){ 0x96 }, g->ecx, g->edx, g->eax, 0u);
          break;
        case 5:
          iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x154));
          if (iVar2 != (int32_t)rd32((uint32_t)(param_1 + 0x150)) + -1) {
            if (iVar2 == 0) {
              if (((int8_t)rd8((uint32_t)(param_1 + 0x1c3)) != '\0') && ((int8_t)rd8((uint32_t)(param_1 + 0x1c4)) == '\0'))
              goto L_10213071;
            }
            else {
              if (iVar2 == 1) {
                if ((int8_t)rd8((uint32_t)(param_1 + 0x1c3)) == '\0') goto L_10213057;
                cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x1c4));
              }
              else {
                if (iVar2 != 2) {
                  return;
                }
                cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x1c5));
              }
              if (cVar1 != '\0') {
    L_10213071:
                cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10213076), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                wr32((uint32_t)(param_1 + 0x11c), rd32((uint32_t)(param_1 + 0x11c)) | 1);
                return;
              }
            }
    L_10213057:
            cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_1021305C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
        case 6:
          cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10213010), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x110), 1);
          wr8((uint32_t)(param_1 + 0x114), 0);
          wr8((uint32_t)(param_1 + 0x120), 0);
          return;
        case 9:
          goto switchD_10212ff3_caseD_9;
        case 0x16:
          wr8((uint32_t)(param_1 + 0x158), 0);
          cow_bridge_10214660(g, COW_IMG(COW_ADDR_LIFT_1021313D), 1u, (const CowU32[]){ 4294967146u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0x17:
          wr8((uint32_t)(param_1 + 0x158), 0);
          cow_bridge_10214660(g, COW_IMG(COW_ADDR_LIFT_10213155), 1u, (const CowU32[]){ 150u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0x1b:
          iVar2 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x88));
          if (iVar2 != 0) {
            wr8((uint32_t)(param_1 + 0x158), 0);
            cow_bridge_102146a0(g, COW_IMG(COW_ADDR_LIFT_10213125), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x14)), 0 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10212aa0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10212aa0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10212aa1: push esi */
    g->esi = g->ecx;   /* 0x10212aa2: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x110u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10212aa4: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFDu; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10212aaa: register eax, replayed as the entry ran it */
    cow_lift_10212aa0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
