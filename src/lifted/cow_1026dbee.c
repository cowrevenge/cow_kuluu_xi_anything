/* f_0x1026dbee - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1026dbee (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1026dbee(Guest* g, CowU32 param_1, CowU32 param_2)
{

    cow_bridge_1026d0ea(g, COW_IMG(COW_ADDR_LIFT_1026DC04), 2u, (const CowU32[]){ param_1 + 0x4034, param_2 }, 0u, 0u, param_2, 8u);
      cow_bridge_10316dab(g, COW_IMG(COW_ADDR_LIFT_1026DC0E), 0u, (const CowU32[]){ 0u }, 0u, 0u, param_2, 0u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer yes, 0 locals, pops [ebp], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1026dbee(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1026dbee: push ebp */
    g->ebp = g->esp;                       /* 0x1026dbef: mov ebp, esp */
    g->eax = param_2;   /* 0x1026dbf1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x1026dbf4: push eax */
    g->ecx = param_1;   /* 0x1026dbf5: the value the entry loaded and the decompiler dropped */
    cow_lift_1026dbee(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
