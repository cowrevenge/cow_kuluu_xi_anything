/* f_0x102f0a24 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f0a24 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f0a24(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar2;
    CowU16 uVar3;
    CowU32 pbVar4;
    CowU32 uVar5;
    CowU8 bVar6;
    int iVar7;
    int iVar8;
    CowU32 uVar9;
    int iVar10;
    CowU32 uVar11;
    int local_18[4];
    CowU32 local_8;
    _Bool bVar1;
      
      bVar2 = rd8((uint32_t)((int)param_1 + 8));
      pbVar4 = (CowU32)(CowU32)bVar2;
      if (bVar2 != 3) {
        bVar1 = 0;
        iVar10 = rd32((uint32_t)param_1);
        if ((bVar2 & 2) == 0) {
          local_18[0] = (CowU32)rd8((uint32_t)((int)param_1 + 9)) - (CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(3)));
          uVar9 = 1;
        }
        else {
          local_18[0] = (CowU32)rd8((uint32_t)((int)param_1 + 9)) - (CowU32)rd8((uint32_t)param_3);
          local_18[1] = (CowU32)rd8((uint32_t)((int)param_1 + 9)) - (CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(1)));
          local_18[2] = (CowU32)rd8((uint32_t)((int)param_1 + 9)) - (CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(2)));
          uVar9 = 3;
        }
        pbVar4 = param_3;
        iVar8 = local_18[0];
        if ((rd8((uint32_t)((int)param_1 + 8)) & 4) != 0) {
          pbVar4 = (CowU32)((CowU32)rd8((uint32_t)((int)param_1 + 9)) - (CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(4))));
          local_18[uVar9] = (int)pbVar4;
          uVar9 = uVar9 + 1;
          iVar8 = local_18[0];
        }
        iVar7 = 0;
        if (uVar9 != 0) {
          do {
            pbVar4 = (CowU32)(local_18 + iVar7);
            if (((int32_t)(rd32((uint32_t)pbVar4)) < (int32_t)(1))) {
              wr8((uint32_t)(pbVar4 + 1u * (uint32_t)(0)), 0);
              wr8((uint32_t)(pbVar4 + 1u * (uint32_t)(1)), 0);
              wr8((uint32_t)(pbVar4 + 1u * (uint32_t)(2)), 0);
              wr8((uint32_t)(pbVar4 + 1u * (uint32_t)(3)), 0);
              iVar8 = local_18[0];
            }
            else {
              bVar1 = 1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)uVar9);
          if (bVar1) {
            uVar5 = (CowU32)rd8((uint32_t)((int)param_1 + 9));
            if (uVar5 == 2) {
              pbVar4 = param_2;
              for (iVar10 = rd32((uint32_t)((int)param_1 + 4)); iVar10 != 0; iVar10 = iVar10 + -1) {
                wr8((uint32_t)pbVar4, rd8((uint32_t)pbVar4) >> 1 & 0x55);
                pbVar4 = pbVar4 + 1;
              }
            }
            else if (uVar5 == 4) {
              bVar6 = (CowU8)iVar8;
              bVar2 = (CowU8)(0xf0 >> (bVar6 & 0x1f)) & 0xf0 | (CowU8)(0xf >> (bVar6 & 0x1f));
              pbVar4 = (CowU32)(CowU32)bVar2;
              for (iVar10 = rd32((uint32_t)((int)param_1 + 4)); iVar10 != 0; iVar10 = iVar10 + -1) {
                wr8((uint32_t)param_2, rd8((uint32_t)param_2) >> (bVar6 & 0x1f) & bVar2);
                param_2 = param_2 + 1;
              }
            }
            else if (uVar5 == 8) {
              uVar5 = iVar10 * uVar9;
              uVar11 = 0;
              pbVar4 = (CowU32)0x0;
              if (uVar5 != 0) {
                do {
                  pbVar4 = (CowU32)(uVar11 / uVar9);
                  wr8((uint32_t)param_2, rd8((uint32_t)param_2) >> (rd8((uint32_t)(local_18 + uVar11 % uVar9)) & 0x1f));
                  param_2 = param_2 + 1;
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar5);
              }
            }
            else {
              pbVar4 = (CowU32)(uVar5 - 0x10);
              if (pbVar4 == (CowU32)0x0) {
                local_8 = (CowU32)(iVar10 * uVar9);
                param_1 = (CowU32)0x0;
                if (local_8 != (CowU32)0x0) {
                  do {
                    uVar3 = (((uint32_t)(rd8((uint32_t)param_2)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_2 + 1u * (uint32_t)(1)))) & 0xffu)) >>
                            ((CowU8)local_18[(CowU32)param_1 % uVar9] & 0x1f);
                    wr8((uint32_t)param_2, (CowU8)(uVar3 >> 8));
                    wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), (CowU8)uVar3);
                    param_2 = param_2 + 2;
                    pbVar4 = param_1 + 1;
                    param_1 = pbVar4;
                  } while (pbVar4 < local_8);
                }
              }
            }
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(pbVar4) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx, esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f0a24(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102f0a24: push ebp */
    g->ebp = g->esp;                       /* 0x102f0a25: mov ebp, esp */
    g->esp -= 0x14u;                      /* 0x102f0a27: 20 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f0a2a: push esi */
    g->esi = param_1;   /* 0x102f0a2b: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102f0a2e: register eax, replayed as the entry ran it */
    cow_lift_102f0a24(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
