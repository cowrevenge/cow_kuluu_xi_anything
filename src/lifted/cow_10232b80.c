/* f_0x10232b80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10232b80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10232b80(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    char cVar2;
    CowU16 uVar3;
    CowU32 uVar4;
    int iVar5;
    uint64_t uVar6;
    switch((short)param_2) {
      case 3:
        cVar2 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_10232D27), 4u, (const CowU32[]){ 0x3e, 0xa8, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if (cVar2 != '\0') {
          cow_bridge_10222150(g, COW_IMG(COW_ADDR_LIFT_10232D3C), 2u, (const CowU32[]){ 0x19, param_3 }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        iVar5 = (int32_t)rd32((uint32_t)((int)param_1 + 100));
        goto L_10232d45;
      case 4:
        cVar2 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_10232D89), 4u, (const CowU32[]){ 0x3e, 0xa8, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if (cVar2 != '\0') {
          cow_bridge_10222150(g, COW_IMG(COW_ADDR_LIFT_10232D9E), 2u, (const CowU32[]){ 0x18, param_3 }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
    L_10232da4:
        if ((((int32_t)rd32((uint32_t)((int)param_1 + 100)) == 0) && ((int32_t)rd32((uint32_t)((int)param_1 + 0x68)) == 3)) &&
           (cVar2 = cow_bridge_102304e0(g, COW_IMG(COW_ADDR_LIFT_10232DB9), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x70), g->edx, g->eax, 0u), cVar2 != '\0')) {
          cow_bridge_10231080(g, COW_IMG(COW_ADDR_LIFT_10232CA8), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10232D73), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        break;
      case 5:
        if ((short)param_3 == 9) goto L_10232da4;
        iVar5 = (int32_t)rd32((uint32_t)((int)param_1 + 100));
        if ((short)param_3 != 10) {
          if (iVar5 != 0) {
            if (iVar5 != 1) {
              return;
            }
            if (rd16((uint32_t)((int)param_1 + 0x8c)) < 0xf200) {
              cow_bridge_10232770(g, COW_IMG(COW_ADDR_LIFT_10232C79), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)((int)param_1 + 0x8c)) }, g->ecx, g->edx, g->eax, 0u);
              return;
            }
            return;
          }
          if ((int32_t)rd32((uint32_t)((int)param_1 + 0x40)) < 1) {
            return;
          }
          if ((int32_t)rd32((uint32_t)((int)param_1 + 0x68)) == 2) {
            uVar4 = cow_bridge_10231e90(g, COW_IMG(COW_ADDR_LIFT_10232BE9), 0u, (const CowU32[]){ 0u }, param_1, rd32((uint32_t)((int)param_1 + 0x30)), g->eax, 0u);
            if ((int)uVar4 < 1) {
              return;
            }
            if (uVar4 < 0xf200) {
              cow_bridge_10232b40(g, COW_IMG(COW_ADDR_LIFT_10232C04), 1u, (const CowU32[]){ uVar4 }, param_1, g->edx, g->eax, 0u);
              return;
            }
            return;
          }
          uVar6 = cow_bridge_10231e90(g, COW_IMG(COW_ADDR_LIFT_10232C0F), 0u, (const CowU32[]){ 0u }, param_1, rd32((uint32_t)((int)param_1 + 0x30)), g->eax, 0u);
          uVar3 = (CowU16)uVar6;
          if ((0xf1ff < uVar3) && (uVar3 != 0xffff)) {
            cow_bridge_10230450(g, COW_IMG(COW_ADDR_LIFT_10232C25), 2u, (const CowU32[]){ (CowU32)uVar6, (int)((uint64_t)uVar6 >> 0x20) }, (CowU32)((int)param_1 + 0x70), g->edx, g->eax, 0u);
            return;
          }
          if (uVar3 < 0xe000) {
            return;
          }
          if (uVar3 < 0xf000) {
            cow_bridge_10232b40(g, COW_IMG(COW_ADDR_LIFT_10232C4C), 1u, (const CowU32[]){ (CowU32)uVar6 & 0xffff }, param_1, g->edx, g->eax, 0u);
            return;
          }
          return;
        }
    L_10232d45:
        if (((iVar5 == 0) && ((int32_t)rd32((uint32_t)((int)param_1 + 0x68)) == 3)) &&
           (cVar2 = cow_bridge_102304b0(g, COW_IMG(COW_ADDR_LIFT_10232D5F), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x70), g->edx, g->eax, 0u), cVar2 != '\0')) {
          cow_bridge_10231080(g, COW_IMG(COW_ADDR_LIFT_10232D6E), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10232DC9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        break;
      case 6:
        if ((int32_t)rd32((uint32_t)((int)param_1 + 100)) == 0) {
          bVar1 = rd8((uint32_t)(rd8((uint32_t)((int)param_1 + 0x8b)) + 0x16 + (int)param_1 + 0x70));
          cVar2 = cow_bridge_10230490(g, COW_IMG(COW_ADDR_LIFT_10232C9D), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x70), g->edx, g->eax, 0u);
          if (cVar2 == '\0') {
            cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_10232CCF), 2u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_10221c70(g, COW_IMG(COW_ADDR_LIFT_10232CDA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10221c60(g, COW_IMG(COW_ADDR_LIFT_10232CE5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr8((uint32_t)((int)param_1 + 0x8f), 0);
            wr8((uint32_t)((int)param_1 + 0x8e), 0);
            return;
          }
          cow_bridge_10231080(g, COW_IMG(COW_ADDR_LIFT_10232DC4), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_10221b90(g, COW_IMG(COW_ADDR_LIFT_10232CBA), 1u, (const CowU32[]){ (CowU32)bVar1 }, param_1, g->edx, g->eax, 0u);
          return;
        }
        if ((int32_t)rd32((uint32_t)((int)param_1 + 100)) == 1) {
          cow_bridge_10221c60(g, COW_IMG(COW_ADDR_LIFT_10232D07), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10221cb0(g, COW_IMG(COW_ADDR_LIFT_10232D0E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)((int)param_1 + 100), 0);
          return;
        }
        break;
      default:
        goto switchD_10232ba4_caseD_7;
      case 9:
        if ((int32_t)rd32((uint32_t)((int)param_1 + 100)) == 0) {
          if ((8 < (short)param_3) && ((short)param_3 < 0xb)) {
            cow_bridge_10221cd0(g, COW_IMG(COW_ADDR_LIFT_10232DEA), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
            return;
          }
          cow_bridge_10221ce0(g, COW_IMG(COW_ADDR_LIFT_10232DF7), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        }
        goto switchD_10232ba4_caseD_7;
      case 0x1e:
        break;
      }
      return;
    switchD_10232ba4_caseD_7:
      cow_bridge_10222150(g, COW_IMG(COW_ADDR_LIFT_10232E00), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10232b80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10232b80: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10232b81: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10232b82: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10232b83: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10232b87: register ebx, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x10232b8b: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)(uint16_t)g->edi)); }   /* 0x10232b8d: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFDu; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10232b90: register eax, replayed as the entry ran it */
    cow_lift_10232b80(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
