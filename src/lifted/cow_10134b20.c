/* f_0x10134b20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10134b20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10134b20(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    if (rd32((uint32_t)(param_1 + 8)) != 0) {
        cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10134B3B), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E50))) }, param_1, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10134B4E), 2u, (const CowU32[]){ 5u, 3u }, g->ecx, g->edx, g->eax, 0u);
        }
        cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10134B5B), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E54))) }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10134B6E), 2u, (const CowU32[]){ 5u, 4u }, g->ecx, g->edx, g->eax, 0u);
        }
        cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10134B7B), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E58))) }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10134B8E), 2u, (const CowU32[]){ 5u, 5u }, g->ecx, g->edx, g->eax, 0u);
        }
        cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10134B9B), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E5C))) }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10134BAE), 2u, (const CowU32[]){ 5u, 6u }, g->ecx, g->edx, g->eax, 0u);
        }
        cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10134BBB), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E60))) }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10134BCE), 2u, (const CowU32[]){ 5u, 7u }, g->ecx, g->edx, g->eax, 0u);
        }
        cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10134BDB), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E64))) }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10134BEE), 2u, (const CowU32[]){ 5u, 8u }, g->ecx, g->edx, g->eax, 0u);
        }
        cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_10134BFB), 1u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E68))) }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10134C0E), 2u, (const CowU32[]){ 5u, 9u }, g->ecx, g->edx, g->eax, 0u);
        }
        switch(rd32((uint32_t)(param_1 + 0x14))) {
        case 0:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10134C35), 2u, (const CowU32[]){ 1u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 8:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10134C43), 2u, (const CowU32[]){ 2u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 10:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10134C51), 2u, (const CowU32[]){ 3u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xb:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10134C5F), 2u, (const CowU32[]){ 4u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xc:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10134C6D), 2u, (const CowU32[]){ 5u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xd:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10134C7B), 2u, (const CowU32[]){ 6u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xe:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10134C89), 2u, (const CowU32[]){ 7u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xf:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10134C97), 2u, (const CowU32[]){ 8u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0x10:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10134CA5), 2u, (const CowU32[]){ 9u, 0u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
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
void cow_adapter_10134b20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10134b20: push esi */
    g->esi = g->ecx;   /* 0x10134b21: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10134b23: register eax, replayed as the entry ran it */
    cow_lift_10134b20(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
