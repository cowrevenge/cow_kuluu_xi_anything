/* f_0x102f8e70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f8e70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f8e70(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
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
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    if (((CowU32)param_3 & 0xf) == 0) {
        fVar9 = rdf32((uint32_t)param_2);
        fVar10 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
        fVar11 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(2)));
        fVar12 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(3)));
        fVar13 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(1)));
        fVar14 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(2)));
        fVar15 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(3)));
        fVar16 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(5)));
        fVar17 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(6)));
        fVar18 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(7)));
        fVar19 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(9)));
        fVar20 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(10)));
        fVar21 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xb)));
        fVar22 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xd)));
        fVar23 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xe)));
        fVar24 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xf)));
        wrf32((uint32_t)param_1, fVar9 * rdf32((uint32_t)param_3) + fVar10 * rdf32((uint32_t)(param_3 + 4u * (uint32_t)(4))) + fVar11 * rdf32((uint32_t)(param_3 + 4u * (uint32_t)(8))) + fVar12 * rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xc))));
        wrf32((uint32_t)(param_1 + 4u * (uint32_t)(1)), fVar9 * fVar13 + fVar10 * fVar16 + fVar11 * fVar19 + fVar12 * fVar22);
        wrf32((uint32_t)(param_1 + 4u * (uint32_t)(2)), fVar9 * fVar14 + fVar10 * fVar17 + fVar11 * fVar20 + fVar12 * fVar23);
        wrf32((uint32_t)(param_1 + 4u * (uint32_t)(3)), fVar9 * fVar15 + fVar10 * fVar18 + fVar11 * fVar21 + fVar12 * fVar24);
        g->eax = (CowU32)(param_1); return;
      }
      fVar9 = rdf32((uint32_t)param_2);
      fVar10 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
      fVar11 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(2)));
      fVar12 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(3)));
      uVar1 = rd64((uint32_t)param_3);
      uVar2 = rd64((uint32_t)(uint32_t)(param_3 + 4u * (uint32_t)(2)));
      uVar3 = rd64((uint32_t)(uint32_t)(param_3 + 4u * (uint32_t)(4)));
      uVar4 = rd64((uint32_t)(uint32_t)(param_3 + 4u * (uint32_t)(6)));
      uVar5 = rd64((uint32_t)(uint32_t)(param_3 + 4u * (uint32_t)(8)));
      uVar6 = rd64((uint32_t)(uint32_t)(param_3 + 4u * (uint32_t)(10)));
      uVar7 = rd64((uint32_t)(uint32_t)(param_3 + 4u * (uint32_t)(0xc)));
      uVar8 = rd64((uint32_t)(uint32_t)(param_3 + 4u * (uint32_t)(0xe)));
      wrf32((uint32_t)param_1, (float)uVar1 * fVar9 + (float)uVar3 * fVar10 +
                 (float)uVar5 * fVar11 + (float)uVar7 * fVar12);
      wrf32((uint32_t)(param_1 + 4u * (uint32_t)(1)), (float)((uint64_t)uVar1 >> 0x20) * fVar9 +
                   (float)((uint64_t)uVar3 >> 0x20) * fVar10 +
                   (float)((uint64_t)uVar5 >> 0x20) * fVar11 +
                   (float)((uint64_t)uVar7 >> 0x20) * fVar12);
      wrf32((uint32_t)(param_1 + 4u * (uint32_t)(2)), (float)uVar2 * fVar9 + (float)uVar4 * fVar10 +
                   (float)uVar6 * fVar11 + (float)uVar8 * fVar12);
      wrf32((uint32_t)(param_1 + 4u * (uint32_t)(3)), (float)((uint64_t)uVar2 >> 0x20) * fVar9 +
                   (float)((uint64_t)uVar4 >> 0x20) * fVar10 +
                   (float)((uint64_t)uVar6 >> 0x20) * fVar11 +
                   (float)((uint64_t)uVar8 >> 0x20) * fVar12);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(param_1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 12.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f8e70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102f8e70: push ebx */
    { g->ebx = (uint32_t)(g->esp); }   /* 0x102f8e71: register ebx, replayed as the entry ran it */
    g->esp -= 0x8u;                      /* 0x102f8e73: 8 bytes of locals */
    { uint32_t a = g->esp; uint32_t b = (uint32_t)0xFFFFFFF0u; uint32_t r = (uint32_t)(a & b); g->esp = (uint32_t)(r); }   /* 0x102f8e76: register esp, replayed as the entry ran it */
    { uint32_t a = g->esp; uint32_t b = (uint32_t)0x8u; uint32_t r = (uint32_t)(a + b); g->esp = (uint32_t)(r); }   /* 0x102f8e79: register esp, replayed as the entry ran it */
    cow_lift_102f8e70(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
