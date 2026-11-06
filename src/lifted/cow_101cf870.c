/* f_0x101cf870 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101cf870 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101cf870(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_101cf820(g, COW_IMG(COW_ADDR_LIFT_101CF892), 4u, (const CowU32[]){ param_1 + 0x8bc, param_1 + 0x69c, COW_IMG(COW_ADDR_LIFT_1037E6C4), COW_IMG(COW_ADDR_LIFT_1037E6B0) }, g->esi, g->edx, (g->esi + 1692u), 0u);
      cow_bridge_101cf820(g, COW_IMG(COW_ADDR_LIFT_101CF8B1), 4u, (const CowU32[]){ param_1 + 0x8dc, param_1 + 0x6ac, COW_IMG(COW_ADDR_LIFT_1037E708), COW_IMG(COW_ADDR_LIFT_1037E6F0) }, g->esi, (g->esi + 1708u), (g->esi + 2268u), 0u);
      cow_bridge_101cf820(g, COW_IMG(COW_ADDR_LIFT_101CF8D0), 4u, (const CowU32[]){ param_1 + 0xadc, param_1 + 0x7ac, COW_IMG(COW_ADDR_LIFT_1037E6E4), COW_IMG(COW_ADDR_LIFT_1037E6D0) }, g->esi, (g->esi + 2780u), g->eax, 0u);
      cow_bridge_101cf820(g, COW_IMG(COW_ADDR_LIFT_101CF8EF), 4u, (const CowU32[]){ param_1 + 0xafc, param_1 + 0x7bc, COW_IMG(COW_ADDR_LIFT_1037E7C0), COW_IMG(COW_ADDR_LIFT_1037E7AC) }, g->esi, g->edx, (g->esi + 1980u), 0u);
      cow_bridge_101d0a40(g, COW_IMG(COW_ADDR_LIFT_101CF8FC), 1u, (const CowU32[]){ 196u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d0a20(g, COW_IMG(COW_ADDR_LIFT_101CF906), 1u, (const CowU32[]){ 31u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09c0(g, COW_IMG(COW_ADDR_LIFT_101CF910), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09e0(g, COW_IMG(COW_ADDR_LIFT_101CF91F), 2u, (const CowU32[]){ 272098993u, 16u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09e0(g, COW_IMG(COW_ADDR_LIFT_101CF92E), 2u, (const CowU32[]){ 272099012u, 12u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d0a40(g, COW_IMG(COW_ADDR_LIFT_101CF93B), 1u, (const CowU32[]){ 196u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d0a20(g, COW_IMG(COW_ADDR_LIFT_101CF948), 1u, (const CowU32[]){ 181u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09c0(g, COW_IMG(COW_ADDR_LIFT_101CF952), 1u, (const CowU32[]){ 16u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09e0(g, COW_IMG(COW_ADDR_LIFT_101CF961), 2u, (const CowU32[]){ 272099057u, 16u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09e0(g, COW_IMG(COW_ADDR_LIFT_101CF973), 2u, (const CowU32[]){ 272099080u, 162u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d0a40(g, COW_IMG(COW_ADDR_LIFT_101CF980), 1u, (const CowU32[]){ 196u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d0a20(g, COW_IMG(COW_ADDR_LIFT_101CF98A), 1u, (const CowU32[]){ 31u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09c0(g, COW_IMG(COW_ADDR_LIFT_101CF994), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09e0(g, COW_IMG(COW_ADDR_LIFT_101CF9A3), 2u, (const CowU32[]){ 272099025u, 16u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09e0(g, COW_IMG(COW_ADDR_LIFT_101CF9B2), 2u, (const CowU32[]){ 272099044u, 12u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d0a40(g, COW_IMG(COW_ADDR_LIFT_101CF9BF), 1u, (const CowU32[]){ 196u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d0a20(g, COW_IMG(COW_ADDR_LIFT_101CF9CC), 1u, (const CowU32[]){ 181u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09c0(g, COW_IMG(COW_ADDR_LIFT_101CF9D6), 1u, (const CowU32[]){ 17u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09e0(g, COW_IMG(COW_ADDR_LIFT_101CF9E5), 2u, (const CowU32[]){ 272099245u, 16u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101d09e0(g, COW_IMG(COW_ADDR_LIFT_101CF9F7), 2u, (const CowU32[]){ 272099264u, 162u }, g->ecx, g->edx, g->eax, 0u);
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
void cow_adapter_101cf870(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101cf870: push esi */
    g->esi = g->ecx;   /* 0x101cf871: the value the entry loaded and the decompiler dropped */
    cow_lift_101cf870(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
