/* f_0x1012af30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1012af30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1012af30(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 uVar2;
    int iVar3;
    int iVar4;
    CowU32 uVar5;
    iVar3 = cow_bridge_101598b0(g, COW_IMG(COW_ADDR_LIFT_1012AF4A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      switch(rd8((uint32_t)param_2)) {
      case 3:
        if (rd32(COW_IMG(COW_ADDR_LIFT_10578174)) == '\x01') {
          wr8((uint32_t)param_2, 2);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 4:
        if (iVar3 != 0) {
          if ((rd32((uint32_t)(iVar3 + 0x78)) & 0xff000000) == 0x1000000) {
            g->eax = (CowU32)(0); return;
          }
          wr8((uint32_t)param_2, 5);
        }
        break;
      case 6:
      case 0x11:
      case 0x14:
        if ((iVar3 == 0) || (iVar4 = cow_bridge_101cc550(g, COW_IMG(COW_ADDR_LIFT_1012B09A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), iVar3 != iVar4)) {
          g->eax = (CowU32)(0); return;
        }
        if ((int32_t)rd32((uint32_t)(iVar3 + 0x170)) == 1) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        break;
      case 10:
        if (iVar3 == 0) {
          g->eax = (CowU32)(1); return;
        }
        if ((int32_t)rd32((uint32_t)(iVar3 + 0x78)) == (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c390))) {
          if (param_1 != 0) {
            g->eax = (CowU32)(0); return;
          }
          cVar1 = cow_bridge_10177730(g, COW_IMG(COW_ADDR_LIFT_1012AF90), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((cVar1 != '\0') &&
             (cVar1 = cow_bridge_101cc320(g, COW_IMG(COW_ADDR_LIFT_1012AFA6), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350)) }, g->ecx, g->edx, g->eax, 4u), cVar1 != '\0')) {
            wr8((uint32_t)param_2, 0xd);
          }
        }
        goto L_1012afc1;
      case 0xb:
        if (iVar3 == 0) {
          g->eax = (CowU32)(0); return;
        }
        if ((rd32((uint32_t)(iVar3 + 0x1d0)) & 0x100) != 0) {
          g->eax = (CowU32)(0); return;
        }
    L_1012afc1:
        cVar1 = cow_bridge_1008e150(g, COW_IMG(COW_ADDR_LIFT_1012AFC8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          g->eax = (CowU32)(0); return;
        }
        break;
      case 0xc:
        cVar1 = cow_bridge_101cc350(g, COW_IMG(COW_ADDR_LIFT_1012B000), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, g->eax, 8u);
        if (cVar1 != '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        cVar1 = cow_bridge_1013eff0(g, COW_IMG(COW_ADDR_LIFT_1012B0D8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        break;
      case 0xd:
        cVar1 = cow_bridge_101cc350(g, COW_IMG(COW_ADDR_LIFT_1012B0BF), 2u, (const CowU32[]){ 1u, 0u }, g->ecx, g->edx, g->eax, 8u);
        if (cVar1 != '\0') {
          g->eax = (CowU32)(0); return;
        }
        cVar1 = cow_bridge_10177730(g, COW_IMG(COW_ADDR_LIFT_1012B183), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (((cVar1 == '\0') || (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) == 0)) ||
           (cVar1 = cow_bridge_101cc320(g, COW_IMG(COW_ADDR_LIFT_1012B19C), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350)) }, g->ecx, g->edx, g->eax, 4u), cVar1 == '\0')) {
          g->eax = (CowU32)((g->eax & 0xffff00ffu) | (((CowU32)(0) & 0xffu) << 8)); return;
        }
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 0xe:
        iVar3 = cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_1012B0EA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar3 != 0) && (cVar1 = cow_bridge_100956a0(g, COW_IMG(COW_ADDR_LIFT_1012B0FE), 1u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x170)) }, g->ecx, g->edx, g->eax, 0u), cVar1 != '\0')) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        cVar1 = cow_bridge_100fd3a0(g, COW_IMG(COW_ADDR_LIFT_1012B11A), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350)) }, g->ecx, g->edx, g->eax, 4u);
        if ((cVar1 != '\0') && ((iVar3 == 0 || (cVar1 = cow_bridge_1009aaf0(g, COW_IMG(COW_ADDR_LIFT_1012B12C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar1 == '\0')))) {
          g->eax = (CowU32)(0); return;
        }
        if ((iVar3 != 0) && ((rd8((uint32_t)(iVar3 + 0x123)) & 7) == 4)) {
          g->eax = (CowU32)(0); return;
        }
        cVar1 = cow_bridge_101cc4c0(g, COW_IMG(COW_ADDR_LIFT_1012B155), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\x01') {
          uVar2 = cow_bridge_10177750(g, COW_IMG(COW_ADDR_LIFT_1012B162), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(uVar2); return;
        }
        break;
      case 0x10:
        cVar1 = cow_bridge_10201f00(g, COW_IMG(COW_ADDR_LIFT_1012B042), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        if (((iVar3 == 0) || ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c390)) == (int32_t)rd32((uint32_t)(iVar3 + 0x78)))) ||
           (((rd32((uint32_t)(iVar3 + 0x124)) >> 0x14 & 1) == 0 &&
            ((rd32((uint32_t)(iVar3 + 0x124)) >> 0x15 & 1) == 0)))) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        break;
      case 0x13:
        cVar1 = cow_bridge_101cc350(g, COW_IMG(COW_ADDR_LIFT_1012B170), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, g->eax, 8u);
        if (cVar1 != '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        if ((iVar3 != 0) && ((rd32((uint32_t)(iVar3 + 0x78)) & 0xff000000) == 0x1000000)) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        break;
      case 0x16:
      case 0x17:
        cVar1 = cow_bridge_101cc350(g, COW_IMG(COW_ADDR_LIFT_1012B1BD), 2u, (const CowU32[]){ 1u, 1u }, g->ecx, g->edx, g->eax, 8u);
        if (cVar1 == '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        break;
      case 0x18:
        cVar1 = cow_bridge_101cc350(g, COW_IMG(COW_ADDR_LIFT_1012B20B), 2u, (const CowU32[]){ 1u, 1u }, g->ecx, g->edx, g->eax, 8u);
        if (cVar1 == '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        iVar3 = cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_1012B1CE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar3 != 0) &&
           (((rd8((uint32_t)(iVar3 + 0x1ff)) < 5 || (6 < rd8((uint32_t)(iVar3 + 0x1ff)))) &&
            ((int32_t)rd32((uint32_t)(iVar3 + 0x27c)) != 0)))) {
          wr8((uint32_t)param_2, 0x17);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        break;
      case 0x1a:
        if (rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) == 0) {
          uVar2 = cow_bridge_1012aed0(g, COW_IMG(COW_ADDR_LIFT_1012B22D), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 4u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar2) & 0xffu)); return;
        }
        uVar5 = cow_bridge_101598a0(g, COW_IMG(COW_ADDR_LIFT_1012B23A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        uVar2 = cow_bridge_1012aed0(g, COW_IMG(COW_ADDR_LIFT_1012B240), 1u, (const CowU32[]){ uVar5 }, g->ecx, g->edx, g->eax, 4u);
        g->eax = (CowU32)(uVar2); return;
      case 0x1b:
        if ((iVar3 != 0) && ((rd32((uint32_t)(iVar3 + 0x140)) >> 3 & 1) == 0)) {
          g->eax = (CowU32)(0); return;
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1012af30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_1057876C));   /* 0x1012af30: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1012af36: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1012af37: push edi */
    { uint32_t A = (uint32_t)(g->ecx + 0xC4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1012af38: register eax, replayed as the entry ran it */
    cow_lift_1012af30(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
