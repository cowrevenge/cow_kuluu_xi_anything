/* f_0x100d99b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100d99b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100d99b0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    int iVar2;
    CowU32 uVar3;
    uVar1 = cow_bridge_100d9990(g, COW_IMG(COW_ADDR_LIFT_100D99B9), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 4)) != 0) {
        if ((int32_t)rd32((uint32_t)((int)param_1 + 4)) != 1) {
          g->eax = (CowU32)(uVar1); return;
        }
        iVar2 = cow_bridge_10016410(g, COW_IMG(COW_ADDR_LIFT_100D99CB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 == 0) {
          cow_bridge_100fc180(g, COW_IMG(COW_ADDR_LIFT_100D99D9), 1u, (const CowU32[]){ 1024u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100fc180(g, COW_IMG(COW_ADDR_LIFT_100D99E0), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 8u);
          wr32((uint32_t)((int)param_1 + 4), 0);
          g->eax = (CowU32)(uVar1); return;
        }
        g->eax = (CowU32)(uVar1); return;
      }
      uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_100D99F4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (((uVar3 & 0x200) == 0) || (uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_100D99FE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (uVar3 & 0x400) != 0)) {
        uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_100D9A08), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((uVar3 & 0x2000) == 0) {
          g->eax = (CowU32)(uVar1); return;
        }
        uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_100D9A12), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((uVar3 & 0x4000) != 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar1) & 0xffu)); return;
        }
      }
      wr32((uint32_t)((int)param_1 + 4), (int32_t)rd32((uint32_t)((int)param_1 + 4)) + 1);
      cow_bridge_10016400(g, COW_IMG(COW_ADDR_LIFT_100D9A25), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
      cow_bridge_10014ce0(g, COW_IMG(COW_ADDR_LIFT_100D9A2D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((g->eax & 0xffff00ffu) | (((CowU32)(uVar1) & 0xffu) << 8)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100d99b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100d99b0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100d99b1: push esi */
    g->esi = g->ecx;   /* 0x100d99b2: the value the entry loaded and the decompiler dropped */
    cow_lift_100d99b0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
