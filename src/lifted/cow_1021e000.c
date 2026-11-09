/* f_0x1021e000 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1021e000 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1021e000(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 piVar3;
    CowU32 piVar4;
    _Bool bVar5;
      
      iVar2 = 4;
      bVar5 = 1;
      piVar3 = param_1 + 0xb;
      piVar4 = COW_IMG(COW_ADDR_LIFT_1033F8C8);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = rd32((uint32_t)piVar3) == rd32((uint32_t)piVar4);
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      uVar1 = 0x80004005;
      if (!bVar5) {
        g->eax = (CowU32)(0x80070057); return;
      }
      iVar2 = 4;
      bVar5 = 1;
      piVar3 = param_1;
      piVar4 = COW_IMG(COW_ADDR_LIFT_10340408);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = rd32((uint32_t)piVar3) == rd32((uint32_t)piVar4);
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        iVar2 = 4;
        bVar5 = 1;
        piVar3 = param_1 + 4;
        piVar4 = COW_IMG(COW_ADDR_LIFT_10340178);
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = rd32((uint32_t)piVar3) == rd32((uint32_t)piVar4);
          piVar3 = piVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          uVar1 = 0;
        }
      }
      g->eax = (CowU32)(uVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1021e000(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = param_1;   /* 0x1021e000: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1021e004: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1021e005: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1021e006: push edi */
    g->ecx = 4u;   /* 0x1021e007: the value the entry loaded and the decompiler dropped */
    g->edi = COW_IMG(COW_ADDR_LIFT_1033F8C8);   /* 0x1021e00c: the value the entry loaded and the decompiler dropped */
    { g->esi = (uint32_t)((uint32_t)(g->edx + 0x2Cu)); }   /* 0x1021e011: register esi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x1021e014: the value the entry loaded and the decompiler dropped */
    cow_lift_1021e000(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
