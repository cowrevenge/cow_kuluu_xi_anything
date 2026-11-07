/* f_0x10283e80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10283e80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10283e80(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 auStack_80[48];
    CowU32 uStack_50;
    CowU32 uStack_4c;
    CowU32 uStack_48;
    CowU8 auStack_40[64];
    cow_bridge_1027f100(g, COW_IMG(COW_ADDR_LIFT_10283E9B), 2u, (const CowU32[]){ g->ecx, g->eax }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10280160(g, COW_IMG(COW_ADDR_LIFT_10283EB5), 3u, (const CowU32[]){ auStack_80, rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x188, auStack_40 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, uStack_50);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), uStack_4c);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), uStack_48);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10283e80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099D200));   /* 0x10283e80: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x80u;                      /* 0x10283e85: 128 bytes of locals */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x1C8u; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10283e8b: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->esp + 0x40u)); }   /* 0x10283e90: register ecx, replayed as the entry ran it */
    cow_lift_10283e80(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
