/* f_0x100149b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100149b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100149b0(Guest* g, CowU32 param_1)
{
    char cVar1;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1046393C)) != 0) {
        cow_bridge_102463e0(g, COW_IMG(COW_ADDR_LIFT_100149C5), 1u, (const CowU32[]){ 0xffffffff }, 0u, 0u, g->eax, 0u);
      }
      wr32((uint32_t)(param_1 + 0x334), 0x80000000);
      wr32((uint32_t)(param_1 + 0x324), 0x80000000);
      wr32((uint32_t)(param_1 + 0x328), 0x80000000);
      cow_bridge_100db140(g, COW_IMG(COW_ADDR_LIFT_100149FA), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      cVar1 = cow_bridge_10014c90(g, COW_IMG(COW_ADDR_LIFT_10014A01), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)(0); return;
      }
      wr32((uint32_t)(param_1 + 0x44), 4);
      g->eax = (CowU32)(0); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100149b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100149b0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100149b1: push esi */
    cow_lift_100149b0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
