/* f_0x10133130 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10133130 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10133130(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    cVar1 = cow_bridge_101cbe80(g, COW_IMG(COW_ADDR_LIFT_10133135), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_10133146), 1u, (const CowU32[]){ 78u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cVar1 = cow_bridge_101cbe70(g, COW_IMG(COW_ADDR_LIFT_1013314C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_1013315D), 1u, (const CowU32[]){ 77u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cVar1 = cow_bridge_100fd6e0(g, COW_IMG(COW_ADDR_LIFT_10133165), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_1013317C), 1u, (const CowU32[]){ 168u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      if ((rd32(COW_IMG(COW_ADDR_LIFT_105781A8)) != 0) && ((int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781A8)) + 0x1a)) == 0)) {
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_101331AB), 4u, (const CowU32[]){ 65535u, 2u, 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_101331C1), 4u, (const CowU32[]){ 65535u, 2u, 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_101331D7), 4u, (const CowU32[]){ 65535u, 2u, 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_101331ED), 4u, (const CowU32[]){ 65535u, 2u, 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_10133203), 4u, (const CowU32[]){ 65535u, 2u, 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_10133219), 4u, (const CowU32[]){ 65535u, 2u, 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_1013322F), 4u, (const CowU32[]){ 65535u, 2u, 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_10133245), 4u, (const CowU32[]){ 65535u, 2u, 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1021c7e0(g, COW_IMG(COW_ADDR_LIFT_1013325B), 4u, (const CowU32[]){ 65535u, 2u, 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105783E4)) + 0x1c), 2);
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10133277), 3u, (const CowU32[]){ 272037912u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1013328A), 3u, (const CowU32[]){ 272037656u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_105781B0))))) + 0x58u))), COW_IMG(COW_ADDR_LIFT_10133297), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101f23a0(g, COW_IMG(COW_ADDR_LIFT_101332A8), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_105781B0)) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101332BB), 3u, (const CowU32[]){ 272037932u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_10097fd0(g, COW_IMG(COW_ADDR_LIFT_101332C4), 2u, (const CowU32[]){ 0u, 1u }, g->ecx, g->edx, g->eax, 8u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10133130(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */


    cow_lift_10133130(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
