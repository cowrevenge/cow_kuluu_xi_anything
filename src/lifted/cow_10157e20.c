/* f_0x10157e20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10157e20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10157e20(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    if ((int8_t)rd8((uint32_t)(param_1 + 0x54)) != '\0') {
        return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10482F18)) != '\0') {
        return;
      }
      if ((int16_t)rd16((uint32_t)(param_1 + 0x68)) == 0) {
        cVar1 = cow_bridge_1015ecc0(g, COW_IMG(COW_ADDR_LIFT_10157E51), 1u, (const CowU32[]){ 131072u }, 274864184u, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          return;
        }
        cVar1 = cow_bridge_1015ecc0(g, COW_IMG(COW_ADDR_LIFT_10157E68), 1u, (const CowU32[]){ 536870912u }, 274864184u, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          return;
        }
        if ((int16_t)rd16((uint32_t)(param_1 + 0x68)) == 0) goto L_10157e96;
      }
      cVar1 = cow_bridge_10157d20(g, COW_IMG(COW_ADDR_LIFT_10157E7C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((cVar1 != '\0') || (cVar1 = cow_bridge_1015edb0(g, COW_IMG(COW_ADDR_LIFT_10157E8A), 0u, (const CowU32[]){ 0u }, 274864184u, g->edx, g->eax, 0u), cVar1 == '\0')) {
        wr16((uint32_t)(param_1 + 0x68), 0);
        return;
      }
    L_10157e96:
      cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_10157EA3), 4u, (const CowU32[]){ 0x3e, 0xf, 1, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
      if (((cVar1 == '\x01') || (cVar1 = cow_bridge_10087070(g, COW_IMG(COW_ADDR_LIFT_10157EB5), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u), cVar1 != '\0')) ||
         (((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104E1D4C)) + 0x4e)) != '\0' &&
          (cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_10157EDC), 4u, (const CowU32[]){ 0x3e, 0x8c, 1, 0xffffffff }, g->ecx, g->edx, g->eax, 16u), cVar1 == '\x01')))) {
        if ((int16_t)rd16((uint32_t)(param_1 + 0x68)) != 0) {
          wr16((uint32_t)(param_1 + 0x68), 0);
          cow_bridge_1015e830(g, COW_IMG(COW_ADDR_LIFT_10157F87), 1u, (const CowU32[]){ 0u }, 274864184u, g->edx, g->eax, 0u);
          cow_bridge_10123ea0(g, COW_IMG(COW_ADDR_LIFT_10157F8E), 1u, (const CowU32[]){ 15u }, g->ecx, g->edx, g->eax, 4u);
        }
        return;
      }
      if ((int8_t)rd8((uint32_t)(param_1 + 0x59)) != '\0') {
        return;
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0xc4)) != 0) {
        return;
      }
      cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_10157F0D), 4u, (const CowU32[]){ 0x3e, 0x78, 0, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
      if (cVar1 != '\x01') {
        return;
      }
      cow_bridge_10037e90(g, COW_IMG(COW_ADDR_LIFT_10157F19), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)(param_1 + 0x68), (int16_t)rd16((uint32_t)(param_1 + 0x68)) + 1);
      if (2 < rd16((uint32_t)(param_1 + 0x68))) {
        wr16((uint32_t)(param_1 + 0x68), 0);
      }
      if ((int16_t)rd16((uint32_t)(param_1 + 0x68)) == 1) {
        cow_bridge_1015dbb0(g, COW_IMG(COW_ADDR_LIFT_10157F57), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1062193C)), 1 }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      if ((int16_t)rd16((uint32_t)(param_1 + 0x68)) == 2) {
        cow_bridge_1015dbb0(g, COW_IMG(COW_ADDR_LIFT_10157F6C), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_106671B8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      cow_bridge_1015e850(g, COW_IMG(COW_ADDR_LIFT_10157F42), 1u, (const CowU32[]){ 0u }, 274864184u, g->edx, g->eax, 0u);
      return;
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
void cow_adapter_10157e20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10157e20: push esi */
    g->esi = g->ecx;   /* 0x10157e21: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x54u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10157e23: register eax, replayed as the entry ran it */
    cow_lift_10157e20(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
