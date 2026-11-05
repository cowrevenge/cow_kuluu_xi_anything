/* f_0x1015baf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1015baf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1015baf0(Guest* g)
{
    int iVar1;
    CowU32 piVar2;
    if (rd32(COW_IMG(COW_ADDR_LIFT_10621810)) < 100) {
        piVar2 = COW_IMG(COW_ADDR_LIFT_1057B1E8) + rd32(COW_IMG(COW_ADDR_LIFT_10621810)) * 0x56b;
        iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10621810));
        do {
          if (rd32((uint32_t)piVar2) == 0) {
            g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_10579D38) + iVar1 * 0x15ac); return;
          }
          piVar2 = piVar2 + 0x56b;
          iVar1 = iVar1 + 1;
        } while ((int)piVar2 < 0x10602918);
      }
      iVar1 = 0;
      if (rd32(COW_IMG(COW_ADDR_LIFT_10621810)) < 1) {
        g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_10579D38) + iVar1 * 0x15ac); return;
      }
      piVar2 = COW_IMG(COW_ADDR_LIFT_1057B1E8);
      do {
        if (rd32((uint32_t)piVar2) == 0) {
          g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_10579D38) + iVar1 * 0x15ac); return;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x56b;
      } while (iVar1 < rd32(COW_IMG(COW_ADDR_LIFT_10621810)));
      g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_10579D38) + iVar1 * 0x15ac); return;
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
void cow_adapter_1015baf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10621810));   /* 0x1015baf0: the value the entry loaded and the decompiler dropped */
    cow_lift_1015baf0(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
