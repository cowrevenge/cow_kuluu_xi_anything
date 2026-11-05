/* f_0x10141c50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10141c50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10141c50(Guest* g, CowU32 param_1)
{
    short sVar1;
    int iVar2;
    short local_18[12];
    local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      local_18[4] = 0;
      local_18[5] = 0;
      local_18[6] = 0;
      local_18[7] = 0;
      local_18[8] = 0;
      iVar2 = 0;
      local_18[9] = 0;
      local_18[10] = 0;
      local_18[0] = 0;
      local_18[0xb] = 0;
      do {
        sVar1 = rd16((uint32_t)(param_1 + iVar2 * 2));
        if (sVar1 == 0) {
          sVar1 = cow_bridge_10141c20(g, COW_IMG(COW_ADDR_LIFT_10141C96), 1u, (const CowU32[]){ iVar2 }, 0u, 0u, 0u, 4u);
        }
        local_18[iVar2] = sVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
      cow_bridge_101444f0(g, COW_IMG(COW_ADDR_LIFT_10141CAE), 1u, (const CowU32[]){ local_18 }, 0u, 0u, 0u, 4u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 24 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10141c50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x18u;                      /* 0x10141c50: 24 bytes of locals */
    g->eax = 0u;   /* 0x10141c53: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10141c55: push esi */
    cow_lift_10141c50(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
