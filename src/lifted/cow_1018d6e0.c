/* f_0x1018d6e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018d6e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018d6e0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    char cVar2;
    CowU32 pbVar3;
    int iVar4;
    int iVar5;
    CowU32 pcVar6;
    int iVar7;
    CowU32 pbVar8;
    CowU32 pbVar9;
    CowU32 pcVar10;
    _Bool bVar11;
      
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4));
      iVar7 = 0;
      if (0 < iVar5) {
        pbVar9 = (CowU32)(param_1 + 8);
        do {
          pbVar3 = pbVar9;
          pbVar8 = param_2;
          do {
            bVar1 = rd8((uint32_t)pbVar3);
            bVar11 = bVar1 < rd8((uint32_t)pbVar8);
            if (bVar1 != rd8((uint32_t)pbVar8)) {
    L_1018d71f:
              iVar4 = (1 - (CowU32)bVar11) - (CowU32)(bVar11 != 0);
              goto L_1018d724;
            }
            if (bVar1 == 0) break;
            bVar1 = rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(1)));
            bVar11 = bVar1 < rd8((uint32_t)(pbVar8 + 1u * (uint32_t)(1)));
            if (bVar1 != rd8((uint32_t)(pbVar8 + 1u * (uint32_t)(1)))) goto L_1018d71f;
            pbVar3 = pbVar3 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
    L_1018d724:
          if (iVar4 == 0) {
            if (iVar7 == 0) {
              g->eax = (CowU32)(1); return;
            }
            if (0 < iVar7) {
              pcVar10 = (CowU32)(iVar7 * 0x10 + -8 + param_1);
              do {
                pcVar6 = pcVar10;
                do {
                  cVar2 = rd8((uint32_t)pcVar6);
                  wr8((uint32_t)(pcVar6 + 1u * (uint32_t)(0x10)), cVar2);
                  pcVar6 = pcVar6 + 1;
                } while (cVar2 != '\0');
                pcVar10 = pcVar10 + -0x10;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            iVar5 = (param_1 + 8) - (int)param_2;
            do {
              bVar1 = rd8((uint32_t)param_2);
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(iVar5)), bVar1);
              param_2 = param_2 + 1;
            } while (bVar1 != 0);
            wr8((uint32_t)(param_1 + 0x10c), 1);
            g->eax = (CowU32)(1); return;
          }
          iVar7 = iVar7 + 1;
          pbVar9 = pbVar9 + 0x10;
        } while (iVar7 < iVar5);
      }
      if (iVar5 < 8) {
        wr32((uint32_t)(param_1 + 4), iVar5 + 1);
      }
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 4)) + -1;
      if (0 < iVar5) {
        pcVar10 = (CowU32)(iVar5 * 0x10 + -8 + param_1);
        do {
          pcVar6 = pcVar10;
          do {
            cVar2 = rd8((uint32_t)pcVar6);
            wr8((uint32_t)(pcVar6 + 1u * (uint32_t)(0x10)), cVar2);
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          pcVar10 = pcVar10 + -0x10;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = (param_1 + 8) - (int)param_2;
      do {
        bVar1 = rd8((uint32_t)param_2);
        wr8((uint32_t)(param_2 + 1u * (uint32_t)(iVar5)), bVar1);
        param_2 = param_2 + 1;
      } while (bVar1 != 0);
      wr8((uint32_t)(param_1 + 0x10c), 1);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018d6e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1018d6e0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1018d6e1: push ebx */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1018d6e2: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1018d6e5: push ebp */
    g->ebp = 0u;   /* 0x1018d6e6: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018d6e8: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1018d6e9: push edi */
    cow_lift_1018d6e0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
