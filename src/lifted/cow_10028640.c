/* f_0x10028640 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10028640 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10028640(Guest* g, CowU32 param_1, CowU32 param_2)
{
    CowU32 puVar1;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_10456FA8)) & 1) == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_10456FA8), rd32(COW_IMG(COW_ADDR_LIFT_10456FA8)) | 1);
        wr32(COW_IMG(COW_ADDR_LIFT_10456FAC), COW_IMG(COW_ADDR_LIFT_103299F0));
        cow_bridge_103134c6(g, COW_IMG(COW_ADDR_LIFT_1002866A), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_100286A0) }, 0u, 0u, g->eax, 4u);
      }
      puVar1 = (CowU32)cow_bridge_10028fd0(g, COW_IMG(COW_ADDR_LIFT_10028681), 3u, (const CowU32[]){ param_1 + 4, param_2, 0 }, 0u, 0u, g->eax, 12u);
      if (puVar1 == (CowU32)0x0) {
        g->eax = (CowU32)((CowU32)0x0); return;
      }
      wr32((uint32_t)puVar1, rd32(COW_IMG(COW_ADDR_LIFT_10456FAC)));
      g->eax = (CowU32)((CowU32)0x0); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10028640(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */

    cow_lift_10028640(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
