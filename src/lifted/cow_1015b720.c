/* f_0x1015b720 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1015b720 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1015b720(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    cow_bridge_10126350(g, COW_IMG(COW_ADDR_LIFT_1015B728), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_101265d0(g, COW_IMG(COW_ADDR_LIFT_1015B72F), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_1062180C), COW_IMG(COW_ADDR_LIFT_10372150));
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B740), 1u, (const CowU32[]){ 40u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_1062180C)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B74F), 1u, (const CowU32[]){ 41u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(5)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B75F), 1u, (const CowU32[]){ 43u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(10)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B76F), 1u, (const CowU32[]){ 55u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0xf)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B77F), 1u, (const CowU32[]){ 53u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x14)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B78F), 1u, (const CowU32[]){ 54u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x19)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B79F), 1u, (const CowU32[]){ 44u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x1e)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B7AF), 1u, (const CowU32[]){ 45u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x23)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B7C2), 1u, (const CowU32[]){ 46u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x28)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B7D5), 1u, (const CowU32[]){ 42u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x2d)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B7E8), 1u, (const CowU32[]){ 48u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x32)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B7FB), 1u, (const CowU32[]){ 47u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x37)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B80E), 1u, (const CowU32[]){ 60u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x3c)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B821), 1u, (const CowU32[]){ 49u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x41)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B834), 1u, (const CowU32[]){ 52u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x46)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B847), 1u, (const CowU32[]){ 51u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x4b)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B85D), 1u, (const CowU32[]){ 50u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x50)), uVar1);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_1015B870), 1u, (const CowU32[]){ 39u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062180C)) + 4u * (uint32_t)(0x55)), uVar1);
      g->eax = (CowU32)(param_1); return;
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
void cow_adapter_1015b720(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1015b720: push esi */
    g->esi = g->ecx;   /* 0x1015b721: the value the entry loaded and the decompiler dropped */
    cow_lift_1015b720(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
