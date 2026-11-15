/* f_0x10279130 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10279130 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10279130(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (param_1 == 0) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1027914D), 3u, (const CowU32[]){ 272316316u, 272316396u, 1192u }, g->ecx, g->edx, param_1, 0u)
        ;
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10279157), 1u, (const CowU32[]){ 272317648u }, g->ecx, g->edx, param_1, 16u);
        g->eax = (CowU32)(0); return;
      }
      if (param_2 < 1) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1027917A), 3u, (const CowU32[]){ 272316316u, 272316396u, 1196u }, g->ecx, g->edx, param_1, 0u)
        ;
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10279185), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B3C9C), param_2 }, g->ecx, g->edx, param_1, 20u);
        g->eax = (CowU32)(0); return;
      }
      if (param_3 == 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xff) & 0xffu)); return;
      }
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102791A8), 3u, (const CowU32[]){ 272316316u, 272316396u, 1200u }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102791B3), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B3C74), param_3 }, g->ecx, g->edx, param_1, 20u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10279130(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_1;   /* 0x10279130: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10279134: push esi */
    cow_lift_10279130(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
