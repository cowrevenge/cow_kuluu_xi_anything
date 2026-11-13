/* f_0x101b5850 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101b5850 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101b5850(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, CowU32 param_9)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c42))) == 1) {
        g->eax = (CowU32)(0xffffffff); return;
      }
      iVar2 = 0;
      wr8((uint32_t)((int)param_1 + 0xef22), 0);
      wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x2320)), 0);
      switch(param_2) {
      case 2:
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c42)), 2);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x3c47)), 1);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x3c40)), 0);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x5cu))), COW_IMG(COW_ADDR_LIFT_101B58AD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101abe50(g, COW_IMG(COW_ADDR_LIFT_101B58BA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101acf90(g, COW_IMG(COW_ADDR_LIFT_101B58C1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101b6ea0(g, COW_IMG(COW_ADDR_LIFT_101B58C8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x30u))), COW_IMG(COW_ADDR_LIFT_101B58CF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066268C)) + 0x10d), 0);
        break;
      case 3:
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c42)), 3);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x3c47)), 1);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x3c40)), 0);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x30u))), COW_IMG(COW_ADDR_LIFT_101B58FE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066268C)) + 0x10d), 0);
        break;
      case 4:
        cVar1 = cow_bridge_10160c80(g, COW_IMG(COW_ADDR_LIFT_101B5918), 0u, (const CowU32[]){ 0u }, 274864184u, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c42)), 4);
          wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x3c47)), 1);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x2cu))), COW_IMG(COW_ADDR_LIFT_101B5938), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066268C)) + 0x10d), 1);
        }
        break;
      case 5:
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c42)), 5);
        if (param_3 == 0) {
          wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x3c47)), 1);
        }
        else {
          wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x3c47)), 0);
        }
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x5cu))), COW_IMG(COW_ADDR_LIFT_101B596A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101abe50(g, COW_IMG(COW_ADDR_LIFT_101B5977), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101acf90(g, COW_IMG(COW_ADDR_LIFT_101B597E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101b6ea0(g, COW_IMG(COW_ADDR_LIFT_101B5985), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_101B598C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x30u))), COW_IMG(COW_ADDR_LIFT_101B5993), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066268C)) + 0x10d), 1);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x2320)), 1);
      }
      if ((param_9 & 2) == 0) {
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x3c47)), 0);
      }
      if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c3b))) == '\0') {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c43)), param_3);
      }
      else {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c43)), 1);
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c45)), param_9);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c44)), param_4);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c46)), param_5);
      cow_bridge_101abbd0(g, COW_IMG(COW_ADDR_LIFT_101B59F4), 1u, (const CowU32[]){ param_5 }, g->ecx, g->edx, g->eax, 0u);
      if (param_8 == 0) {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x231e)), (int)COW_IMG(COW_ADDR_LIFT_101B7E90));
      }
      else {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x231e)), param_8);
      }
      if (param_7 == 0) {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x231f)), (int)param_1);
      }
      else {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x231f)), param_7);
      }
      if (param_6 != 0) {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c41)), param_6);
        g->eax = (CowU32)(1); return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10662D98)) != 0) {
        iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10662D98)) + 0x18;
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x3c41)), iVar2);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 9 parameter(s), cleanup 32 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 32.
   Arguments: 1 register argument(s) [ecx], 8 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101b5850(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101b5850: push esi */
    g->esi = g->ecx;   /* 0x101b5851: the value the entry loaded and the decompiler dropped */
    cow_lift_101b5850(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 32u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
