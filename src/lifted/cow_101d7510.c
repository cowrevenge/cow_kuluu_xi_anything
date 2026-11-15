/* f_0x101d7510 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d7510 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d7510(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    iVar2 = cow_bridge_101d75d0(g, COW_IMG(COW_ADDR_LIFT_101D7518), 1u, (const CowU32[]){ 1u }, param_1, param_2, g->eax, 0u);
      if (param_2 == '\0') {
        if (iVar2 < 0) goto L_101d7559;
      }
      else {
        if (-1 < iVar2) {
          cow_bridge_100dfad0(g, COW_IMG(COW_ADDR_LIFT_101D7545), 4u, (const CowU32[]){ iVar2, rd8((uint32_t)((int)param_1 + 10)), rd32((uint32_t)param_1), (int8_t)rd8((uint32_t)((int)param_1 + 0xb)) == '\0' }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101f2600(g, COW_IMG(COW_ADDR_LIFT_101D7553), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          goto L_101d757c;
        }
    L_101d7559:
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_101D7566), 1u, (const CowU32[]){ 109u }, g->ecx, g->edx, g->eax, 0u);
      }
      cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_101D757C), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663740)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
    L_101d757c:
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663440)) + 4), 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
        cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_101D7599), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10664520));
      uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664520)) + 8));
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664520)) + 0x3a), 0);
      wr32((uint32_t)(iVar2 + 0x14), 0);
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_101D75B9), 2u, (const CowU32[]){ uVar1, 1 }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_101d7600(g, COW_IMG(COW_ADDR_LIFT_101D75C8), 1u, (const CowU32[]){ rd8((uint32_t)((int)param_1 + 10)) }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d7510(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d7510: push esi */
    cow_lift_101d7510(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
