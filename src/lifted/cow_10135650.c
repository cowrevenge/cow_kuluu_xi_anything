/* f_0x10135650 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10135650 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10135650(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    if (param_4 == '\0') {
        if ((param_2 == 5) && (rd32(COW_IMG(COW_ADDR_LIFT_105781A0)) != 0)) {
          cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10135539), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          uVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x54u))), COW_IMG(COW_ADDR_LIFT_10135540), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10136360(g, COW_IMG(COW_ADDR_LIFT_1013554C), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
        }
        return;
      }
      if (param_4 == '\x01') {
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781BC)) + 0x1c)) == 1) {
          wr8((uint32_t)(param_1 + 4u * (uint32_t)(1)), 1);
          wr8((uint32_t)((int)param_1 + 5), 0xfe);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), 0);
          cow_bridge_101316a0(g, COW_IMG(COW_ADDR_LIFT_10135583), 3u, (const CowU32[]){ 0u, 0u, 0u }, g->ecx, g->edx, 1u, 0u);
        }
        else {
          cow_bridge_10134f00(g, COW_IMG(COW_ADDR_LIFT_101355AC), 2u, (const CowU32[]){ 65535u, 2u }, g->ecx, g->edx, g->eax, 8u);
          cVar1 = cow_bridge_10135f00(g, COW_IMG(COW_ADDR_LIFT_101355BE), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, g->edx, g->eax, 0u);
          if (cVar1 == '\0') {
            cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_101355C7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            goto L_10135588;
          }
        }
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10135588), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    L_10135588:
        cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_1013559D), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781BC)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      if (param_4 != '\x02') {
        return;
      }
      if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781BC)) + 0x1c)) == 1) {
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(1)), 1);
        wr8((uint32_t)((int)param_1 + 5), 0);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), 0);
        cow_bridge_101316a0(g, COW_IMG(COW_ADDR_LIFT_10135603), 3u, (const CowU32[]){ 0u, 0u, 0u }, g->ecx, g->edx, 1u, 0u);
      }
      else {
        cow_bridge_10134f00(g, COW_IMG(COW_ADDR_LIFT_1013562C), 2u, (const CowU32[]){ 65535u, 2u }, g->ecx, g->edx, g->eax, 8u);
        cVar1 = cow_bridge_10135f00(g, COW_IMG(COW_ADDR_LIFT_1013563E), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_10135647), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          goto L_10135608;
        }
      }
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10135608), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    L_10135608:
      cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_1013561D), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781BC)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 16.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10135650(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));

    cow_lift_10135650(g, param_1, param_2, param_3, param_4);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
