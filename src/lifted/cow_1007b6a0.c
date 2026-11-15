/* f_0x1007b6a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007b6a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007b6a0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 pbVar2;
    int iVar3;
    CowU32 pbVar4;
    int iVar5;
    _Bool bVar6;
      
      iVar5 = 0;
      if ((param_1 != (CowU32)0x0) && (param_2 != (CowU32)0x0)) {
        pbVar4 = (CowU32)rd32((uint32_t)param_2);
        while (pbVar4 != (CowU32)0x0) {
          pbVar2 = param_1;
          do {
            bVar1 = rd8((uint32_t)pbVar2);
            bVar6 = bVar1 < rd8((uint32_t)pbVar4);
            if (bVar1 != rd8((uint32_t)pbVar4)) {
    L_1007b6e3:
              iVar3 = (1 - (CowU32)bVar6) - (CowU32)(bVar6 != 0);
              goto L_1007b6e8;
            }
            if (bVar1 == 0) break;
            bVar1 = rd8((uint32_t)(pbVar2 + 1u * (uint32_t)(1)));
            bVar6 = bVar1 < rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(1)));
            if (bVar1 != rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(1)))) goto L_1007b6e3;
            pbVar2 = pbVar2 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
    L_1007b6e8:
          if (iVar3 == 0) {
            g->eax = (CowU32)(iVar5 + 1); return;
          }
          iVar3 = iVar5 + 1;
          iVar5 = iVar5 + 1;
          pbVar4 = (CowU32)rd32((uint32_t)(param_2 + 4u * (uint32_t)(iVar3)));
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007b6a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->edx = param_2;   /* 0x1007b6a0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1007b6a4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1007b6a5: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1007b6a6: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1007b6a7: push edi */
    g->edi = 0u;   /* 0x1007b6a8: the value the entry loaded and the decompiler dropped */
    cow_lift_1007b6a0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->edx = (CowU32)(param_2);   /* what edx holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
