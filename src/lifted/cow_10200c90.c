/* f_0x10200c90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10200c90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10200c90(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if ((rd32(COW_IMG(COW_ADDR_LIFT_10578480)) != 0) && ((rd32(COW_IMG(COW_ADDR_LIFT_10663684)) == 0 || ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663684)) + 8)) == 0)))) {
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10200CBB), 1u, (const CowU32[]){ 272113644u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578480)), 0u);
      }
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10200CCA), 1u, (const CowU32[]){ 272126508u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578480)), 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10200CD9), 1u, (const CowU32[]){ 272126440u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578480)), 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10200CE8), 1u, (const CowU32[]){ 272126460u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578480)), 0u);
      wr32((uint32_t)(param_1 + 0x34), 0);
      wr8((uint32_t)(param_1 + 0x49), 1);
      cow_bridge_101f7020(g, COW_IMG(COW_ADDR_LIFT_10200D00), 3u, (const CowU32[]){ 0u, 0u, 1u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578480)), 0u);
      wr32((uint32_t)(param_1 + 0x3c), 0);
      wr8((uint32_t)(param_1 + 0x44), 0x20);
      wr8((uint32_t)(param_1 + 0x45), 0x18);
      cow_bridge_10200780(g, COW_IMG(COW_ADDR_LIFT_10200D16), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578480)), 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
        cow_bridge_10221300(g, COW_IMG(COW_ADDR_LIFT_10200D2A), 1u, (const CowU32[]){ 16u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578480)), 0u);
      }
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
void cow_adapter_10200c90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10578480));   /* 0x10200c90: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10200c95: push esi */
    cow_lift_10200c90(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
