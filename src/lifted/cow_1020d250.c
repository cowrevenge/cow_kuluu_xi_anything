/* f_0x1020d250 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1020d250 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1020d250(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1057847C)) != 0) {
        uVar4 = 2;
        uVar3 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1020D267), 3u, (const CowU32[]){ 13u, 0u, 2u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 0u);
        cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_1020D276), 1u, (const CowU32[]){ uVar4 }, uVar3, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 0u);
      }
      sVar2 = cow_bridge_100e6b10(g, COW_IMG(COW_ADDR_LIFT_1020D27B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 0u);
      if (sVar2 == 0) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020D28C), 2u, (const CowU32[]){ 5u, 8u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 0u);
      }
      cVar1 = cow_bridge_100e9730(g, COW_IMG(COW_ADDR_LIFT_1020D299), 4u, (const CowU32[]){ 0u, 0u, 0u, 1u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 16u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020D2AC), 2u, (const CowU32[]){ 5u, 9u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 0u);
      }
      cVar1 = cow_bridge_100e9730(g, COW_IMG(COW_ADDR_LIFT_1020D2B9), 4u, (const CowU32[]){ 0u, 0u, 0u, 2u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 16u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020D2CC), 2u, (const CowU32[]){ 5u, 15u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 0u);
      }
      cVar1 = cow_bridge_100fc9a0(g, COW_IMG(COW_ADDR_LIFT_1020D2D1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 0u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020D2E1), 2u, (const CowU32[]){ 5u, 10u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1057847C)), 0u);
      }
      wr32(COW_IMG(COW_ADDR_LIFT_106644D8), 0);
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
void cow_adapter_1020d250(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1057847C));   /* 0x1020d250: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1020d255: push esi */
    cow_lift_1020d250(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
