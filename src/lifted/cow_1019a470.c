/* f_0x1019a470 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1019a470 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1019a470(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x34));
      switch(param_2) {
      case 1:
        if (((int32_t)rd32((uint32_t)(param_1 + 8)) != 0) && ((int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62)) == '\0')) break;
        iVar3 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1019A4AC), 2u, (const CowU32[]){ 0xb, rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x3c)) + 8 + (int32_t)rd32((uint32_t)(param_1 + 0x40)) * 8)) }, g->ecx, g->edx, g->eax, 8u);
        if (iVar3 != 0) {
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019A4CC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x40), (int32_t)rd32((uint32_t)(param_1 + 0x40)) + 1);
          wr16((uint32_t)(param_1 + 0x4c), rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
          break;
        }
        goto L_1019a586;
      case 2:
        if (((int32_t)rd32((uint32_t)(param_1 + 8)) != 0) && ((int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62)) == '\0')) break;
        if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x40))))) {
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019A56C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x40), (int32_t)rd32((uint32_t)(param_1 + 0x40)) + -1);
          wr16((uint32_t)(param_1 + 0x4c), rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
          break;
        }
    L_1019a586:
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019A500), 2u, (const CowU32[]){ (int16_t)rd16((uint32_t)(param_1 + 0x40)) + 1, 0 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019A507), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr16((uint32_t)(param_1 + 0x4c), rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
        break;
      case 3:
        if ((int32_t)rd32((uint32_t)(param_1 + 8)) != 0) {
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019A52C), 2u, (const CowU32[]){ rd16((uint32_t)(param_1 + 0x4c)), 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019A533), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        goto L_1019a507;
      case 4:
        iVar3 = (int32_t)rd32((uint32_t)(param_1 + 8));
        if (iVar3 != 0) {
          wr8((uint32_t)(iVar3 + 0x62), 1);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019A596), 2u, (const CowU32[]){ (((uint32_t)((short)((CowU32)iVar3 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x4c))) & 0xffffu)), 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019A59D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
    L_1019a533:
        cow_bridge_1019a6c0(g, COW_IMG(COW_ADDR_LIFT_1019A53A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 5:
        iVar3 = (int)(short)param_3;
        if (iVar3 == 0xf) goto L_1019a533;
        if (iVar3 != 0x10) {
          iVar2 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1019A560), 2u, (const CowU32[]){ 0xb, rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x3c)) + -8 + iVar3 * 8)) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar2 != 0) {
            cow_bridge_1019a810(g, COW_IMG(COW_ADDR_LIFT_1019A4C2), 1u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x3c)) + -4 + iVar3 * 8)) }, g->esi, g->edx, g->eax, 0u);
          }
          break;
        }
    L_1019a507:
        cow_bridge_1019a690(g, COW_IMG(COW_ADDR_LIFT_1019A50E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 6:
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1019A4E2), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        break;
      case 9:
        if (((short)param_3 == 0xf) || ((short)param_3 == 0x10)) {
          if ((int32_t)rd32((uint32_t)(param_1 + 8)) == 0) {
            return;
          }
          cow_bridge_10118e90(g, COW_IMG(COW_ADDR_LIFT_1019A65B), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
          return;
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 8)) != 0) {
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
        }
        iVar3 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1019A60F), 2u, (const CowU32[]){ 0xb, rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x3c)) + -8 + (short)param_3 * 8)) }, g->ecx, g->edx, g->eax, 8u);
        if (iVar3 == 0) {
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019A63E), 2u, (const CowU32[]){ (int16_t)rd16((uint32_t)(param_1 + 0x40)) + 1, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019A645), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          iVar3 = (short)param_3 + -1;
          if ((int32_t)rd32((uint32_t)(param_1 + 0x40)) != iVar3) {
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019A5CB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          wr32((uint32_t)(param_1 + 0x40), iVar3);
        }
      }
      if (iVar1 != (int32_t)rd32((uint32_t)(param_1 + 0x34))) {
        cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019A623), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1019a470(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x1019a470: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1019a475: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1019a476: push esi */
    g->esi = g->ecx;   /* 0x1019a477: the value the entry loaded and the decompiler dropped */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x1019a479: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_1019a470(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
