/* f_0x100a3ac0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a3ac0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a3ac0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    if ((int8_t)rd8((uint32_t)(param_3 + 6)) == -1) {
        cow_bridge_10129de0(g, COW_IMG(COW_ADDR_LIFT_100A3AD8), 1u, (const CowU32[]){ 62u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_100A3AE7), 1u, (const CowU32[]){ 271956816u }, 274864184u, g->edx, g->eax, 0u);
      }
      if ((int8_t)rd8((uint32_t)(param_3 + 6)) == -0xb) {
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_100A3AFD), 1u, (const CowU32[]){ 186u }, g->ecx, g->edx, g->eax, 0u);
      }
      switch(rd8((uint32_t)(param_3 + 4)) - 2) {
      case 0:
        if ((int8_t)rd8((uint32_t)(param_3 + 6)) == '\x01') {
          cow_bridge_101da530(g, COW_IMG(COW_ADDR_LIFT_100A3B27), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10663400)), g->edx, g->eax, 0u);
          g->eax = (CowU32)(1); return;
        }
        if ((int8_t)rd8((uint32_t)(param_3 + 6)) == -10) {
          cow_bridge_10129de0(g, COW_IMG(COW_ADDR_LIFT_100A3B3C), 1u, (const CowU32[]){ 45u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        cow_bridge_10129de0(g, COW_IMG(COW_ADDR_LIFT_100A3B47), 1u, (const CowU32[]){ 62u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(1); return;
      case 1:
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_100A3B60), 2u, (const CowU32[]){ rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10663400)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        g->eax = (CowU32)(1); return;
      case 2:
        cow_bridge_101d7bc0(g, COW_IMG(COW_ADDR_LIFT_100A3B6A), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_100dfd40(g, COW_IMG(COW_ADDR_LIFT_100A3B75), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 12u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 3:
        if ((int8_t)rd8((uint32_t)(param_3 + 6)) == '\x01') {
          cow_bridge_101d8140(g, COW_IMG(COW_ADDR_LIFT_100A3B92), 2u, (const CowU32[]){ 1u, 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10663428)), g->edx, g->eax, 0u);
          cow_bridge_100dfdc0(g, COW_IMG(COW_ADDR_LIFT_100A3B9D), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        if ((int8_t)rd8((uint32_t)(param_3 + 6)) == -10) {
          cow_bridge_10129de0(g, COW_IMG(COW_ADDR_LIFT_100A3BB5), 1u, (const CowU32[]){ 45u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_100dfdc0(g, COW_IMG(COW_ADDR_LIFT_100A3BC0), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      default:
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 8:
        cow_bridge_100dfde0(g, COW_IMG(COW_ADDR_LIFT_100A3BD2), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 9:
        break;
      case 10:
        if (((int8_t)rd8((uint32_t)(param_3 + 6)) == -0x1c) || ((int8_t)rd8((uint32_t)(param_3 + 6)) == -0x1b)) {
          cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_100A3C1F), 1u, (const CowU32[]){ 111u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_100dff50(g, COW_IMG(COW_ADDR_LIFT_100A3C2A), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 0xb:
        if ((int8_t)rd8((uint32_t)(param_3 + 6)) == -10) {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_100A3C3C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_100dff80(g, COW_IMG(COW_ADDR_LIFT_100A3C47), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(1); return;
      case 0xc:
        cow_bridge_101d79e0(g, COW_IMG(COW_ADDR_LIFT_100A3C54), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_100dffb0(g, COW_IMG(COW_ADDR_LIFT_100A3C5F), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 12u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 0xd:
        cow_bridge_100dffe0(g, COW_IMG(COW_ADDR_LIFT_100A3C71), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 0xe:
        cow_bridge_100e0010(g, COW_IMG(COW_ADDR_LIFT_100A3C83), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      }
      if ((int8_t)rd8((uint32_t)(param_3 + 6)) == '\x01') {
        uVar1 = 0x36;
      }
      else {
        if ((int8_t)rd8((uint32_t)(param_3 + 6)) == '\x02') goto L_100a3bf5;
        uVar1 = 0x37;
      }
      cow_bridge_10129de0(g, COW_IMG(COW_ADDR_LIFT_100A3BF5), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
    L_100a3bf5:
      cow_bridge_100dff20(g, COW_IMG(COW_ADDR_LIFT_100A3C00), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a3ac0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a3ac0: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x100a3ac1: register esi, replayed as the entry ran it */
    cow_lift_100a3ac0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
