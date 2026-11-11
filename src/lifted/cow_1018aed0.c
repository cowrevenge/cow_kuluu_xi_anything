/* f_0x1018aed0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018aed0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018aed0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32(COW_IMG(COW_ADDR_LIFT_1065CA74), 0x3f800000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA94), 0x3f800000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA58), rd32(COW_IMG(COW_ADDR_LIFT_1065CA58)) & 0xfffffff8);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA5C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA60), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA64), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA65), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA66), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA67), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA68), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA69), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6A), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6B), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6D), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6E), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6F), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA70), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA71), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA72), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA73), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA78), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA7C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA84), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA85), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA86), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA87), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA88), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA89), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8A), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8B), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8D), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8E), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8F), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA90), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA91), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA92), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA93), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA98), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA9C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA5), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA6), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA7), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA8), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAAC), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB0), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB5), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB6), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB8), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB9), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CABA), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CABB), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CABC), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAC0), 0);
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
void cow_adapter_1018aed0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1065CA58));   /* 0x1018aed0: the value the entry loaded and the decompiler dropped */
    cow_lift_1018aed0(g);

    g->eax = (CowU32)(0u);   /* the entry left eax here on its way to the ret */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
