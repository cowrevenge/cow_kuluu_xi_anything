/* f_0x1023ec90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1023ec90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1023ec90(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if ((int32_t)rd32((uint32_t)(param_1 + 0x2c)) != 0) {
        return;
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0x20)) == 1) {
        return;
      }
      switch(param_2) {
      case 1:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x28)) != 2) {
          wr32((uint32_t)(param_1 + 0x28), (int32_t)rd32((uint32_t)(param_1 + 0x28)) + 1);
          cow_bridge_1023ec00(g, COW_IMG(COW_ADDR_LIFT_1023ECEF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023ECF4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) != 0x3d) {
          wr32((uint32_t)(param_1 + 0x24), (int32_t)rd32((uint32_t)(param_1 + 0x24)) + 1);
          cow_bridge_1023ec00(g, COW_IMG(COW_ADDR_LIFT_1023ED13), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023ED18), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 0x30)) != 0) {
          wr32((uint32_t)(param_1 + 0x28), 3);
          wr32((uint32_t)(param_1 + 0x20), 1);
          wr32((uint32_t)(param_1 + 0x2c), 1);
          wr32((uint32_t)(param_1 + 0x38), 1);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023ED2A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        break;
      case 2:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x28)) != 0) {
          wr32((uint32_t)(param_1 + 0x28), (int32_t)rd32((uint32_t)(param_1 + 0x28)) + -1);
          cow_bridge_1023ec00(g, COW_IMG(COW_ADDR_LIFT_1023ED25), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023ED6B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) != 0) {
          wr32((uint32_t)(param_1 + 0x24), (int32_t)rd32((uint32_t)(param_1 + 0x24)) + -1);
          cow_bridge_1023ec00(g, COW_IMG(COW_ADDR_LIFT_1023ED66), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023ED8F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        break;
      case 3:
      case 0x19:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) == 0x3d) {
          return;
        }
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + 3;
        goto L_1023edb4;
      case 4:
      case 0x18:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) == 0) {
          return;
        }
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + -3;
        goto L_1023ecd8;
      case 5:
        wr32((uint32_t)(param_1 + 0x20), 1);
        wr32((uint32_t)(param_1 + 0x2c), 1);
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x5d), 1);
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1023EE69), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 6:
        wr32((uint32_t)(param_1 + 0x20), 1);
        wr32((uint32_t)(param_1 + 0x2c), 2);
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x5d), 1);
        cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_1023EE82), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 9:
        iVar1 = param_3 + -1;
        if (iVar1 != (int32_t)rd32((uint32_t)(param_1 + 0x28))) {
          if (iVar1 == 3) {
            if ((int32_t)rd32((uint32_t)(param_1 + 0x30)) != 0) {
              wr32((uint32_t)(param_1 + 0x28), 3);
              wr32((uint32_t)(param_1 + 0x20), 1);
              wr32((uint32_t)(param_1 + 0x2c), 1);
              wr32((uint32_t)(param_1 + 0x38), 1);
              wr16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c), 3);
              cow_bridge_10118170(g, COW_IMG(COW_ADDR_LIFT_1023EE43), 1u, (const CowU32[]){ rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)) }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023EDA1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              return;
            }
          }
          else {
            wr32((uint32_t)(param_1 + 0x28), iVar1);
          }
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023EDCD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        break;
      case 0x16:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) == 0) {
          return;
        }
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + -1;
    L_1023ecd8:
        wr32((uint32_t)(param_1 + 0x24), iVar1);
        if (iVar1 < 0) {
          wr32((uint32_t)(param_1 + 0x24), 0);
          cow_bridge_1023ec00(g, COW_IMG(COW_ADDR_LIFT_1023ED9C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023EE02), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        goto L_1023edc3;
      case 0x17:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) == 0x3d) {
          return;
        }
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + 1;
    L_1023edb4:
        wr32((uint32_t)(param_1 + 0x24), iVar1);
        if (0x3d < iVar1) {
          wr32((uint32_t)(param_1 + 0x24), 0x3d);
        }
    L_1023edc3:
        cow_bridge_1023ec00(g, COW_IMG(COW_ADDR_LIFT_1023EDC8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023EE48), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0x1b:
        iVar1 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc40)) + 0x14));
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else if (0x3d < iVar1) {
          iVar1 = 0x3d;
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) != iVar1) {
          wr32((uint32_t)(param_1 + 0x24), iVar1);
          cow_bridge_1023ec00(g, COW_IMG(COW_ADDR_LIFT_1023EDFD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023EE54), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1023ec90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->ecx + 0x2Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x1023ec90: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1023ec93: push esi */
    cow_lift_1023ec90(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
