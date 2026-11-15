/* f_0x101590c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101590c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101590c0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    iVar2 = cow_bridge_101598b0(g, COW_IMG(COW_ADDR_LIFT_101590C8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar3 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_101590D4), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, g->eax, 0u);
      if ((int8_t)rd8((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578478)) + 0x65)) == '\0') {
        if (param_1 == (CowU32)0x0) {
          cow_bridge_10150a30(g, COW_IMG(COW_ADDR_LIFT_1015910D), 1u, (const CowU32[]){ 0 }, rd32(COW_IMG(COW_ADDR_LIFT_10578478)), g->edx, g->eax, 0u);
          cVar1 = cow_bridge_1011ba40(g, COW_IMG(COW_ADDR_LIFT_10159118), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10578478)), g->edx, g->eax, 0u);
          if (cVar1 == '\x01') {
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10159156), 1u, (const CowU32[]){ 271956696u }, 274864184u, g->edx, g->eax, 0u);
          }
        }
        else {
          if (iVar2 == 0) {
            uVar4 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0xccu))), COW_IMG(COW_ADDR_LIFT_10159101), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10150a30(g, COW_IMG(COW_ADDR_LIFT_10159138), 1u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10578478)), g->edx, g->eax, 0u);
          }
          else {
            cow_bridge_10150a60(g, COW_IMG(COW_ADDR_LIFT_101590F5), 1u, (const CowU32[]){ iVar2 }, rd32(COW_IMG(COW_ADDR_LIFT_10578478)), g->edx, g->eax, 0u);
          }
          cVar1 = cow_bridge_1011ba40(g, COW_IMG(COW_ADDR_LIFT_10159143), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10578478)), g->edx, g->eax, 0u);
          if (cVar1 == '\0') {
            cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1015912F), 3u, (const CowU32[]){ 271956696u, 1u, 1u }, 274864184u, g->edx, g->eax, 0u);
          }
        }
      }
      if (iVar3 != 0) {
        cow_bridge_100814f0(g, COW_IMG(COW_ADDR_LIFT_10159165), 1u, (const CowU32[]){ param_1 }, COW_IMG(COW_ADDR_LIFT_10487F58), g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101590c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101590c0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101590c1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101590c2: push edi */
    cow_lift_101590c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
