/* f_0x1014de10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014de10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014de10(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    wr16((uint32_t)((int)param_1 + 0x30), 0);
      wr16((uint32_t)((int)param_1 + 0x32), 0);
      wr16((uint32_t)((int)param_1 + 0x548), 0);
      uVar1 = cow_bridge_10129ca0(g, COW_IMG(COW_ADDR_LIFT_1014DE2F), 2u, (const CowU32[]){ 153u, g->esi }, param_1, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x138), uVar1);
      cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1014DE43), 2u, (const CowU32[]){ 1u, g->ebx }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
      cow_bridge_10118f70(g, COW_IMG(COW_ADDR_LIFT_1014DE52), 1u, (const CowU32[]){ (g->esi + 1344u) }, rd32((uint32_t)((int)param_1 + 8)), g->edx, (g->esi + 1344u), 0u);
      cow_bridge_1014e300(g, COW_IMG(COW_ADDR_LIFT_1014DE59), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_10118530(g, COW_IMG(COW_ADDR_LIFT_1014DE64), 2u, (const CowU32[]){ 0, 0xffffffff }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
      wr8((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 8)) + 0x85), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014de10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1014de10: push ebx */
    g->esi = g->ecx;   /* 0x1014de12: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1014de14: the value the entry loaded and the decompiler dropped */
    cow_lift_1014de10(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
