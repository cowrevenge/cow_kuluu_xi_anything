/* f_0x1018bd90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018bd90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018bd90(Guest* g)
{
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 local_4;
    if ((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104568FC)) + 9)) != '\0') && (rd32(COW_IMG(COW_ADDR_LIFT_1065CB20)) == '\0')) {
        uVar1 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_1018BDAB), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104568FC)), 0u);
        uVar2 = cow_bridge_10103ae0(g, COW_IMG(COW_ADDR_LIFT_1018BDB1), 1u, (const CowU32[]){ uVar1 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104568FC)), 4u);
        g->eax = (CowU32)(uVar2); return;
      }
      cow_bridge_1018c180(g, COW_IMG(COW_ADDR_LIFT_1018BDC0), 1u, (const CowU32[]){ &local_4 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104568FC)), 4u);
      uVar2 = cow_bridge_1018bd30(g, COW_IMG(COW_ADDR_LIFT_1018BDCA), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104568FC)), 0u);
      uVar2 = uVar2 & 0x80000007;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
      }
      g->eax = (CowU32)(uVar2); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ecx], frame pointer no, 0 locals, pops [ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018bd90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1018bd90: push ecx */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104568FC));   /* 0x1018bd91: the value the entry loaded and the decompiler dropped */
    cow_lift_1018bd90(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
