/* f_0x1023fbf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1023fbf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1023fbf0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    if (param_1 == 0) {
        uVar2 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066908C)) * 0xb0 + 100 + rd32(COW_IMG(COW_ADDR_LIFT_10669080))));
      }
      else {
        uVar2 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103601BC)) + 0x80));
      }
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669078)) + 0x14), 2);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669078)) + 0x2c), 0);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1023FC4B), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10388510), 1, 0 }, 274864184u, g->edx, param_1, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FC5A), 1u, (const CowU32[]){ 272139248u }, 274864184u, g->edx, param_1, 0u);
      cow_bridge_1023e510(g, COW_IMG(COW_ADDR_LIFT_1023FC5F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
      iVar1 = cow_bridge_1023b550(g, COW_IMG(COW_ADDR_LIFT_1023FC6D), 5u, (const CowU32[]){ 0, 1, 0, 1, uVar2 }, g->ecx, g->edx, param_1, 20u);
      iVar3 = 10;
      do {
        cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023FC7E), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 4u);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (-1 < iVar1) {
    L_1023fd33:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1023FD46), 3u, (const CowU32[]){ 272139248u, 1u, 0u }, 274864184u, g->edx, param_1, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FCB7), 1u, (const CowU32[]){ 272139516u }, 274864184u, g->edx, param_1, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FCC6), 1u, (const CowU32[]){ 272139496u }, 274864184u, g->edx, param_1, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FCD5), 1u, (const CowU32[]){ 272139480u }, 274864184u, g->edx, param_1, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FCE4), 1u, (const CowU32[]){ 272139464u }, 274864184u, g->edx, param_1, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FCF3), 1u, (const CowU32[]){ 272139444u }, 274864184u, g->edx, param_1, 0u);
        cow_bridge_1023fde0(g, COW_IMG(COW_ADDR_LIFT_1023FD07), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
        if (-1 < iVar1) {
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FD02), 1u, (const CowU32[]){ 272139248u }, 274864184u, g->edx, param_1, 0u);
        }
        cow_bridge_1023e570(g, COW_IMG(COW_ADDR_LIFT_1023FD0C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FD1B), 1u, (const CowU32[]){ 272139536u }, 274864184u, g->edx, param_1, 0u);
        cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023FD22), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
        cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023FD29), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 8u);
        g->eax = (CowU32)(iVar1); return;
      }
      if (iVar1 != -2) {
        iVar3 = cow_bridge_100db130(g, COW_IMG(COW_ADDR_LIFT_1023FC9D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
        if (iVar3 != 0x14b) goto L_1023fd33;
      }
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FD55), 1u, (const CowU32[]){ 272139516u }, 274864184u, g->edx, param_1, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FD64), 1u, (const CowU32[]){ 272139496u }, 274864184u, g->edx, param_1, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FD73), 1u, (const CowU32[]){ 272139480u }, 274864184u, g->edx, param_1, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FD82), 1u, (const CowU32[]){ 272139464u }, 274864184u, g->edx, param_1, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FD91), 1u, (const CowU32[]){ 272139444u }, 274864184u, g->edx, param_1, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FDA9), 1u, (const CowU32[]){ 272139248u }, 274864184u, g->edx, param_1, 0u);
      cow_bridge_1023fde0(g, COW_IMG(COW_ADDR_LIFT_1023FD96), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1023e570(g, COW_IMG(COW_ADDR_LIFT_1023FDAE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023FDBD), 1u, (const CowU32[]){ 272139536u }, 274864184u, g->edx, param_1, 0u);
      cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023FDC4), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
      cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1023FDCB), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 8u);
      g->eax = (CowU32)(-2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1023fbf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x1023fbf0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1023fbf4: push esi */
    cow_lift_1023fbf0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
