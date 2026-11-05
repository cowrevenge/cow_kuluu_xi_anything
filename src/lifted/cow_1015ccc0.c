/* f_0x1015ccc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1015ccc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1015ccc0(Guest* g, CowU32 param_1)
{

    wr32((uint32_t)(param_1 + 0x14b8), param_1 + 0xb0);
      wr32((uint32_t)(param_1 + 0x157c), param_1 + 0xb4);
      wr32((uint32_t)(param_1 + 0x14f0), param_1 + 0x14af);
      wr32((uint32_t)(param_1 + 0x1538), 0);
      wr32((uint32_t)(param_1 + 0x153c), 0);
      wr32((uint32_t)(param_1 + 0x1540), 0);
      wr32((uint32_t)(param_1 + 0x1544), 0);
      wr32((uint32_t)(param_1 + 0x1548), 0);
      wr32((uint32_t)(param_1 + 0x152c), 0);
      wr32((uint32_t)(param_1 + 0x154c), 0);
      wr32((uint32_t)(param_1 + 0x1584), 0);
      wr32((uint32_t)(param_1 + 0x1550), 0);
      wr32((uint32_t)(param_1 + 0x1554), 0);
      wr32((uint32_t)(param_1 + 0x1558), 0);
      wr32((uint32_t)(param_1 + 0x155c), 0);
      wr32((uint32_t)(param_1 + 0x1560), 0);
      wr32((uint32_t)(param_1 + 0x1564), 0);
      wr32((uint32_t)(param_1 + 0x1568), 0);
      wr32((uint32_t)(param_1 + 0x156c), 0);
      wr32((uint32_t)(param_1 + 0x1570), 0);
      wr32((uint32_t)(param_1 + 0x1574), 0);
      wr32((uint32_t)(param_1 + 0x1578), 0);
      wr32((uint32_t)(param_1 + 0x1588), 0);
      wr32((uint32_t)(param_1 + 0x158c), 0);
      wr32((uint32_t)(param_1 + 0x1590), 0);
      wr32((uint32_t)(param_1 + 0x1594), 0);
      wr32((uint32_t)(param_1 + 0x1598), 0);
      wr32((uint32_t)(param_1 + 0x159c), 0);
      wr32((uint32_t)(param_1 + 0x15a0), 0);
      wr32((uint32_t)(param_1 + 0x15a4), 0);
      wr32((uint32_t)(param_1 + 0x14e8), 0);
      wr32((uint32_t)(param_1 + 0x14ec), 0);
      wr32((uint32_t)(param_1 + 0x1530), param_1 + 0xb8);
      wr32((uint32_t)(param_1 + 0x1580), 0);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1015ccc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x1015ccc0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1015ccc4: push esi */
    cow_lift_1015ccc0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
