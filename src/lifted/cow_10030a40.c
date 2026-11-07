/* f_0x10030a40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10030a40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10030a40(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
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
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    fVar3 = rdf32((uint32_t)param_3);
      fVar4 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(2)));
      fVar5 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(8)));
      fVar6 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(10)));
      fVar7 = rdf32((uint32_t)param_1);
      fVar8 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
      fVar9 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(2)));
      fVar10 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(4)));
      fVar11 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(5)));
      fVar12 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(6)));
      fVar13 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(4)));
      fVar14 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(6)));
      fVar1 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xc)));
      fVar15 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(8)));
      fVar16 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(9)));
      fVar17 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(10)));
      fVar18 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)));
      fVar19 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)));
      fVar20 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(1)));
      fVar21 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(3)));
      fVar22 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(9)));
      fVar23 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xb)));
      fVar24 = rdf32((uint32_t)param_2);
      fVar25 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
      fVar26 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(2)));
      fVar27 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(4)));
      fVar28 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(5)));
      fVar29 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(6)));
      fVar30 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(5)));
      fVar31 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(7)));
      fVar2 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(0xd)));
      fVar32 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(8)));
      fVar33 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(9)));
      fVar34 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(10)));
      fVar35 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)));
      fVar36 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(0xe)));
      wrf32((uint32_t)param_4, fVar3 * fVar7 + fVar4 * fVar10 + fVar13 * fVar15 + fVar14 * rdf32((uint32_t)(param_1 + 4u * (uint32_t)(0xc))) +
                 fVar20 * fVar24 + fVar21 * fVar27 + fVar30 * fVar32 + fVar31 * rdf32((uint32_t)(param_2 + 4u * (uint32_t)(0xc))));
      wr64((uint32_t)(uint32_t)(param_4 + 4u * (uint32_t)(1)), (((uint64_t)(fVar3 * fVar9 + fVar4 * fVar12 + fVar13 * fVar17 + fVar14 * fVar19 + fVar20 * fVar26
                    + fVar21 * fVar29 + fVar30 * fVar34 + fVar31 * fVar36) & 0xffffffffu) << 32 | ((uint64_t)(fVar3 * fVar8 + fVar4 * fVar11 + fVar13 * fVar16 + fVar14 * fVar18 + fVar20 * fVar25
                    + fVar21 * fVar28 + fVar30 * fVar33 + fVar31 * fVar35) & 0xffffffffu)));
      wrf32((uint32_t)param_5, fVar5 * fVar7 + fVar6 * fVar10 + fVar1 * fVar15 + fVar22 * fVar24 + fVar23 * fVar27 +
                 fVar2 * fVar32);
      wr64((uint32_t)(uint32_t)(param_5 + 4u * (uint32_t)(1)), (((uint64_t)(fVar5 * fVar9 + fVar6 * fVar12 + fVar1 * fVar17 + fVar22 * fVar26 + fVar23 * fVar29
                    + fVar2 * fVar34) & 0xffffffffu) << 32 | ((uint64_t)(fVar5 * fVar8 + fVar6 * fVar11 + fVar1 * fVar16 + fVar22 * fVar25 + fVar23 * fVar28
                    + fVar2 * fVar33) & 0xffffffffu)));
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10030a40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->ecx = param_3;   /* 0x10030a40: the value the entry loaded and the decompiler dropped */
    g->edx = param_1;   /* 0x10030a44: the value the entry loaded and the decompiler dropped */
    cow_lift_10030a40(g, param_1, param_2, param_3, param_4, param_5);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
