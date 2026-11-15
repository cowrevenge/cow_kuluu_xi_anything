/* f_0x10167520 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10167520 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10167520(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    wr32((uint32_t)((int)param_1 + 4), 0);
      puVar2 = (CowU32)((int)param_1 + 8);
      for (iVar1 = 0x460; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_10167548), 2u, (const CowU32[]){ 0x656e6966, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_10167555), 2u, (const CowU32[]){ 0x796e7573, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_10167562), 2u, (const CowU32[]){ 0x646f6c63, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_1016756F), 2u, (const CowU32[]){ 0x7473696d, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_1016757C), 2u, (const CowU32[]){ 0x77797264, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_10167589), 2u, (const CowU32[]){ 0x74616568, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_10167596), 2u, (const CowU32[]){ 0x6e696172, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_101675A3), 2u, (const CowU32[]){ 0x6c617173, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_101675B0), 2u, (const CowU32[]){ 0x74737564, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_101675BD), 2u, (const CowU32[]){ 0x646e6173, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_101675CA), 2u, (const CowU32[]){ 0x646e6977, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_101675D7), 2u, (const CowU32[]){ 0x6d6f7473, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_101675E4), 2u, (const CowU32[]){ 0x776f6e73, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_101675F1), 2u, (const CowU32[]){ 0x7a696c62, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_101675FE), 2u, (const CowU32[]){ 0x72646874, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_1016760B), 2u, (const CowU32[]){ 0x746c6f62, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_10167618), 2u, (const CowU32[]){ 0x61727561, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_10167625), 2u, (const CowU32[]){ 0x7467696c, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_10167632), 2u, (const CowU32[]){ 0x64676f66, param_2 }, param_1, g->edx, 0u, 0u);
      cow_bridge_10167650(g, COW_IMG(COW_ADDR_LIFT_1016763F), 2u, (const CowU32[]){ 0x6b726164, param_2 }, param_1, g->edx, 0u, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10167520(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10167520: push esi */
    g->esi = g->ecx;   /* 0x10167521: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10167523: push edi */
    g->ecx = 1120u;   /* 0x10167524: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x10167529: the value the entry loaded and the decompiler dropped */
    { g->edi = (uint32_t)((uint32_t)(g->esi + 0x8u)); }   /* 0x1016752b: register edi, replayed as the entry ran it */
    cow_lift_10167520(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
