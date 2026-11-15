/* f_0x102b3840 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b3840 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b3840(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 uVar3;
    uVar1 = rd32((uint32_t)param_2);
      if (rd32(COW_IMG(COW_ADDR_LIFT_103BFD7C)) != '\0') {
        iVar2 = 0;
        do {
          wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_109AEBE0) + 4u * (uint32_t)(iVar2)), iVar2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x31);
        wr32(COW_IMG(COW_ADDR_LIFT_103BFD7C), '\0');
      }
      cow_bridge_1028a750(g, COW_IMG(COW_ADDR_LIFT_102B3870), 2u, (const CowU32[]){ param_2 + 4u * (uint32_t)(2), uVar1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1028a790(g, COW_IMG(COW_ADDR_LIFT_102B387E), 2u, (const CowU32[]){ param_2 + 4u * (uint32_t)(0x128), 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1028a770(g, COW_IMG(COW_ADDR_LIFT_102B388A), 1u, (const CowU32[]){ param_2 + 4u * (uint32_t)(0x95) }, g->ecx, g->edx, g->eax, 20u);
      cow_bridge_1028b000(g, COW_IMG(COW_ADDR_LIFT_102B3892), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      uVar3 = cow_bridge_10284ef0(g, COW_IMG(COW_ADDR_LIFT_102B3897), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((uVar3 & 0x20000) != 0) {
        cow_bridge_102b7920(g, COW_IMG(COW_ADDR_LIFT_102B38A8), 1u, (const CowU32[]){ param_2 }, g->ecx, 0u, g->eax, 4u);
      }
      cow_bridge_1028a820(g, COW_IMG(COW_ADDR_LIFT_102B38BC), 3u, (const CowU32[]){ rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))), rd32((uint32_t)param_2), COW_IMG(COW_ADDR_LIFT_109AEBE0) }, g->ecx, g->edx, g->eax, 12u);
      cow_bridge_tail_1028bbf0(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: 2 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x1028bbf0`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x1028bbf0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_102b3840(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_103BFD7C) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102b3840: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b3845: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102b3846: register esi, replayed as the entry ran it */
    cow_lift_102b3840(g, param_1, param_2);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
