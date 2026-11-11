/* f_0x101f4060 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f4060 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f4060(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    switch(param_1) {
      case 0:
        g->eax = (CowU32)(1); return;
      case 1:
        g->eax = (CowU32)(2); return;
      case 2:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(4) & 0xffffu)); return;
      default:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0x11) & 0xffffu)); return;
      case 4:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(5) & 0xffffu)); return;
      case 5:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(6) & 0xffffu)); return;
      case 6:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(7) & 0xffffu)); return;
      case 7:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(8) & 0xffffu)); return;
      case 8:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(9) & 0xffffu)); return;
      case 9:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(3) & 0xffffu)); return;
      case 10:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(10) & 0xffffu)); return;
      case 0xb:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0xb) & 0xffffu)); return;
      case 0xc:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0xc) & 0xffffu)); return;
      case 0xd:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0xd) & 0xffffu)); return;
      case 0xe:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0xe) & 0xffffu)); return;
      case 0xf:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0xf) & 0xffffu)); return;
      case 0x10:
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0x10) & 0xffffu)); return;
      }
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f4060(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x101f4060: the value the entry loaded and the decompiler dropped */
    cow_lift_101f4060(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
