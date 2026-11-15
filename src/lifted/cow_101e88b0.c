/* f_0x101e88b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e88b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e88b0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU32 psVar2;
    int iVar3;
    cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_101E88C3), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101e8500(g, COW_IMG(COW_ADDR_LIFT_101E88CA), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 4u);
      iVar3 = cow_bridge_101efb20(g, COW_IMG(COW_ADDR_LIFT_101E88D4), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
      if (iVar3 == 0) {
        wr32((uint32_t)((int)param_1 + 0x16c), 0xffffffff);
        cow_bridge_101e6f70(g, COW_IMG(COW_ADDR_LIFT_101E88E9), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101E88F8), 1u, (const CowU32[]){ 272113500u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101E8907), 1u, (const CowU32[]){ 272113480u }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      psVar2 = rd16((uint32_t)(iVar3 + 0x1c));
      iVar3 = (int)rd16((uint32_t)psVar2);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x16c)) != iVar3) {
        wr32((uint32_t)((int)param_1 + 0x16c), iVar3);
        cow_bridge_101e6eb0(g, COW_IMG(COW_ADDR_LIFT_101E8928), 1u, (const CowU32[]){ iVar3 }, param_1, g->edx, g->eax, 0u);
        if ((int32_t)rd32((uint32_t)((int)param_1 + 0x16c)) == (int32_t)rd32((uint32_t)((int)param_1 + 0x170))) {
          cow_bridge_101e6e50(g, COW_IMG(COW_ADDR_LIFT_101E8946), 1u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 0x174)) }, param_1, g->edx, g->eax, 0u);
        }
      }
      sVar1 = rd16((uint32_t)psVar2);
      if (sVar1 == 1) {
        if (rd32(COW_IMG(COW_ADDR_LIFT_10663678)) != 0) {
          wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663678)) + 0x18), 1);
        }
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101E8972), 3u, (const CowU32[]){ 272113480u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101E8981), 1u, (const CowU32[]){ 272113500u }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10663674)) != 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663674)) + 0x18), (int)sVar1);
      }
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101E89A6), 3u, (const CowU32[]){ 272113500u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101E89B5), 1u, (const CowU32[]){ 272113480u }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e88b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e88b0: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101e88b1: push edi */
    g->esi = g->ecx;   /* 0x101e88b2: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_105781F8));   /* 0x101e88b4: the value the entry loaded and the decompiler dropped */
    cow_lift_101e88b0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
