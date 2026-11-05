/* f_0x1028dd70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028dd70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1028dd70(Guest* g, CowU32 param_1)
{
    int iVar1;
    iVar1 = rd32((uint32_t)(param_1 + 0x1c));
      if (iVar1 == 0) {
        cow_bridge_1028de60(g, COW_IMG(COW_ADDR_LIFT_1028DDD5), 5u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x20)), rd32((uint32_t)(param_1 + 0x24)), rd32((uint32_t)(param_1 + 0x28)), rd32((uint32_t)(param_1 + 0x2c)), rd32((uint32_t)(param_1 + 0x30)) }, 0u, 0u, param_1, 20u);
      }
      else {
        if (iVar1 == 1) {
          cow_bridge_1028ded0(g, COW_IMG(COW_ADDR_LIFT_1028DDB8), 6u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x20)), rd32((uint32_t)(param_1 + 0x24)), rd32((uint32_t)(param_1 + 0x28)), rd32((uint32_t)(param_1 + 0x2c)), rd32((uint32_t)(param_1 + 0x30)), rd32((uint32_t)(param_1 + 0x34)) }, 0u, 0u, param_1, 24u);
          return;
        }
        if (iVar1 == 2) {
          cow_bridge_1028e080(g, COW_IMG(COW_ADDR_LIFT_1028DD97), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x24)), rd32((uint32_t)(param_1 + 0x28)), rd32((uint32_t)(param_1 + 0x40)), rd32((uint32_t)(param_1 + 0x44)) }, 0u, 0u, param_1, 16u);
          return;
        }
      }
      return;
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
void cow_adapter_1028dd70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x1028dd70: the value the entry loaded and the decompiler dropped */
    cow_lift_1028dd70(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
