/* f_0x1010e530 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010e530 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010e530(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 piVar4;
    int iVar5;
    iVar2 = rd32((uint32_t)param_1);
      if (iVar2 != 0) {
        wr32((uint32_t)(iVar2 + 8), COW_IMG(COW_ADDR_LIFT_10332E88));
        wr32((uint32_t)(rd32((uint32_t)(iVar2 + 0x20)) + 8), 0);
        if (rd8((uint32_t)(iVar2 + 0xc)) == '\0') {
          for (puVar3 = rd32((uint32_t)(iVar2 + 0x18)); puVar3 != (CowU32)0x0;
              puVar3 = (CowU32)rd32((uint32_t)(puVar3 + 4u * (uint32_t)(2)))) {
            wr32((uint32_t)puVar3, 0);
          }
        }
        piVar1 = rd32((uint32_t)(iVar2 + 0x18));
        while (piVar1 != (CowU32)0x0) {
          piVar4 = (CowU32)rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2)));
          wr32((uint32_t)(piVar1 + 4u * (uint32_t)(2)), 0);
          iVar5 = rd32((uint32_t)piVar1);
          if (iVar5 != 0) {
            cow_bridge_1010ea00(g, COW_IMG(COW_ADDR_LIFT_1010E58F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->ecx, 0u);
            cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E595), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->ecx, 4u);
          }
          wr32((uint32_t)piVar1, -0x10101011);
          if (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))) != 0) {
            cow_bridge_1010e370(g, COW_IMG(COW_ADDR_LIFT_1010E5AC), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->ecx, 0u);
          }
          cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E5B2), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, g->ecx, 4u);
          piVar1 = piVar4;
        }
        piVar1 = (CowU32)(iVar2 + 0x1c);
        piVar4 = (CowU32)(iVar2 + 0x10);
        wr32((uint32_t)(iVar2 + 0x18), piVar1);
        wr32((uint32_t)(iVar2 + 0x20), piVar4);
        wr16((uint32_t)(iVar2 + 0xe), 0);
        wr32((uint32_t)(iVar2 + 0x18), 0);
        iVar5 = rd32((uint32_t)piVar1);
        if (iVar5 != 0) {
          cow_bridge_1010ea00(g, COW_IMG(COW_ADDR_LIFT_1010E5DD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->ecx, 0u);
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E5E3), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->ecx, 4u);
        }
        wr32((uint32_t)piVar1, -0x10101011);
        iVar5 = rd32((uint32_t)(iVar2 + 0x24));
        if (iVar5 != 0) {
          cow_bridge_1010e730(g, COW_IMG(COW_ADDR_LIFT_1010E5FA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->ecx, 0u);
          cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E600), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->ecx, 4u);
        }
        iVar5 = rd32((uint32_t)piVar4);
        if (iVar5 != 0) {
          cow_bridge_1010ea00(g, COW_IMG(COW_ADDR_LIFT_1010E611), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->ecx, 0u);
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E617), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->ecx, 4u);
        }
        wr32((uint32_t)piVar4, -0x10101011);
        iVar5 = rd32((uint32_t)(iVar2 + 0x18));
        if (iVar5 != 0) {
          cow_bridge_1010e730(g, COW_IMG(COW_ADDR_LIFT_1010E62F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->ecx, 0u);
          cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E635), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->ecx, 4u);
        }
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E63E), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->ecx, 0u);
      }
      wr32((uint32_t)param_1, -0x10101011);
      if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) != 0) {
        cow_bridge_1010e530(g, COW_IMG(COW_ADDR_LIFT_1010E65D), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->ecx, 0u);
      }
      if ((param_2 & 1) != 0) {
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E66E), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->ecx, 0u);
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ecx], frame pointer no, 0 locals, pops [ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010e530(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1010e530: push ecx */
    g->eax = g->ecx;   /* 0x1010e531: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010e533: push edi */
    cow_lift_1010e530(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
