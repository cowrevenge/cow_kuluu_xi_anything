/* f_0x101326d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101326d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101326d0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 pcVar2;
    CowU32 pcVar3;
    _Bool bVar4;
      
      iVar1 = 2;
      bVar4 = 1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_10353B90);
      pcVar3 = param_1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar3);
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        g->eax = (CowU32)(0); return;
      }
      iVar1 = 2;
      bVar4 = 1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_10354010);
      pcVar3 = param_1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar3);
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        g->eax = (CowU32)(8); return;
      }
      iVar1 = 2;
      bVar4 = 1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_10357CCC);
      pcVar3 = param_1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar3);
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        g->eax = (CowU32)(10); return;
      }
      iVar1 = 2;
      bVar4 = 1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_10357CC8);
      pcVar3 = param_1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar3);
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        g->eax = (CowU32)(0xb); return;
      }
      iVar1 = 2;
      bVar4 = 1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_10357CC4);
      pcVar3 = param_1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar3);
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        g->eax = (CowU32)(0xc); return;
      }
      iVar1 = 2;
      bVar4 = 1;
      pcVar2 = (CowU32)0x10357cc0;
      pcVar3 = param_1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar3);
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        g->eax = (CowU32)(0xd); return;
      }
      iVar1 = 2;
      bVar4 = 1;
      pcVar2 = (CowU32)0x10357cbc;
      pcVar3 = param_1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar3);
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        g->eax = (CowU32)(0xe); return;
      }
      iVar1 = 2;
      bVar4 = 1;
      pcVar2 = (CowU32)0x10357cb8;
      pcVar3 = param_1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar3);
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        g->eax = (CowU32)(0xf); return;
      }
      iVar1 = 2;
      bVar4 = 1;
      pcVar2 = (CowU32)0x10357cb4;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)param_1);
        pcVar2 = pcVar2 + 1;
        param_1 = param_1 + 1;
      } while (bVar4);
      g->eax = (CowU32)((!bVar4 - 1 & 0x11) - 1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101326d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x101326d0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101326d4: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101326d5: push edi */
    g->edi = g->eax;   /* 0x101326d6: the value the entry loaded and the decompiler dropped */
    g->esi = COW_IMG(COW_ADDR_LIFT_10353B90);   /* 0x101326d8: the value the entry loaded and the decompiler dropped */
    g->ecx = 2u;   /* 0x101326dd: the value the entry loaded and the decompiler dropped */
    g->edx = 0u;   /* 0x101326e2: the value the entry loaded and the decompiler dropped */
    cow_lift_101326d0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
