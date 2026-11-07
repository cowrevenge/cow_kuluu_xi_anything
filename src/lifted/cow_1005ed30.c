/* f_0x1005ed30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1005ed30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1005ed30(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
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
    fVar1 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
      fVar2 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(1)));
      fVar3 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(2)));
      fVar4 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(2)));
      fVar5 = rdf32((uint32_t)(param_1 + 4u * (uint32_t)(3)));
      fVar6 = rdf32((uint32_t)(param_3 + 4u * (uint32_t)(3)));
      wrf32((uint32_t)param_2, rdf32((uint32_t)param_1) - rdf32((uint32_t)param_3));
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(1)), fVar1 - fVar2);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(2)), fVar3 - fVar4);
      wrf32((uint32_t)(param_2 + 4u * (uint32_t)(3)), fVar5 - fVar6);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 16 locals, pops [-], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1005ed30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x10u;                      /* 0x1005ed30: 16 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1005ed33: register eax, replayed as the entry ran it */
    cow_lift_1005ed30(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
