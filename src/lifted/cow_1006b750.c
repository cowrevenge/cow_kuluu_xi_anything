/* f_0x1006b750 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1006b750 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1006b750(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 pcVar5;
    CowU32 pcVar6;
    CowU32 pcVar7;
    iVar2 = -1;
      pcVar5 = param_1;
      do {
        pcVar7 = pcVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar5 + 1;
        cVar1 = rd8((uint32_t)pcVar5);
        pcVar5 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      wr16((uint32_t)(pcVar7 + -1), rd32(COW_IMG(COW_ADDR_LIFT_10354054)));
      do {
        pcVar5 = param_2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_2 + 1;
        cVar1 = rd8((uint32_t)param_2);
        param_2 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar2 = -1;
      pcVar7 = param_1;
      do {
        pcVar6 = pcVar7;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar7 + 1;
        cVar1 = rd8((uint32_t)pcVar7);
        pcVar7 = pcVar6;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + -uVar3;
      pcVar7 = pcVar6 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        wr32((uint32_t)pcVar7, rd32((uint32_t)pcVar5));
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        wr8((uint32_t)pcVar7, rd8((uint32_t)pcVar5));
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
      cow_bridge_1006b630(g, COW_IMG(COW_ADDR_LIFT_1006B798), 0u, (const CowU32[]){ 0u }, g->ebx, g->edx, 0u, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1006b750(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1006b750: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1006b751: push esi */
    g->ebx = g->ecx;   /* 0x1006b752: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1006b754: push edi */
    g->edi = g->ebx;   /* 0x1006b755: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x1006b757: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x1006b75a: the value the entry loaded and the decompiler dropped */
    cow_lift_1006b750(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
