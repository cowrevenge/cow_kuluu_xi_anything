/* f_0x10224b70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10224b70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10224b70(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    CowU16 extraout_var;
    CowU32 uVar5;
    CowU8 bVar6;
    int iVar7;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1066714C)) == 0) {
        g->eax = (CowU32)(1); return;
      }
      iVar7 = rd32(COW_IMG(COW_ADDR_LIFT_1066714C)) + param_1 * 0x30;
      iVar2 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_10224B9C), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        g->eax = (CowU32)(1); return;
      }
      cVar1 = cow_bridge_101cbe70(g, COW_IMG(COW_ADDR_LIFT_10224BB4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        g->eax = (CowU32)(8); return;
      }
      cVar1 = cow_bridge_101cbe50(g, COW_IMG(COW_ADDR_LIFT_10224BC7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((cVar1 != '\0') || (cVar1 = cow_bridge_101cbe60(g, COW_IMG(COW_ADDR_LIFT_10224BD4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar1 != '\0')) {
        g->eax = (CowU32)(7); return;
      }
      cVar1 = cow_bridge_101cbe90(g, COW_IMG(COW_ADDR_LIFT_10224BE1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(9) & 0xffu)); return;
      }
      cVar1 = cow_bridge_101cbec0(g, COW_IMG(COW_ADDR_LIFT_10224BF4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        g->eax = (CowU32)(0xb); return;
      }
      uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_10224C07), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((uVar3 & 0x100) != 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(6) & 0xffu)); return;
      }
      cVar1 = cow_bridge_1021e670(g, COW_IMG(COW_ADDR_LIFT_10224C20), 1u, (const CowU32[]){ 410u }, g->ecx, g->edx, g->eax, 4u);
      if (((cVar1 != '\0') && ((int8_t)rd8((uint32_t)(iVar7 + 0xe)) == '\f')) ||
         ((cVar1 = cow_bridge_1021e670(g, COW_IMG(COW_ADDR_LIFT_10224C37), 1u, (const CowU32[]){ 411u }, g->ecx, g->edx, g->eax, 4u), cVar1 != '\0' && ((int8_t)rd8((uint32_t)(iVar7 + 0xe)) == '\v')))) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xc) & 0xffu)); return;
      }
      switch(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1038615A) + 4u * (uint32_t)(param_2 * 3)))) {
      case 2:
      case 5:
        iVar2 = cow_bridge_10225120(g, COW_IMG(COW_ADDR_LIFT_10224CC2), 3u, (const CowU32[]){ param_1, 0, 0 }, COW_IMG(COW_ADDR_LIFT_10666EC0), g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(2) & 0xffu)); return;
        }
        break;
      case 3:
        iVar4 = cow_bridge_10225120(g, COW_IMG(COW_ADDR_LIFT_10224CE3), 3u, (const CowU32[]){ param_1, 0, 0 }, COW_IMG(COW_ADDR_LIFT_10666EC0), g->edx, g->eax, 0u);
        if (iVar4 != 0) {
          g->eax = (CowU32)(2); return;
        }
        cVar1 = cow_bridge_1021e670(g, COW_IMG(COW_ADDR_LIFT_10224CFB), 1u, (const CowU32[]){ 376u }, g->ecx, g->edx, g->eax, 4u);
        if ((cVar1 == '\0') && ((int32_t)rd32((uint32_t)(iVar2 + 0x28)) < (int)(CowU32)rd16((uint32_t)(iVar7 + 0xc)))) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(4) & 0xffu)); return;
        }
        break;
      case 4:
        cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_10224D28), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          g->eax = (CowU32)(10); return;
        }
        if (((int32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x28))) < (int32_t)(1000))) {
          g->eax = (CowU32)((g->eax & 0xffff00ffu) | (((CowU32)(4) & 0xffu) << 8)); return;
        }
        break;
      case 6:
        uVar3 = cow_bridge_10101d00(g, COW_IMG(COW_ADDR_LIFT_10224D63), 4u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(iVar7 + 6))) & 0xffffu)), 99, 0, COW_IMG(COW_ADDR_LIFT_10485A30) }, g->ecx, g->edx, g->eax, 0u);
        cVar1 = cow_bridge_1021e670(g, COW_IMG(COW_ADDR_LIFT_10224D6C), 1u, (const CowU32[]){ 47u }, g->ecx, g->edx, g->eax, 20u);
        if ((cVar1 == '\0') && ((int32_t)rd32((uint32_t)(iVar2 + 0x24)) < (int)(uVar3 & 0xffff))) {
          g->eax = (CowU32)(5); return;
        }
        break;
      case 8:
        if ((rd32(COW_IMG(COW_ADDR_LIFT_10485824)) & 1) == 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        iVar2 = 0;
        uVar5 = 0;
        if (param_2 == 9) {
          if (rd32(COW_IMG(COW_ADDR_LIFT_10485640)) == '\x11') {
            bVar6 = rd32(COW_IMG(COW_ADDR_LIFT_10485641));
          }
          else {
            if (rd32(COW_IMG(COW_ADDR_LIFT_10485642)) != '\x11') goto L_10224e9b;
            bVar6 = rd32(COW_IMG(COW_ADDR_LIFT_10485643));
          }
          uVar5 = 0x78;
          iVar2 = (-(CowU32)(bVar6 < 0x28) & 0xfffffffe) + 2;
        }
        else if (param_2 == 0xf) {
          if (rd32(COW_IMG(COW_ADDR_LIFT_10485640)) == '\x14') {
            uVar5 = 0xf0;
            iVar2 = (int)(rd32(COW_IMG(COW_ADDR_LIFT_10485641)) - 10) / 0x14 + 1;
          }
          else if (rd32(COW_IMG(COW_ADDR_LIFT_10485642)) == '\x14') {
            iVar2 = (int)(rd32(COW_IMG(COW_ADDR_LIFT_10485643)) - 10) / 0x14 + 1;
            uVar5 = 0xf0;
          }
        }
        else {
          if (param_2 != 0x12) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(3) & 0xffu)); return;
          }
          if (rd32(COW_IMG(COW_ADDR_LIFT_10485640)) == '\t') {
            uVar5 = 0x5a;
            iVar2 = (-(CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_10485641)) < 0x19) & 0xfffffffd) + 3;
          }
          else if (rd32(COW_IMG(COW_ADDR_LIFT_10485642)) == '\t') {
            uVar5 = 0x5a;
            iVar2 = (-(CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_10485643)) < 0x19) & 0xfffffffd) + 3;
          }
        }
    L_10224e9b:
        uVar3 = cow_bridge_10225220(g, COW_IMG(COW_ADDR_LIFT_10224EA8), 3u, (const CowU32[]){ param_1, iVar2, uVar5 }, COW_IMG(COW_ADDR_LIFT_10666EC0), g->edx, g->eax, 0u);
        if (uVar3 < rd16((uint32_t)(iVar7 + 6))) {
          g->eax = (CowU32)(2); return;
        }
        break;
      case 9:
        if ((int32_t)rd32((uint32_t)(iVar2 + 0x28)) < (int)(CowU32)rd16((uint32_t)(iVar7 + 0xc))) {
          g->eax = (CowU32)(4); return;
        }
        if ((rd32(COW_IMG(COW_ADDR_LIFT_10485824)) & 1) == 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_10485641)) < rd8((uint32_t)(iVar7 + 0xf))) {
          g->eax = (CowU32)(0xd); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10224b70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10224b70: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10224b71: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10224b72: push esi */
    g->esi = rd32(COW_IMG(COW_ADDR_LIFT_1066714C));   /* 0x10224b73: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10224b70(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
