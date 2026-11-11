/* f_0x1020f530 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1020f530 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1020f530(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F53C), 2u, (const CowU32[]){ 60u, 270601328u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F550), 2u, (const CowU32[]){ 62u, 270601376u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F564), 2u, (const CowU32[]){ 63u, 270600752u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F578), 2u, (const CowU32[]){ 61u, 270600864u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F58C), 2u, (const CowU32[]){ 64u, 270601008u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F5A3), 2u, (const CowU32[]){ 134u, 270456848u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F5BA), 2u, (const CowU32[]){ 130u, 270452320u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F5D1), 2u, (const CowU32[]){ 132u, 270452560u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_10663490), 0);
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F5F2), 2u, (const CowU32[]){ 262u, 270388368u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F609), 2u, (const CowU32[]){ 265u, 270388480u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F620), 2u, (const CowU32[]){ 263u, 270388496u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cVar1 = cow_bridge_100fc3a0(g, COW_IMG(COW_ADDR_LIFT_1020F637), 2u, (const CowU32[]){ 264u, 270388608u }, g->ecx, g->edx, g->eax, 8u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(cVar1 != '\0') & 0xffu)); return;
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
void cow_adapter_1020f530(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */


    cow_lift_1020f530(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
