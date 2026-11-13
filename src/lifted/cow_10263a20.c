/* f_0x10263a20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10263a20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10263a20(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
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
      piVar3 = param_2;
      piVar4 = COW_IMG(COW_ADDR_LIFT_1033E8E8);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = rd32((uint32_t)piVar3) == rd32((uint32_t)piVar4);
        piVar3 = piVar3 + 4u * (uint32_t)(1);
        piVar4 = piVar4 + 4u * (uint32_t)(1);
      } while (bVar5);
      if (!bVar5) {
        iVar2 = 4;
        bVar5 = 1;
        piVar3 = param_2;
        piVar4 = COW_IMG(COW_ADDR_LIFT_1033E8D8);
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = rd32((uint32_t)piVar3) == rd32((uint32_t)piVar4);
          piVar3 = piVar3 + 4u * (uint32_t)(1);
          piVar4 = piVar4 + 4u * (uint32_t)(1);
        } while (bVar5);
        if (!bVar5) {
          iVar2 = 4;
          bVar5 = 1;
          piVar3 = COW_IMG(COW_ADDR_LIFT_1034A128);
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar5 = rd32((uint32_t)param_2) == rd32((uint32_t)piVar3);
            param_2 = param_2 + 4u * (uint32_t)(1);
            piVar3 = piVar3 + 4u * (uint32_t)(1);
          } while (bVar5);
          if (!bVar5) {
            g->eax = (CowU32)(0x80004002); return;
          }
        }
      }
      uVar1 = cow_bridge_10265b00(g, COW_IMG(COW_ADDR_LIFT_10263A75), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, param_2, 0u);
      g->eax = (CowU32)(uVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 12.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10263a20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = param_2;   /* 0x10263a20: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10263a24: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10263a25: push edi */
    g->ecx = 4u;   /* 0x10263a26: the value the entry loaded and the decompiler dropped */
    g->edi = COW_IMG(COW_ADDR_LIFT_1033E8E8);   /* 0x10263a2b: the value the entry loaded and the decompiler dropped */
    g->esi = g->eax;   /* 0x10263a30: the value the entry loaded and the decompiler dropped */
    g->edx = 0u;   /* 0x10263a32: the value the entry loaded and the decompiler dropped */
    cow_lift_10263a20(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
