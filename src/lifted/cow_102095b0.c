/* f_0x102095b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102095b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102095b0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    CowU32 uVar3;
    iVar2 = cow_bridge_10014d60(g, COW_IMG(COW_ADDR_LIFT_102095B8), 0u, (const CowU32[]){ 0u }, param_1, param_2, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_1 + 0x24)) - iVar2);
      sVar1 = cow_bridge_10014d60(g, COW_IMG(COW_ADDR_LIFT_102095C0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)(param_1 + 0x1e), rd16((uint32_t)(param_1 + 0x1e)) - sVar1);
      if (((int16_t)(rd16((uint32_t)(param_1 + 0x1e))) < (int16_t)(0))) {
        iVar2 = rd32((uint32_t)(param_1 + 0x24)) / 0x3c;
        if (iVar2 < 0) {
          wr16((uint32_t)(param_1 + 0x1e), 0x8700);
        }
        else if (iVar2 < 0x3c) {
          wr16((uint32_t)(param_1 + 0x1e), 600);
        }
        else {
          wr16((uint32_t)(param_1 + 0x1e), ((0xb3 < iVar2) - 1 & 0xfc7c) + 0x708);
        }
        cow_bridge_100ec080(g, COW_IMG(COW_ADDR_LIFT_10209626), 3u, (const CowU32[]){ (int)rd8((uint32_t)(param_1 + 0x1c)), COW_IMG(COW_ADDR_LIFT_10209520), param_1 }, g->ecx, g->edx, g->eax, 12u);
      }
      if (((rd32((uint32_t)(param_1 + 0x80)) == 0) && (rd32((uint32_t)(param_1 + 0x84)) != 0)) &&
         (((int32_t)(-1) < (int32_t)(rd32((uint32_t)(param_1 + 0x28)))))) {
        uVar3 = cow_bridge_101c8450(g, COW_IMG(COW_ADDR_LIFT_1020964A), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x28)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x80), uVar3);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102095b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102095b0: push esi */
    g->esi = g->ecx;   /* 0x102095b1: the value the entry loaded and the decompiler dropped */
    cow_lift_102095b0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
