/* f_0x10237730 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10237730 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10237730(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(8))) == 1) {
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) != 0) {
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10237876), 2u, (const CowU32[]){ (short)rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) + 1, 0 }, g->ecx, g->edx, g->eax, 0u);
        }
        return;
      }
      switch(param_2) {
      case 3:
        if (param_3 == 9) goto L_10237831;
        break;
      case 4:
      case 6:
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), -1);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), 1);
        cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10237856), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      default:
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), (int)param_3);
        return;
      case 5:
        if (param_3 == 9) {
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x18u))), COW_IMG(COW_ADDR_LIFT_10237813), 2u, (const CowU32[]){ 4u, 9u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), 9);
          return;
        }
        break;
      case 9:
        if ((8 < param_3) && (param_3 < 0xb)) {
          return;
        }
      case 1:
      case 2:
        if (param_3 < 9) {
          iVar1 = param_3 + -1;
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), iVar1);
          if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(7))) != (int)param_3) {
            cow_bridge_102375a0(g, COW_IMG(COW_ADDR_LIFT_1023778C), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10237791), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_10456AA4)) == 0) {
          cow_bridge_102516d0(g, COW_IMG(COW_ADDR_LIFT_102377B8), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668FAC)) + 0x14)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668FB4)) + 0x14)) }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), (int)param_3);
          return;
        }
        uVar2 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668FB4)) + 0x14)) & 0x80000007;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
        }
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668FD8)) + 0x1c), uVar2 + ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668FAC)) + 0x14)) + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668FB8)) + 0x14)) * 8) * 8);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), (int)param_3);
        return;
      }
      if (param_3 != 10) {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), param_3 + -1);
      }
    L_10237831:
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), 1);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), 1);
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1023783C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), (int)param_3);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10237730(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10237730: push esi */
    g->esi = g->ecx;   /* 0x10237731: the value the entry loaded and the decompiler dropped */
    g->ecx = 1u;   /* 0x10237733: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10237738: push edi */
    cow_lift_10237730(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
