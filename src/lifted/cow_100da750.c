/* f_0x100da750 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100da750 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100da750(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar3;
    _Bool bVar2;
      
      if (((int32_t)(-1) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x8c))))) {
        wr32((uint32_t)(param_1 + 0x8c), 0xffffffff);
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0x98)) == 0) {
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          wr32((uint32_t)(param_1 + 0x90), 0x65);
          wr32((uint32_t)(param_1 + 0x8c), rd32((uint32_t)(param_1 + 0x88)));
          g->eax = (CowU32)(1); return;
        }
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      }
      iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x88));
      if ((((iVar1 != 0xc) && (iVar1 != 0x15)) && (iVar1 != 0xca)) &&
         ((iVar1 != 0xcb && (iVar1 != 0xc9)))) {
        iVar1 = cow_bridge_100ef870(g, COW_IMG(COW_ADDR_LIFT_100DA7DF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 != 0) {
          if ((int32_t)rd32((uint32_t)(param_1 + 0x88)) != 9) {
            cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DA7F4), 2u, (const CowU32[]){ 0xcb, 0 }, g->ecx, g->edx, g->eax, 0u);
          }
          iVar1 = cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DA7FE), 2u, (const CowU32[]){ 10, 0 }, g->ecx, g->edx, g->eax, 0u);
          if (iVar1 == 0) {
            cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DA80F), 2u, (const CowU32[]){ 0xc9, 0 }, g->ecx, g->edx, g->eax, 0u);
          }
        }
        iVar1 = cow_bridge_100ef8b0(g, COW_IMG(COW_ADDR_LIFT_100DA814), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 != 0) {
          if ((int32_t)rd32((uint32_t)(param_1 + 0x88)) != 9) {
            cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DA829), 2u, (const CowU32[]){ 0xcb, 0 }, g->ecx, g->edx, g->eax, 0u);
          }
          if ((int32_t)rd32((uint32_t)(param_1 + 0xa0)) == 0) {
            iVar1 = cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DA83D), 1u, (const CowU32[]){ 14u }, 0xe, g->edx, g->eax, 0u);
            if (iVar1 == 0) {
              uVar3 = 0xcb;
    L_100da856:
              cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DA84C), 1u, (const CowU32[]){ 11u }, uVar3, g->edx, g->eax, 0u);
            }
          }
          else {
            iVar1 = cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DA85D), 2u, (const CowU32[]){ 0xb, 0 }, g->ecx, g->edx, g->eax, 0u);
            if (iVar1 == 0) {
              uVar3 = 0xc9;
              goto L_100da856;
            }
          }
          wr32((uint32_t)(param_1 + 0xa0), 0);
        }
      }
      cow_bridge_10103920(g, COW_IMG(COW_ADDR_LIFT_100DA868), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      switch(rd32((uint32_t)(param_1 + 0x88))) {
      case 0:
        cow_bridge_102535d0(g, COW_IMG(COW_ADDR_LIFT_100DA88F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10253650(g, COW_IMG(COW_ADDR_LIFT_100DA894), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x90));
        wr32((uint32_t)(param_1 + 0x90), 0x65);
        if (iVar1 == 100) {
          wr32((uint32_t)(param_1 + 0x8c), rd32((uint32_t)(param_1 + 0x88)));
        }
        break;
      case 1:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100ed7e0(g, COW_IMG(COW_ADDR_LIFT_100DA8D0), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
          if (iVar1 == -1) {
            bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 1;
            goto L_100dac42;
          }
          bVar2 = iVar1 == 1;
    L_100dabd1:
          if (bVar2) goto L_100dabd7;
        }
        break;
      case 2:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100edfb0(g, COW_IMG(COW_ADDR_LIFT_100DA934), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
          if (iVar1 == -1) {
            bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 2;
            goto L_100dac42;
          }
          bVar2 = iVar1 == 1;
    L_100dac62:
          if (bVar2) goto L_100dac64;
        }
        break;
      case 3:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100ee160(g, COW_IMG(COW_ADDR_LIFT_100DA96D), 2u, (const CowU32[]){ param_1 + 0xc, rd32((uint32_t)(param_1 + 0x80)) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar1 == -1) {
            bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 3;
            goto L_100dac42;
          }
    L_100da981:
          if (iVar1 != 1) break;
          cow_bridge_100f05f0(g, COW_IMG(COW_ADDR_LIFT_100DA98F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    L_100dac64:
          wr32((uint32_t)(param_1 + 0x90), 0x65);
          wr32((uint32_t)(param_1 + 0x8c), rd32((uint32_t)(param_1 + 0x88)));
        }
        break;
      case 4:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100ee690(g, COW_IMG(COW_ADDR_LIFT_100DAA48), 2u, (const CowU32[]){ param_1 + 0xc, rd32((uint32_t)(param_1 + 0x80)) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar1 != -1) goto L_100da981;
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 4;
          goto L_100dac42;
        }
        break;
      case 5:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100ef020(g, COW_IMG(COW_ADDR_LIFT_100DAAF7), 2u, (const CowU32[]){ param_1 + 0xc, rd32((uint32_t)(param_1 + 0x80)) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar1 == -1) {
            bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 5;
            goto L_100dac42;
          }
    L_100da916:
          bVar2 = iVar1 == 1;
    L_100dac14:
          if (bVar2) goto L_100dac16;
        }
        break;
      case 6:
        cow_bridge_10253610(g, COW_IMG(COW_ADDR_LIFT_100DAB1D), 2u, (const CowU32[]){ 2, (CowU32)rd8((uint32_t)(param_1 + 0xc)) }, g->ecx, g->edx, g->eax, 0u);
        iVar1 = cow_bridge_100ef0e0(g, COW_IMG(COW_ADDR_LIFT_100DAB23), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 12u);
        if (iVar1 == -1) {
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 6;
          goto L_100dac42;
        }
    L_100dac56:
        if (iVar1 == 1) {
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100;
          goto L_100dac62;
        }
        break;
      case 7:
        cow_bridge_10253610(g, COW_IMG(COW_ADDR_LIFT_100DAB49), 2u, (const CowU32[]){ 7, (((uint32_t)(((CowU32)rd32((uint32_t)(param_1 + 0x88)) >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_1 + 0xc))) & 0xffu)) }, g->ecx, g->edx, g->eax, 0u);
        iVar1 = cow_bridge_100ef4c0(g, COW_IMG(COW_ADDR_LIFT_100DAB4F), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 12u);
        if (iVar1 == -1) {
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 7;
          goto L_100dac42;
        }
    L_100dabc1:
        if (iVar1 == 1) {
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100;
          goto L_100dabd1;
        }
        break;
      case 8:
        iVar1 = cow_bridge_100ef550(g, COW_IMG(COW_ADDR_LIFT_100DAB6C), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
        if (iVar1 == -1) {
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 8;
          goto L_100dac42;
        }
    L_100dac08:
        if (iVar1 == 1) {
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100;
          goto L_100dac14;
        }
        break;
      case 9:
        iVar1 = cow_bridge_100ef5b0(g, COW_IMG(COW_ADDR_LIFT_100DAB8D), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
        if (iVar1 != -1) goto L_100dac56;
        bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 9;
        goto L_100dac42;
      case 10:
        iVar1 = cow_bridge_100ef640(g, COW_IMG(COW_ADDR_LIFT_100DABAD), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
        if (iVar1 != -1) goto L_100dabc1;
        bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 10;
        goto L_100dac42;
      case 0xb:
        iVar1 = cow_bridge_100ef680(g, COW_IMG(COW_ADDR_LIFT_100DABF7), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
        if (iVar1 != -1) goto L_100dac08;
        bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0xb;
        goto L_100dac42;
      case 0xe:
        iVar1 = cow_bridge_100ef680(g, COW_IMG(COW_ADDR_LIFT_100DAC33), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
        if (iVar1 != -1) goto L_100dac56;
        bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0xe;
    L_100dac42:
        if (bVar2) {
          wr32((uint32_t)(param_1 + 0x94), 0xcb);
          cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DAC54), 2u, (const CowU32[]){ 0xcb, 0 }, g->ecx, g->edx, g->eax, 0u);
        }
        break;
      case 0x11:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100eee90(g, COW_IMG(COW_ADDR_LIFT_100DAAB3), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
          if (iVar1 == -1) {
            bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0x11;
            goto L_100dac42;
          }
          if (iVar1 != 1) break;
          cow_bridge_100f05f0(g, COW_IMG(COW_ADDR_LIFT_100DAA98), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    L_100dac16:
          wr32((uint32_t)(param_1 + 0x90), 0x65);
          wr32((uint32_t)(param_1 + 0x8c), rd32((uint32_t)(param_1 + 0x88)));
        }
        break;
      case 0x12:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100eef80(g, COW_IMG(COW_ADDR_LIFT_100DAA76), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
          if (iVar1 == -1) {
            bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0x12;
            goto L_100dac42;
          }
          if (iVar1 != 1) break;
          cow_bridge_100f05f0(g, COW_IMG(COW_ADDR_LIFT_100DAAD5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    L_100dabd7:
          wr32((uint32_t)(param_1 + 0x90), 0x65);
          wr32((uint32_t)(param_1 + 0x8c), rd32((uint32_t)(param_1 + 0x88)));
        }
        break;
      case 0x13:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100ee0a0(g, COW_IMG(COW_ADDR_LIFT_100DA902), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
          if (iVar1 != -1) goto L_100da916;
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0x13;
          goto L_100dac42;
        }
        break;
      case 0x14:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100ee900(g, COW_IMG(COW_ADDR_LIFT_100DA9B1), 2u, (const CowU32[]){ param_1 + 0xc, rd32((uint32_t)(param_1 + 0x80)) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar1 != -1) goto L_100da981;
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0x14;
          goto L_100dac42;
        }
        break;
      case 0x16:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100eeb70(g, COW_IMG(COW_ADDR_LIFT_100DA9E2), 2u, (const CowU32[]){ param_1 + 0xc, rd32((uint32_t)(param_1 + 0x80)) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar1 != -1) goto L_100da981;
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0x16;
          goto L_100dac42;
        }
        break;
      case 0x17:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
          iVar1 = cow_bridge_100eede0(g, COW_IMG(COW_ADDR_LIFT_100DAA13), 2u, (const CowU32[]){ param_1 + 0xc, rd32((uint32_t)(param_1 + 0x80)) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar1 != -1) goto L_100da981;
          bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0x17;
          goto L_100dac42;
        }
        break;
      case 0xc9:
      case 0xca:
      case 0xcb:
        wr32((uint32_t)(param_1 + 0x88), 0);
      }
      uVar3 = rd32((uint32_t)(param_1 + 0x88));
      switch(uVar3) {
      case 0xc:
        iVar1 = cow_bridge_100ef780(g, COW_IMG(COW_ADDR_LIFT_100DACAF), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
        if (iVar1 != -1) {
          if (iVar1 != 1) {
            g->eax = (CowU32)(1); return;
          }
          if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) == 100) {
            wr32((uint32_t)(param_1 + 0x8c), rd32((uint32_t)(param_1 + 0x88)));
            wr32((uint32_t)(param_1 + 0x90), 0x65);
            g->eax = (CowU32)(1); return;
          }
          g->eax = (CowU32)(1); return;
        }
        bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0xc;
        break;
      default:
        goto L_100dad3a;
      case 0x15:
        iVar1 = cow_bridge_100ef780(g, COW_IMG(COW_ADDR_LIFT_100DACF0), 1u, (const CowU32[]){ param_1 + 0xc }, g->ecx, g->edx, g->eax, 4u);
        if (iVar1 != -1) {
          if (iVar1 != 1) {
            g->eax = (CowU32)(1); return;
          }
          if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) != 100) {
            g->eax = (CowU32)(1); return;
          }
          uVar3 = rd32((uint32_t)(param_1 + 0x88));
          goto switchD_100dac9f_caseD_c9;
        }
        bVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x88)) == 0x15;
        break;
      case 0xc9:
      case 0xca:
      case 0xcb:
    switchD_100dac9f_caseD_c9:
        wr32((uint32_t)(param_1 + 0x8c), uVar3);
        wr32((uint32_t)(param_1 + 0x90), 0x65);
        goto L_100dad3a;
      }
      if (bVar2) {
        wr32((uint32_t)(param_1 + 0x94), 0xcb);
        cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100DAD11), 2u, (const CowU32[]){ 0xcb, 0 }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(1); return;
      }
    L_100dad3a:
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100da750(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100da750: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100da751: push esi */
    g->esi = g->ecx;   /* 0x100da752: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x100da754: the value the entry loaded and the decompiler dropped */
    cow_lift_100da750(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
