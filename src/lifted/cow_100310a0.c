/* f_0x100310a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100310a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100310a0(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    CowU32 puVar4;
    CowU32 piVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    iVar3 = (int32_t)rd32((uint32_t)(param_2 + 0xc)) / (int32_t)rd32((uint32_t)(param_1 + 0x10));
      iVar8 = (int32_t)rd32((uint32_t)(param_2 + 8));
      if ((rd32(COW_IMG(COW_ADDR_LIFT_1045B770)) & 1) == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_1045B770), rd32(COW_IMG(COW_ADDR_LIFT_1045B770)) | 1);
        puVar4 = COW_IMG(COW_ADDR_LIFT_1045B6A8);
        iVar6 = 10;
        do {
          wr32((uint32_t)puVar4, COW_IMG(COW_ADDR_LIFT_1032A7DC));
          puVar4 = puVar4 + 4u * (uint32_t)(5);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        cow_bridge_103134c6(g, COW_IMG(COW_ADDR_LIFT_100310EF), 1u, (const CowU32[]){ 268636544u }, g->ecx, g->edx, g->eax, 4u);
      }
      iVar6 = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x10)))) + -1) {
        iVar7 = 0;
        piVar5 = COW_IMG(COW_ADDR_LIFT_1045B6B0);
        do {
          iVar2 = (int32_t)rd32((uint32_t)(param_2 + 4));
          wr32((uint32_t)piVar5, iVar8);
          wr32((uint32_t)(piVar5 + 4u * (uint32_t)(-1)), iVar2);
          wr32((uint32_t)(piVar5 + 4u * (uint32_t)(1)), iVar3);
          wr32((uint32_t)(piVar5 + 4u * (uint32_t)(2)), iVar6);
          piVar1 = piVar5 + 4u * (uint32_t)(-2);
          piVar5 = piVar5 + 4u * (uint32_t)(5);
          wr32((uint32_t)(iVar7 + 0x1c + (int32_t)rd32((uint32_t)(param_1 + 4))), piVar1);
          iVar8 = iVar8 + iVar3;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0x20;
        } while (((int32_t)(iVar6) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x10)))) + -1);
      }
      wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045B6AC) + 4u * (uint32_t)(iVar6 * 5)), rd32((uint32_t)(param_2 + 4)));
      wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045B6B0) + 4u * (uint32_t)(iVar6 * 5)), iVar8);
      iVar3 = (int32_t)rd32((uint32_t)(param_2 + 0xc));
      wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045B6B8) + 4u * (uint32_t)(iVar6 * 5)), iVar6);
      wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045B6B4) + 4u * (uint32_t)(iVar6 * 5)), iVar3 - iVar8);
      wr32((uint32_t)(iVar6 * 0x20 + 0x1c + (int32_t)rd32((uint32_t)(param_1 + 4))), COW_IMG(COW_ADDR_LIFT_1045B6A8) + iVar6 * 5);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100310a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100310a0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100310a1: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100310a2: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100310a6: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100310a7: push esi */
    { uint32_t A = (uint32_t)(g->ebx + 0xCu); g->eax = (uint32_t)(rd32(A)); }   /* 0x100310a8: register eax, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x100310ab: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_100310a0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
