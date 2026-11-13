/* f_0x101f0a10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f0a10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f0a10(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    char cVar2;
    int iVar3;
    CowU16 extraout_var;
    if (param_1 != 5) {
        if (param_1 == 6) {
          cow_bridge_101f2600(g, COW_IMG(COW_ADDR_LIFT_101F0A2D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, (g->eax - 1u), 0u);
          return;
        }
        return;
      }
      iVar3 = cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_101F0A46), 1u, (const CowU32[]){ rd16((uint32_t)param_4) }, g->ecx, g->edx, g->eax, 0u);
      if (iVar3 == 0) {
        return;
      }
      sVar1 = rd16((uint32_t)rd32((uint32_t)((iVar3 + 0x14b4))));
      if (sVar1 == 0x16) {
        cow_bridge_101fcf60(g, COW_IMG(COW_ADDR_LIFT_101F0A70), 2u, (const CowU32[]){ 0, rd8((uint32_t)(param_4 + 2u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_101F0A75), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      if (sVar1 == 0x17) {
        cow_bridge_101fcf60(g, COW_IMG(COW_ADDR_LIFT_101F0A92), 2u, (const CowU32[]){ 1, rd8((uint32_t)(param_4 + 2u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_101F0A97), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      if (sVar1 == 8) {
        cVar2 = cow_bridge_101cc0d0(g, COW_IMG(COW_ADDR_LIFT_101F0AAA), 2u, (const CowU32[]){ 119u, 0u }, g->ecx, g->edx, g->eax, 8u);
        if (cVar2 == '\0') {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_101F0AB6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        cVar2 = cow_bridge_101e0e30(g, COW_IMG(COW_ADDR_LIFT_101F0ACF), 3u, (const CowU32[]){ rd8((uint32_t)(param_4 + 2u * (uint32_t)(1))), (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)param_4)) & 0xffffu)), 0 }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 == '\0') {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_101F0AD8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
      }
      else if (((((rd8((uint32_t)rd32((uint32_t)((iVar3 + 0x14bc)))) & 8) != 0) &&
                (cVar2 = cow_bridge_101cc0d0(g, COW_IMG(COW_ADDR_LIFT_101F0AF3), 2u, (const CowU32[]){ 128u, 1u }, g->ecx, g->edx, g->eax, 8u), cVar2 == '\0')) &&
               (cVar2 = cow_bridge_101cc0d0(g, COW_IMG(COW_ADDR_LIFT_101F0B03), 2u, (const CowU32[]){ 119u, 1u }, g->ecx, g->edx, g->eax, 8u), cVar2 != '\0')) ||
              (cVar2 = cow_bridge_101cc0d0(g, COW_IMG(COW_ADDR_LIFT_101F0B13), 2u, (const CowU32[]){ 127u, 0u }, g->ecx, g->edx, g->eax, 8u), cVar2 != '\0')) {
        cow_bridge_101f32a0(g, COW_IMG(COW_ADDR_LIFT_101F0B1F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_101F0B24), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 4 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 16.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f0a10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x101f0a10: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x5u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x101f0a15: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101f0a18: push esi */
    cow_lift_101f0a10(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
