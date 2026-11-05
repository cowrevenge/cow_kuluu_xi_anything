/* f_0x10080140 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10080140 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10080140(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
    short sVar1;
    int iVar2;
    int iVar3;
    iVar3 = 0;
      if (param_1 == 0) {
        g->eax = (CowU32)(0); return;
      }
      if (param_3 == 0) {
        g->eax = (CowU32)(0); return;
      }
      if (param_2 == (CowU32)0x0) {
        g->eax = (CowU32)(0); return;
      }
      if (rd8((uint32_t)param_2) == '\0') {
        g->eax = (CowU32)(0); return;
      }
      cow_bridge_1018ee20(g, COW_IMG(COW_ADDR_LIFT_1008018C), 1u, (const CowU32[]){ 1 }, 0u, 0u, g->eax, 0u);
      cow_bridge_1018ee20(g, COW_IMG(COW_ADDR_LIFT_1008019F), 1u, (const CowU32[]){ 1 }, 0u, 0u, g->eax, 0u);
      sVar1 = rd16((uint32_t)(param_1 + 0x14));
      while (-1 < sVar1) {
        if ((((rd16((uint32_t)(param_1 + 0x16)) & param_4) == 0) &&
            ((rd16((uint32_t)(param_1 + 0x16)) & param_3) != 0)) &&
           (iVar2 = cow_bridge_10311ef0(g, COW_IMG(COW_ADDR_LIFT_100801C8), 2u, (const CowU32[]){ param_1, param_2 }, 0u, 0u, g->eax, 8u), iVar2 != 0)) {
          cow_bridge_10077e30(g, COW_IMG(COW_ADDR_LIFT_100801D5), 1u, (const CowU32[]){ param_1 }, 0u, 0u, g->eax, 4u);
          iVar3 = iVar3 + 1;
        }
        sVar1 = rd16((uint32_t)(param_1 + 0x2c));
        param_1 = param_1 + 0x18;
      }
      cow_bridge_1018ee20(g, COW_IMG(COW_ADDR_LIFT_100801F6), 1u, (const CowU32[]){ 0 }, 0u, 0u, g->eax, 0u);
      cow_bridge_1018ee20(g, COW_IMG(COW_ADDR_LIFT_10080209), 1u, (const CowU32[]){ 0 }, 0u, 0u, g->eax, 0u);
      g->eax = (CowU32)(0); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10080140(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10080140: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10080141: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10080142: push esi */
    cow_lift_10080140(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
