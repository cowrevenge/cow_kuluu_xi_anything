/* f_0x1022aed0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022aed0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022aed0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    if ((((-1 < param_3) && (((int32_t)(param_3) < (int32_t)(rd32((uint32_t)(param_1 + 0x44)))))) &&
          (piVar1 = (CowU32)(rd32((uint32_t)(param_1 + 0x20)) + param_3 * 8), piVar1 != (CowU32)0x0)) &&
         (iVar2 = rd32((uint32_t)piVar1), -1 < iVar2)) {
        cow_bridge_10233250(g, COW_IMG(COW_ADDR_LIFT_1022AF04), 2u, (const CowU32[]){ param_2, param_4 }, g->ecx, g->edx, param_3, 0u);
        cow_bridge_10153ff0(g, COW_IMG(COW_ADDR_LIFT_1022AF0A), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, param_3, 0u);
        iVar2 = cow_bridge_10154550(g, COW_IMG(COW_ADDR_LIFT_1022AF11), 0u, (const CowU32[]){ 0u }, iVar2, g->edx, param_3, 0u);
        cow_bridge_10233280(g, COW_IMG(COW_ADDR_LIFT_1022AF22), 4u, (const CowU32[]){ 0x12, 0, 0, iVar2 + 1 }, g->ecx, g->edx, param_3, 0u);
        cow_bridge_10233240(g, COW_IMG(COW_ADDR_LIFT_1022AF2B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_3, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022aed0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_3;   /* 0x1022aed0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x14u;                      /* 0x1022aed4: 20 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    cow_lift_1022aed0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
