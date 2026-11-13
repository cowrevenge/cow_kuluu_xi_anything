/* f_0x10201ff0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10201ff0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10201ff0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, int32_t param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    short sVar2;
    short sVar3;
    char cVar4;
    iVar1 = (int32_t)rd32((uint32_t)(param_4 + 0x18));
      cVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10664394) + 4u * (uint32_t)(param_1))) == iVar1;
      if (rd32(COW_IMG(COW_ADDR_LIFT_10664390)) == iVar1) {
        cVar4 = cVar4 + '\x01';
      }
      if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10664394) + 4u * (uint32_t)(param_1))) == iVar1) {
        if (cVar4 == '\x02') {
          param_2 = param_2 + 6;
        }
        cow_bridge_1011fb60(g, COW_IMG(COW_ADDR_LIFT_1020204F), 5u, (const CowU32[]){ param_2 + -3, param_3 + 10, 0x80808080, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10664390)) == (int32_t)rd32((uint32_t)(param_4 + 0x18))) {
        if (cVar4 == '\x02') {
          param_2 = param_2 + -6;
        }
        cow_bridge_1011fb60(g, COW_IMG(COW_ADDR_LIFT_10202085), 5u, (const CowU32[]){ param_2 + -3, param_3 + 10, 0x80808080, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      }
      sVar2 = param_2 + 99;
      sVar3 = param_3 + 3;
      cVar4 = cow_bridge_101cc330(g, COW_IMG(COW_ADDR_LIFT_10202090), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (((cVar4 == '\0') && (iVar1 = cow_bridge_10203130(g, COW_IMG(COW_ADDR_LIFT_1020209B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), iVar1 != 0)) &&
         ((int32_t)rd32((uint32_t)(iVar1 + 0x14)) == (int32_t)rd32((uint32_t)(param_4 + 0x18)))) {
        cow_bridge_1011fb60(g, COW_IMG(COW_ADDR_LIFT_102020C4), 5u, (const CowU32[]){ (int)sVar2, (int)sVar3, 0x80808080, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
        sVar2 = param_2 + 0x67;
        sVar3 = param_3 + 7;
      }
      iVar1 = cow_bridge_10203190(g, COW_IMG(COW_ADDR_LIFT_102020D1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((iVar1 != 0) && ((int32_t)rd32((uint32_t)(iVar1 + 0x14)) == (int32_t)rd32((uint32_t)(param_4 + 0x18)))) {
        cow_bridge_1011fb60(g, COW_IMG(COW_ADDR_LIFT_102020FA), 5u, (const CowU32[]){ (int)sVar2, (int)sVar3, 0x80808080, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10201ff0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_2;   /* 0x10201ff0: the value the entry loaded and the decompiler dropped */
    g->edx = param_5;   /* 0x10201ff4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10201ff8: push ebx */
    g->ebx = g->ecx;   /* 0x10201ff9: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax * 4 + COW_IMG(COW_ADDR_LIFT_10664394) + RD); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10201ffb: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edx + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10202002: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10202005: push ebp */
    g->ebp = 0u;   /* 0x10202006: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10202008: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10201ff0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
