/* f_0x10242060 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10242060 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10242060(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if ((int32_t)rd32((uint32_t)(param_1 + 0x1c)) != 1) {
        wr32((uint32_t)(param_1 + 0x28), 0);
        wr32((uint32_t)(param_1 + 0x2c), 0);
        switch(param_2) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 9:
          wr32(COW_IMG(COW_ADDR_LIFT_1066908C), param_3 + -1);
          if (rd32(COW_IMG(COW_ADDR_LIFT_1066908C)) != (int32_t)rd32((uint32_t)(param_1 + 0x18))) {
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_102420AE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          wr32((uint32_t)(param_1 + 0x18), rd32(COW_IMG(COW_ADDR_LIFT_1066908C)));
          iVar1 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066908C)) * 0xb0 + 0xac + param_1));
          if (iVar1 != 0) {
            cow_bridge_102421e0(g, COW_IMG(COW_ADDR_LIFT_102420DC), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32(COW_IMG(COW_ADDR_LIFT_10487FB0), iVar1);
            return;
          }
          break;
        case 5:
          wr32(COW_IMG(COW_ADDR_LIFT_1066908C), param_3 + -1);
          if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066908C)) * 0xb0 + 0x68 + param_1)) != 0) {
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1024215A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x1c), 1);
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x5d), 1);
            return;
          }
    L_10242116:
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_1024211B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 6:
          wr32((uint32_t)(param_1 + 0x1c), 1);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x5d), 1);
          wr32(COW_IMG(COW_ADDR_LIFT_1066908C), -1);
          cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10242181), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          break;
        case 8:
          if ((rd32(COW_IMG(COW_ADDR_LIFT_10669084)) != 0) && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669084)) + 8)) != 0)) {
            if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066908C)) * 0xb0 + 0x68 + param_1)) != 0) {
              cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_1024212E), 2u, (const CowU32[]){ (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669084)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
              cow_bridge_10037e90(g, COW_IMG(COW_ADDR_LIFT_10242133), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              return;
            }
            goto L_10242116;
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10242060(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10242060: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10242061: push esi */
    g->esi = g->ecx;   /* 0x10242062: the value the entry loaded and the decompiler dropped */
    g->ebx = 1u;   /* 0x10242064: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10242069: push edi */
    cow_lift_10242060(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
