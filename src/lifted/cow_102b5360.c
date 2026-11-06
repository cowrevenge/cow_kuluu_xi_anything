/* f_0x102b5360 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b5360 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b5360(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32((uint32_t)param_1, 0xa0008);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), COW_IMG(COW_ADDR_LIFT_102B53C0));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), COW_IMG(COW_ADDR_LIFT_102B53D0));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), COW_IMG(COW_ADDR_LIFT_102B5460));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), COW_IMG(COW_ADDR_LIFT_10291280));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), COW_IMG(COW_ADDR_LIFT_102B2F60));
      cow_bridge_1028d9c0(g, COW_IMG(COW_ADDR_LIFT_102B5397), 1u, (const CowU32[]){ param_1 + 5 }, g->ecx, g->edx, g->eax, 4u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), COW_IMG(COW_ADDR_LIFT_102B5580));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), COW_IMG(COW_ADDR_LIFT_102B5650));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x11)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x12)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x14)), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102b5360(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b5360: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102b5361: register esi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->esi + 0x14u)); }   /* 0x102b5365: register eax, replayed as the entry ran it */
    cow_lift_102b5360(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
