/* f_0x1006f8e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1006f8e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1006f8e0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    fVar5 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
      fVar6 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(2)));
      fVar7 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(3)));
      fVar8 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(5)));
      fVar9 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(6)));
      fVar10 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(7)));
      fVar11 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(9)));
      fVar12 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(10)));
      fVar13 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(0xb)));
      fVar14 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)));
      fVar15 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(0xe)));
      fVar16 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(0xf)));
      fVar1 = rdf32((uint32_t)param_3);
      fVar2 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(1)));
      fVar3 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(2)));
      fVar4 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(3)));
      wrf32((uint32_t)param_1, fVar1 * rdf32((uint32_t)param_2) + fVar2 * rdf32((uint32_t)(param_2 + 4u * (uint32_t)(4))) + fVar3 * rdf32((uint32_t)(param_2 + 4u * (uint32_t)(8))) + fVar4 * rdf32((uint32_t)(param_2 + 4u * (uint32_t)(0xc))));
      wrf32((uint32_t)(param_1 + 4u * (uint32_t)(1)), fVar1 * fVar5 + fVar2 * fVar8 + fVar3 * fVar11 + fVar4 * fVar14);
      wrf32((uint32_t)(param_1 + 4u * (uint32_t)(2)), fVar1 * fVar6 + fVar2 * fVar9 + fVar3 * fVar12 + fVar4 * fVar15);
      wrf32((uint32_t)(param_1 + 4u * (uint32_t)(3)), fVar1 * fVar7 + fVar2 * fVar10 + fVar3 * fVar13 + fVar4 * fVar16);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 12.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1006f8e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1006f8e0: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1006f8e1: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1006f8e2: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1006f8e6: register edi, replayed as the entry ran it */
    cow_lift_1006f8e0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
