/* f_0x1026e890 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1026e890 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1026e890(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32(COW_IMG(COW_ADDR_LIFT_1099AF58), rd32((uint32_t)param_1));
      wr32(COW_IMG(COW_ADDR_LIFT_1099AF5C), rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))));
      wr32(COW_IMG(COW_ADDR_LIFT_1099AF60), rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))));
      wr32(COW_IMG(COW_ADDR_LIFT_1099AF64), rd32((uint32_t)param_2));
      wr32(COW_IMG(COW_ADDR_LIFT_1099AF68), rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))));
      wr32(COW_IMG(COW_ADDR_LIFT_1099AF6C), rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))));
      param_3 = param_3 & 0x8000000f;
      if ((int)param_3 < 0) {
        param_3 = (param_3 - 1 | 0xfffffff0) + 1;
      }
      cow_bridge_10283350(g, COW_IMG(COW_ADDR_LIFT_1026E8EA), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B11A8) + param_3 * 0x10 }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1028b000(g, COW_IMG(COW_ADDR_LIFT_1026E8EF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1028a750(g, COW_IMG(COW_ADDR_LIFT_1026E8FB), 2u, (const CowU32[]){ 278507352u, 2u }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1028a820(g, COW_IMG(COW_ADDR_LIFT_1026E909), 3u, (const CowU32[]){ 3u, 2u, 272306568u }, g->ecx, g->edx, param_1, 24u);
      cow_bridge_tail_1028bbf0(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: 3 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x1028bbf0`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x1028bbf0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_1026e890(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_1;   /* 0x1026e890: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1026e894: register ecx, replayed as the entry ran it */
    cow_lift_1026e890(g, param_1, param_2, param_3);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
