/* f_0x1014b750 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014b750 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014b750(Guest* g, CowU32 param_1)
{
    char cVar1;
    if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) == 0) {
        return;
      }
      cVar1 = cow_bridge_1014b630(g, COW_IMG(COW_ADDR_LIFT_1014B761), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      if (cVar1 == '\0') {
        cow_bridge_100e5110(g, COW_IMG(COW_ADDR_LIFT_1014B76A), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      }
      cow_bridge_101ec220(g, COW_IMG(COW_ADDR_LIFT_1014B783), 4u, (const CowU32[]){ 0xfffffc19, 0xfffffc19, 0, 0 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      cow_bridge_10161670(g, COW_IMG(COW_ADDR_LIFT_1014B78E), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      cVar1 = cow_bridge_101cc070(g, COW_IMG(COW_ADDR_LIFT_1014B795), 1u, (const CowU32[]){ 0 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      if ((cVar1 == '\0') || (cVar1 = cow_bridge_10097d50(g, COW_IMG(COW_ADDR_LIFT_1014B7A1), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u), cVar1 != '\0')) {
        wr8((uint32_t)(param_1 + 0x57), 0);
      }
      else {
        wr8((uint32_t)(param_1 + 0x57), 1);
      }
      wr8((uint32_t)(param_1 + 0x56), 0);
      cow_bridge_1014b950(g, COW_IMG(COW_ADDR_LIFT_1014B7BA), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1014B7CD), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10371A24), 1, 0 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014b750(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x1014b750: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014b755: push esi */
    cow_lift_1014b750(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
