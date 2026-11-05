/* f_0x10114d00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10114d00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10114d00(Guest* g)
{
    CowU32 puVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU8 auStack_20[32];
    uVar6 = 0;
      uVar5 = 0;
      iVar3 = 0;
      do {
        uVar4 = 1 << ((CowU8)iVar3 & 0x1f);
        uVar5 = uVar5 | -(CowU32)((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x10)) & uVar4) != 0) & uVar4;
        uVar6 = uVar6 | -(CowU32)((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x14)) & uVar4) != 0) & uVar4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
      cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_10114D4E), 4u, (const CowU32[]){ auStack_20, COW_IMG(COW_ADDR_LIFT_1036C128), uVar6, uVar5 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
      iVar3 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if (((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) < '\0') && ((iVar3 == 2 || (iVar3 == 3)))) || (iVar3 != 0)) {
        puVar1 = COW_IMG(COW_ADDR_LIFT_1036C124);
      }
      else {
        puVar1 = COW_IMG(COW_ADDR_LIFT_1036C120);
      }
      cow_bridge_101092c0(g, COW_IMG(COW_ADDR_LIFT_10114D86), 1u, (const CowU32[]){ puVar1 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
      cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_10114D92), 1u, (const CowU32[]){ auStack_20 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
      uVar2 = cow_bridge_101c46b0(g, COW_IMG(COW_ADDR_LIFT_10114D9D), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
      cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_10114DA5), 1u, (const CowU32[]){ uVar2 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10114d00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10456A28));   /* 0x10114d00: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x20u;                      /* 0x10114d05: 32 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10114d08: push ebx */
    cow_lift_10114d00(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
