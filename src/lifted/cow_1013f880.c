/* f_0x1013f880 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013f880 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013f880(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    cVar1 = cow_bridge_10159440(g, COW_IMG(COW_ADDR_LIFT_1013F892), 2u, (const CowU32[]){ 269744608u, 32u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 == '\0') {
        cow_bridge_10129d90(g, COW_IMG(COW_ADDR_LIFT_1013F8A3), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cow_bridge_101594e0(g, COW_IMG(COW_ADDR_LIFT_1013F8B4), 1u, (const CowU32[]){ 269744496u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1013f630(g, COW_IMG(COW_ADDR_LIFT_1013F8BB), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
      uVar3 = 2;
      uVar2 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1013F8C9), 3u, (const CowU32[]){ 13u, 11u, 2u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_1013F8D8), 1u, (const CowU32[]){ uVar3 }, uVar2, g->edx, g->eax, 0u);
      uVar3 = 2;
      uVar2 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1013F8E3), 3u, (const CowU32[]){ 14u, 46u, 2u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_1013F8F2), 1u, (const CowU32[]){ uVar3 }, uVar2, g->edx, g->eax, 0u);
      cow_bridge_1015e6e0(g, COW_IMG(COW_ADDR_LIFT_1013F90D), 5u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057822C)) + 8)), 1, 1, 0, 0 }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e6e0(g, COW_IMG(COW_ADDR_LIFT_1013F929), 5u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578230)) + 8)), 1, 1, 0, 0 }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e6e0(g, COW_IMG(COW_ADDR_LIFT_1013F945), 5u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057823C)) + 8)), 1, 1, 0, 0 }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e6e0(g, COW_IMG(COW_ADDR_LIFT_1013F960), 5u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578170)) + 8)), 1, 1, 0, 0 }, 274864184u, g->edx, g->eax, 0u);
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
void cow_adapter_1013f880(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_1057876C));   /* 0x1013f880: the value the entry loaded and the decompiler dropped */
    cow_lift_1013f880(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
