/* f_0x1015d080 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1015d080 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1015d080(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32((uint32_t)(param_1 + 0x14b8), param_1 + 0xb0);
      wr32((uint32_t)(param_1 + 0x14bc), 0);
      wr32((uint32_t)(param_1 + 0x14c0), 0);
      wr32((uint32_t)(param_1 + 0x14b4), 0);
      wr32((uint32_t)(param_1 + 0x14f4), 0);
      wr32((uint32_t)(param_1 + 0x14c4), 0);
      wr32((uint32_t)(param_1 + 0x14d0), 0);
      wr32((uint32_t)(param_1 + 0x14d4), 0);
      wr32((uint32_t)(param_1 + 0x14d8), 0);
      wr32((uint32_t)(param_1 + 0x14dc), 0);
      wr32((uint32_t)(param_1 + 0x14e0), 0);
      wr32((uint32_t)(param_1 + 0x14e4), 0);
      wr32((uint32_t)(param_1 + 0x1508), 0);
      wr32((uint32_t)(param_1 + 0x1510), 0);
      wr32((uint32_t)(param_1 + 0x1514), 0);
      wr32((uint32_t)(param_1 + 0x1534), 0);
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
      wr32((uint32_t)(param_1 + 0x1530), 0);
      wr32((uint32_t)(param_1 + 0x157c), 0);
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
      wr32((uint32_t)(param_1 + 0x1580), param_1 + 0xb4);
      wr32((uint32_t)(param_1 + 0x14f0), param_1 + 0x14af);
      return;
/* COW_LIFTED END */
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
void cow_adapter_1015d080(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x1015d080: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->eax + 0xB0u)); }   /* 0x1015d084: register ecx, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(g->eax + 0xB4u)); }   /* 0x1015d08a: register edx, replayed as the entry ran it */
    cow_lift_1015d080(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
