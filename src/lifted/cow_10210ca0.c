/* f_0x10210ca0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10210ca0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10210ca0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    char cVar3;
    CowU16 uVar4;
    cVar3 = cow_bridge_1015ecc0(g, COW_IMG(COW_ADDR_LIFT_10210CAF), 1u, (const CowU32[]){ 131072u }, 274864184u, g->edx, g->eax, 0u);
      if (((cVar3 != '\0') || ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x59)) != '\0')) ||
         ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0xc4)) != 0)) {
        cow_bridge_10129d90(g, COW_IMG(COW_ADDR_LIFT_10210D5A), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      uVar4 = cow_bridge_100fc2e0(g, COW_IMG(COW_ADDR_LIFT_10210CD6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_1066450C));
      if (uVar4 != 0) {
        iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar4)));
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066450C)) + 0x14), rd32((uint32_t)(iVar1 + 4)));
        wr32((uint32_t)(iVar2 + 0x18), rd32((uint32_t)(iVar1 + 8)));
        wr32((uint32_t)(iVar2 + 0x1c), rd32((uint32_t)(iVar1 + 0xc)));
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066450C)) + 0x25), 0);
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066450C)) + 0x24), 0);
        if (rd32(COW_IMG(COW_ADDR_LIFT_10664518)) != 0) {
          wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664518)) + 0x12), rd8((uint32_t)(param_3 + 4)));
        }
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10210D3B), 3u, (const CowU32[]){ 272128968u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1021c7a0(g, COW_IMG(COW_ADDR_LIFT_10210D4A), 2u, (const CowU32[]){ 0u, 1u }, g->ecx, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(1); return;
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
void cow_adapter_10210ca0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));

    cow_lift_10210ca0(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
