/* f_0x10010520 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10010520 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10010520(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_10103740(g, COW_IMG(COW_ADDR_LIFT_10010525), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_1001053A), 2u, (const CowU32[]){ 271909588u, 271909596u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_1001054C), 2u, (const CowU32[]){ 271909580u, 0u }, g->ecx, g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E34)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_10010562), 2u, (const CowU32[]){ 271909572u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E38)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_10010578), 2u, (const CowU32[]){ 271909564u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E3C)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_1001058E), 2u, (const CowU32[]){ 271909556u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E40)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_100105A4), 2u, (const CowU32[]){ 271909548u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E44)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_100105BA), 2u, (const CowU32[]){ 271909540u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E48)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_100105D0), 2u, (const CowU32[]){ 271909532u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E4C)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_100105E6), 2u, (const CowU32[]){ 271909524u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E50)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_100105FC), 2u, (const CowU32[]){ 271909512u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E54)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_10010612), 2u, (const CowU32[]){ 271909500u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E58)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_10010628), 2u, (const CowU32[]){ 271909488u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E5C)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_1001063E), 2u, (const CowU32[]){ 271909476u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E60)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_10010654), 2u, (const CowU32[]){ 271909464u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E64)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_1001066A), 2u, (const CowU32[]){ 271909452u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E68)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_10010680), 2u, (const CowU32[]){ 271909440u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E6C)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_10010696), 2u, (const CowU32[]){ 271909432u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E70)) != 0) {
        cow_bridge_1021c100(g, COW_IMG(COW_ADDR_LIFT_100106A9), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      cow_bridge_10093da0(g, COW_IMG(COW_ADDR_LIFT_100106AE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_tail_10240880(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: 0 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x10240880`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x10240880.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_10010520(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */


    cow_lift_10010520(g);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
