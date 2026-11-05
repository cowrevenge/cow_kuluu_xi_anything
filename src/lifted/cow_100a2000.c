/* f_0x100a2000 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a2000 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a2000(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
    int iVar1;
    CowU32 uStack_54;
    CowU32 uStack_50;
    CowU16 uStack_4c;
    CowU32 uStack_48;
    CowU32 uStack_44;
    CowU8 uStack_4;
    CowU8 uStack_3;
    iVar1 = cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_100A2008), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      uStack_54 = rd32((uint32_t)(iVar1 + 0x78));
      uStack_4c = rd16((uint32_t)(param_3 + 0xc));
      uStack_48 = rd32((uint32_t)(param_3 + 4));
      uStack_44 = rd32((uint32_t)(param_3 + 8));
      uStack_4 = 0;
      uStack_3 = 0;
      uStack_50 = uStack_54;
      cow_bridge_100a1ab0(g, COW_IMG(COW_ADDR_LIFT_100A2042), 1u, (const CowU32[]){ &uStack_54 }, 0u, 0u, g->eax, 0u);
      g->eax = (CowU32)(1); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 84 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a2000(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x54u;                      /* 0x100a2000: 84 bytes of locals */
    cow_lift_100a2000(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
