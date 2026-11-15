/* f_0x101af440 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101af440 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101af440(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    iVar1 = cow_bridge_101af630(g, COW_IMG(COW_ADDR_LIFT_101AF449), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x14)) == 0) {
        wr8((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 8)) + 0x62), 1);
      }
      else {
        wr8((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 8)) + 0x62), 0);
      }
      if (((int32_t)rd32((uint32_t)((int)param_1 + 0x18)) != 0) && (iVar1 != 0)) {
        cow_bridge_101af750(g, COW_IMG(COW_ADDR_LIFT_101AF47C), 3u, (const CowU32[]){ 8, 0x53, rd32((uint32_t)(iVar1 + 4)) }, param_1, g->edx, g->eax, 0u);
      }
      if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8)) == 0) {
        cow_bridge_101af7f0(g, COW_IMG(COW_ADDR_LIFT_101AF495), 2u, (const CowU32[]){ 4, rd32((uint32_t)(iVar1 + 0xc)) }, param_1, g->edx, g->eax, 0u);
        if ((int8_t)rd8((uint32_t)(iVar1 + 0x10)) == '\0') {
          cow_bridge_101af7f0(g, COW_IMG(COW_ADDR_LIFT_101AF4A7), 2u, (const CowU32[]){ 85u, 12u }, param_1, g->edx, g->eax, 0u);
          uVar2 = 0x1ad;
        }
        else {
          cow_bridge_101af7f0(g, COW_IMG(COW_ADDR_LIFT_101AF4B7), 2u, (const CowU32[]){ 1u, 17u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101af7f0(g, COW_IMG(COW_ADDR_LIFT_101AF4C2), 2u, (const CowU32[]){ 2u, 17u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101af7f0(g, COW_IMG(COW_ADDR_LIFT_101AF4CD), 2u, (const CowU32[]){ 3u, 17u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101af7f0(g, COW_IMG(COW_ADDR_LIFT_101AF4D8), 2u, (const CowU32[]){ 85u, 19u }, param_1, g->edx, g->eax, 0u);
          uVar2 = 0x13;
        }
        cow_bridge_101af7f0(g, COW_IMG(COW_ADDR_LIFT_101AF4E3), 2u, (const CowU32[]){ 0x56, uVar2 }, param_1, g->edx, g->eax, 0u);
        cow_bridge_101af7f0(g, COW_IMG(COW_ADDR_LIFT_101AF4F1), 2u, (const CowU32[]){ 87u, 433u }, param_1, g->edx, g->eax, 0u);
      }
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
void cow_adapter_101af440(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101af440: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101af441: push edi */
    g->esi = g->ecx;   /* 0x101af442: the value the entry loaded and the decompiler dropped */
    cow_lift_101af440(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
