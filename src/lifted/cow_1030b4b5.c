/* f_0x1030b4b5 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1030b4b5 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1030b4b5(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 piVar2;
    CowU32 puVar3;
    int iVar4;
    CowU32 piVar5;
    CowU32 pbVar6;
    int iVar7;
    CowU32 uVar8;
    CowU32 puVar9;
    CowU32 puVar10;
    CowU32 local_18;
    CowU32 local_10;
    CowU32 local_c;
    CowU32 local_8;
    piVar5 = param_2;
      iVar4 = param_1;
      local_8 = (CowU32)rd32((uint32_t)param_2);
      local_c = rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
      puVar10 = rd8((uint32_t)(param_1 + 0x34));
      piVar2 = rd32((uint32_t)(param_1 + 4));
      param_2 = rd32((uint32_t)(param_1 + 0x20));
      if (puVar10 < rd8((uint32_t)(param_1 + 0x30))) {
        local_10 = rd8((uint32_t)(param_1 + 0x30)) + (-1 - (int)puVar10);
        param_1 = rd32((uint32_t)(param_1 + 0x1c));
      }
      else {
        local_10 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x2c)) - (int)puVar10);
        param_1 = rd32((uint32_t)(param_1 + 0x1c));
      }
      do {
        puVar9 = puVar10;
        switch(rd32((uint32_t)piVar2)) {
        case 0:
          if (((CowU32)0x101 < local_10) && (9 < local_c)) {
            wr32((uint32_t)(iVar4 + 0x20), param_2);
            wr32((uint32_t)(iVar4 + 0x1c), param_1);
            wr32((uint32_t)(piVar5 + 4u * (uint32_t)(1)), local_c);
            wr32((uint32_t)(piVar5 + 4u * (uint32_t)(2)), (int)(local_8 + (rd32((uint32_t)(piVar5 + 4u * (uint32_t)(2))) - rd32((uint32_t)piVar5))));
            wr32((uint32_t)piVar5, (int)local_8);
            wr8((uint32_t)(iVar4 + 0x34), puVar10);
            param_3 = cow_bridge_1030dcbd(g, COW_IMG(COW_ADDR_LIFT_1030B54E), 6u, (const CowU32[]){ (char)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(4))), rd8((uint32_t)((int)piVar2 + 0x11)), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(5))), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(6))), iVar4, piVar5 }, g->ecx, g->edx, g->eax, 0u);
            puVar10 = rd8((uint32_t)(iVar4 + 0x34));
            local_8 = (CowU32)rd32((uint32_t)piVar5);
            local_c = rd32((uint32_t)(piVar5 + 4u * (uint32_t)(1)));
            param_2 = rd32((uint32_t)(iVar4 + 0x20));
            param_1 = rd32((uint32_t)(iVar4 + 0x1c));
            if (puVar10 < rd8((uint32_t)(iVar4 + 0x30))) {
              local_10 = rd8((uint32_t)(iVar4 + 0x30)) + (-1 - (int)puVar10);
            }
            else {
              local_10 = (CowU32)((int32_t)rd32((uint32_t)(iVar4 + 0x2c)) - (int)puVar10);
            }
            if (param_3 != 0) {
              wr32((uint32_t)piVar2, (CowU32)(param_3 != 1) * 2 + 7);
              break;
            }
          }
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(3)), (CowU32)rd8((uint32_t)(piVar2 + 4u * (uint32_t)(4))));
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(2)), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(5))));
          wr32((uint32_t)piVar2, 1);
        case 1:
          for (; param_1 < (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))); param_1 = param_1 + 8) {
            if (local_c == 0) goto L_1030b97e;
            param_3 = 0;
            local_c = local_c - 1;
            param_2 = (CowU32)((CowU32)param_2 | (CowU32)rd8((uint32_t)local_8) << ((CowU8)param_1 & 0x1f));
            local_8 = local_8 + 1;
          }
          pbVar6 = (CowU32)(rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) + (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CFF60) + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) * 4)) & (CowU32)param_2) * 8);
          param_2 = (CowU32)((CowU32)param_2 >> (rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1))) & 0x1f));
          param_1 = param_1 - rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)));
          bVar1 = rd8((uint32_t)pbVar6);
          uVar8 = (CowU32)bVar1;
          if (uVar8 == 0) {
            pbVar6 = rd8((uint32_t)(pbVar6 + 4));
            wr32((uint32_t)piVar2, 6);
          }
          else {
            if ((bVar1 & 0x10) != 0) {
              wr32((uint32_t)(piVar2 + 4u * (uint32_t)(2)), uVar8 & 0xf);
              wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), (int32_t)rd32((uint32_t)(pbVar6 + 4)));
              wr32((uint32_t)piVar2, 2);
              break;
            }
            if ((bVar1 & 0x40) != 0) {
              if ((bVar1 & 0x20) == 0) {
                wr32((uint32_t)piVar2, 9);
                wr32((uint32_t)(piVar5 + 4u * (uint32_t)(6)), (int)"invalid literal/length code");
    switchD_1030b4fa_caseD_9:
                param_3 = -3;
                puVar9 = puVar10;
                goto L_1030b92e;
              }
              wr32((uint32_t)piVar2, 7);
              break;
            }
            wr32((uint32_t)(piVar2 + 4u * (uint32_t)(3)), uVar8);
            pbVar6 = pbVar6 + (int32_t)rd32((uint32_t)(pbVar6 + 4)) * 8;
          }
    L_1030b73a:
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(2)), (int)pbVar6);
          break;
        case 2:
          for (; param_1 < (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))); param_1 = param_1 + 8) {
            if (local_c == 0) goto L_1030b97e;
            param_3 = 0;
            local_c = local_c - 1;
            param_2 = (CowU32)((CowU32)param_2 | (CowU32)rd8((uint32_t)local_8) << ((CowU8)param_1 & 0x1f));
            local_8 = local_8 + 1;
          }
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) + (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CFF60) + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) * 4)) & (CowU32)param_2));
          param_2 = (CowU32)((CowU32)param_2 >> ((CowU8)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) & 0x1f));
          param_1 = param_1 - rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2)));
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(3)), (CowU32)rd8((uint32_t)((int)piVar2 + 0x11)));
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(2)), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(6))));
          wr32((uint32_t)piVar2, 3);
        case 3:
          for (; param_1 < (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))); param_1 = param_1 + 8) {
            if (local_c == 0) goto L_1030b97e;
            param_3 = 0;
            local_c = local_c - 1;
            param_2 = (CowU32)((CowU32)param_2 | (CowU32)rd8((uint32_t)local_8) << ((CowU8)param_1 & 0x1f));
            local_8 = local_8 + 1;
          }
          pbVar6 = (CowU32)(rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) + (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CFF60) + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) * 4)) & (CowU32)param_2) * 8);
          param_2 = (CowU32)((CowU32)param_2 >> (rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1))) & 0x1f));
          param_1 = param_1 - rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)));
          bVar1 = rd8((uint32_t)pbVar6);
          if ((bVar1 & 0x10) == 0) {
            if ((bVar1 & 0x40) != 0) {
              wr32((uint32_t)piVar2, 9);
              wr32((uint32_t)(piVar5 + 4u * (uint32_t)(6)), (int)"invalid distance code");
              goto switchD_1030b4fa_caseD_9;
            }
            wr32((uint32_t)(piVar2 + 4u * (uint32_t)(3)), (CowU32)bVar1);
            pbVar6 = pbVar6 + (int32_t)rd32((uint32_t)(pbVar6 + 4)) * 8;
            goto L_1030b73a;
          }
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(2)), bVar1 & 0xf);
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(3)), (int32_t)rd32((uint32_t)(pbVar6 + 4)));
          wr32((uint32_t)piVar2, 4);
          break;
        case 4:
          for (; param_1 < (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))); param_1 = param_1 + 8) {
            if (local_c == 0) goto L_1030b97e;
            param_3 = 0;
            local_c = local_c - 1;
            param_2 = (CowU32)((CowU32)param_2 | (CowU32)rd8((uint32_t)local_8) << ((CowU8)param_1 & 0x1f));
            local_8 = local_8 + 1;
          }
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(3)), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3))) + (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CFF60) + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) * 4)) & (CowU32)param_2));
          param_2 = (CowU32)((CowU32)param_2 >> ((CowU8)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))) & 0x1f));
          param_1 = param_1 - rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2)));
          wr32((uint32_t)piVar2, 5);
        case 5:
          if ((CowU32)((int)puVar10 - (int32_t)rd32((uint32_t)(iVar4 + 0x28))) < (CowU32)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3)))) {
            iVar7 = ((int32_t)rd32((uint32_t)(iVar4 + 0x2c)) - (int32_t)rd32((uint32_t)(iVar4 + 0x28))) - rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3)));
          }
          else {
            iVar7 = -rd32((uint32_t)(piVar2 + 4u * (uint32_t)(3)));
          }
          local_18 = puVar10 + iVar7;
          while (rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) != 0) {
            puVar9 = puVar10;
            if (local_10 == (CowU32)0x0) {
              if (puVar10 == rd8((uint32_t)(iVar4 + 0x2c))) {
                local_10 = rd8((uint32_t)(iVar4 + 0x30));
                puVar9 = rd8((uint32_t)(iVar4 + 0x28));
                if (local_10 != puVar9) {
                  if (puVar9 < local_10) {
                    local_10 = local_10 + (-1 - (int)puVar9);
                  }
                  else {
                    local_10 = rd8((uint32_t)(iVar4 + 0x2c)) + -(int)puVar9;
                  }
                  puVar10 = puVar9;
                  if (local_10 != (CowU32)0x0) goto L_1030b851;
                }
              }
              wr8((uint32_t)(iVar4 + 0x34), puVar10);
              param_3 = cow_bridge_1030bf60(g, COW_IMG(COW_ADDR_LIFT_1030B800), 3u, (const CowU32[]){ iVar4, piVar5, param_3 }, g->ecx, g->edx, g->eax, 0u);
              puVar9 = rd8((uint32_t)(iVar4 + 0x34));
              puVar10 = rd8((uint32_t)(iVar4 + 0x30));
              if (puVar9 < puVar10) {
                local_10 = puVar10 + (-1 - (int)puVar9);
              }
              else {
                local_10 = (CowU32)((int32_t)rd32((uint32_t)(iVar4 + 0x2c)) - (int)puVar9);
              }
              if ((puVar9 == rd8((uint32_t)(iVar4 + 0x2c))) &&
                 (puVar3 = rd8((uint32_t)(iVar4 + 0x28)), puVar10 != puVar3)) {
                puVar9 = puVar3;
                if (puVar3 < puVar10) {
                  local_10 = puVar10 + (-1 - (int)puVar3);
                }
                else {
                  local_10 = rd8((uint32_t)(iVar4 + 0x2c)) + -(int)puVar3;
                }
              }
              if (local_10 == (CowU32)0x0) goto L_1030b92e;
            }
    L_1030b851:
            param_3 = 0;
            wr8((uint32_t)puVar9, rd8((uint32_t)local_18));
            puVar10 = puVar9 + 1;
            local_18 = local_18 + 1;
            local_10 = local_10 + -1;
            if (local_18 == rd8((uint32_t)(iVar4 + 0x2c))) {
              local_18 = rd8((uint32_t)(iVar4 + 0x28));
            }
            wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) + -1);
          }
          wr32((uint32_t)piVar2, 0);
          break;
        case 6:
          if (local_10 != (CowU32)0x0) goto L_1030b910;
          if (puVar10 == rd8((uint32_t)(iVar4 + 0x2c))) {
            local_10 = rd8((uint32_t)(iVar4 + 0x30));
            puVar9 = rd8((uint32_t)(iVar4 + 0x28));
            if (local_10 != puVar9) {
              if (puVar9 < local_10) {
                local_10 = local_10 + (-1 - (int)puVar9);
              }
              else {
                local_10 = rd8((uint32_t)(iVar4 + 0x2c)) + -(int)puVar9;
              }
              puVar10 = puVar9;
              if (local_10 != (CowU32)0x0) goto L_1030b910;
            }
          }
          wr8((uint32_t)(iVar4 + 0x34), puVar10);
          param_3 = cow_bridge_1030bf60(g, COW_IMG(COW_ADDR_LIFT_1030B8BF), 3u, (const CowU32[]){ iVar4, piVar5, param_3 }, g->ecx, g->edx, g->eax, 0u);
          puVar9 = rd8((uint32_t)(iVar4 + 0x34));
          puVar10 = rd8((uint32_t)(iVar4 + 0x30));
          if (puVar9 < puVar10) {
            local_10 = puVar10 + (-1 - (int)puVar9);
          }
          else {
            local_10 = (CowU32)((int32_t)rd32((uint32_t)(iVar4 + 0x2c)) - (int)puVar9);
          }
          if ((puVar9 == rd8((uint32_t)(iVar4 + 0x2c))) &&
             (puVar3 = rd8((uint32_t)(iVar4 + 0x28)), puVar10 != puVar3)) {
            puVar9 = puVar3;
            if (puVar3 < puVar10) {
              local_10 = puVar10 + (-1 - (int)puVar3);
            }
            else {
              local_10 = rd8((uint32_t)(iVar4 + 0x2c)) + -(int)puVar3;
            }
          }
          if (local_10 == (CowU32)0x0) goto L_1030b92e;
    L_1030b910:
          param_3 = 0;
          wr8((uint32_t)puVar9, (char)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2))));
          puVar10 = puVar9 + 1;
          local_10 = local_10 + -1;
          wr32((uint32_t)piVar2, 0);
          break;
        case 7:
          if (7 < param_1) {
            param_1 = param_1 - 8;
            local_c = local_c + 1;
            local_8 = local_8 + -1;
          }
          wr8((uint32_t)(iVar4 + 0x34), puVar10);
          param_3 = cow_bridge_1030bf60(g, COW_IMG(COW_ADDR_LIFT_1030B956), 3u, (const CowU32[]){ iVar4, piVar5, param_3 }, g->ecx, g->edx, g->eax, 12u);
          puVar10 = rd8((uint32_t)(iVar4 + 0x34));
          if (rd8((uint32_t)(iVar4 + 0x30)) == puVar10) {
            wr32((uint32_t)piVar2, 8);
    switchD_1030b4fa_caseD_8:
            param_3 = 1;
            puVar9 = puVar10;
    L_1030b92e:
            wr32((uint32_t)(iVar4 + 0x20), param_2);
            wr32((uint32_t)(iVar4 + 0x1c), param_1);
            wr32((uint32_t)(piVar5 + 4u * (uint32_t)(1)), local_c);
            puVar10 = puVar9;
    L_1030b940:
            iVar7 = rd32((uint32_t)piVar5);
            wr32((uint32_t)piVar5, (int)local_8);
            wr32((uint32_t)(piVar5 + 4u * (uint32_t)(2)), (int)(local_8 + (rd32((uint32_t)(piVar5 + 4u * (uint32_t)(2))) - iVar7)));
          }
          else {
            wr32((uint32_t)(iVar4 + 0x20), param_2);
            wr32((uint32_t)(iVar4 + 0x1c), param_1);
            wr32((uint32_t)(piVar5 + 4u * (uint32_t)(1)), local_c);
            iVar7 = rd32((uint32_t)piVar5);
            wr32((uint32_t)piVar5, (int)local_8);
            wr32((uint32_t)(piVar5 + 4u * (uint32_t)(2)), (int)(local_8 + (rd32((uint32_t)(piVar5 + 4u * (uint32_t)(2))) - iVar7)));
          }
          wr8((uint32_t)(iVar4 + 0x34), puVar10);
          cow_bridge_1030bf60(g, COW_IMG(COW_ADDR_LIFT_1030B9B5), 3u, (const CowU32[]){ iVar4, piVar5, param_3 }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 8:
          goto switchD_1030b4fa_caseD_8;
        case 9:
          goto switchD_1030b4fa_caseD_9;
        default:
          param_3 = -2;
          goto L_1030b92e;
        }
      } while( 1 );
    L_1030b97e:
      wr32((uint32_t)(iVar4 + 0x20), param_2);
      wr32((uint32_t)(iVar4 + 0x1c), param_1);
      wr32((uint32_t)(piVar5 + 4u * (uint32_t)(1)), 0);
      goto L_1030b940;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1030b4b5(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1030b4b5: push ebp */
    g->ebp = g->esp;                       /* 0x1030b4b6: mov ebp, esp */
    g->esp -= 0x18u;                      /* 0x1030b4b8: 24 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1030b4bb: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1030b4bc: push esi */
    g->esi = param_3;   /* 0x1030b4bd: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x1030b4c0: register eax, replayed as the entry ran it */
    cow_lift_1030b4b5(g, param_1, param_2, param_3);

    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
