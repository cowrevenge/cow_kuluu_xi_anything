/* f_0x1006f210 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1006f210 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1006f210(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
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
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    fVar1 = rdf32((uint32_t)param_3);
      fVar2 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(1)));
      fVar3 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(2)));
      fVar4 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(3)));
      fVar5 = rdf32((uint32_t)param_4);
      fVar6 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(1)));
      fVar7 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(2)));
      fVar8 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(3)));
      wrf32((uint32_t)(param_1 + 0xaa0), fVar6 * fVar2 + fVar5 * fVar1 + fVar7 * fVar3 + fVar8 * fVar4);
      fVar9 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(4)));
      fVar10 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(5)));
      fVar11 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(6)));
      fVar12 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(7)));
      wrf32((uint32_t)(param_1 + 0xaa4), fVar10 * fVar2 + fVar9 * fVar1 + fVar11 * fVar3 + fVar12 * fVar4);
      fVar13 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(8)));
      fVar14 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(9)));
      fVar15 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(10)));
      fVar16 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(0xb)));
      wrf32((uint32_t)(param_1 + 0xaa8), fVar14 * fVar2 + fVar13 * fVar1 + fVar15 * fVar3 + fVar16 * fVar4);
      fVar17 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(0xc)));
      fVar18 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(0xd)));
      fVar19 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(0xe)));
      fVar20 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(0xf)));
      wrf32((uint32_t)(param_1 + 0xaac), fVar18 * fVar2 + fVar17 * fVar1 + fVar19 * fVar3 + fVar20 * fVar4);
      fVar1 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(4)));
      fVar2 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(5)));
      fVar3 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(6)));
      fVar4 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(7)));
      wrf32((uint32_t)(param_1 + 0xab0), fVar6 * fVar2 + fVar5 * fVar1 + fVar7 * fVar3 + fVar8 * fVar4);
      wrf32((uint32_t)(param_1 + 0xab4), fVar10 * fVar2 + fVar9 * fVar1 + fVar11 * fVar3 + fVar12 * fVar4);
      wrf32((uint32_t)(param_1 + 0xab8), fVar14 * fVar2 + fVar13 * fVar1 + fVar15 * fVar3 + fVar16 * fVar4);
      wrf32((uint32_t)(param_1 + 0xabc), fVar18 * fVar2 + fVar17 * fVar1 + fVar19 * fVar3 + fVar20 * fVar4);
      fVar1 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(8)));
      fVar2 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(9)));
      fVar3 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(10)));
      fVar4 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xb)));
      wrf32((uint32_t)(param_1 + 0xac0), fVar6 * fVar2 + fVar5 * fVar1 + fVar7 * fVar3 + fVar8 * fVar4);
      wrf32((uint32_t)(param_1 + 0xac4), fVar10 * fVar2 + fVar9 * fVar1 + fVar11 * fVar3 + fVar12 * fVar4);
      wrf32((uint32_t)(param_1 + 0xac8), fVar14 * fVar2 + fVar13 * fVar1 + fVar15 * fVar3 + fVar16 * fVar4);
      wrf32((uint32_t)(param_1 + 0xacc), fVar18 * fVar2 + fVar17 * fVar1 + fVar19 * fVar3 + fVar20 * fVar4);
      fVar1 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xc)));
      fVar2 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xd)));
      fVar3 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xe)));
      fVar4 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xf)));
      wrf32((uint32_t)(param_1 + 0xad0), fVar6 * fVar2 + fVar5 * fVar1 + fVar7 * fVar3 + fVar8 * fVar4);
      wrf32((uint32_t)(param_1 + 0xad4), fVar10 * fVar2 + fVar9 * fVar1 + fVar11 * fVar3 + fVar12 * fVar4);
      wrf32((uint32_t)(param_1 + 0xad8), fVar14 * fVar2 + fVar13 * fVar1 + fVar15 * fVar3 + fVar16 * fVar4);
      wrf32((uint32_t)(param_1 + 0xadc), fVar18 * fVar2 + fVar17 * fVar1 + fVar19 * fVar3 + fVar20 * fVar4);
      fVar1 = rdf32((uint32_t)(param_1 + 0xab0));
      fVar2 = rdf32((uint32_t)(param_1 + 0xab4));
      fVar3 = rdf32((uint32_t)(param_1 + 0xab8));
      fVar4 = rdf32((uint32_t)(param_1 + 0xabc));
      fVar5 = rdf32((uint32_t)(param_1 + 0xaa4));
      fVar6 = rdf32((uint32_t)(param_1 + 0xaa8));
      fVar7 = rdf32((uint32_t)(param_1 + 0xaac));
      fVar8 = rdf32((uint32_t)(param_1 + 0xac0));
      fVar9 = rdf32((uint32_t)(param_1 + 0xac4));
      fVar10 = rdf32((uint32_t)(param_1 + 0xac8));
      fVar11 = rdf32((uint32_t)(param_1 + 0xacc));
      fVar12 = rdf32((uint32_t)(param_1 + 0xad0));
      fVar13 = rdf32((uint32_t)(param_1 + 0xad4));
      fVar14 = rdf32((uint32_t)(param_1 + 0xad8));
      fVar15 = rdf32((uint32_t)(param_1 + 0xadc));
      wrf32((uint32_t)param_2, rdf32((uint32_t)(param_1 + 0xaa0)));
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(1)), fVar5);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(2)), fVar6);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(3)), fVar7);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(4)), fVar1);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(5)), fVar2);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(6)), fVar3);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(7)), fVar4);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(8)), fVar8);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(9)), fVar9);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(10)), fVar10);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(0xb)), fVar11);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), fVar12);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)), fVar13);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(0xe)), fVar14);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(0xf)), fVar15);
      g->eax = (CowU32)(param_2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ecx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ecx], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1006f210(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1006f210: push ecx */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xAA0u; uint32_t r = (uint32_t)(a + b); g->ecx = (uint32_t)(r); }   /* 0x1006f211: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1006f217: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1006f218: push edi */
    cow_lift_1006f210(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
