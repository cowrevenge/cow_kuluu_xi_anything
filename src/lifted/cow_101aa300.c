/* f_0x101aa300 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101aa300 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101aa300(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA30E), 3u, (const CowU32[]){ 27u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA31C), 3u, (const CowU32[]){ 29u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA32A), 3u, (const CowU32[]){ 30u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA338), 3u, (const CowU32[]){ 31u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA349), 3u, (const CowU32[]){ 179u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA35A), 3u, (const CowU32[]){ 176u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 72u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA36E), 3u, (const CowU32[]){ 203u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA37F), 3u, (const CowU32[]){ 204u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA38D), 3u, (const CowU32[]){ 32u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA39B), 3u, (const CowU32[]){ 33u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA3A9), 3u, (const CowU32[]){ 34u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA3B7), 3u, (const CowU32[]){ 28u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 72u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA3CB), 3u, (const CowU32[]){ 155u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA3D9), 3u, (const CowU32[]){ 35u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA3E7), 3u, (const CowU32[]){ 36u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA3F5), 3u, (const CowU32[]){ 37u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA403), 3u, (const CowU32[]){ 38u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA411), 3u, (const CowU32[]){ 39u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 72u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA422), 3u, (const CowU32[]){ 40u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA430), 3u, (const CowU32[]){ 41u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA43E), 3u, (const CowU32[]){ 42u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA44C), 3u, (const CowU32[]){ 43u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA45A), 3u, (const CowU32[]){ 44u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA468), 3u, (const CowU32[]){ 45u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 72u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA479), 3u, (const CowU32[]){ 46u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA487), 3u, (const CowU32[]){ 47u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA495), 3u, (const CowU32[]){ 48u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA4A3), 3u, (const CowU32[]){ 49u, 270099920u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA4B1), 3u, (const CowU32[]){ 27u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA4BF), 3u, (const CowU32[]){ 29u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 72u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA4D3), 3u, (const CowU32[]){ 176u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA4E1), 3u, (const CowU32[]){ 30u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA4EF), 3u, (const CowU32[]){ 31u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA500), 3u, (const CowU32[]){ 179u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA511), 3u, (const CowU32[]){ 203u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA522), 3u, (const CowU32[]){ 204u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 72u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA533), 3u, (const CowU32[]){ 32u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA541), 3u, (const CowU32[]){ 33u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA54F), 3u, (const CowU32[]){ 34u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA55D), 3u, (const CowU32[]){ 28u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA56E), 3u, (const CowU32[]){ 155u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA57C), 3u, (const CowU32[]){ 35u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 72u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA58D), 3u, (const CowU32[]){ 36u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA59B), 3u, (const CowU32[]){ 37u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA5A9), 3u, (const CowU32[]){ 38u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA5B7), 3u, (const CowU32[]){ 39u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA5C5), 3u, (const CowU32[]){ 40u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA5D3), 3u, (const CowU32[]){ 41u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 72u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA5E4), 3u, (const CowU32[]){ 42u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA5F2), 3u, (const CowU32[]){ 43u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA600), 3u, (const CowU32[]){ 44u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA60E), 3u, (const CowU32[]){ 45u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA61C), 3u, (const CowU32[]){ 46u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA62A), 3u, (const CowU32[]){ 47u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 72u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA63B), 3u, (const CowU32[]){ 48u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10193800(g, COW_IMG(COW_ADDR_LIFT_101AA649), 3u, (const CowU32[]){ 49u, 269656672u, 0u }, g->ecx, g->edx, g->eax, 24u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101aa300(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */


    cow_lift_101aa300(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
