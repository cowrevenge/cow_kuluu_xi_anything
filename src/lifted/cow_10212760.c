/* f_0x10212760 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10212760 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10212760(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x88));
      if (iVar1 != 0) {
        wr32((uint32_t)(iVar1 + 0x14), 0);
        wr32((uint32_t)(iVar1 + 0x10), 100);
        wr32((uint32_t)(iVar1 + 0xc), 100);
      }
      switch(rd32((uint32_t)(param_1 + 0x110))) {
      case 0:
        wr32((uint32_t)(param_1 + 0x110), 1);
        wr8((uint32_t)(param_1 + 0x114), 0);
        wr8((uint32_t)(param_1 + 0x120), 0);
        break;
      case 1:
        cow_bridge_10213370(g, COW_IMG(COW_ADDR_LIFT_102127B9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x110), 3);
        wr8((uint32_t)(param_1 + 0x114), 0);
        wr8((uint32_t)(param_1 + 0x120), 0);
        break;
      case 2:
        cow_bridge_10213390(g, COW_IMG(COW_ADDR_LIFT_102127DB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x110), 3);
        wr8((uint32_t)(param_1 + 0x114), 0);
        wr8((uint32_t)(param_1 + 0x120), 0);
        break;
      case 3:
        cow_bridge_102136d0(g, COW_IMG(COW_ADDR_LIFT_102127FD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 4:
        iVar1 = cow_bridge_10213c90(g, COW_IMG(COW_ADDR_LIFT_10212809), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 < 0) {
          wr32((uint32_t)(param_1 + 0x110), 2);
          wr8((uint32_t)(param_1 + 0x114), 0);
          wr8((uint32_t)(param_1 + 0x120), 0);
        }
        else if (0 < iVar1) {
          if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
            cow_bridge_10221270(g, COW_IMG(COW_ADDR_LIFT_10212841), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
          }
          wr32((uint32_t)(param_1 + 0x110), 5);
          wr8((uint32_t)(param_1 + 0x114), 0);
          wr8((uint32_t)(param_1 + 0x120), 0);
        }
        break;
      case 5:
        if ((int8_t)rd8((uint32_t)(param_1 + 0x120)) == '\x01') {
          cow_bridge_10216240(g, COW_IMG(COW_ADDR_LIFT_1021286D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          iVar1 = cow_bridge_10213ce0(g, COW_IMG(COW_ADDR_LIFT_10212874), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (-1 < iVar1) {
            if (0 < iVar1) {
              if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
                cow_bridge_10221300(g, COW_IMG(COW_ADDR_LIFT_1021288B), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
              }
              wr32((uint32_t)(param_1 + 0x110), 6);
              wr8((uint32_t)(param_1 + 0x114), 0);
              wr8((uint32_t)(param_1 + 0x120), 0);
            }
            break;
          }
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
          cow_bridge_10221300(g, COW_IMG(COW_ADDR_LIFT_102128BF), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
        }
        wr32((uint32_t)(param_1 + 0x110), 2);
        wr8((uint32_t)(param_1 + 0x114), 0);
        wr8((uint32_t)(param_1 + 0x120), 0);
        break;
      case 6:
        cow_bridge_10214040(g, COW_IMG(COW_ADDR_LIFT_102128E1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x110), 8);
        wr8((uint32_t)(param_1 + 0x114), 0);
        wr8((uint32_t)(param_1 + 0x120), 0);
        break;
      case 7:
        cow_bridge_10214060(g, COW_IMG(COW_ADDR_LIFT_10212903), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x110), 8);
        wr8((uint32_t)(param_1 + 0x114), 0);
        wr8((uint32_t)(param_1 + 0x120), 0);
        break;
      case 8:
        cow_bridge_10214090(g, COW_IMG(COW_ADDR_LIFT_10212925), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 9:
        iVar1 = cow_bridge_102150c0(g, COW_IMG(COW_ADDR_LIFT_10212931), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (-1 < iVar1) {
          if (0 < iVar1) {
            if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
              cow_bridge_10221270(g, COW_IMG(COW_ADDR_LIFT_1021294E), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
            }
            wr32((uint32_t)(param_1 + 0x110), 10);
            wr8((uint32_t)(param_1 + 0x114), 0);
            wr8((uint32_t)(param_1 + 0x120), 0);
          }
          break;
        }
        goto L_10212998;
      case 10:
        if ((int8_t)rd8((uint32_t)(param_1 + 0x120)) == '\x01') {
          cow_bridge_10216240(g, COW_IMG(COW_ADDR_LIFT_1021297A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          iVar1 = cow_bridge_10215120(g, COW_IMG(COW_ADDR_LIFT_10212981), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (-1 < iVar1) {
            if (0 < iVar1) {
              if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
                cow_bridge_10221300(g, COW_IMG(COW_ADDR_LIFT_10212998), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
              }
              wr32((uint32_t)(param_1 + 0x110), 0xb);
              wr8((uint32_t)(param_1 + 0x114), 0);
              wr8((uint32_t)(param_1 + 0x120), 0);
            }
            break;
          }
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
          cow_bridge_10221300(g, COW_IMG(COW_ADDR_LIFT_102129C5), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
        }
    L_10212998:
        wr32((uint32_t)(param_1 + 0x110), 7);
        wr8((uint32_t)(param_1 + 0x114), 0);
        wr8((uint32_t)(param_1 + 0x120), 0);
        break;
      case 0xb:
        cow_bridge_102153a0(g, COW_IMG(COW_ADDR_LIFT_102129E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x110), 0xc);
        wr8((uint32_t)(param_1 + 0x114), 0);
        wr8((uint32_t)(param_1 + 0x120), 0);
        break;
      case 0xc:
        cow_bridge_10215440(g, COW_IMG(COW_ADDR_LIFT_10212A03), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 0xd:
        cow_bridge_102157c0(g, COW_IMG(COW_ADDR_LIFT_10212A0C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x110), 0xe);
        wr8((uint32_t)(param_1 + 0x114), 0);
        wr8((uint32_t)(param_1 + 0x120), 0);
        break;
      case 0xe:
        cow_bridge_10215a50(g, COW_IMG(COW_ADDR_LIFT_10212A2B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x108));
      if (param_1 != -0x108) {
        if (iVar1 == (int32_t)rd32((uint32_t)(param_1 + 0x10c))) {
          wr8((uint32_t)(iVar1 + 0x20), 1);
          return;
        }
        wr8((uint32_t)(iVar1 + 0x20), 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10212760(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10212760: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10212761: push esi */
    g->esi = g->ecx;   /* 0x10212762: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x10212764: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10212766: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x88u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10212769: register eax, replayed as the entry ran it */
    cow_lift_10212760(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
