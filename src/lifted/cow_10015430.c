/* f_0x10015430 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10015430 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10015430(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, CowU32 param_10)
{

    wr32((uint32_t)(param_1 + 0x2f4), param_2);
      wr32((uint32_t)(param_1 + 0x2e4), param_3);
      wr32((uint32_t)(param_1 + 0x2e8), param_4);
      wr32((uint32_t)(param_1 + 0x2d8), param_8);
      wr32((uint32_t)(param_1 + 0x2d4), param_7);
      wr32((uint32_t)(param_1 + 0x2e0), param_10);
      wr32((uint32_t)(param_1 + 0x2dc), param_9);
      cow_bridge_10015490(g, COW_IMG(COW_ADDR_LIFT_1001547B), 0u, (const CowU32[]){ 0u }, 0u, 0u, param_2, 0u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 10 parameter(s), cleanup 36 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 36.
   Arguments: 1 register argument(s) [ecx], 9 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10015430(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    g->eax = param_2;   /* 0x10015430: the value the entry loaded and the decompiler dropped */
    g->edx = param_3;   /* 0x10015434: the value the entry loaded and the decompiler dropped */
    cow_lift_10015430(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 36u);
}
/* COW_ADAPTER END */
