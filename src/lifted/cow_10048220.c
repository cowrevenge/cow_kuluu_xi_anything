/* f_0x10048220 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10048220 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10048220(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU8 local_124[4];
    CowU8 local_120[4];
    CowU8 local_11c[4];
    CowU8 local_118[4];
    CowU8 local_114[4];
    CowU8 local_110[4];
    CowU8 local_10c[4];
    CowU8 local_108[4];
    CowU8 local_104[4];
    CowU8 local_100[4];
    CowU8 local_fc[4];
    CowU8 local_f8[4];
    CowU8 local_f4[4];
    CowU8 local_f0[4];
    CowU8 local_ec[4];
    CowU8 local_e8[4];
    CowU8 local_e4[4];
    CowU8 local_e0[4];
    CowU8 local_dc[4];
    CowU8 local_d8[4];
    CowU8 local_d4[4];
    CowU8 local_d0[4];
    CowU8 local_cc[4];
    CowU8 local_c8[4];
    CowU8 local_c4[4];
    CowU8 local_c0[4];
    CowU8 local_bc[4];
    CowU8 local_b8[4];
    CowU8 local_b4[4];
    CowU8 local_b0[4];
    CowU8 local_ac[4];
    CowU8 local_a8[4];
    CowU8 local_a4[4];
    CowU8 local_a0[4];
    CowU8 local_9c[4];
    CowU8 local_98[4];
    CowU8 local_94[4];
    CowU8 local_90[4];
    CowU8 local_8c[4];
    CowU8 local_88[4];
    CowU8 local_84[4];
    CowU8 local_80[4];
    CowU8 local_7c[4];
    CowU8 local_78[4];
    CowU8 local_74[4];
    CowU8 local_70[4];
    CowU8 local_6c[4];
    CowU8 local_68[4];
    CowU8 local_64[4];
    CowU8 local_60[4];
    CowU8 local_5c[4];
    CowU8 local_58[4];
    CowU8 local_54[4];
    CowU8 local_50[4];
    CowU8 local_4c[4];
    CowU8 local_48[4];
    CowU8 local_44[4];
    CowU8 local_40[4];
    CowU8 local_3c[4];
    CowU8 local_38[4];
    CowU8 local_34[4];
    CowU8 local_30[4];
    CowU8 local_2c[4];
    CowU8 local_28[4];
    CowU8 local_24[4];
    CowU8 local_20[4];
    CowU8 local_1c[4];
    CowU8 local_18[4];
    CowU8 local_14[4];
    CowU8 local_10[4];
    CowU8 local_c[4];
    CowU8 local_8[4];
    CowU8 local_4[4];
    cow_bridge_10049570(g, COW_IMG(COW_ADDR_LIFT_1004822F), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      puVar3 = rd32((uint32_t)(param_1 + 0xe0));
      wr32((uint32_t)(param_1 + 0x78), 0x3f800000);
      wr32((uint32_t)(param_1 + 0x7c), 0x3f800000);
      wr32((uint32_t)(param_1 + 0x80), 0x3f800000);
      wr32((uint32_t)(param_1 + 0x84), 0x3f800000);
      wr32((uint32_t)(param_1 + 0x88), 0x3f800000);
      wr32((uint32_t)(param_1 + 0x8c), 0x3f800000);
      for (; puVar3 != (CowU32)0x0; puVar3 = puVar3 + 4u * (uint32_t)((rd32((uint32_t)puVar3) >> 8 & 0x1f))) {
        switch(rd32((uint32_t)puVar3) & 0xff) {
        case 5:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_f0;
    L_100483c4:
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100483CB), 3u, (const CowU32[]){ puVar1, 0x19, uVar5 }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 6:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_e4;
            goto L_100483c4;
          }
          break;
        case 7:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar1 = local_e0;
    L_100483bd:
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            goto L_100483c4;
          }
          break;
        case 8:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_ec;
            goto L_100483c4;
          }
          break;
        case 9:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_114;
            goto L_100483c4;
          }
          break;
        case 0xb:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar1 = local_10c;
            goto L_100483bd;
          }
          break;
        case 0xc:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_f4;
            goto L_100483c4;
          }
          break;
        case 0xd:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_104;
            goto L_100483c4;
          }
          break;
        case 0xe:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar1 = local_110;
            goto L_100483bd;
          }
          break;
        case 0xf:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_108;
            goto L_100483c4;
          }
          break;
        case 0x10:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_100;
            goto L_100483c4;
          }
          break;
        case 0x12:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar1 = local_11c;
            goto L_100483bd;
          }
          break;
        case 0x13:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_fc;
            goto L_100483c4;
          }
          break;
        case 0x14:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_118;
            goto L_100483c4;
          }
          break;
        case 0x17:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar1 = local_f8;
            goto L_100483bd;
          }
        }
        if ((char)rd32((uint32_t)puVar3) == '\0') break;
      }
      puVar3 = rd32((uint32_t)(param_1 + 0xe4));
      while (puVar3 != (CowU32)0x0) {
        switch(rd32((uint32_t)puVar3) & 0xff) {
        case 0x21:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048444), 3u, (const CowU32[]){ local_fc, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x22:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048466), 3u, (const CowU32[]){ local_d8, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x23:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048496), 3u, (const CowU32[]){ local_d4, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x24:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100484BD), 3u, (const CowU32[]){ local_28, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x25:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100484E4), 3u, (const CowU32[]){ local_dc, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x26:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_1004850B), 3u, (const CowU32[]){ local_48, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x27:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048532), 3u, (const CowU32[]){ local_88, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x28:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048559), 3u, (const CowU32[]){ local_8, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x29:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048580), 3u, (const CowU32[]){ local_80, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x2a:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100485A7), 3u, (const CowU32[]){ local_40, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x2b:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100485CE), 3u, (const CowU32[]){ local_78, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x2c:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100485F5), 3u, (const CowU32[]){ local_20, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x2d:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_1004861C), 3u, (const CowU32[]){ local_70, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x2e:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048643), 3u, (const CowU32[]){ local_bc, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x2f:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_1004866D), 3u, (const CowU32[]){ local_b4, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x33:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048697), 3u, (const CowU32[]){ local_ac, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x34:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100486C1), 3u, (const CowU32[]){ local_a4, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x35:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100486EB), 3u, (const CowU32[]){ local_9c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x36:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048715), 3u, (const CowU32[]){ local_94, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x37:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_1004873C), 3u, (const CowU32[]){ local_8c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x38:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048766), 3u, (const CowU32[]){ local_84, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x39:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_1004878D), 3u, (const CowU32[]){ local_7c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x3c:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100487B7), 3u, (const CowU32[]){ local_110, 5, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x44:
        case 0x53:
        case 0x6a:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100487DE), 3u, (const CowU32[]){ local_118, 5, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x4e:
        case 0x4f:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_f8;
            uVar4 = 0x3e;
    L_1004845e:
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048808), 3u, (const CowU32[]){ puVar1, uVar4, uVar5 }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          goto L_1004846b;
        case 0x50:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_1004882F), 3u, (const CowU32[]){ local_24, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x51:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048859), 3u, (const CowU32[]){ local_1c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x52:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048880), 3u, (const CowU32[]){ local_e8, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x54:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(4))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100488AA), 3u, (const CowU32[]){ local_100, 0x3e, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(5))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(4)), rd32((uint32_t)puVar2));
          }
          uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
          if ((uVar5 != 0) && (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0)) {
            uVar4 = 0x19;
            puVar1 = local_108;
            goto L_1004845e;
          }
    L_1004846b:
          wr32((uint32_t)(param_1 + 0xa0), rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))));
          break;
        case 0x55:
          if ((rd32((uint32_t)(puVar3 + 4u * (uint32_t)(4))) != 0) && (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(5))) == 0)) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100488D4), 3u, (const CowU32[]){ local_120, 10, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(4))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(5)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x59:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100488FE), 3u, (const CowU32[]){ local_74, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x5a:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048928), 3u, (const CowU32[]){ local_6c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x5b:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048952), 3u, (const CowU32[]){ local_64, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x5c:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_1004897C), 3u, (const CowU32[]){ local_5c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x5d:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100489A6), 3u, (const CowU32[]){ local_54, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x5e:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100489CD), 3u, (const CowU32[]){ local_4c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x5f:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_100489F7), 3u, (const CowU32[]){ local_44, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x60:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048A21), 3u, (const CowU32[]){ local_60, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x61:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048A4B), 3u, (const CowU32[]){ local_b8, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x62:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048A75), 3u, (const CowU32[]){ local_30, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 99:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048A9F), 3u, (const CowU32[]){ local_b0, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 100:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048AC9), 3u, (const CowU32[]){ local_c8, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x65:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048AF3), 3u, (const CowU32[]){ local_10, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x66:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048B1D), 3u, (const CowU32[]){ local_c0, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x68:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048B44), 3u, (const CowU32[]){ local_58, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x69:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048B6B), 3u, (const CowU32[]){ local_3c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x6b:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048B92), 3u, (const CowU32[]){ local_124, 0x4a, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(2)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x6c:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048BB9), 3u, (const CowU32[]){ local_a8, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x6d:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048BE0), 3u, (const CowU32[]){ local_18, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x6e:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048C07), 3u, (const CowU32[]){ local_a0, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x6f:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048C31), 3u, (const CowU32[]){ local_50, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x70:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048C5B), 3u, (const CowU32[]){ local_98, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x74:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048C85), 3u, (const CowU32[]){ local_4, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x75:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048CAF), 3u, (const CowU32[]){ local_38, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x76:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048CD9), 3u, (const CowU32[]){ local_11c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x77:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048D03), 3u, (const CowU32[]){ local_104, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x78:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048D2D), 3u, (const CowU32[]){ local_f4, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x7c:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048D57), 3u, (const CowU32[]){ local_cc, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x7d:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048D81), 3u, (const CowU32[]){ local_c4, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x80:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048DAB), 3u, (const CowU32[]){ local_d0, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x81:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048DD5), 3u, (const CowU32[]){ local_68, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x82:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048DFF), 3u, (const CowU32[]){ local_2c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x83:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048E29), 3u, (const CowU32[]){ local_10c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x84:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048E53), 3u, (const CowU32[]){ local_ec, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x85:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048E7D), 3u, (const CowU32[]){ local_114, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x8b:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048EA7), 3u, (const CowU32[]){ local_90, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x8c:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048ED1), 3u, (const CowU32[]){ local_14, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x8d:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048EFB), 3u, (const CowU32[]){ local_c, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x93:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048F21), 3u, (const CowU32[]){ local_34, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x95:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048F41), 3u, (const CowU32[]){ local_e0, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x96:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048F61), 3u, (const CowU32[]){ local_e4, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          break;
        case 0x97:
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048F85), 3u, (const CowU32[]){ local_f0, 0x19, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
        }
        if ((char)rd32((uint32_t)puVar3) == '\0') {
          puVar3 = (CowU32)0x0;
        }
        else {
          puVar3 = puVar3 + 4u * (uint32_t)((rd32((uint32_t)puVar3) >> 8 & 0x1f));
        }
      }
      puVar3 = rd32((uint32_t)(param_1 + 0xe8));
      while (puVar3 != (CowU32)0x0) {
        if ((rd32((uint32_t)puVar3) & 0xff) == 0x47) {
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(3))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048FDD), 3u, (const CowU32[]){ local_e8, 10, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(3)), rd32((uint32_t)puVar2));
          }
        }
        else if ((rd32((uint32_t)puVar3) & 0xff) == 0x65) {
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10048FFF), 3u, (const CowU32[]){ local_120, 7, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
          }
          if ((rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) != 0) && (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2))) == 0)) {
            puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_1004901F), 3u, (const CowU32[]){ local_124, 5, rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(puVar3 + 4u * (uint32_t)(2)), rd32((uint32_t)puVar2));
          }
        }
        if ((char)rd32((uint32_t)puVar3) == '\0') {
          puVar3 = (CowU32)0x0;
        }
        else {
          puVar3 = puVar3 + 4u * (uint32_t)((rd32((uint32_t)puVar3) >> 8 & 0x1f));
        }
      }
      puVar3 = rd32((uint32_t)(param_1 + 0xec));
      do {
        if (puVar3 == (CowU32)0x0) {
          return;
        }
        if ((rd32((uint32_t)puVar3) & 0xff) == 1) {
          if (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0) {
            uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
            puVar1 = local_124;
            uVar4 = 5;
            goto L_1004907c;
          }
        }
        else if (((rd32((uint32_t)puVar3) & 0xff) == 2) && (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) == 0)) {
          uVar5 = rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)));
          puVar1 = local_120;
          uVar4 = 7;
    L_1004907c:
          puVar2 = (CowU32)cow_bridge_10072290(g, COW_IMG(COW_ADDR_LIFT_10049083), 3u, (const CowU32[]){ puVar1, uVar4, uVar5 }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)puVar2));
        }
        if ((char)rd32((uint32_t)puVar3) == '\0') {
          puVar3 = (CowU32)0x0;
        }
        else {
          puVar3 = puVar3 + 4u * (uint32_t)((rd32((uint32_t)puVar3) >> 8 & 0x1f));
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 292 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10048220(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x124u;                      /* 0x10048220: 292 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10048226: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10048227: push edi */
    g->edi = g->ecx;   /* 0x10048228: the value the entry loaded and the decompiler dropped */
    cow_lift_10048220(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 25 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
