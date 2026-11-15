/* f_0x100f1d20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f1d20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f1d20(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    if (((((int32_t)rd32((uint32_t)(param_1 + 0x28)) != 0) && (iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24)), iVar1 != 0)) &&
          ((int32_t)rd32((uint32_t)(param_1 + 0x28)) != iVar1)) && ((int16_t)rd16((uint32_t)(iVar1 + 0x1058)) != 0)) {
        cow_bridge_100f2c80(g, COW_IMG(COW_ADDR_LIFT_100F1D46), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x28));
      if ((int8_t)rd8((uint32_t)(param_1 + 7)) == '\0') {
        if (iVar1 != 0) {
          if ((iVar1 == (int32_t)rd32((uint32_t)(param_1 + 0x24))) &&
             ((int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24)) + 0x1058)) != 0)) goto L_100f1e5a;
          if ((((iVar1 != 0) && (iVar1 != (int32_t)rd32((uint32_t)(param_1 + 0x24)))) &&
              (iVar1 != (int32_t)rd32((uint32_t)(param_1 + 0x20)))) &&
             ((cVar2 = cow_bridge_100f2c40(g, COW_IMG(COW_ADDR_LIFT_100F1D80), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar2 != '\0' && ((int8_t)rd8((uint32_t)(param_1 + 6)) != '\0')))) {
            cow_bridge_100f2b80(g, COW_IMG(COW_ADDR_LIFT_100F1D93), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x28), 0);
            g->eax = (CowU32)(1); return;
          }
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 0x28)) == 0) {
          iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24));
          if ((iVar1 != 0) && ((int16_t)rd16((uint32_t)(iVar1 + 0x1058)) != 0)) {
            wr32((uint32_t)(param_1 + 0x28), iVar1);
            cow_bridge_100f2c80(g, COW_IMG(COW_ADDR_LIFT_100F1DC1), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(1); return;
          }
        }
        else if ((int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28)) + 0x1058)) != 0) {
          cow_bridge_100f2c80(g, COW_IMG(COW_ADDR_LIFT_100F1DE2), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(1); return;
        }
      }
      else {
        if ((iVar1 == 0) || ((int16_t)rd16((uint32_t)(iVar1 + 0x1058)) == 0)) {
          iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24));
          if ((iVar1 != 0) && ((int16_t)rd16((uint32_t)(iVar1 + 0x1058)) != 0)) {
            wr32((uint32_t)(param_1 + 0x28), iVar1);
            cow_bridge_100f2c80(g, COW_IMG(COW_ADDR_LIFT_100F1E0F), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
          }
          iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x20));
          if ((iVar1 != 0) && ((int16_t)rd16((uint32_t)(iVar1 + 0x1058)) != 0)) {
            wr32((uint32_t)(param_1 + 0x28), iVar1);
            cow_bridge_100f2c80(g, COW_IMG(COW_ADDR_LIFT_100F1E2E), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
          }
          wr32((uint32_t)(param_1 + 0x28), (int32_t)rd32((uint32_t)(param_1 + 0x1c)));
          if ((int32_t)rd32((uint32_t)(param_1 + 0x1c)) == 0) {
            g->eax = (CowU32)(1); return;
          }
          while ((int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28)) + 0x1058)) == 0) {
            iVar1 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28)) + 4));
            wr32((uint32_t)(param_1 + 0x28), iVar1);
            if (iVar1 == 0) {
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
            }
          }
        }
    L_100f1e5a:
        cow_bridge_100f2c80(g, COW_IMG(COW_ADDR_LIFT_100F1E61), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
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
void cow_adapter_100f1d20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f1d20: push esi */
    g->esi = g->ecx;   /* 0x100f1d21: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x28u); g->eax = (uint32_t)(rd32(A)); }   /* 0x100f1d23: register eax, replayed as the entry ran it */
    cow_lift_100f1d20(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
