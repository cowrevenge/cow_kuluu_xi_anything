/* f_0x1013aba0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013aba0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013aba0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 uVar2;
    cow_bridge_1013bfc0(g, COW_IMG(COW_ADDR_LIFT_1013ABA8), 0u, (const CowU32[]){ 0u }, param_1, param_2, g->eax, 0u);
      cow_bridge_1013ad50(g, COW_IMG(COW_ADDR_LIFT_1013ABAF), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
      wr8((uint32_t)(param_1 + 0x3a8), rd8((uint32_t)(param_1 + 0x3a8)) & 0xfc);
      cVar1 = cow_bridge_10160700(g, COW_IMG(COW_ADDR_LIFT_1013ABC8), 0u, (const CowU32[]){ 0u }, 274864184u, g->edx, g->eax, 0u);
      if (cVar1 == '\0') {
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_1013ABD9), 4u, (const CowU32[]){ 0x3e, 0x76, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if (cVar1 == '\0') {
          cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_1013ABF0), 4u, (const CowU32[]){ 0x3e, 0x89, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
          if (cVar1 == '\0') goto L_1013abfb;
        }
        uVar2 = 1;
      }
      else {
    L_1013abfb:
        uVar2 = 0;
      }
      wr8((uint32_t)(param_1 + 0x3a9), uVar2);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1013AC16), 3u, (const CowU32[]){ 272039340u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1013aba0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1013aba0: push esi */
    g->esi = g->ecx;   /* 0x1013aba1: the value the entry loaded and the decompiler dropped */
    cow_lift_1013aba0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
