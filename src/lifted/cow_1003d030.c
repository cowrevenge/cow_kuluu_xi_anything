/* f_0x1003d030 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1003d030 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1003d030(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1032AB60));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), COW_IMG(COW_ADDR_LIFT_1032AB44));
      cow_bridge_10071ec0(g, COW_IMG(COW_ADDR_LIFT_1003D04C), 0u, (const CowU32[]){ 0u }, (CowU32)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1d))), g->edx, g->eax, 0u);
      iVar1 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x30)));
      if (iVar1 != 0) {
        cow_bridge_100634a0(g, COW_IMG(COW_ADDR_LIFT_1003D05E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_100634a0(g, COW_IMG(COW_ADDR_LIFT_1003D066), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_100634a0(g, COW_IMG(COW_ADDR_LIFT_1003D06E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_1003D074), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 4u);
      }
      if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x31))) != 0) {
        cow_bridge_10028700(g, COW_IMG(COW_ADDR_LIFT_1003D087), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x31))) }, g->ecx, g->edx, g->eax, 4u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_1047B980)) == param_1) {
        wr32(COW_IMG(COW_ADDR_LIFT_1047B980), (CowU32)0x0);
      }
      cow_bridge_1003b5c0(g, COW_IMG(COW_ADDR_LIFT_1003D0A3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_tail_100747c0(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x100747c0`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x100747c0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_1003d030(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1003d030: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1003d031: push esi */
    g->esi = g->ecx;   /* 0x1003d032: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1003d034: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x74u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1003d035: register ecx, replayed as the entry ran it */
    { g->ebx = (uint32_t)((uint32_t)(g->esi + 0x34u)); }   /* 0x1003d038: register ebx, replayed as the entry ran it */
    cow_lift_1003d030(g, param_1);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
