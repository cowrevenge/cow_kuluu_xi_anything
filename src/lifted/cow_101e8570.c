/* f_0x101e8570 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e8570 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e8570(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 psVar1;
    int iVar2;
    int iVar3;
    CowU32 pcVar4;
    iVar2 = cow_bridge_101e8500(g, COW_IMG(COW_ADDR_LIFT_101E857C), 1u, (const CowU32[]){ 1u }, param_1, g->edx, g->eax, 4u);
      iVar3 = cow_bridge_101efb20(g, COW_IMG(COW_ADDR_LIFT_101E8588), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (iVar3 == 0) {
        wr32((uint32_t)((int)param_1 + 0x16c), 0xffffffff);
        cow_bridge_101e6f70(g, COW_IMG(COW_ADDR_LIFT_101E859D), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101E85AC), 1u, (const CowU32[]){ 272113400u }, 274864184u, g->edx, g->eax, 0u);
        if ((iVar2 != 0) && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663658)) + 8)) == 0)) {
          cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101E85CF), 3u, (const CowU32[]){ 272113420u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        }
        cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_101E85DE), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, g->edx, g->eax, 0u);
      }
      else {
        psVar1 = rd16((uint32_t)(iVar3 + 0x1c));
        iVar3 = (int)rd16((uint32_t)psVar1);
        if ((int32_t)rd32((uint32_t)((int)param_1 + 0x16c)) != iVar3) {
          wr32((uint32_t)((int)param_1 + 0x16c), iVar3);
          cow_bridge_101e6eb0(g, COW_IMG(COW_ADDR_LIFT_101E8601), 1u, (const CowU32[]){ iVar3 }, param_1, g->edx, g->eax, 0u);
          if ((int32_t)rd32((uint32_t)((int)param_1 + 0x16c)) == (int32_t)rd32((uint32_t)((int)param_1 + 0x170))) {
            cow_bridge_101e6e50(g, COW_IMG(COW_ADDR_LIFT_101E861F), 1u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 0x174)) }, param_1, g->edx, g->eax, 0u);
          }
        }
        if ((rd16((uint32_t)(psVar1 + 2u * (uint32_t)(2))) < 0x1e) || (0x20 < rd16((uint32_t)(psVar1 + 2u * (uint32_t)(2))))) {
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101E863C), 1u, (const CowU32[]){ 272113420u }, 274864184u, g->edx, g->eax, 0u);
          if (iVar2 == 0) {
            return;
          }
          if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663658)) + 8)) != 0) goto L_101e8694;
          pcVar4 = COW_IMG(COW_ADDR_LIFT_10381F0C);
        }
        else {
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101E8670), 1u, (const CowU32[]){ 272113400u }, 274864184u, g->edx, g->eax, 0u);
          if (iVar2 == 0) {
            return;
          }
          if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066365C)) + 8)) != 0) goto L_101e8694;
          wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066365C)) + 0x3c), rd16((uint32_t)(psVar1 + 2u * (uint32_t)(2))) + -0x1e);
          pcVar4 = COW_IMG(COW_ADDR_LIFT_10381EF8);
        }
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101E8694), 3u, (const CowU32[]){ pcVar4, 1, 0 }, 274864184u, g->edx, g->eax, 0u);
      }
    L_101e8694:
      if (iVar2 != 0) {
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101E86AB), 3u, (const CowU32[]){ 272113280u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e8570(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101e8570: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e8571: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101e8572: push edi */
    cow_lift_101e8570(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
