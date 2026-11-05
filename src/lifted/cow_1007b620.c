/* f_0x1007b620 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007b620 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007b620(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    iVar1 = cow_bridge_1007b6a0(g, COW_IMG(COW_ADDR_LIFT_1007B634), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 4)), 0x103579fc }, 0u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103551E0)), 8u);
      if (iVar1 == 0) {
        iVar1 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_1007B64A), 1u, (const CowU32[]){ 0xb5 }, 0u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103551E0)), 4u);
        uVar3 = -(CowU32)(iVar1 + 1U < 3) & iVar1 + 1U;
      }
      else {
        uVar3 = iVar1 - 1;
      }
      cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1007B660), 2u, (const CowU32[]){ 0xb5, uVar3 }, 0u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103551E0)), 8u);
      uVar2 = 0x122;
      if (uVar3 == 1) {
        uVar2 = 0x123;
      }
      else if (uVar3 == 2) {
        cow_bridge_10129de0(g, COW_IMG(COW_ADDR_LIFT_1007B67F), 1u, (const CowU32[]){ 0x124 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_103551E0)), 0u);
        g->eax = (CowU32)(param_3); return;
      }
      cow_bridge_10129de0(g, COW_IMG(COW_ADDR_LIFT_1007B696), 1u, (const CowU32[]){ uVar2 }, 0u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103551E0)), 0u);
      g->eax = (CowU32)(param_3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007b620(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_103551E0));   /* 0x1007b620: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1007b625: push esi */
    cow_lift_1007b620(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
