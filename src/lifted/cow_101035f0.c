/* f_0x101035f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101035f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101035f0(Guest* g, CowU32 param_1)
{
    int iStack_10;
    int iStack_c;
    int iStack_8;
    int iStack_4;
    iStack_10 = 0;
      iStack_c = 0;
      iStack_8 = 0;
      iStack_4 = 0;
      if (rd32(COW_IMG(COW_ADDR_LIFT_104E0AF4)) == 0) {
        g->eax = (CowU32)(0); return;
      }
      cow_bridge_10313683(g, COW_IMG(COW_ADDR_LIFT_10103638), 6u, (const CowU32[]){ param_1, 0x103647f0, &iStack_10, &iStack_c, &iStack_8, &iStack_4 }, 0u, 0u, 0u, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104E0AF4)) + 0x438), iStack_4 + (iStack_8 + (iStack_c + iStack_10 * 100) * 100) * 100);
      g->eax = (CowU32)(0); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 16 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101035f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x10u;                      /* 0x101035f0: 16 bytes of locals */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_104E0AF4));   /* 0x101035f3: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x101035f9: the value the entry loaded and the decompiler dropped */
    cow_lift_101035f0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
