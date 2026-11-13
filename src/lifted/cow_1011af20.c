/* f_0x1011af20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1011af20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1011af20(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    iVar1 = (int32_t)rd32((uint32_t)(param_1 + 8));
      if (iVar1 != 0) {
        cow_bridge_1011b390(g, COW_IMG(COW_ADDR_LIFT_1011AF35), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1011AF3B), 1u, (const CowU32[]){ g->esi }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(param_1 + 8), 0);
      }
      iVar1 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if (iVar1 != 0) {
        iVar2 = (int32_t)rd32((uint32_t)(iVar1 + -4));
        if (-1 < iVar2 + -1) {
          do {
            cow_bridge_1011b690(g, COW_IMG(COW_ADDR_LIFT_1011AF65), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1011AF70), 1u, (const CowU32[]){ iVar1 + -4 }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(param_1 + 4), 0);
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0xc)) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1011AF84), 1u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 0xc)) }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(param_1 + 0xc), 0);
      }
      cow_bridge_tail_10126330(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x10126330`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x10126330.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_1011af20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1011af20: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1011af21: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1011af22: push edi */
    g->edi = g->ecx;   /* 0x1011af23: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1011af25: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1011af27: register esi, replayed as the entry ran it */
    cow_lift_1011af20(g, param_1);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
