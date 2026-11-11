/* f_0x10079170 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10079170 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10079170(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 pbVar3;
    CowU32 pbVar4;
    _Bool bVar5;
      _Bool bVar6;
      
      if (param_1 == (CowU32)0x0) {
        g->eax = (CowU32)(0); return;
      }
      iVar2 = 3;
      bVar5 = 0;
      iVar1 = 0;
      bVar6 = 1;
      pbVar3 = param_1;
      pbVar4 = COW_IMG(COW_ADDR_LIFT_10357D7C);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = rd8((uint32_t)pbVar3) < rd8((uint32_t)pbVar4);
        bVar6 = rd8((uint32_t)pbVar3) == rd8((uint32_t)pbVar4);
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar6);
      if (!bVar6) {
        iVar1 = (1 - (CowU32)bVar5) - (CowU32)(bVar5 != 0);
      }
      if (iVar1 == 0) {
        g->eax = (CowU32)(1); return;
      }
      iVar2 = 4;
      bVar5 = 0;
      iVar1 = 0;
      bVar6 = 1;
      pbVar3 = COW_IMG(COW_ADDR_LIFT_1034F488);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = rd8((uint32_t)param_1) < rd8((uint32_t)pbVar3);
        bVar6 = rd8((uint32_t)param_1) == rd8((uint32_t)pbVar3);
        param_1 = param_1 + 1;
        pbVar3 = pbVar3 + 1;
      } while (bVar6);
      if (!bVar6) {
        iVar1 = (1 - (CowU32)bVar5) - (CowU32)(bVar5 != 0);
      }
      g->eax = (CowU32)((-(CowU32)(iVar1 != 0) & 0xfffffffe) + 2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10079170(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = param_1;   /* 0x10079170: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10079174: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10079170(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
