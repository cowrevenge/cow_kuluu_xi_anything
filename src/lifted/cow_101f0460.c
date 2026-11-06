/* f_0x101f0460 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f0460 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f0460(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    switch(param_1) {
      case 0:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F048E), 3u, (const CowU32[]){ 0u, 1u, 0u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 1:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F04A0), 3u, (const CowU32[]){ 0u, 1u, 1u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 2:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F04B2), 3u, (const CowU32[]){ 0u, 1u, 2u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 3:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F04C4), 3u, (const CowU32[]){ 0u, 1u, 5u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 4:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F04D6), 3u, (const CowU32[]){ 0u, 1u, 6u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 5:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F04E8), 3u, (const CowU32[]){ 0u, 1u, 7u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 6:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F04FA), 3u, (const CowU32[]){ 0u, 1u, 3u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 7:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F050C), 3u, (const CowU32[]){ 0u, 1u, 4u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 8:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F051E), 3u, (const CowU32[]){ 0u, 1u, 8u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 9:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F0530), 3u, (const CowU32[]){ 0u, 1u, 10u }, g->ecx, g->edx, param_1, 0u);
        break;
      case 10:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F0542), 3u, (const CowU32[]){ 0u, 1u, 11u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 0xb:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F0554), 3u, (const CowU32[]){ 0u, 1u, 12u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 0xc:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F0566), 3u, (const CowU32[]){ 0u, 1u, 13u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 0xd:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F0578), 3u, (const CowU32[]){ 0u, 1u, 14u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 0xe:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F058A), 3u, (const CowU32[]){ 0u, 1u, 15u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 0xf:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F059C), 3u, (const CowU32[]){ 0u, 1u, 16u }, g->ecx, g->edx, param_1, 0u);
        return;
      case 0x10:
        cow_bridge_1021c7c0(g, COW_IMG(COW_ADDR_LIFT_101F05AE), 3u, (const CowU32[]){ 0u, 1u, 9u }, g->ecx, g->edx, param_1, 0u);
        return;
      }
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
void cow_adapter_101f0460(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x101f0460: the value the entry loaded and the decompiler dropped */
    cow_lift_101f0460(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
