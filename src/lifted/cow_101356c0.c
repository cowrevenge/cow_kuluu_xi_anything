/* f_0x101356c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101356c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101356c0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (((param_1 < 0x12) && (param_2 != 0)) && (param_3 != (CowU32)0x0)) {
        switch(param_1) {
        case 0:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E2C)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_1013570B), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 1:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E30)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_1013571C), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 2:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E34)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_1013572D), 1u, (const CowU32[]){ 9u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 4:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E3C)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_1013573E), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 5:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E40)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_1013574F), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 6:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E44)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_10135760), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 7:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E48)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_10135771), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 8:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E4C)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_10135782), 1u, (const CowU32[]){ 7u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 9:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E6C)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_10135793), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 10:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E50)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_101357A4), 1u, (const CowU32[]){ 10u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xb:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E54)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_101357B5), 1u, (const CowU32[]){ 11u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xc:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E58)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_101357C6), 1u, (const CowU32[]){ 12u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xd:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E5C)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_101357D7), 1u, (const CowU32[]){ 13u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xe:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E60)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_101357E8), 1u, (const CowU32[]){ 14u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xf:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E64)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_101357F9), 1u, (const CowU32[]){ 15u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0x10:
          wr32((uint32_t)(param_2 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_10666E68)));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_1013580A), 1u, (const CowU32[]){ 16u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101356c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->edx = param_1;   /* 0x101356c0: the value the entry loaded and the decompiler dropped */
    cow_lift_101356c0(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
