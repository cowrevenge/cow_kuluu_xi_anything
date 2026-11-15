/* f_0x10055ea0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10055ea0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10055ea0(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 this_00;
    CowU32 puVar5;
    uVar3 = param_2;
      uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C)) + 0xa10 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C)) + 0xa90)) * 4));
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C)) + 0xa90), (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C)) + 0xa90)) + 1);
      cow_bridge_100746a0(g, COW_IMG(COW_ADDR_LIFT_10055EC6), 0u, (const CowU32[]){ 0u }, g->edi, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C)), 0u);
      param_2 = rd32((uint32_t)rd32((uint32_t)(((int)param_1 + 0x10))));
      this_00 = rd32((uint32_t)((int)param_1 + 0x10)) + 4;
      if (0 < param_2) {
        do {
          cow_bridge_10055bf0(g, COW_IMG(COW_ADDR_LIFT_10055EE3), 2u, (const CowU32[]){ uVar1, uVar3 }, this_00, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C)), 0u);
          this_00 = this_00 + 4u * (uint32_t)(8);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      param_2 = rd32((uint32_t)rd32((uint32_t)(((int)param_1 + 0x14))));
      puVar5 = (CowU32)(rd32((uint32_t)((int)param_1 + 0x14)) + 4);
      if (0 < param_2) {
        do {
          cow_bridge_10055c90(g, COW_IMG(COW_ADDR_LIFT_10055F2E), 4u, (const CowU32[]){ (rd32((uint32_t)puVar5) & 0xffffff) * 0x20 + 0x10 + (int32_t)rd32((uint32_t)((int)param_1 + 0x10)), (rd32((uint32_t)(puVar5 + 4u * (uint32_t)(1))) & 0xffffff) * 0x20 + 0x10 + (int32_t)rd32((uint32_t)((int)param_1 + 0x10)), uVar1, uVar3 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C)), 0u);
          puVar5 = puVar5 + 4u * (uint32_t)(2);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C));
      iVar4 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C)) + 0xa90)) + -1;
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C)) + 0xa90), iVar4);
      wr32((uint32_t)(iVar2 + 0xa10 + iVar4 * 4), uVar1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10055ea0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1047CF7C));   /* 0x10055ea0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10055ea5: push ebx */
    g->ebx = g->ecx;   /* 0x10055ea6: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10055ea8: push ebp */
    { uint32_t A = (uint32_t)(g->eax + 0xA90u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10055ea9: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10055eaf: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10055eb0: push edi */
    { uint32_t A = (uint32_t)(g->eax + g->ecx * 4 + 0xA10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10055eb1: register edi, replayed as the entry ran it */
    { { uint32_t a = g->ecx; uint32_t r = (uint32_t)(a + 1u); g->ecx = (uint32_t)(r); }; }   /* 0x10055eb8: register ecx, replayed as the entry ran it */
    cow_lift_10055ea0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
