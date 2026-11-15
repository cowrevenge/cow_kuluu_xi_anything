/* f_0x102c8dbf - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c8dbf (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c8dbf(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU8 bVar2;
    CowU32 piVar3;
    CowU32 puVar4;
    int iVar5;
    int iVar6;
    CowU32 piVar7;
    CowU32 uVar8;
    CowU32 puVar9;
    CowU32 puVar10;
    CowU32 local_18;
    CowU32 local_14;
    CowU32 local_10;
    CowU32 local_c;
    CowU32 local_8;
    piVar7 = param_2;
      iVar6 = param_1;
      local_8 = (CowU32)rd32((uint32_t)param_2);
      local_c = rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
      puVar10 = rd8((uint32_t)(param_1 + 0x34));
      param_2 = rd32((uint32_t)(param_1 + 0x20));
      piVar3 = rd32((uint32_t)(param_1 + 4));
      if (puVar10 < rd8((uint32_t)(param_1 + 0x30))) {
        local_10 = rd8((uint32_t)(param_1 + 0x30)) + (-1 - (int)puVar10);
      }
      else {
        local_10 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x2c)) - (int)puVar10);
      }
      param_1 = rd32((uint32_t)(param_1 + 0x1c));
      do {
        puVar9 = puVar10;
        switch(rd32((uint32_t)piVar3)) {
        case 0:
          if (((CowU32)0x101 < local_10) && (9 < local_c)) {
            wr32((uint32_t)(iVar6 + 0x20), param_2);
            wr32((uint32_t)(iVar6 + 0x1c), param_1);
            wr32((uint32_t)(piVar7 + 4u * (uint32_t)(1)), local_c);
            iVar5 = rd32((uint32_t)piVar7);
            wr32((uint32_t)piVar7, (int)local_8);
            wr32((uint32_t)(piVar7 + 4u * (uint32_t)(2)), (int)(local_8 + (rd32((uint32_t)(piVar7 + 4u * (uint32_t)(2))) - iVar5)));
            wr8((uint32_t)(iVar6 + 0x34), puVar10);
            param_3 = cow_bridge_102c994c(g, COW_IMG(COW_ADDR_LIFT_102C8E5E), 6u, (const CowU32[]){ (char)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(4))), rd8((uint32_t)((int)piVar3 + 0x11)), rd32((uint32_t)(piVar3 + 4u * (uint32_t)(5))), rd32((uint32_t)(piVar3 + 4u * (uint32_t)(6))), iVar6, piVar7 }, g->ecx, g->edx, g->eax, 0u);
            local_8 = (CowU32)rd32((uint32_t)piVar7);
            local_c = rd32((uint32_t)(piVar7 + 4u * (uint32_t)(1)));
            puVar10 = rd8((uint32_t)(iVar6 + 0x34));
            param_2 = rd32((uint32_t)(iVar6 + 0x20));
            param_1 = rd32((uint32_t)(iVar6 + 0x1c));
            if (puVar10 < rd8((uint32_t)(iVar6 + 0x30))) {
              local_10 = rd8((uint32_t)(iVar6 + 0x30)) + (-1 - (int)puVar10);
            }
            else {
              local_10 = (CowU32)((int32_t)rd32((uint32_t)(iVar6 + 0x2c)) - (int)puVar10);
            }
            if (param_3 != 0) {
              wr32((uint32_t)piVar3, (CowU32)(param_3 != 1) * 2 + 7);
              break;
            }
          }
          wr32((uint32_t)(piVar3 + 4u * (uint32_t)(3)), (CowU32)rd8((uint32_t)(piVar3 + 4u * (uint32_t)(4))));
          wr32((uint32_t)(piVar3 + 4u * (uint32_t)(2)), rd32((uint32_t)(piVar3 + 4u * (uint32_t)(5))));
          wr32((uint32_t)piVar3, 1);
        case 1:
          for (; param_1 < (CowU32)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(3))); param_1 = param_1 + 8) {
            if (local_c == 0) goto L_102c924e;
            param_3 = 0;
            local_c = local_c - 1;
            param_2 = (CowU32)((CowU32)param_2 | (CowU32)rd8((uint32_t)local_8) << ((CowU8)param_1 & 0x1f));
            local_8 = local_8 + 1;
          }
          local_18 = (CowU32)(rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))) + (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CAC48) + rd32((uint32_t)(piVar3 + 4u * (uint32_t)(3))) * 4)) & (CowU32)param_2) * 8
                             );
          param_1 = param_1 - rd8((uint32_t)(local_18 + 1u * (uint32_t)(1)));
          param_2 = (CowU32)((CowU32)param_2 >> (rd8((uint32_t)(local_18 + 1u * (uint32_t)(1))) & 0x1f));
          bVar2 = rd8((uint32_t)local_18);
          uVar8 = (CowU32)bVar2;
          if (uVar8 == 0) {
            iVar5 = (int32_t)rd32((uint32_t)(local_18 + 4));
            wr32((uint32_t)piVar3, 6);
            wr32((uint32_t)(piVar3 + 4u * (uint32_t)(2)), iVar5);
          }
          else if ((bVar2 & 0x10) == 0) {
            if ((bVar2 & 0x40) == 0) {
    L_102c9042:
              wr32((uint32_t)(piVar3 + 4u * (uint32_t)(3)), uVar8);
              wr32((uint32_t)(piVar3 + 4u * (uint32_t)(2)), (int)(local_18 + (int32_t)rd32((uint32_t)(local_18 + 4)) * 8));
            }
            else {
              if ((bVar2 & 0x20) == 0) {
                wr32((uint32_t)piVar3, 9);
                wr32((uint32_t)(piVar7 + 4u * (uint32_t)(6)), (int)COW_IMG(COW_ADDR_LIFT_103C9A30));
    switchD_102c8e0a_caseD_9:
                param_3 = -3;
                puVar9 = puVar10;
                goto L_102c92bd;
              }
              wr32((uint32_t)piVar3, 7);
            }
          }
          else {
            wr32((uint32_t)(piVar3 + 4u * (uint32_t)(2)), uVar8 & 0xf);
            wr32((uint32_t)(piVar3 + 4u * (uint32_t)(1)), (int32_t)rd32((uint32_t)(local_18 + 4)));
            wr32((uint32_t)piVar3, 2);
          }
          break;
        case 2:
          for (; param_1 < (CowU32)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))); param_1 = param_1 + 8) {
            if (local_c == 0) goto L_102c924e;
            param_3 = 0;
            local_c = local_c - 1;
            param_2 = (CowU32)((CowU32)param_2 | (CowU32)rd8((uint32_t)local_8) << ((CowU8)param_1 & 0x1f));
            local_8 = local_8 + 1;
          }
          uVar8 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CAC48) + rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))) * 4)) & (CowU32)param_2;
          wr32((uint32_t)piVar3, 3);
          param_2 = (CowU32)((CowU32)param_2 >> ((CowU8)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))) & 0x1f));
          wr32((uint32_t)(piVar3 + 4u * (uint32_t)(1)), rd32((uint32_t)(piVar3 + 4u * (uint32_t)(1))) + uVar8);
          param_1 = param_1 - rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2)));
          wr32((uint32_t)(piVar3 + 4u * (uint32_t)(3)), (CowU32)rd8((uint32_t)((int)piVar3 + 0x11)));
          wr32((uint32_t)(piVar3 + 4u * (uint32_t)(2)), rd32((uint32_t)(piVar3 + 4u * (uint32_t)(6))));
        case 3:
          for (; param_1 < (CowU32)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(3))); param_1 = param_1 + 8) {
            if (local_c == 0) goto L_102c924e;
            param_3 = 0;
            local_c = local_c - 1;
            param_2 = (CowU32)((CowU32)param_2 | (CowU32)rd8((uint32_t)local_8) << ((CowU8)param_1 & 0x1f));
            local_8 = local_8 + 1;
          }
          local_18 = (CowU32)(rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))) + (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CAC48) + rd32((uint32_t)(piVar3 + 4u * (uint32_t)(3))) * 4)) & (CowU32)param_2) * 8
                             );
          param_1 = param_1 - rd8((uint32_t)(local_18 + 1u * (uint32_t)(1)));
          param_2 = (CowU32)((CowU32)param_2 >> (rd8((uint32_t)(local_18 + 1u * (uint32_t)(1))) & 0x1f));
          bVar2 = rd8((uint32_t)local_18);
          uVar8 = (CowU32)bVar2;
          if ((bVar2 & 0x10) == 0) {
            if ((bVar2 & 0x40) != 0) {
              wr32((uint32_t)piVar3, 9);
              wr32((uint32_t)(piVar7 + 4u * (uint32_t)(6)), (int)COW_IMG(COW_ADDR_LIFT_103C9A18));
              goto switchD_102c8e0a_caseD_9;
            }
            goto L_102c9042;
          }
          wr32((uint32_t)(piVar3 + 4u * (uint32_t)(2)), uVar8 & 0xf);
          wr32((uint32_t)(piVar3 + 4u * (uint32_t)(3)), (int32_t)rd32((uint32_t)(local_18 + 4)));
          wr32((uint32_t)piVar3, 4);
          break;
        case 4:
          for (; param_1 < (CowU32)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))); param_1 = param_1 + 8) {
            if (local_c == 0) goto L_102c924e;
            param_3 = 0;
            local_c = local_c - 1;
            param_2 = (CowU32)((CowU32)param_2 | (CowU32)rd8((uint32_t)local_8) << ((CowU8)param_1 & 0x1f));
            local_8 = local_8 + 1;
          }
          uVar8 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CAC48) + rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))) * 4)) & (CowU32)param_2;
          wr32((uint32_t)piVar3, 5);
          param_2 = (CowU32)((CowU32)param_2 >> ((CowU8)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))) & 0x1f));
          wr32((uint32_t)(piVar3 + 4u * (uint32_t)(3)), rd32((uint32_t)(piVar3 + 4u * (uint32_t)(3))) + uVar8);
          param_1 = param_1 - rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2)));
        case 5:
          local_14 = puVar10 + -rd32((uint32_t)(piVar3 + 4u * (uint32_t)(3)));
          if (local_14 < rd8((uint32_t)(iVar6 + 0x28))) {
            do {
              local_14 = local_14 + ((int32_t)rd32((uint32_t)(iVar6 + 0x2c)) - (int)rd8((uint32_t)(iVar6 + 0x28)));
            } while (local_14 < rd8((uint32_t)(iVar6 + 0x28)));
          }
          iVar5 = rd32((uint32_t)(piVar3 + 4u * (uint32_t)(1)));
          while (iVar5 != 0) {
            puVar9 = puVar10;
            if (local_10 == (CowU32)0x0) {
              if (puVar10 == rd8((uint32_t)(iVar6 + 0x2c))) {
                local_10 = rd8((uint32_t)(iVar6 + 0x30));
                puVar9 = rd8((uint32_t)(iVar6 + 0x28));
                if (local_10 != puVar9) {
                  if (puVar9 < local_10) {
                    local_10 = local_10 + (-1 - (int)puVar9);
                  }
                  else {
                    local_10 = rd8((uint32_t)(iVar6 + 0x2c)) + -(int)puVar9;
                  }
                  puVar10 = puVar9;
                  if (local_10 != (CowU32)0x0) goto L_102c915f;
                }
              }
              wr8((uint32_t)(iVar6 + 0x34), puVar10);
              param_3 = cow_bridge_102c9860(g, COW_IMG(COW_ADDR_LIFT_102C910E), 3u, (const CowU32[]){ iVar6, piVar7, param_3 }, g->ecx, g->edx, g->eax, 0u);
              puVar9 = rd8((uint32_t)(iVar6 + 0x34));
              puVar10 = rd8((uint32_t)(iVar6 + 0x30));
              if (puVar9 < puVar10) {
                local_10 = puVar10 + (-1 - (int)puVar9);
              }
              else {
                local_10 = (CowU32)((int32_t)rd32((uint32_t)(iVar6 + 0x2c)) - (int)puVar9);
              }
              if ((puVar9 == rd8((uint32_t)(iVar6 + 0x2c))) &&
                 (puVar4 = rd8((uint32_t)(iVar6 + 0x28)), puVar10 != puVar4)) {
                puVar9 = puVar4;
                if (puVar4 < puVar10) {
                  local_10 = puVar10 + (-1 - (int)puVar4);
                }
                else {
                  local_10 = rd8((uint32_t)(iVar6 + 0x2c)) + -(int)puVar4;
                }
              }
              if (local_10 == (CowU32)0x0) goto L_102c92bd;
            }
    L_102c915f:
            param_3 = 0;
            wr8((uint32_t)puVar9, rd8((uint32_t)local_14));
            puVar10 = puVar9 + 1;
            local_14 = local_14 + 1;
            local_10 = local_10 + -1;
            if (local_14 == rd8((uint32_t)(iVar6 + 0x2c))) {
              local_14 = rd8((uint32_t)(iVar6 + 0x28));
            }
            piVar1 = piVar3 + 4u * (uint32_t)(1);
            wr32((uint32_t)piVar1, rd32((uint32_t)piVar1) + -1);
            iVar5 = rd32((uint32_t)piVar1);
          }
    L_102c9189:
          wr32((uint32_t)piVar3, 0);
          break;
        case 6:
          if (local_10 == (CowU32)0x0) {
            if (puVar10 == rd8((uint32_t)(iVar6 + 0x2c))) {
              local_10 = rd8((uint32_t)(iVar6 + 0x30));
              puVar9 = rd8((uint32_t)(iVar6 + 0x28));
              if (local_10 != puVar9) {
                if (puVar9 < local_10) {
                  local_10 = local_10 + (-1 - (int)puVar9);
                }
                else {
                  local_10 = rd8((uint32_t)(iVar6 + 0x2c)) + -(int)puVar9;
                }
                puVar10 = puVar9;
                if (local_10 != (CowU32)0x0) goto L_102c921b;
              }
            }
            wr8((uint32_t)(iVar6 + 0x34), puVar10);
            param_3 = cow_bridge_102c9860(g, COW_IMG(COW_ADDR_LIFT_102C91CE), 3u, (const CowU32[]){ iVar6, piVar7, param_3 }, g->ecx, g->edx, g->eax, 0u);
            puVar9 = rd8((uint32_t)(iVar6 + 0x34));
            puVar10 = rd8((uint32_t)(iVar6 + 0x30));
            if (puVar9 < puVar10) {
              local_10 = puVar10 + (-1 - (int)puVar9);
            }
            else {
              local_10 = (CowU32)((int32_t)rd32((uint32_t)(iVar6 + 0x2c)) - (int)puVar9);
            }
            if ((puVar9 == rd8((uint32_t)(iVar6 + 0x2c))) &&
               (puVar4 = rd8((uint32_t)(iVar6 + 0x28)), puVar10 != puVar4)) {
              puVar9 = puVar4;
              if (puVar4 < puVar10) {
                local_10 = puVar10 + (-1 - (int)puVar4);
              }
              else {
                local_10 = rd8((uint32_t)(iVar6 + 0x2c)) + -(int)puVar4;
              }
            }
            if (local_10 == (CowU32)0x0) goto L_102c92bd;
          }
    L_102c921b:
          param_3 = 0;
          wr8((uint32_t)puVar9, (char)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))));
          puVar10 = puVar9 + 1;
          local_10 = local_10 + -1;
          goto L_102c9189;
        case 7:
          if (7 < param_1) {
            param_1 = param_1 - 8;
            local_c = local_c + 1;
            local_8 = local_8 + -1;
          }
          wr8((uint32_t)(iVar6 + 0x34), puVar10);
          param_3 = cow_bridge_102c9860(g, COW_IMG(COW_ADDR_LIFT_102C9285), 3u, (const CowU32[]){ iVar6, piVar7, param_3 }, g->ecx, g->edx, g->eax, 0u);
          puVar10 = rd8((uint32_t)(iVar6 + 0x34));
          if (rd8((uint32_t)(iVar6 + 0x30)) == puVar10) {
            wr32((uint32_t)piVar3, 8);
    switchD_102c8e0a_caseD_8:
            param_3 = 1;
            puVar9 = puVar10;
    L_102c92bd:
            wr32((uint32_t)(iVar6 + 0x20), param_2);
            wr32((uint32_t)(iVar6 + 0x1c), param_1);
            wr32((uint32_t)(piVar7 + 4u * (uint32_t)(1)), local_c);
            puVar10 = puVar9;
    L_102c92cf:
            iVar5 = rd32((uint32_t)piVar7);
            wr32((uint32_t)piVar7, (int)local_8);
            wr32((uint32_t)(piVar7 + 4u * (uint32_t)(2)), (int)(local_8 + (rd32((uint32_t)(piVar7 + 4u * (uint32_t)(2))) - iVar5)));
          }
          else {
            wr32((uint32_t)(iVar6 + 0x20), param_2);
            wr32((uint32_t)(iVar6 + 0x1c), param_1);
            wr32((uint32_t)(piVar7 + 4u * (uint32_t)(1)), local_c);
            iVar5 = rd32((uint32_t)piVar7);
            wr32((uint32_t)piVar7, (int)local_8);
            wr32((uint32_t)(piVar7 + 4u * (uint32_t)(2)), (int)(local_8 + (rd32((uint32_t)(piVar7 + 4u * (uint32_t)(2))) - iVar5)));
          }
          wr8((uint32_t)(iVar6 + 0x34), puVar10);
          cow_bridge_102c9860(g, COW_IMG(COW_ADDR_LIFT_102C92E5), 3u, (const CowU32[]){ iVar6, piVar7, param_3 }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 8:
          goto switchD_102c8e0a_caseD_8;
        case 9:
          goto switchD_102c8e0a_caseD_9;
        default:
          param_3 = -2;
          goto L_102c92bd;
        }
      } while( 1 );
    L_102c924e:
      wr32((uint32_t)(iVar6 + 0x20), param_2);
      wr32((uint32_t)(iVar6 + 0x1c), param_1);
      wr32((uint32_t)(piVar7 + 4u * (uint32_t)(1)), 0);
      goto L_102c92cf;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c8dbf(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c8dbf: push ebp */
    g->ebp = g->esp;                       /* 0x102c8dc0: mov ebp, esp */
    g->esp -= 0x18u;                      /* 0x102c8dc2: 24 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c8dc5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c8dc6: push esi */
    g->esi = param_2;   /* 0x102c8dc7: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c8dca: push edi */
    g->edi = param_1;   /* 0x102c8dcb: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x102c8dce: register eax, replayed as the entry ran it */
    cow_lift_102c8dbf(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
