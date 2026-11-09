/* f_0x10161aa0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10161aa0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10161aa0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if (param_1 == 5) {
        if (rd32(COW_IMG(COW_ADDR_LIFT_105781D4)) != (CowU32)0x0) {
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_105781D4))))) + 0x4cu))), COW_IMG(COW_ADDR_LIFT_10161ACF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_105781D8)) != (CowU32)0x0) {
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_105781D8))))) + 0x4cu))), COW_IMG(COW_ADDR_LIFT_10161ADE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar1 = cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10161AF1), 3u, (const CowU32[]){ 272038252u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        if (iVar1 != 0) {
          wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x54), 1);
          cow_bridge_10162f00(g, COW_IMG(COW_ADDR_LIFT_10161B07), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      else if (param_1 == 6) {
        cow_bridge_1015e830(g, COW_IMG(COW_ADDR_LIFT_10161ABC), 1u, (const CowU32[]){ 0u }, 274864184u, g->edx, (g->eax - 1u), 0u);
        return;
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10161aa0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10161aa0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10161aa5: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x5u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10161aa6: register eax, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x10161aa9: the value the entry loaded and the decompiler dropped */
    cow_lift_10161aa0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
