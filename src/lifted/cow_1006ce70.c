/* f_0x1006ce70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1006ce70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1006ce70(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_1047CF31)) & 1) == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_1047CF31), rd32(COW_IMG(COW_ADDR_LIFT_1047CF31)) | 1);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CC80), 0x3f800000);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CC84), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CC88), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CC8C), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CC90), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CC94), 0x3f800000);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CC98), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CC9C), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CCA0), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CCA4), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CCA8), 0x3f800000);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CCAC), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CCB0), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CCB4), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CCB8), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1047CCBC), 0x3f800000);
        cow_bridge_103134c6(g, COW_IMG(COW_ADDR_LIFT_1006CF39), 1u, (const CowU32[]){ 268881808u }, g->ecx, g->edx, g->eax, 4u);
      }
      puVar2 = COW_IMG(COW_ADDR_LIFT_1047CC80);
      puVar3 = (CowU32)(param_1 + 0x810);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar3, rd32((uint32_t)puVar2));
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = COW_IMG(COW_ADDR_LIFT_1047CC80);
      puVar3 = (CowU32)(param_1 + 0x850);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar3, rd32((uint32_t)puVar2));
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = COW_IMG(COW_ADDR_LIFT_1047CC80);
      puVar3 = (CowU32)(param_1 + 0x890);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar3, rd32((uint32_t)puVar2));
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = COW_IMG(COW_ADDR_LIFT_1047CC80);
      puVar3 = (CowU32)(param_1 + 0x8d0);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar3, rd32((uint32_t)puVar2));
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      cow_bridge_tail_1006ce40(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x1006ce40`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x1006ce40.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_1006ce70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1006ce70: push ebx */
    g->ebx = g->ecx;   /* 0x1006ce71: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_1047CF31) + RD); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1006ce73: register ecx, replayed as the entry ran it */
    { g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(0x1u); }   /* 0x1006ce79: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1006ce7b: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1006ce7c: push edi */
    cow_lift_1006ce70(g, param_1);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
