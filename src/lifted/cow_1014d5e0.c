/* f_0x1014d5e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014d5e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014d5e0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2c7d0)) & 0x4000000) != 0) &&
         (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2c7c8)) == 10)) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2c7d0), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2c7d0)) & 0xfbffffff);
        if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2c7cc)) != 2) {
          if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2c7cc)) == 1) {
            wr32((uint32_t)(param_1 + 0x1c), 0xffffffff);
            wr32((uint32_t)(param_1 + 0x18), 0xffffffff);
          }
          else {
            cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_1014D62F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_1014d930(g, COW_IMG(COW_ADDR_LIFT_1014D643), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2c7cc)) }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x1c), 0xffffffff);
            cow_bridge_1014d8e0(g, COW_IMG(COW_ADDR_LIFT_1014D651), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x5d), 0);
          wr32((uint32_t)(param_1 + 0x14), 5);
        }
      }
      cow_bridge_tail_1014d910(g, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x1014d910`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x1014d910.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_1014d5e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014d5e0: push esi */
    g->esi = g->ecx;   /* 0x1014d5e1: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x1014d5e3: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + 0x2C7D0u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1014d5e9: register eax, replayed as the entry ran it */
    cow_lift_1014d5e0(g, param_1);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
