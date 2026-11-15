/* f_0x10081ba0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10081ba0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10081ba0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 pcVar3;
    int iVar4;
    uVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x1bcu))), COW_IMG(COW_ADDR_LIFT_10081BB1), 1u, (const CowU32[]){ 271942068u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_10081BB7), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
      uVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x1c0u))), COW_IMG(COW_ADDR_LIFT_10081BC9), 1u, (const CowU32[]){ 271942084u }, g->esi, g->edx, g->eax, 0u);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_10081BCF), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x268u))), COW_IMG(COW_ADDR_LIFT_10081BDF), 1u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
      if ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104568FC)) + 9)) == '\0') {
        pcVar3 = COW_IMG(COW_ADDR_LIFT_1035821C);
        do {
          cVar1 = rd8((uint32_t)pcVar3);
          wr8((uint32_t)((int)(param_1 + 4u * (uint32_t)(-0x40d6059)) + (int)pcVar3), cVar1);
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
      }
      else {
        pcVar3 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        do {
          cVar1 = rd8((uint32_t)pcVar3);
          wr8((uint32_t)((int)(param_1 + 4u * (uint32_t)(-0x40f4ef3)) + (int)pcVar3), cVar1);
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x22)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x22))) & 0xfffff800);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1e)), -0x7f7f7f80);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1f)), -0x7f7f7f80);
      wr16((uint32_t)((int)param_1 + 0xb2), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x20)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x28)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x2a)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x21)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1c)), 0);
      wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x30)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1b)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a)), 0);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x1acu))), COW_IMG(COW_ADDR_LIFT_10081C74), 1u, (const CowU32[]){ 1084227584u }, g->ecx, g->edx, 2155905152u, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x1a4u))), COW_IMG(COW_ADDR_LIFT_10081C8E), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_103581A0)) * rd32(COW_IMG(COW_ADDR_LIFT_1032CFDC)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x1b4u))), COW_IMG(COW_ADDR_LIFT_10081CA8), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_103581A0)) * rd32(COW_IMG(COW_ADDR_LIFT_1032CFD8)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x290u))), COW_IMG(COW_ADDR_LIFT_10081CB7), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10081ae0(g, COW_IMG(COW_ADDR_LIFT_10081CBE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x350u))), COW_IMG(COW_ADDR_LIFT_10081CC9), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u);
      if ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104568FC)) + 9)) == '\0') {
        iVar4 = cow_bridge_10082bf0(g, COW_IMG(COW_ADDR_LIFT_10081CD8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1d)), iVar4);
      }
      iVar4 = cow_bridge_10082bf0(g, COW_IMG(COW_ADDR_LIFT_10081CE0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1d)), iVar4);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10081ba0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10081ba0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10081ba1: push esi */
    g->esi = g->ecx;   /* 0x10081ba2: the value the entry loaded and the decompiler dropped */
    cow_lift_10081ba0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
