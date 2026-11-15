/* f_0x100f1410 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f1410 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f1410(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    switch(param_1) {
      case 0:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F142B), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 4u);
        g->eax = (CowU32)((CowU32)(cVar1 == '\0')); return;
      case 1:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F143B), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, param_1, 4u);
        g->eax = (CowU32)((CowU32)(cVar1 == '\0')); return;
      case 2:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F144B), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, param_1, 4u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)(cVar1 == '\0')) & 0xffu)); return;
      case 3:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F145B), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, param_1, 4u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)(cVar1 == '\0')) & 0xffu)); return;
      case 4:
      case 5:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F146B), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, param_1, 4u);
        if ((cVar1 != '\0') || (cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F1479), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, param_1, 4u), cVar1 != '\0')) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
    switchD_100f141d_caseD_a:
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 6:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F148D), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, param_1, 4u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)(cVar1 == '\0')) & 0xffu)); return;
      case 7:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F149D), 1u, (const CowU32[]){ 7u }, g->ecx, g->edx, param_1, 4u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)(cVar1 == '\0')) & 0xffu)); return;
      case 8:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F14AD), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, param_1, 4u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)(cVar1 == '\0')) & 0xffu)); return;
      case 9:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F14BD), 1u, (const CowU32[]){ 9u }, g->ecx, g->edx, param_1, 4u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)(cVar1 == '\0')) & 0xffu)); return;
      case 10:
        goto switchD_100f141d_caseD_a;
      case 0xb:
        cVar1 = cow_bridge_100f13b0(g, COW_IMG(COW_ADDR_LIFT_100F14CD), 1u, (const CowU32[]){ 11u }, g->ecx, g->edx, param_1, 4u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)(cVar1 == '\0')) & 0xffu)); return;
      default:
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(param_1) & 0xffu)); return;
      }
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f1410(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x100f1410: the value the entry loaded and the decompiler dropped */
    cow_lift_100f1410(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
