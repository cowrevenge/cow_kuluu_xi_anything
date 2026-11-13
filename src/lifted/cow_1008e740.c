/* f_0x1008e740 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1008e740 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1008e740(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    char cVar2;
    CowU32 uVar3;
    if ((((rd32((uint32_t)(param_1 + 0x120)) & 0x200) != 0) && ((rd8((uint32_t)(param_1 + 300)) & 0x10) != 0)) &&
         ((rd32((uint32_t)(param_1 + 0x120)) & 0x400) != 0)) {
        if ((rd32((uint32_t)(param_1 + 0x1d0)) & 0x200) != 0) {
          cow_bridge_100a6070(g, COW_IMG(COW_ADDR_LIFT_1008E774), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        cVar2 = cow_bridge_100d65b0(g, COW_IMG(COW_ADDR_LIFT_1008E781), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 == '\0') {
          return;
        }
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xa4u))))) + 0x298u))), COW_IMG(COW_ADDR_LIFT_1008E79F), 3u, (const CowU32[]){ 0x726f6863, rd32((uint32_t)(param_1 + 0xa4)), 0 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xa0u))))) + 0x298u))), COW_IMG(COW_ADDR_LIFT_1008E7B5), 3u, (const CowU32[]){ 0x726f6863, rd32((uint32_t)(param_1 + 0xa0)), 0 }, g->ecx, g->edx, g->eax, 0u);
      }
      uVar1 = rd32((uint32_t)(param_1 + 300));
      uVar3 = uVar1 & 0xffffffef;
      wr32((uint32_t)(param_1 + 300), uVar3);
      if ((uVar1 & 0x20) == 0) {
        return;
      }
      if ((rd32((uint32_t)(param_1 + 0x120)) & 0x200) == 0) {
        if ((rd32((uint32_t)(param_1 + 0x1d0)) & 0x200) == 0) {
          return;
        }
        cVar2 = cow_bridge_10088270(g, COW_IMG(COW_ADDR_LIFT_1008E80A), 2u, (const CowU32[]){ 0u, 17u }, g->ecx, g->edx, g->eax, 8u);
        if (cVar2 == '\0') {
          return;
        }
        uVar3 = rd32((uint32_t)(param_1 + 300));
      }
      else if ((rd32((uint32_t)(param_1 + 0x1d0)) & 0x200) != 0) {
        if ((rd32((uint32_t)(param_1 + 0x120)) & 0x400) == 0) {
          return;
        }
        cVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xa4u))))) + 0x2a0u))), COW_IMG(COW_ADDR_LIFT_1008E7FD), 2u, (const CowU32[]){ 0x726f6863, rd32((uint32_t)(param_1 + 0xa4)) }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 != '\0') {
          return;
        }
        cVar2 = cow_bridge_10088270(g, COW_IMG(COW_ADDR_LIFT_1008E852), 2u, (const CowU32[]){ 0u, 17u }, g->ecx, g->edx, g->eax, 8u);
        if (cVar2 == '\0') {
          return;
        }
        wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xa0)) + 0x7d8), 0x20202020);
        wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xa4)) + 0x7d8), 0x20202020);
        wr32((uint32_t)(param_1 + 300), rd32((uint32_t)(param_1 + 300)) & 0xffffffdf);
        return;
      }
      wr32((uint32_t)(param_1 + 300), uVar3 & 0xffffffdf);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1008e740(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1008e740: push esi */
    g->esi = g->ecx;   /* 0x1008e741: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x120u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1008e743: register eax, replayed as the entry ran it */
    cow_lift_1008e740(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
