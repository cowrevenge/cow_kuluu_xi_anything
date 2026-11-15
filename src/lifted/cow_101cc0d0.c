/* f_0x101cc0d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101cc0d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101cc0d0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 extraout_DL;
    CowU8 extraout_DL_00;
    CowU8 extraout_DL_01;
    CowU8 extraout_DL_02;
    CowU8 extraout_DL_03;
    CowU8 extraout_DL_04;
    CowU8 bVar2;
    CowU8 uVar3;
    int iVar4;
    iVar4 = 0;
      uVar3 = 1;
      bVar2 = param_1;
      if ((param_1 & 0x10) == 0) {
    L_101cc0f2:
        if ((bVar2 & 0x20) != 0) {
          cVar1 = cow_bridge_101cbec0(g, COW_IMG(COW_ADDR_LIFT_101CC0FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          bVar2 = extraout_DL_00;
          if (cVar1 != '\0') {
            iVar4 = 0xa0;
            goto L_101cc190;
          }
        }
        if ((bVar2 & 1) == 0) {
    L_101cc128:
          if ((bVar2 & 2) != 0) {
            cVar1 = cow_bridge_101cbe70(g, COW_IMG(COW_ADDR_LIFT_101CC132), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            bVar2 = extraout_DL_02;
            if (cVar1 != '\0') {
              iVar4 = 0x4d;
              goto L_101cc190;
            }
          }
          if ((bVar2 & 4) != 0) {
            cVar1 = cow_bridge_101cbe80(g, COW_IMG(COW_ADDR_LIFT_101CC147), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            bVar2 = extraout_DL_03;
            if (cVar1 != '\0') {
              iVar4 = 0x4e;
              goto L_101cc190;
            }
          }
          if ((bVar2 & 0x40) != 0) {
            cVar1 = cow_bridge_101cc040(g, COW_IMG(COW_ADDR_LIFT_101CC15C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            bVar2 = extraout_DL_04;
            if (cVar1 != '\0') {
              iVar4 = 0xb1;
              goto L_101cc190;
            }
          }
          if ((bVar2 & 8) == 0) {
    L_101cc17e:
            if (-1 < (char)bVar2) goto L_101cc192;
            cVar1 = cow_bridge_101cc1b0(g, COW_IMG(COW_ADDR_LIFT_101CC187), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (cVar1 == '\0') goto L_101cc192;
          }
          else {
            cVar1 = cow_bridge_101cc070(g, COW_IMG(COW_ADDR_LIFT_101CC173), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
            if (cVar1 == '\0') {
              bVar2 = param_1;
              goto L_101cc17e;
            }
          }
          iVar4 = 0x44;
        }
        else {
          cVar1 = cow_bridge_101cbe50(g, COW_IMG(COW_ADDR_LIFT_101CC114), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (cVar1 == '\0') {
            cVar1 = cow_bridge_101cbe60(g, COW_IMG(COW_ADDR_LIFT_101CC11D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            bVar2 = extraout_DL_01;
            if (cVar1 == '\0') goto L_101cc128;
          }
          iVar4 = 0x4b;
        }
      }
      else {
        cVar1 = cow_bridge_101cbe90(g, COW_IMG(COW_ADDR_LIFT_101CC0E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        bVar2 = extraout_DL;
        if (cVar1 == '\0') goto L_101cc0f2;
        iVar4 = 0x51;
      }
    L_101cc190:
      uVar3 = 0;
    L_101cc192:
      if ((param_2 == '\0') && (iVar4 != 0)) {
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_101CC1AA), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar3) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101cc0d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101cc0d0: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101cc0d4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101cc0d5: push esi */
    g->esi = 0u;   /* 0x101cc0d6: the value the entry loaded and the decompiler dropped */
    cow_lift_101cc0d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
