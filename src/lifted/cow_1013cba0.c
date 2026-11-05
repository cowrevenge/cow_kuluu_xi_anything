/* f_0x1013cba0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013cba0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013cba0(Guest* g, CowU32 param_1)
{
    char cVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    if (rd16((uint32_t)(param_1 + 0x24)) == 0) {
        wr32((uint32_t)(param_1 + 0x1c), 0);
        wr8((uint32_t)(param_1 + 0x33c), 0);
      }
      else {
        uVar2 = cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_1013CBCC), 1u, (const CowU32[]){ rd16((uint32_t)(param_1 + 0x24)) }, 0u, 0u, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x1c), uVar2);
        cow_bridge_1013d790(g, COW_IMG(COW_ADDR_LIFT_1013CBDD), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x340)) }, 0u, 0u, g->eax, 0u);
      }
      uVar3 = (CowU32)rd8((uint32_t)(param_1 + 0x344));
      if (rd32((uint32_t)(param_1 + 0x1c)) != 0) {
        cow_bridge_1013cad0(g, COW_IMG(COW_ADDR_LIFT_1013CBF3), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        cVar1 = cow_bridge_10160700(g, COW_IMG(COW_ADDR_LIFT_1013CBFD), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        if (cVar1 == '\0') {
          cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_1013CC0E), 4u, (const CowU32[]){ 0x3e, 0x18, 1, 0xffffffff }, 0u, 0u, g->eax, 16u);
          if ((cVar1 != '\0') || ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104E1D4C)) + 0x60)) >> 2 & 1) != 0)) {
            cow_bridge_1013c220(g, COW_IMG(COW_ADDR_LIFT_1013CC2D), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
          }
        }
        uVar3 = cow_bridge_1013cb30(g, COW_IMG(COW_ADDR_LIFT_1013CC34), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        if ((int)uVar3 < (int)(CowU32)rd8((uint32_t)(param_1 + 0x344))) {
          uVar3 = (CowU32)rd8((uint32_t)(param_1 + 0x344));
        }
      }
      cow_bridge_1013c180(g, COW_IMG(COW_ADDR_LIFT_1013CC4A), 1u, (const CowU32[]){ uVar3 }, 0u, 0u, g->eax, 0u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1013cba0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1013cba0: push esi */
    cow_lift_1013cba0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
