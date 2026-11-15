/* f_0x100b93e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b93e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b93e0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B93F0), 1u, (const CowU32[]){ 2u }, param_1, g->edx, g->eax, 0u);
      uVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B93FB), 1u, (const CowU32[]){ 4u }, param_1, g->edx, g->eax, 0u);
      uVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9406), 1u, (const CowU32[]){ 6u }, param_1, g->edx, g->eax, 0u);
      uVar4 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9411), 1u, (const CowU32[]){ 8u }, param_1, g->edx, g->eax, 0u);
      uVar5 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B941E), 1u, (const CowU32[]){ 10u }, param_1, g->edx, g->eax, 0u);
      uVar6 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B942B), 1u, (const CowU32[]){ 12u }, param_1, g->edx, g->eax, 0u);
      uVar7 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9438), 1u, (const CowU32[]){ 14u }, param_1, g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10663AAC)) != (CowU32)0x0) {
        cow_bridge_101fcec0(g, COW_IMG(COW_ADDR_LIFT_100B945E), 9u, (const CowU32[]){ 1, uVar1, uVar2, uVar3, uVar4, uVar5, uVar6, uVar7, 0xffffffff }, rd32(COW_IMG(COW_ADDR_LIFT_10663AAC)), g->edx, g->eax, 0u);
      }
      wr16((uint32_t)((int)param_1 + 0x256), (int16_t)rd16((uint32_t)((int)param_1 + 0x256)) + 0x10);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 12 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b93e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0xcu;                      /* 0x100b93e0: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100b93e3: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100b93e4: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b93e5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100b93e6: push edi */
    cow_lift_100b93e0(g, param_1);

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
