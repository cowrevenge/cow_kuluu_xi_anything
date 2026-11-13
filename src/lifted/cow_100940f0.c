/* f_0x100940f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100940f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100940f0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    iVar1 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)) + 0x1bc));
      if (iVar1 != 0) {
        cow_bridge_1018b8c0(g, COW_IMG(COW_ADDR_LIFT_10094108), 1u, (const CowU32[]){ 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1018b5e0(g, COW_IMG(COW_ADDR_LIFT_10094115), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar2 = cow_bridge_100940b0(g, COW_IMG(COW_ADDR_LIFT_10094125), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10485FE0)) & 0xffff }, g->ecx, g->edx, g->eax, 4u);
      if (cVar2 == '\0') {
        cow_bridge_101889e0(g, COW_IMG(COW_ADDR_LIFT_10094137), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (iVar1 != 0) {
        cow_bridge_1018b8c0(g, COW_IMG(COW_ADDR_LIFT_10094148), 1u, (const CowU32[]){ 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1018b5e0(g, COW_IMG(COW_ADDR_LIFT_10094154), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100940f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_1065CB04));   /* 0x100940f0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100940f6: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0x1BCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x100940f7: register esi, replayed as the entry ran it */
    cow_lift_100940f0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
