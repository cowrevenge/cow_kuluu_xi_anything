/* f_0x102f9da0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f9da0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f9da0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, float param_5, float param_6)
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
    fVar1 = rdf32((uint32_t)param_2);
      fVar2 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
      fVar3 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(2)));
      fVar4 = rdf32((uint32_t)(param_2 + 4u * (uint32_t)(3)));
      fVar5 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(1)));
      fVar6 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(2)));
      fVar7 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(3)));
      fVar8 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(1)));
      fVar9 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(2)));
      fVar10 = rdf32((uint32_t)(param_4 + 4u * (uint32_t)(3)));
      wrf32((uint32_t)param_1, (rdf32((uint32_t)param_3) - fVar1) * param_5 + fVar1 + (rdf32((uint32_t)param_4) - fVar1) * param_6);
      wrf32((uint32_t)(param_1 + 4u * (uint32_t)(1)), (fVar5 - fVar2) * param_5 + fVar2 + (fVar8 - fVar2) * param_6);
      wrf32((uint32_t)(param_1 + 4u * (uint32_t)(2)), (fVar6 - fVar3) * param_5 + fVar3 + (fVar9 - fVar3) * param_6);
      wrf32((uint32_t)(param_1 + 4u * (uint32_t)(3)), (fVar7 - fVar4) * param_5 + fVar4 + (fVar10 - fVar4) * param_6);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 6 parameter(s), cleanup 24 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer yes, 0 locals, pops [ebp], ret 24.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f9da0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    float param_5 = rdf32((uint32_t)(sp0 + 4u + 0x10u));   /* float argument */
    float param_6 = rdf32((uint32_t)(sp0 + 4u + 0x14u));   /* float argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102f9da0: push ebp */
    g->ebp = g->esp;                       /* 0x102f9da1: mov ebp, esp */
    cow_lift_102f9da0(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
