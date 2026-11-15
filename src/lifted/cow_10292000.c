/* f_0x10292000 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10292000 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10292000(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = param_1 + 0x24;
      cow_bridge_1027eb30(g, COW_IMG(COW_ADDR_LIFT_10292014), 2u, (const CowU32[]){ 278538216u, g->edi }, g->ecx, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)(param_1 + 0x68)) == 0) {
        cow_bridge_1027ebf0(g, COW_IMG(COW_ADDR_LIFT_1029203B), 1u, (const CowU32[]){ 278538152u }, g->ecx, g->edx, g->eax, 4u);
      }
      else {
        cow_bridge_1027eb30(g, COW_IMG(COW_ADDR_LIFT_1029202C), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_109A27A8), (int32_t)rd32((uint32_t)(param_1 + 0x68)) + 0x24 }, g->ecx, g->edx, g->eax, 8u);
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 100)) == 0) {
        cow_bridge_1027eb30(g, COW_IMG(COW_ADDR_LIFT_1029206D), 2u, (const CowU32[]){ iVar1, COW_IMG(COW_ADDR_LIFT_109A27A8) }, g->ecx, g->edx, g->eax, 8u);
      }
      else {
        cow_bridge_10285810(g, COW_IMG(COW_ADDR_LIFT_1029204B), 1u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 100)) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10280160(g, COW_IMG(COW_ADDR_LIFT_1029205D), 3u, (const CowU32[]){ iVar1, COW_IMG(COW_ADDR_LIFT_109A27A8), (int32_t)rd32((uint32_t)(param_1 + 100)) + 0x1c }, g->ecx, g->edx, g->eax, 16u);
      }
      if ((int8_t)rd8((uint32_t)(param_1 + 0x74)) != '\0') {
        cow_bridge_10280020(g, COW_IMG(COW_ADDR_LIFT_10292086), 3u, (const CowU32[]){ param_1 + 0x78, COW_IMG(COW_ADDR_LIFT_109A27E8), iVar1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1027eb30(g, COW_IMG(COW_ADDR_LIFT_10292093), 2u, (const CowU32[]){ param_1 + 0xb8, iVar1 }, g->ecx, g->edx, g->eax, 20u);
      }
      for (iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x6c)); iVar1 != 0; iVar1 = (int32_t)rd32((uint32_t)(iVar1 + 0x70))) {
        cow_bridge_10292000(g, COW_IMG(COW_ADDR_LIFT_102920A3), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10292000(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10292000: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10292001: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10292005: push edi */
    { g->edi = (uint32_t)((uint32_t)(g->esi + 0x24u)); }   /* 0x10292006: register edi, replayed as the entry ran it */
    cow_lift_10292000(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
