/* f_0x1014ec40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014ec40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014ec40(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (param_1 == 5) {
        switch(param_2) {
        case 1:
          cow_bridge_101dae10(g, COW_IMG(COW_ADDR_LIFT_1014EC73), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10663760)), 1, 0, 0 }, g->ecx, g->edx, g->eax, 16u);
          return;
        case 2:
          cow_bridge_101dae10(g, COW_IMG(COW_ADDR_LIFT_1014EC8B), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10663768)), 2, 0, 0 }, g->ecx, g->edx, g->eax, 16u);
          return;
        case 3:
          cow_bridge_101dae10(g, COW_IMG(COW_ADDR_LIFT_1014ECA6), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10663764)), 4, COW_IMG(COW_ADDR_LIFT_101DADD0), 0 }, g->ecx, g->edx, g->eax, 16u);
          return;
        case 4:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ECB7), 3u, (const CowU32[]){ 5u, 1u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 5:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ECC8), 3u, (const CowU32[]){ 6u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 6:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ECD9), 3u, (const CowU32[]){ 7u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 7:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ECEA), 3u, (const CowU32[]){ 8u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 8:
          cow_bridge_101dae10(g, COW_IMG(COW_ADDR_LIFT_1014ED78), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10663778)), 9, 0, 0 }, g->ecx, g->edx, g->eax, 16u);
          break;
        case 9:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ECFB), 3u, (const CowU32[]){ 10u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 10:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ED0C), 3u, (const CowU32[]){ 11u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 0xb:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ED1D), 3u, (const CowU32[]){ 12u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 0xc:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ED2E), 3u, (const CowU32[]){ 13u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 0xd:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ED3F), 3u, (const CowU32[]){ 14u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 0xe:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ED50), 3u, (const CowU32[]){ 15u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        case 0xf:
          cow_bridge_101daf70(g, COW_IMG(COW_ADDR_LIFT_1014ED61), 3u, (const CowU32[]){ 16u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
          return;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014ec40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));

    cow_lift_1014ec40(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
