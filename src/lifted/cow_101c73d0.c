/* f_0x101c73d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c73d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c73d0(Guest* g, CowU32 param_1, CowU32 param_2)
{
    char cVar1;
    int iVar2;
    int iVar3;
    CowU32 uStack_c;
    CowU16 uStack_8;
    CowU16 uStack_6;
    CowU32 uStack_4;
    if (rd32((uint32_t)(param_1 + 0xc)) == 0) {
        g->eax = (CowU32)(4); return;
      }
      cVar1 = cow_bridge_101c4c90(g, COW_IMG(COW_ADDR_LIFT_101C73FF), 2u, (const CowU32[]){ param_2, 0 }, 0u, 0u, g->eax, 0u);
      if (cVar1 != '\0') {
        g->eax = (CowU32)(4); return;
      }
      uStack_8 = rd16((uint32_t)(param_1 + 4));
      uStack_6 = rd16((uint32_t)(param_1 + 8));
      iVar3 = rd32((uint32_t)(param_1 + 4)) * rd32((uint32_t)(param_1 + 8)) * 4;
      uStack_c = 0x5849424d;
      uStack_4 = cow_bridge_101c8c50(g, COW_IMG(COW_ADDR_LIFT_101C743F), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), iVar3 }, 0u, 0u, g->eax, 0u);
      iVar2 = cow_bridge_101c4920(g, COW_IMG(COW_ADDR_LIFT_101C745D), 5u, (const CowU32[]){ param_2, &uStack_c, 0xc, 0, 0 }, 0u, 0u, g->eax, 0u);
      if (iVar2 < 0) {
        g->eax = (CowU32)(4); return;
      }
      iVar2 = cow_bridge_101c4920(g, COW_IMG(COW_ADDR_LIFT_101C7484), 5u, (const CowU32[]){ param_2, rd32((uint32_t)(param_1 + 0xc)), iVar3, 1, 0 }, 0u, 0u, g->eax, 0u);
      if (iVar2 < 0) {
        cow_bridge_101c49e0(g, COW_IMG(COW_ADDR_LIFT_101C7496), 2u, (const CowU32[]){ param_2, 0 }, 0u, 0u, g->eax, 0u);
        g->eax = (CowU32)(4); return;
      }
      g->eax = (CowU32)(4); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 12 locals, pops [-], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c73d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0xcu;                      /* 0x101c73d0: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101c73d3: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101c73d4: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101c73d5: push edi */
    cow_lift_101c73d0(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
