/* f_0x1012dbb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1012dbb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1012dbb0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if ((int8_t)rd8((uint32_t)(param_1 + 0x14c)) == '\0') {
        if (param_2 == 5) {
          switch(param_3) {
          case 1:
            wr8((uint32_t)(param_1 + 0x14c), 1);
            wr32((uint32_t)(param_1 + 0x148), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
            cow_bridge_101c68a0(g, COW_IMG(COW_ADDR_LIFT_1012DC06), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_101c6870(g, COW_IMG(COW_ADDR_LIFT_1012DC18), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x138)) }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 2:
            wr8((uint32_t)(param_1 + 0x14c), 1);
            wr32((uint32_t)(param_1 + 0x148), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
            cow_bridge_101c68a0(g, COW_IMG(COW_ADDR_LIFT_1012DC3F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_101c6870(g, COW_IMG(COW_ADDR_LIFT_1012DC51), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x13c)) }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 3:
            wr8((uint32_t)(param_1 + 0x14c), 1);
            wr32((uint32_t)(param_1 + 0x148), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
            cow_bridge_101c68a0(g, COW_IMG(COW_ADDR_LIFT_1012DC78), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_101c6870(g, COW_IMG(COW_ADDR_LIFT_1012DC8A), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x140)) }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 4:
            wr8((uint32_t)(param_1 + 0x14c), 1);
            wr32((uint32_t)(param_1 + 0x148), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
            cow_bridge_101c68a0(g, COW_IMG(COW_ADDR_LIFT_1012DCB1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_101c6870(g, COW_IMG(COW_ADDR_LIFT_1012DCC3), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x144)) }, g->ecx, g->edx, g->eax, 0u);
            return;
          case 9:
            cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1012DCD8), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
            wr8((uint32_t)(param_1 + 0x14), 1);
            return;
          }
        }
      }
      else {
        switch(param_2) {
        case 1:
        case 2:
        case 3:
        case 4:
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1012DD04), 2u, (const CowU32[]){ rd16((uint32_t)(param_1 + 0x148)), 0 }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 5:
        case 6:
          wr8((uint32_t)(param_1 + 0x14c), 0);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
          cow_bridge_101c68a0(g, COW_IMG(COW_ADDR_LIFT_1012DD21), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101c6870(g, COW_IMG(COW_ADDR_LIFT_1012DD2D), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1012dbb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1012dbb0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1012dbb1: push esi */
    g->esi = g->ecx;   /* 0x1012dbb2: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1012dbb4: the value the entry loaded and the decompiler dropped */
    cow_lift_1012dbb0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
