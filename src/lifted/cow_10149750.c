/* f_0x10149750 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10149750 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10149750(Guest* g, CowU32 param_1, CowU32 param_2)
{
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    if (param_2 != 5) {
        if (param_2 == 6) {
          if (rd8((uint32_t)(param_1 + 0x50)) == '\0') {
            cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_10149810), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 0u, 0u, g->eax, 0u);
            g->eax = (CowU32)(0); return;
          }
          cow_bridge_10149040(g, COW_IMG(COW_ADDR_LIFT_10149787), 1u, (const CowU32[]){ 0 }, 0u, 0u, g->eax, 0u);
        }
        g->eax = (CowU32)(0); return;
      }
      iVar2 = cow_bridge_10149070(g, COW_IMG(COW_ADDR_LIFT_10149767), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      if (iVar2 < 0) {
        g->eax = (CowU32)(0); return;
      }
      if (rd8((uint32_t)(param_1 + 0x50)) == '\0') {
        uVar3 = cow_bridge_10149070(g, COW_IMG(COW_ADDR_LIFT_1014977F), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        cow_bridge_10149040(g, COW_IMG(COW_ADDR_LIFT_1014981F), 1u, (const CowU32[]){ uVar3 }, 0u, 0u, g->eax, 0u);
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014978C), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        g->eax = (CowU32)(0); return;
      }
      if (rd8((uint32_t)(param_1 + 0x52)) == '\0') {
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_101497E8), 1u, (const CowU32[]){ 0xb2 }, 0u, 0u, g->eax, 0u);
        cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_101497B4), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        g->eax = (CowU32)(0); return;
      }
      cVar1 = cow_bridge_101490c0(g, COW_IMG(COW_ADDR_LIFT_101497A0), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      if (cVar1 == '\0') {
        cVar1 = cow_bridge_10149130(g, COW_IMG(COW_ADDR_LIFT_101497AB), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        if (cVar1 == '\0') {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_101497ED), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
          g->eax = (CowU32)(0); return;
        }
      }
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101497CD), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10371998), 1, 0 }, 0u, 0u, g->eax, 0u);
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_101497D2), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      g->eax = (CowU32)(0); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10149750(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    cow_lift_10149750(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
