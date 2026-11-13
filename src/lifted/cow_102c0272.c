/* f_0x102c0272 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c0272 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c0272(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU16 uVar2;
    CowU16 uVar3;
    CowU8 bVar4;
    CowU16 uVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    CowU32 uVar8;
    CowU32 pbVar9;
    CowU32 uVar10;
    CowU32 pbVar11;
    CowU32 pbVar12;
    CowU32 pbVar13;
    CowU32 pbVar14;
    int iVar15;
    CowU32 local_24;
    CowU32 local_20;
    CowU32 local_c;
    local_c = 0;
      iVar1 = rd32((uint32_t)param_2);
      if ((rd8((uint32_t)(param_2 + 4u * (uint32_t)(2))) & 2) != 0) {
        uVar6 = (CowU32)rd16((uint32_t)(param_1 + 0x22a));
        uVar7 = (CowU32)rd16((uint32_t)(param_1 + 0x22c));
        uVar8 = (CowU32)rd16((uint32_t)(param_1 + 0x22e));
        local_20 = (CowU32)iVar1;
        if (rd8((uint32_t)(param_2 + 4u * (uint32_t)(2))) == 2) {
          if ((int8_t)rd8((uint32_t)((int)param_2 + 9)) == '\b') {
            if (((int32_t)rd32((uint32_t)(param_1 + 0x168)) == 0) || ((int32_t)rd32((uint32_t)(param_1 + 0x16c)) == 0)) {
              if (iVar1 != 0) {
                pbVar9 = param_3;
                pbVar11 = param_3;
                do {
                  bVar4 = rd8((uint32_t)pbVar11);
                  if ((bVar4 == rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(1)))) && (bVar4 == rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(2))))) {
                    bVar4 = rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(2)));
                  }
                  else {
                    local_c = 1;
                    bVar4 = (CowU8)(rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(2))) * uVar8 + rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(1))) * uVar7 + bVar4 * uVar6 >> 0xf);
                  }
                  wr8((uint32_t)pbVar9, bVar4);
                  pbVar9 = pbVar9 + 1;
                  local_20 = (CowU32)((int)local_20 + -1);
                  pbVar11 = pbVar11 + 3;
                } while (local_20 != (CowU32)0x0);
              }
            }
            else if (iVar1 != 0) {
              pbVar9 = param_3;
              pbVar11 = param_3;
              do {
                iVar15 = (int32_t)rd32((uint32_t)(param_1 + 0x16c));
                bVar4 = rd8((uint32_t)((CowU32)rd8((uint32_t)pbVar11) + iVar15));
                if ((bVar4 == rd8((uint32_t)((CowU32)rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(1))) + iVar15))) &&
                   (bVar4 == rd8((uint32_t)((CowU32)rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(2))) + iVar15)))) {
                  bVar4 = rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(2)));
                }
                else {
                  local_c = 1;
                  bVar4 = rd8((uint32_t)((rd8((uint32_t)((CowU32)rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(2))) + iVar15)) * uVar8 +
                                     rd8((uint32_t)((CowU32)rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(1))) + iVar15)) * uVar7 + bVar4 * uVar6 >> 0xf
                                    ) + (int32_t)rd32((uint32_t)(param_1 + 0x168))));
                }
                wr8((uint32_t)pbVar9, bVar4);
                pbVar9 = pbVar9 + 1;
                local_20 = (CowU32)((int)local_20 + -1);
                pbVar11 = pbVar11 + 3;
              } while (local_20 != (CowU32)0x0);
            }
          }
          else if (((int32_t)rd32((uint32_t)(param_1 + 0x178)) == 0) || ((int32_t)rd32((uint32_t)(param_1 + 0x174)) == 0)) {
            local_24 = param_3;
            if (iVar1 != 0) {
              pbVar9 = param_3;
              do {
                uVar5 = (((uint32_t)(rd8((uint32_t)pbVar9)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(1)))) & 0xffu));
                pbVar13 = pbVar9 + 2;
                pbVar11 = pbVar9 + 3;
                pbVar14 = pbVar9 + 4;
                pbVar12 = pbVar9 + 5;
                pbVar9 = pbVar9 + 6;
                if ((uVar5 != (((uint32_t)(rd8((uint32_t)pbVar13)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)pbVar11)) & 0xffu))) || (uVar5 != (((uint32_t)(rd8((uint32_t)pbVar14)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)pbVar12)) & 0xffu)))) {
                  local_c = 1;
                }
                uVar10 = (((uint32_t)(rd8((uint32_t)pbVar14)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)pbVar12)) & 0xffu)) * uVar8 + (((uint32_t)(rd8((uint32_t)pbVar13)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)pbVar11)) & 0xffu)) * uVar7 +
                         uVar5 * uVar6 >> 0xf;
                wr8((uint32_t)local_24, (CowU8)(uVar10 >> 8));
                wr8((uint32_t)(local_24 + 1u * (uint32_t)(1)), (CowU8)uVar10);
                local_24 = local_24 + 2;
                local_20 = (CowU32)((int)local_20 + -1);
              } while (local_20 != (CowU32)0x0);
            }
          }
          else {
            local_20 = param_3;
            if (iVar1 != 0) {
              pbVar9 = param_3;
              local_24 = (CowU32)iVar1;
              do {
                bVar4 = rd8((uint32_t)pbVar9);
                pbVar11 = pbVar9 + 1;
                uVar5 = (((uint32_t)(bVar4) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)pbVar11)) & 0xffu));
                pbVar12 = pbVar9 + 2;
                uVar2 = (((uint32_t)(rd8((uint32_t)pbVar12)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(3)))) & 0xffu));
                pbVar13 = pbVar9 + 4;
                uVar3 = (((uint32_t)(rd8((uint32_t)pbVar13)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(5)))) & 0xffu));
                pbVar9 = pbVar9 + 6;
                if ((uVar5 != uVar2) || (uVar5 != uVar3)) {
                  uVar10 = rd16((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x178)) +
                                     (CowU32)(rd8((uint32_t)pbVar11) >> ((CowU8)rd16((uint32_t)(param_1 + 0x158)) & 0x1f))
                                     * 4)) + (CowU32)bVar4 * 2)) * uVar6 +
                           rd16((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x178)) +
                                     ((uVar2 & 0xff) >> ((CowU8)rd16((uint32_t)(param_1 + 0x158)) & 0x1f))
                                     * 4)) + (CowU32)rd8((uint32_t)pbVar12) * 2)) * uVar7 +
                           rd16((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x178)) +
                                     ((uVar3 & 0xff) >> ((CowU8)rd16((uint32_t)(param_1 + 0x158)) & 0x1f))
                                     * 4)) + (CowU32)rd8((uint32_t)pbVar13) * 2)) * uVar8 >> 0xf;
                  local_c = 1;
                  uVar5 = rd16((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x174)) +
                                    ((uVar10 & 0xff) >> ((CowU8)rd16((uint32_t)(param_1 + 0x158)) & 0x1f))
                                    * 4)) + ((uVar10 & 0xffff) >> 8) * 2));
                }
                wr8((uint32_t)local_20, (CowU8)(uVar5 >> 8));
                wr8((uint32_t)(local_20 + 1u * (uint32_t)(1)), (CowU8)uVar5);
                local_20 = local_20 + 2;
                local_24 = (CowU32)((int)local_24 + -1);
              } while (local_24 != (CowU32)0x0);
            }
          }
        }
        if ((char)rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))) == '\x06') {
          if ((int8_t)rd8((uint32_t)((int)param_2 + 9)) == '\b') {
            if (((int32_t)rd32((uint32_t)(param_1 + 0x168)) == 0) || ((int32_t)rd32((uint32_t)(param_1 + 0x16c)) == 0)) {
              if (iVar1 != 0) {
                pbVar9 = param_3;
                iVar15 = iVar1;
                do {
                  bVar4 = rd8((uint32_t)param_3);
                  if ((bVar4 != rd8((uint32_t)(param_3 + 1u * (uint32_t)(1)))) || (bVar4 != rd8((uint32_t)(param_3 + 1u * (uint32_t)(2))))) {
                    local_c = 1;
                  }
                  wr8((uint32_t)pbVar9, (CowU8)(((CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(1))) + (CowU32)bVar4) * uVar7 + rd8((uint32_t)(param_3 + 1u * (uint32_t)(2))) * uVar8 >> 8));
                  wr8((uint32_t)(pbVar9 + 1u * (uint32_t)(1)), rd8((uint32_t)(param_3 + 1u * (uint32_t)(3))));
                  pbVar9 = pbVar9 + 2;
                  param_3 = param_3 + 4;
                  iVar15 = iVar15 + -1;
                } while (iVar15 != 0);
              }
            }
            else if (iVar1 != 0) {
              pbVar9 = param_3;
              local_24 = (CowU32)iVar1;
              do {
                iVar15 = (int32_t)rd32((uint32_t)(param_1 + 0x16c));
                bVar4 = rd8((uint32_t)((CowU32)rd8((uint32_t)param_3) + iVar15));
                if ((bVar4 != rd8((uint32_t)((CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(1))) + iVar15))) ||
                   (bVar4 != rd8((uint32_t)((CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(2))) + iVar15)))) {
                  local_c = 1;
                }
                wr8((uint32_t)pbVar9, rd8((uint32_t)((rd8((uint32_t)((CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(2))) + iVar15)) * uVar8 +
                                     rd8((uint32_t)((CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(1))) + iVar15)) * uVar7 + bVar4 * uVar6 >> 0xf
                                    ) + (int32_t)rd32((uint32_t)(param_1 + 0x168)))));
                wr8((uint32_t)(pbVar9 + 1u * (uint32_t)(1)), rd8((uint32_t)(param_3 + 1u * (uint32_t)(3))));
                pbVar9 = pbVar9 + 2;
                param_3 = param_3 + 4;
                local_24 = (CowU32)((int)local_24 + -1);
              } while (local_24 != (CowU32)0x0);
            }
          }
          else if (((int32_t)rd32((uint32_t)(param_1 + 0x178)) == 0) || ((int32_t)rd32((uint32_t)(param_1 + 0x174)) == 0)) {
            if (iVar1 != 0) {
              pbVar9 = param_3;
              pbVar11 = param_3;
              param_3 = (CowU32)iVar1;
              do {
                uVar5 = (((uint32_t)(rd8((uint32_t)pbVar9)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(1)))) & 0xffu));
                if ((uVar5 != (((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(2)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(3)))) & 0xffu))) || (uVar5 != (((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(4)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(5)))) & 0xffu)))
                   ) {
                  local_c = 1;
                }
                uVar10 = (((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(4)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(5)))) & 0xffu)) * uVar8 + (((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(2)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(3)))) & 0xffu)) * uVar7 +
                         uVar5 * uVar6 >> 0xf;
                wr8((uint32_t)pbVar11, (CowU8)(uVar10 >> 8));
                wr8((uint32_t)(pbVar11 + 1u * (uint32_t)(1)), (CowU8)uVar10);
                wr8((uint32_t)(pbVar11 + 1u * (uint32_t)(2)), rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(6))));
                wr8((uint32_t)(pbVar11 + 1u * (uint32_t)(3)), rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(7))));
                pbVar11 = pbVar11 + 4;
                pbVar9 = pbVar9 + 8;
                param_3 = (CowU32)((int)param_3 + -1);
              } while (param_3 != (CowU32)0x0);
            }
          }
          else if (iVar1 != 0) {
            pbVar9 = param_3;
            local_20 = (CowU32)iVar1;
            do {
              uVar5 = (((uint32_t)(rd8((uint32_t)pbVar9)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(1)))) & 0xffu));
              uVar2 = (((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(2)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(3)))) & 0xffu));
              uVar3 = (((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(4)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(5)))) & 0xffu));
              if ((uVar5 != uVar2) || (uVar5 != uVar3)) {
                uVar10 = rd16((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x178)) +
                                   (CowU32)(rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(1))) >> ((CowU8)rd16((uint32_t)(param_1 + 0x158)) & 0x1f))
                                   * 4)) + (CowU32)rd8((uint32_t)pbVar9) * 2)) * uVar6 +
                         rd16((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x178)) +
                                   ((uVar2 & 0xff) >> ((CowU8)rd16((uint32_t)(param_1 + 0x158)) & 0x1f)) *
                                   4)) + (CowU32)rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(2))) * 2)) * uVar7 +
                         rd16((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x178)) +
                                   ((uVar3 & 0xff) >> ((CowU8)rd16((uint32_t)(param_1 + 0x158)) & 0x1f)) *
                                   4)) + (CowU32)rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(4))) * 2)) * uVar8 >> 0xf;
                local_c = 1;
                uVar5 = rd16((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x174)) +
                                  ((uVar10 & 0xff) >> ((CowU8)rd16((uint32_t)(param_1 + 0x158)) & 0x1f)) *
                                  4)) + ((uVar10 & 0xffff) >> 8) * 2));
              }
              wr8((uint32_t)param_3, (CowU8)(uVar5 >> 8));
              wr8((uint32_t)(param_3 + 1u * (uint32_t)(1)), (CowU8)uVar5);
              wr8((uint32_t)(param_3 + 1u * (uint32_t)(2)), rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(6))));
              wr8((uint32_t)(param_3 + 1u * (uint32_t)(3)), rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(7))));
              param_3 = param_3 + 4;
              pbVar9 = pbVar9 + 8;
              local_20 = (CowU32)((int)local_20 + -1);
            } while (local_20 != (CowU32)0x0);
          }
        }
        wr8((uint32_t)((int)param_2 + 10), (int8_t)rd8((uint32_t)((int)param_2 + 10)) + -2);
        wr8((uint32_t)(param_2 + 4u * (uint32_t)(2)), rd8((uint32_t)(param_2 + 4u * (uint32_t)(2))) & 0xfd);
        bVar4 = (int8_t)rd8((uint32_t)((int)param_2 + 9)) * (int8_t)rd8((uint32_t)((int)param_2 + 10));
        wr8((uint32_t)((int)param_2 + 0xb), bVar4);
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(1)), (CowU32)bVar4 * iVar1 + 7 >> 3);
      }
      g->eax = (CowU32)(local_c); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c0272(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c0272: push ebp */
    g->ebp = g->esp;                       /* 0x102c0273: mov ebp, esp */
    g->esp -= 0x24u;                      /* 0x102c0275: 36 bytes of locals */
    g->edx = param_3;   /* 0x102c0278: the value the entry loaded and the decompiler dropped */
    cow_lift_102c0272(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->edx = (CowU32)(param_3);   /* what edx holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
