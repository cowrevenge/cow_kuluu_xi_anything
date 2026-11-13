/* f_0x10156870 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10156870 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10156870(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, CowU32 param_10)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 puVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 pcVar6;
    int iVar7;
    uVar3 = 0xffffffff;
      pcVar6 = param_5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = rd8((uint32_t)pcVar6);
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      uVar4 = 0xffffffff;
      pcVar6 = param_6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = rd8((uint32_t)pcVar6);
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      pcVar6 = param_10;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = rd8((uint32_t)pcVar6);
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (param_2 <= ~uVar5 + ~uVar4 + 0x14 + uVar3) {
        g->eax = (CowU32)(0); return;
      }
      wr8((uint32_t)(param_1 + 1u * (uint32_t)(1)), param_4);
      wr8((uint32_t)(param_1 + 1u * (uint32_t)(0xd)), param_9);
      wr8((uint32_t)param_1, param_3);
      puVar2 = param_1 + 0x14;
      wr8((uint32_t)(param_1 + 1u * (uint32_t)(0xc)), param_8);
      iVar7 = (int)puVar2 - (int)param_5;
      do {
        cVar1 = rd8((uint32_t)param_5);
        wr8((uint32_t)(param_5 + 1u * (uint32_t)(iVar7)), cVar1);
        param_5 = param_5 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)(param_1 + 4), puVar2);
      puVar2 = puVar2 + uVar3;
      iVar7 = (int)puVar2 - (int)param_6;
      do {
        cVar1 = rd8((uint32_t)param_6);
        wr8((uint32_t)(param_6 + 1u * (uint32_t)(iVar7)), cVar1);
        param_6 = param_6 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)(param_1 + 8), puVar2);
      iVar7 = (int)(puVar2 + ~uVar4 + uVar3) - (int)param_10;
      do {
        cVar1 = rd8((uint32_t)param_10);
        wr8((uint32_t)(param_10 + 1u * (uint32_t)(iVar7)), cVar1);
        param_10 = param_10 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)(param_1 + 0x10), puVar2 + ~uVar4 + uVar3);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 10 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 9 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10156870(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->edx = param_6;   /* 0x10156870: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10156874: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10156875: push ebp */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10156876: push edi */
    g->edi = g->edx;   /* 0x10156877: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x10156879: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x1015687c: the value the entry loaded and the decompiler dropped */
    cow_lift_10156870(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
