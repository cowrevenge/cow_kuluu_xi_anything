/* f_0x100178b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100178b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100178b0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32(COW_IMG(COW_ADDR_LIFT_10456A60), 0x200);
      wr32(COW_IMG(COW_ADDR_LIFT_10456C04), 0x200);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A98), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A58), 0x280);
      wr32(COW_IMG(COW_ADDR_LIFT_10456C08), 0x1e0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AC8), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A90), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456ACC), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A78), 0x32);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A88), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_10456BFC), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A5C), 0x3f800000);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A6C), 0x3f800000);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A68), 0x3f800000);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AC0), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AAC), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A70), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AB8), 0x3f800000);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AA8), 0x3f800000);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A80), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456BF0), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AD0), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AB0), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AA0), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456C00), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_10456BF8), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456BE4), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AA4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456BEC), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AD8), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AC4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456BE8), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A9C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A94), 0xc);
      wr32(COW_IMG(COW_ADDR_LIFT_10456ABC), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AD4), 0x3bc49ba6);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AB4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A64), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A7C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456BF4), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A74), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A8C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456AE0), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456A84), 0);
      return;
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
void cow_adapter_100178b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->ecx = 512u;   /* 0x100178b0: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x100178b5: the value the entry loaded and the decompiler dropped */
    cow_lift_100178b0(g);

    g->ecx = (CowU32)(1u);   /* the entry left ecx here on its way to the ret */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
