/* f_0x10110970 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10110970 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10110970(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 piVar4;
    if ((4 < param_4) && (iVar1 = cow_bridge_10109570(g, COW_IMG(COW_ADDR_LIFT_10110991), 1u, (const CowU32[]){ 272023452u }, g->ecx, g->edx, g->eax, 0u), iVar1 == 0)) {
        iVar1 = rd32((uint32_t)(param_1 + 4));
        if ((rd32((uint32_t)(param_3 + 0xc)) == 0) ||
           (puVar3 = rd8((uint32_t)(rd32((uint32_t)(param_3 + 0xc)) + 4)), puVar3 == (CowU32)0x0)) {
          puVar3 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        }
        iVar2 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_101109B9), 1u, (const CowU32[]){ puVar3 }, g->ecx, g->edx, g->eax, 4u);
        if (iVar1 == iVar2) {
          if ((rd32((uint32_t)(param_3 + 0x14)) == 0) ||
             (puVar3 = rd8((uint32_t)(rd32((uint32_t)(param_3 + 0x14)) + 4)), puVar3 == (CowU32)0x0)) {
            puVar3 = COW_IMG(COW_ADDR_LIFT_103D3C84);
          }
          iVar1 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_101109E1), 1u, (const CowU32[]){ puVar3 }, g->ecx, g->edx, g->eax, 0u);
          if (((iVar1 != 0) && (iVar2 = cow_bridge_101085e0(g, COW_IMG(COW_ADDR_LIFT_101109F1), 1u, (const CowU32[]){ 24u }, g->ecx, g->edx, g->eax, 4u), iVar2 != 0)) &&
             (iVar1 = cow_bridge_10110bc0(g, COW_IMG(COW_ADDR_LIFT_10110A08), 3u, (const CowU32[]){ iVar1, rd32((uint32_t)(param_1 + 4)), param_3 + 0x20 }, g->ecx, g->edx, g->eax, 0u), iVar1 != 0)) {
            iVar2 = cow_bridge_10109570(g, COW_IMG(COW_ADDR_LIFT_10110A1B), 1u, (const CowU32[]){ 272023444u }, g->ecx, g->edx, g->eax, 0u);
            wr8((uint32_t)(iVar1 + 0x14), iVar2 != 0);
            piVar4 = (CowU32)cow_bridge_101085e0(g, COW_IMG(COW_ADDR_LIFT_10110A2A), 1u, (const CowU32[]){ 12u }, g->ecx, g->edx, g->eax, 4u);
            if (piVar4 == (CowU32)0x0) {
              piVar4 = (CowU32)0x0;
            }
            else {
              wr32((uint32_t)piVar4, iVar1);
              wr32((uint32_t)(piVar4 + 4u * (uint32_t)(2)), 0);
              wr32((uint32_t)(piVar4 + 4u * (uint32_t)(1)), 0);
            }
            iVar1 = rd32((uint32_t)(param_1 + 0x48));
            wr32((uint32_t)(piVar4 + 4u * (uint32_t)(2)), param_1 + 0x44);
            wr32((uint32_t)(piVar4 + 4u * (uint32_t)(1)), iVar1);
            if (iVar1 != 0) {
              wr32((uint32_t)(iVar1 + 8), piVar4);
            }
            if (rd32((uint32_t)(piVar4 + 4u * (uint32_t)(2))) != 0) {
              wr32((uint32_t)(rd32((uint32_t)(piVar4 + 4u * (uint32_t)(2))) + 4), piVar4);
            }
            wr16((uint32_t)(param_1 + 0x36), rd16((uint32_t)(param_1 + 0x36)) + 1);
          }
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 16.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10110970(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10110970(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
