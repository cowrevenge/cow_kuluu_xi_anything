/* f_0x1010c4d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010c4d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010c4d0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU8 bVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 pbVar5;
    int iVar6;
    CowU8 local_10[16];
    pbVar5 = local_10;
      iVar6 = 0;
      do {
        uVar1 = rd32((uint32_t)(param_1 + iVar6 * 4));
        if (uVar1 == 0) break;
        iVar4 = 0x1e;
        do {
          iVar4 = iVar4 + -6;
          uVar3 = uVar1 >> ((CowU8)iVar4 & 0x1f);
          bVar2 = (CowU8)uVar3 & 0x3f;
          wr8((uint32_t)pbVar5, bVar2);
          if ((uVar3 & 0x3f) == 0) break;
          wr8((uint32_t)pbVar5, bVar2 + 0x20);
          pbVar5 = pbVar5 + 1;
        } while (0 < iVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
      wr8((uint32_t)pbVar5, 0);
      cow_bridge_101092c0(g, COW_IMG(COW_ADDR_LIFT_1010C517), 1u, (const CowU32[]){ local_10 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 16 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010c4d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0x10u;                      /* 0x1010c4d0: 16 bytes of locals */
    { g->edx = (uint32_t)((uint32_t)(g->esp)); }   /* 0x1010c4d3: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010c4d7: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010c4d8: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010c4d9: push edi */
    g->ebx = g->ecx;   /* 0x1010c4da: the value the entry loaded and the decompiler dropped */
    g->edi = 0u;   /* 0x1010c4dc: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ebx + g->edi * 4); g->esi = (uint32_t)(rd32(A)); }   /* 0x1010c4de: register esi, replayed as the entry ran it */
    cow_lift_1010c4d0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
