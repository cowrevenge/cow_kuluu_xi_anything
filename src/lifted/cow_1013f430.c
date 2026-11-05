/* f_0x1013f430 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013f430 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013f430(Guest* g)
{
    short sVar1;
    int extraout_EDX;
    int extraout_EDX_00;
    sVar1 = cow_bridge_1013f000(g, COW_IMG(COW_ADDR_LIFT_1013F43D), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      if ((rd16((uint32_t)(extraout_EDX + 0x22)) == sVar1) &&
         (sVar1 = cow_bridge_1013f030(g, COW_IMG(COW_ADDR_LIFT_1013F448), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u), rd16((uint32_t)(extraout_EDX_00 + 0x1c)) == sVar1)) {
        return;
      }
      cow_bridge_1013f3a0(g, COW_IMG(COW_ADDR_LIFT_1013F455), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 0 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1013f430(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */


    cow_lift_1013f430(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
