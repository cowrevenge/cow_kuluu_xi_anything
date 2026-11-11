/* f_0x101fe290 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fe290 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fe290(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    switch(param_2) {
      case 1:
        cow_bridge_101fdb40(g, COW_IMG(COW_ADDR_LIFT_101FE335), 2u, (const CowU32[]){ 0, 1 }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 2:
        cow_bridge_101fdb40(g, COW_IMG(COW_ADDR_LIFT_101FE344), 2u, (const CowU32[]){ 1u, 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 3:
        cow_bridge_101fdb40(g, COW_IMG(COW_ADDR_LIFT_101FE353), 2u, (const CowU32[]){ 1, 0 }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 4:
        cow_bridge_101fdb40(g, COW_IMG(COW_ADDR_LIFT_101FE362), 2u, (const CowU32[]){ 0u, 1u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 5:
        break;
      case 6:
        cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_101FE2E2), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066369C)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
        wr16((uint32_t)(param_1 + 0x32), 0);
        cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_101FE31B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 7:
        cow_bridge_101fdbf0(g, COW_IMG(COW_ADDR_LIFT_101FE326), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      default:
        return;
      case 9:
        cow_bridge_101fdb40(g, COW_IMG(COW_ADDR_LIFT_101FE389), 2u, (const CowU32[]){ (param_3 + -1) % 5 - (int)rd8((uint32_t)(param_1 + 0x34)), (param_3 + -1) / 5 - (int)rd8((uint32_t)(param_1 + 0x35)) }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cVar1 = cow_bridge_101fda30(g, COW_IMG(COW_ADDR_LIFT_101FE2C8), 5u, (const CowU32[]){ (((uint32_t)((short)((CowU32)rd32((uint32_t)(param_1 + 0x38)) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x32))) & 0xffffu)), (int)rd8((uint32_t)(param_1 + 0x34)), (int)rd8((uint32_t)(param_1 + 0x35)), rd32((uint32_t)(param_1 + 0x38)), (int)rd8((uint32_t)(param_1 + 0x36)) }, param_1, g->edx, g->eax, 0u);
      if (cVar1 == '\0') {
        cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_101FE2F6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_101FE310), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066369C)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
      wr16((uint32_t)(param_1 + 0x32), 0);
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_101FE2ED), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101fe290(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x101fe290: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x101fe295: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101fe296: push esi */
    cow_lift_101fe290(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
