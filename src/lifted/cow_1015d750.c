/* f_0x1015d750 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1015d750 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1015d750(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU8 auStack_8[8];
    switch(param_2) {
      case 0:
        cow_bridge_10156be0(g, COW_IMG(COW_ADDR_LIFT_1015D771), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
        cow_bridge_1015d5d0(g, COW_IMG(COW_ADDR_LIFT_1015D780), 2u, (const CowU32[]){ auStack_8, param_3 }, g->ecx, g->edx, param_2, 8u);
        uVar1 = cow_bridge_10156c20(g, COW_IMG(COW_ADDR_LIFT_1015D78C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
        cow_bridge_1018d430(g, COW_IMG(COW_ADDR_LIFT_1015D794), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, param_2, 0u);
        cow_bridge_10156bb0(g, COW_IMG(COW_ADDR_LIFT_1015D79D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
        goto L_1015d7c8;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      default:
        goto L_1015d7c8;
      }
      uVar1 = cow_bridge_10257510(g, COW_IMG(COW_ADDR_LIFT_1015D7BD), 2u, (const CowU32[]){ param_3, 0 }, g->ecx, g->edx, param_2, 8u);
      cow_bridge_1018d430(g, COW_IMG(COW_ADDR_LIFT_1015D7C8), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, param_2, 0u);
    L_1015d7c8:
      iVar2 = cow_bridge_1018d490(g, COW_IMG(COW_ADDR_LIFT_1015D7CF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
      if (99 < iVar2) {
        cow_bridge_1018d3d0(g, COW_IMG(COW_ADDR_LIFT_1015D7DB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 8 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1015d750(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_2;   /* 0x1015d750: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x1015d754: 8 bytes of locals */
    cow_lift_1015d750(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
