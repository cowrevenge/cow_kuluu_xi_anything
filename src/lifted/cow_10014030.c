/* f_0x10014030 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10014030 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10014030(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    switch(rd16((uint32_t)(param_1 + 4))) {
      case 0:
        cow_bridge_10010370(g, COW_IMG(COW_ADDR_LIFT_1001404C), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        cow_bridge_10239480(g, COW_IMG(COW_ADDR_LIFT_10014059), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1001406C), 3u, (const CowU32[]){ 271909608u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_10009640(g, COW_IMG(COW_ADDR_LIFT_10014085), 4u, (const CowU32[]){ 3u, 2147483648u, 1065353216u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cVar1 = cow_bridge_10093720(g, COW_IMG(COW_ADDR_LIFT_1001408A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          g->eax = (CowU32)(0); return;
        }
        break;
      case 1:
      case 2:
        break;
      case 3:
        cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_1001409F), 2u, (const CowU32[]){ 8u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10010d00(g, COW_IMG(COW_ADDR_LIFT_100140A6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(0); return;
      case 4:
        iVar2 = cow_bridge_100db140(g, COW_IMG(COW_ADDR_LIFT_100140B5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 == 8) {
          cow_bridge_10010d00(g, COW_IMG(COW_ADDR_LIFT_100140C1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        goto L_100140ef;
      case 5:
        cow_bridge_100db170(g, COW_IMG(COW_ADDR_LIFT_100140D4), 2u, (const CowU32[]){ 9u, 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 6:
        iVar2 = cow_bridge_100db140(g, COW_IMG(COW_ADDR_LIFT_100140EA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 == 9) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
    L_100140ef:
        if (iVar2 < 0xc9) {
          g->eax = (CowU32)(0); return;
        }
    switchD_10014040_default:
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      default:
        goto switchD_10014040_default;
      }
      cow_bridge_10010d00(g, COW_IMG(COW_ADDR_LIFT_100140DB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10014030(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10014030: push esi */
    g->esi = g->ecx;   /* 0x10014031: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10014033: register eax, replayed as the entry ran it */
    cow_lift_10014030(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
