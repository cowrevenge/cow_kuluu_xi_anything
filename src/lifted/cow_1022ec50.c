/* f_0x1022ec50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022ec50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022ec50(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 piVar5;
    int iVar6;
    CowU32 pcVar7;
    CowU32 puVar8;
    CowU32 pcVar9;
    _Bool bVar10;
      
      iVar6 = 0x20;
      cVar2 = cow_bridge_1022f240(g, COW_IMG(COW_ADDR_LIFT_1022EC5F), 1u, (const CowU32[]){ g->ebp }, g->ecx, g->edx, g->eax, 4u);
      if (cVar2 != '\0') {
        piVar5 = COW_IMG(COW_ADDR_LIFT_10668A58);
        puVar8 = COW_IMG(COW_ADDR_LIFT_10668A48);
        for (iVar3 = 0xa0; iVar3 != 0; iVar3 = iVar3 + -1) {
          wr32((uint32_t)puVar8, 0);
          puVar8 = puVar8 + 4u * (uint32_t)(1);
        }
        while( 1 ) {
          iVar3 = rd32(COW_IMG(COW_ADDR_LIFT_10668CDC));
          wr32((uint32_t)(piVar5 + 4u * (uint32_t)(-4)), rd32(COW_IMG(COW_ADDR_LIFT_10668CD8)));
          iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10668CE0));
          wr32((uint32_t)(piVar5 + 4u * (uint32_t)(-3)), iVar3);
          iVar3 = rd32(COW_IMG(COW_ADDR_LIFT_10668CE4));
          wr32((uint32_t)(piVar5 + 4u * (uint32_t)(-2)), iVar1);
          uVar4 = rd32(COW_IMG(COW_ADDR_LIFT_10668CCC)) >> 7;
          wr32((uint32_t)(piVar5 + 4u * (uint32_t)(-1)), iVar3);
          iVar3 = iVar6 + 0x10;
          iVar6 = iVar6 + (uVar4 & 0x7ffff) * 0x10;
          wr32((uint32_t)piVar5, iVar3);
          cVar2 = cow_bridge_1022f240(g, COW_IMG(COW_ADDR_LIFT_1022ECC3), 1u, (const CowU32[]){ iVar6 }, g->ecx, g->edx, g->eax, 4u);
          if (cVar2 == '\0') break;
          iVar3 = 4;
          bVar10 = 1;
          pcVar7 = COW_IMG(COW_ADDR_LIFT_10668CC8);
          pcVar9 = COW_IMG(COW_ADDR_LIFT_103869C4);
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar10 = rd8((uint32_t)pcVar7) == rd8((uint32_t)pcVar9);
            pcVar7 = pcVar7 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar10);
          if (bVar10) {
            return;
          }
          piVar5 = piVar5 + 4u * (uint32_t)(5);
          if (0x10668cd7 < (int)piVar5) {
            return;
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022ec50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1022ec50: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1022ec51: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1022ec52: push esi */
    g->ebp = 32u;   /* 0x1022ec53: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1022ec58: push edi */
    cow_lift_1022ec50(g);

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
