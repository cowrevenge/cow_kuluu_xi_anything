/* f_0x1010abb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010abb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010abb0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU8 bVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 pbVar6;
    int iVar7;
    CowU8 local_30[8];
    CowU8 local_28[8];
    CowU8 local_20[4];
    int local_1c;
    CowU8 local_10[16];
    cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_1010ABC1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      pbVar6 = local_20;
      iVar7 = 0;
      do {
        uVar1 = rd32((uint32_t)((int)param_1 + iVar7 * 4));
        if (uVar1 == 0) break;
        iVar5 = 0x1e;
        do {
          iVar5 = iVar5 + -6;
          uVar3 = uVar1 >> ((CowU8)iVar5 & 0x1f);
          bVar2 = (CowU8)uVar3 & 0x3f;
          wr8((uint32_t)pbVar6, bVar2);
          if ((uVar3 & 0x3f) == 0) break;
          wr8((uint32_t)pbVar6, bVar2 + 0x20);
          pbVar6 = pbVar6 + 1;
        } while (0 < iVar5);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
      wr8((uint32_t)pbVar6, 0);
      cow_bridge_101092c0(g, COW_IMG(COW_ADDR_LIFT_1010AC00), 1u, (const CowU32[]){ local_20 }, local_30, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0xc)) == 0) {
        cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_1010AC15), 1u, (const CowU32[]){ 272023320u }, g->ecx, g->edx, g->eax, 0u);
      }
      else {
        cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_1010AC24), 1u, (const CowU32[]){ 271925332u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_1010AC2D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        pbVar6 = local_10;
        iVar7 = 0;
        do {
          uVar1 = rd32((uint32_t)((int)param_1 + iVar7 * 4 + 0xc));
          if (uVar1 == 0) break;
          iVar5 = 0x1e;
          do {
            iVar5 = iVar5 + -6;
            uVar3 = uVar1 >> ((CowU8)iVar5 & 0x1f);
            bVar2 = (CowU8)uVar3 & 0x3f;
            wr8((uint32_t)pbVar6, bVar2);
            if ((uVar3 & 0x3f) == 0) break;
            wr8((uint32_t)pbVar6, bVar2 + 0x20);
            pbVar6 = pbVar6 + 1;
          } while (0 < iVar5);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
        wr8((uint32_t)pbVar6, 0);
        cow_bridge_101092c0(g, COW_IMG(COW_ADDR_LIFT_1010AC6D), 1u, (const CowU32[]){ local_10 }, local_28, g->edx, g->eax, 0u);
        cow_bridge_101091b0(g, COW_IMG(COW_ADDR_LIFT_1010AC7B), 1u, (const CowU32[]){ local_28 }, local_20, g->edx, g->eax, 0u);
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010AC84), 0u, (const CowU32[]){ 0u }, local_28, g->edx, g->eax, 0u);
        if (local_1c == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = rd32((uint32_t)(local_1c + 4));
        }
        cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_1010AC9D), 1u, (const CowU32[]){ uVar4 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010ACA6), 0u, (const CowU32[]){ 0u }, local_20, g->edx, g->eax, 0u);
      }
      cow_bridge_101091b0(g, COW_IMG(COW_ADDR_LIFT_1010ACB6), 1u, (const CowU32[]){ local_30 }, param_2, g->edx, g->eax, 0u);
      cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010ACBF), 0u, (const CowU32[]){ 0u }, local_30, g->edx, g->eax, 0u);
      g->eax = (CowU32)(param_2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 48 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010abb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0x30u;                      /* 0x1010abb0: 48 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010abb3: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010abb4: push esi */
    g->ebx = g->ecx;   /* 0x1010abb5: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010abb7: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esp + 0xCu)); }   /* 0x1010abb8: register ecx, replayed as the entry ran it */
    cow_lift_1010abb0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
