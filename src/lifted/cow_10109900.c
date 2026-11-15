/* f_0x10109900 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10109900 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10109900(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    CowU8 bVar2;
    CowU8 bVar3;
    short sVar4;
    int iVar5;
    int iVar6;
    CowU32 pbVar7;
    CowU32 pbVar8;
    CowU32 pbVar9;
    if ((int32_t)rd32((uint32_t)((int)param_1 + 4)) == 0) {
        pbVar7 = (CowU32)0x0;
      }
      else {
        pbVar7 = rd8((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 4)) + 4));
      }
      sVar4 = 0;
      do {
        if (rd8((uint32_t)pbVar7) == 0) {
          g->eax = (CowU32)(-1); return;
        }
        if ((rd8((uint32_t)pbVar7) == rd8((uint32_t)param_2)) && (pbVar8 = pbVar7, pbVar9 = param_2, rd8((uint32_t)param_2) != 0)) {
          while (bVar2 = rd8((uint32_t)pbVar9), bVar2 != 0) {
            bVar3 = rd8((uint32_t)pbVar8);
            if (bVar3 == 0) {
              g->eax = (CowU32)(sVar4); return;
            }
            if (((char)bVar3 < '\0') || ((char)bVar2 < '\0')) {
              if (bVar3 != bVar2) break;
              if (((rd8((uint32_t)(pbVar8 + 1u * (uint32_t)(1))) == 0) || (rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(2))) == 0)) || (rd8((uint32_t)(pbVar8 + 1u * (uint32_t)(1))) != rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(2))))) goto L_1010996f;
              pbVar8 = pbVar8 + 1;
              pbVar9 = pbVar9 + 1;
            }
            else {
              iVar5 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_10109952), 1u, (const CowU32[]){ (CowU32)bVar3 }, g->ecx, g->edx, g->eax, 0u);
              iVar6 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_1010995E), 1u, (const CowU32[]){ (CowU32)rd8((uint32_t)pbVar9) }, g->ecx, g->edx, g->eax, 8u);
              if (iVar5 != iVar6) break;
            }
            pbVar1 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            pbVar9 = pbVar9 + 1;
            if (rd8((uint32_t)pbVar1) == 0) {
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(sVar4) & 0xffu)); return;
            }
          }
          if ((rd8((uint32_t)pbVar8) == 0) || (rd8((uint32_t)pbVar9) == 0)) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(sVar4) & 0xffu)); return;
          }
        }
    L_1010996f:
        if (((char)rd8((uint32_t)pbVar7) < '\0') && (rd8((uint32_t)(pbVar7 + 1u * (uint32_t)(1))) != 0)) {
          pbVar7 = pbVar7 + 1;
          sVar4 = sVar4 + 1;
        }
        pbVar7 = pbVar7 + 1;
        sVar4 = sVar4 + 1;
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10109900(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10109900: push ecx */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10109901: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10109904: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10109905: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10109906: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10109900(g, param_1, param_2);

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
