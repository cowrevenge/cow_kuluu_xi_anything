/* f_0x10113a70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10113a70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10113a70(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU8 bVar2;
    CowU32 uVar3;
    CowU16 extraout_var;
    int iVar4;
    int iVar5;
    CowU32 pcVar6;
    CowU32 pbVar7;
    int iVar8;
    CowU32 pcVar9;
    CowU32 uVar10;
    CowU8 local_28[4];
    int local_24;
    CowU8 local_20[8];
    CowU8 local_18[8];
    CowU8 local_10[16];
    cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_10113A80), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_10113A98), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1010c4d0(g, COW_IMG(COW_ADDR_LIFT_10113AA4), 1u, (const CowU32[]){ local_20 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101091b0(g, COW_IMG(COW_ADDR_LIFT_10113AB2), 1u, (const CowU32[]){ local_20 }, local_18, g->edx, g->eax, 0u);
      cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_10113ABB), 0u, (const CowU32[]){ 0u }, local_20, g->edx, g->eax, 0u);
      cow_bridge_10109260(g, COW_IMG(COW_ADDR_LIFT_10113AC9), 1u, (const CowU32[]){ local_18 }, local_28, g->edx, g->eax, 0u);
      cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_10113AD2), 0u, (const CowU32[]){ 0u }, local_18, g->edx, g->eax, 0u);
      if (local_24 == 0) {
        pcVar6 = (CowU32)0x0;
      }
      else {
        pcVar6 = rd8((uint32_t)(local_24 + 4));
      }
      uVar10 = param_3 & 0xffff;
      pcVar9 = param_2;
      if (uVar10 != 0) {
        iVar4 = 0;
        do {
          if (rd8((uint32_t)pcVar6) == '\0') break;
          wr8((uint32_t)pcVar9, rd8((uint32_t)pcVar6));
          pcVar9 = pcVar9 + 1;
          iVar4 = iVar4 + 1;
          pcVar6 = pcVar6 + 1;
        } while (iVar4 < (int)uVar10);
      }
      if ((int)uVar10 <= (int)pcVar9 - (int)param_2) {
        uVar10 = cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_10113B13), 0u, (const CowU32[]){ 0u }, local_28, g->edx, g->eax, 0u);
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(uVar10 & 0xffff0000) & 0xffffu)); return;
      }
      wr8((uint32_t)pcVar9, '.');
      pcVar9 = pcVar9 + 1;
      iVar4 = rd32((uint32_t)rd32((uint32_t)((param_1 + 8))));
      cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_10113B33), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      pbVar7 = local_10;
      iVar8 = 0;
      do {
        uVar1 = rd32((uint32_t)(iVar4 + 0xc + iVar8 * 4));
        if (uVar1 == 0) break;
        iVar5 = 0x1e;
        do {
          iVar5 = iVar5 + -6;
          uVar3 = uVar1 >> ((CowU8)iVar5 & 0x1f);
          bVar2 = (CowU8)uVar3 & 0x3f;
          wr8((uint32_t)pbVar7, bVar2);
          if ((uVar3 & 0x3f) == 0) break;
          wr8((uint32_t)pbVar7, bVar2 + 0x20);
          pbVar7 = pbVar7 + 1;
        } while (0 < iVar5);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      wr8((uint32_t)pbVar7, 0);
      cow_bridge_101092c0(g, COW_IMG(COW_ADDR_LIFT_10113B72), 1u, (const CowU32[]){ local_10 }, local_20, g->edx, g->eax, 0u);
      cow_bridge_101091b0(g, COW_IMG(COW_ADDR_LIFT_10113B80), 1u, (const CowU32[]){ local_20 }, local_18, g->edx, g->eax, 0u);
      cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_10113B89), 0u, (const CowU32[]){ 0u }, local_20, g->edx, g->eax, 0u);
      cow_bridge_10109260(g, COW_IMG(COW_ADDR_LIFT_10113B97), 1u, (const CowU32[]){ local_18 }, local_28, g->edx, g->eax, 0u);
      cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_10113BA0), 0u, (const CowU32[]){ 0u }, local_18, g->edx, g->eax, 0u);
      if (local_24 == 0) {
        pcVar6 = (CowU32)0x0;
      }
      else {
        pcVar6 = rd8((uint32_t)(local_24 + 4));
      }
      iVar4 = (int)pcVar9 - (int)param_2;
      for (; (iVar4 < (int)uVar10 && (rd8((uint32_t)pcVar6) != '\0')); pcVar6 = pcVar6 + 1) {
        wr8((uint32_t)pcVar9, rd8((uint32_t)pcVar6));
        pcVar9 = pcVar9 + 1;
        iVar4 = iVar4 + 1;
      }
      if ((int)uVar10 <= (int)pcVar9 - (int)param_2) {
        uVar10 = cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_10113BDF), 0u, (const CowU32[]){ 0u }, local_28, g->edx, g->eax, 0u);
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(uVar10 & 0xffff0000) & 0xffffu)); return;
      }
      wr8((uint32_t)pcVar9, ':');
      pcVar9 = pcVar9 + 1;
      iVar4 = (int32_t)rd32((uint32_t)(rd32((uint32_t)rd32((uint32_t)((param_1 + 8)))) + 0x1c));
      if (iVar4 == 0) {
        pcVar6 = (CowU32)0x0;
      }
      else {
        pcVar6 = rd8((uint32_t)(iVar4 + 4));
      }
      iVar4 = (int)pcVar9 - (int)param_2;
      for (; (iVar4 < (int)uVar10 && (rd8((uint32_t)pcVar6) != '\0')); pcVar6 = pcVar6 + 1) {
        wr8((uint32_t)pcVar9, rd8((uint32_t)pcVar6));
        pcVar9 = pcVar9 + 1;
        iVar4 = iVar4 + 1;
      }
      wr8((uint32_t)pcVar9, '\0');
      cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_10113C2B), 0u, (const CowU32[]){ 0u }, local_28, g->edx, g->eax, 0u);
      g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(2) & 0xffffu))) & 0xffffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 40 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10113a70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x28u;                      /* 0x10113a70: 40 bytes of locals */
    { g->ecx = (uint32_t)((uint32_t)(g->esp)); }   /* 0x10113a73: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10113a77: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10113a78: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10113a79: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10113a7a: push edi */
    cow_lift_10113a70(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
