/* f_0x10153b70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10153b70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10153b70(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 local_1;
    cVar1 = cow_bridge_10153ef0(g, COW_IMG(COW_ADDR_LIFT_10153B80), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10669444), 0xd8c9 }, param_1, g->edx, g->eax, 8u);
      if ((((cVar1 != '\0') && (cVar1 = cow_bridge_10153ef0(g, COW_IMG(COW_ADDR_LIFT_10153B96), 2u, (const CowU32[]){ 275158100u, 55498u }, g->ecx, g->edx, g->eax, 8u), cVar1 != '\0')) &&
          (cVar1 = cow_bridge_10153ef0(g, COW_IMG(COW_ADDR_LIFT_10153BAC), 2u, (const CowU32[]){ 274171368u, 55465u }, g->ecx, g->edx, g->eax, 8u), cVar1 != '\0')) &&
         (cVar1 = cow_bridge_10153ef0(g, COW_IMG(COW_ADDR_LIFT_10153BC2), 2u, (const CowU32[]){ 274171384u, 55466u }, g->ecx, g->edx, g->eax, 8u), cVar1 != '\0')) {
        cow_bridge_10153ef0(g, COW_IMG(COW_ADDR_LIFT_10153BD8), 2u, (const CowU32[]){ 274171352u, 55471u }, g->ecx, g->edx, g->eax, 8u);
      }
      cVar1 = cow_bridge_10153ef0(g, COW_IMG(COW_ADDR_LIFT_10153BEA), 2u, (const CowU32[]){ 274171512u, 55472u }, g->ecx, g->edx, g->eax, 8u);
      if ((cVar1 == '\0') || (cVar1 = cow_bridge_10153ef0(g, COW_IMG(COW_ADDR_LIFT_10153C00), 2u, (const CowU32[]){ 274171336u, 55468u }, g->ecx, g->edx, g->eax, 8u), cVar1 == '\0')) {
        local_1 = (CowU8)((CowU32)param_1 >> 0x18);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(local_1) & 0xffu)); return;
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ecx], frame pointer no, 0 locals, pops [ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10153b70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10153b70: push ecx */
    cow_lift_10153b70(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
