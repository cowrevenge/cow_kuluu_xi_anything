/* f_0x10110e30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10110e30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10110e30(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_10112550(g, COW_IMG(COW_ADDR_LIFT_10110E3D), 1u, (const CowU32[]){ param_2 }, param_1, g->edx, param_2, 0u);
      cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_10110E45), 0u, (const CowU32[]){ 0u }, (g->esi + 8u), g->edx, param_2, 0u);
      cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_10110E4D), 0u, (const CowU32[]){ 0u }, (g->esi + 16u), g->edx, param_2, 0u);
      cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_10110E55), 0u, (const CowU32[]){ 0u }, (g->esi + 24u), g->edx, param_2, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), param_1 + 0xb);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), param_1 + 0xe);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), COW_IMG(COW_ADDR_LIFT_10332ED4));
      wr8((uint32_t)(param_1 + 10), 1);
      wr16((uint32_t)((int)param_1 + 0x2a), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x15)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x14)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x16)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x18)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x17)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x11)), COW_IMG(COW_ADDR_LIFT_10332ED8));
      wr8((uint32_t)(param_1 + 0x12), 1);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x15)), param_1 + 0x16);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x17)), param_1 + 0x13);
      wr16((uint32_t)((int)param_1 + 0x4a), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x19)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a)), 0);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10332EDC));
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10110e30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_2;   /* 0x10110e30: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10110e34: push esi */
    g->esi = g->ecx;   /* 0x10110e36: the value the entry loaded and the decompiler dropped */
    cow_lift_10110e30(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
