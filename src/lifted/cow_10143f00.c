/* f_0x10143f00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10143f00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10143f00(Guest* g)
{

    cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F0F), 2u, (const CowU32[]){ 5, 3 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F1B), 2u, (const CowU32[]){ 5, 4 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F27), 2u, (const CowU32[]){ 5, 5 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F33), 2u, (const CowU32[]){ 5, 7 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F3F), 2u, (const CowU32[]){ 5, 8 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F4B), 2u, (const CowU32[]){ 5, 9 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F57), 2u, (const CowU32[]){ 5, 10 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F63), 2u, (const CowU32[]){ 5, 0xb }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F6F), 2u, (const CowU32[]){ 5, 0x10 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F7B), 2u, (const CowU32[]){ 5, 0x11 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10143F87), 2u, (const CowU32[]){ 5, 0x12 }, 0u, 0u, g->eax, 0u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10143f00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10143f00: push esi */
    cow_lift_10143f00(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
