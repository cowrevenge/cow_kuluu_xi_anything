/* f_0x100294b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100294b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100294b0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_100294C9), 4u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1034F2A0), 0x44020000, 0x43a00000, 0 }, param_1, g->edx, g->eax, 0u);
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_100294DF), 4u, (const CowU32[]){ 271914220u, 1141112832u, 1134886912u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_100294F5), 4u, (const CowU32[]){ 271914216u, 1140981760u, 1135214592u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_1002950B), 4u, (const CowU32[]){ 271914212u, 1141112832u, 1135542272u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_100295a0(g, COW_IMG(COW_ADDR_LIFT_10029531), 5u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104570B4)), rd32(COW_IMG(COW_ADDR_LIFT_104570B8)), COW_IMG(COW_ADDR_LIFT_103514C8), 0x43a00000, 0x43a40000 }, param_1, g->edx, g->eax, 0u);
      cow_bridge_100295a0(g, COW_IMG(COW_ADDR_LIFT_10029554), 5u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104570BC)), rd32(COW_IMG(COW_ADDR_LIFT_104570C0)), COW_IMG(COW_ADDR_LIFT_103514BC), 0x43a50000, 0x43a90000 }, param_1, g->edx, g->eax, 0u);
      cow_bridge_100295a0(g, COW_IMG(COW_ADDR_LIFT_10029578), 5u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104570C4)), rd32(COW_IMG(COW_ADDR_LIFT_104570C8)), 0x103514a4, 0x43aa0000, 0x43ae0000 }, param_1, g->edx, g->eax, 0u);
      cow_bridge_100295a0(g, COW_IMG(COW_ADDR_LIFT_1002959B), 5u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104570CC)), rd32(COW_IMG(COW_ADDR_LIFT_104570D0)), 0x103514b0, 0x43af0000, 0x43b30000 }, param_1, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100294b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100294b0: push esi */
    cow_lift_100294b0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
