/* f_0x1007d910 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007d910 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007d910(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 4)) != 0) {
        iVar2 = cow_bridge_10077ba0(g, COW_IMG(COW_ADDR_LIFT_1007D92B), 2u, (const CowU32[]){ 271940180u, g->eax }, g->ecx, g->edx, g->eax, 8u);
        if (iVar2 == 0) {
          g->eax = (CowU32)(param_3); return;
        }
        cVar1 = rd8((uint32_t)(iVar2 + 5));
        if (cVar1 != '\0') {
          if (cVar1 == '\x01') {
            cVar1 = cow_bridge_10077c30(g, COW_IMG(COW_ADDR_LIFT_1007D964), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 8)) }, g->ecx, g->edx, g->eax, 4u);
            if (cVar1 == '\0') {
              uVar3 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1007D974), 2u, (const CowU32[]){ 9u, 101u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10077e30(g, COW_IMG(COW_ADDR_LIFT_1007D97A), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, g->eax, 0u);
              g->eax = (CowU32)(-param_3); return;
            }
            if (rd32(COW_IMG(COW_ADDR_LIFT_10664494)) == 0) {
              g->eax = (CowU32)(param_3); return;
            }
            cow_bridge_1020c410(g, COW_IMG(COW_ADDR_LIFT_1007D99C), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 8)) }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(param_3); return;
          }
          if (cVar1 != '\x02') {
            g->eax = (CowU32)(param_3); return;
          }
          if (rd32(COW_IMG(COW_ADDR_LIFT_10664494)) == 0) {
            g->eax = (CowU32)(param_3); return;
          }
          cow_bridge_1020c3e0(g, COW_IMG(COW_ADDR_LIFT_1007D950), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(param_3); return;
        }
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10664494)) != 0) {
        cow_bridge_1020c390(g, COW_IMG(COW_ADDR_LIFT_1007D9B0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(param_3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007d910(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_103551E0));   /* 0x1007d910: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1007d915: register eax, replayed as the entry ran it */
    cow_lift_1007d910(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
