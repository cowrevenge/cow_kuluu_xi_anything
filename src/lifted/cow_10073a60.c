/* f_0x10073a60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10073a60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10073a60(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    cow_bridge_10072030(g, COW_IMG(COW_ADDR_LIFT_10073A6C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      uVar1 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(9))) & 0x7f;
      if (((param_2 & 1) != 0) &&
         ((((uVar1 == 0x58 || (uVar1 == 0x3d)) || (uVar1 == 0x20)) ||
          (((uVar1 == 0x5d || (uVar1 == 0x1b)) || (uVar1 == 0x18)))))) {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x20u))), COW_IMG(COW_ADDR_LIFT_10073AA0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)((int)param_1 + 0x1a), rd8((uint32_t)((int)param_1 + 0x1a)) | 8);
        return;
      }
      if ((((param_2 & 2) != 0) &&
          ((((uVar1 == 10 || (uVar1 == 0x2e)) ||
            ((uVar1 == 0x36 ||
             ((((uVar1 == 0x2a || (uVar1 == 0x29)) || (uVar1 == 0x2b)) ||
              ((uVar1 == 0x1f || (uVar1 == 0x21)))))))) ||
           (((uVar1 == 0x25 || ((uVar1 == 0x39 || (uVar1 == 0x31)))) ||
            (((uVar1 == 0x30 || (((uVar1 == 0x13 || (uVar1 == 0x49)) || (uVar1 == 0x44)))) ||
             (uVar1 == 0x3e)))))))) ||
         (((param_2 & 4) != 0 && ((rd8((uint32_t)((int)param_1 + 0x1a)) >> 3 & 1) == 0)))) {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x20u))), COW_IMG(COW_ADDR_LIFT_10073B13), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)((int)param_1 + 0x1a), rd8((uint32_t)((int)param_1 + 0x1a)) | 8);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10073a60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10073a60: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10073a61: register esi, replayed as the entry ran it */
    g->ecx = g->esi;   /* 0x10073a65: the value the entry loaded and the decompiler dropped */
    cow_lift_10073a60(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
