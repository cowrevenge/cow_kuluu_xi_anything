/* f_0x1001e4f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1001e4f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1001e4f0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = (int)param_1 + 0x44;
      cow_bridge_10026eb0(g, COW_IMG(COW_ADDR_LIFT_1001E504), 2u, (const CowU32[]){ iVar1, COW_IMG(COW_ADDR_LIFT_1035122C) }, param_1, g->edx, g->eax, 0u);
      cow_bridge_10015290(g, COW_IMG(COW_ADDR_LIFT_1001E50E), 1u, (const CowU32[]){ 1135542272u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10026eb0(g, COW_IMG(COW_ADDR_LIFT_1001E518), 2u, (const CowU32[]){ (g->esi + 80u), (g->esi + 68u) }, g->ecx, g->edx, g->eax, 0u);
      wrf32((uint32_t)((int)param_1 + 0x58), rdf32((uint32_t)((int)param_1 + 0x58)) + rd32(COW_IMG(COW_ADDR_LIFT_1032961C)));
      wr32((uint32_t)((int)param_1 + 0x5c), 0);
      cow_bridge_10026e50(g, COW_IMG(COW_ADDR_LIFT_1001E53C), 4u, (const CowU32[]){ (g->esi + 168u), 0u, 3212836864u, 0u }, g->ecx, g->edx, (g->esi + 168u), 0u);
      cow_bridge_10026eb0(g, COW_IMG(COW_ADDR_LIFT_1001E546), 2u, (const CowU32[]){ (g->esi + 108u), (g->esi + 80u) }, (g->esi + 108u), g->edx, g->eax, 0u);
      cow_bridge_10026eb0(g, COW_IMG(COW_ADDR_LIFT_1001E550), 2u, (const CowU32[]){ (g->esi + 96u), (g->esi + 68u) }, g->ecx, (g->esi + 96u), g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x78), rd32((uint32_t)((int)param_1 + 0x5c)));
      wr32((uint32_t)((int)param_1 + 0x84), 0);
      wr32((uint32_t)((int)param_1 + 0x80), 0);
      wr32((uint32_t)((int)param_1 + 0x7c), 0);
      wr8((uint32_t)((int)param_1 + 0x88), 0);
      wr8((uint32_t)((int)param_1 + 0x89), 0);
      wr8((uint32_t)((int)param_1 + 0x8a), 0);
      wr8((uint32_t)((int)param_1 + 0xf4), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1001e4f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1001e4f0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1001e4f1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1001e4f2: push esi */
    g->esi = g->ecx;   /* 0x1001e4f3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1001e4f5: push edi */
    cow_lift_1001e4f0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
