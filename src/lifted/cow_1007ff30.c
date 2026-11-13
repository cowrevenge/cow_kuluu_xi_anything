/* f_0x1007ff30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007ff30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007ff30(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    int iVar3;
    int iVar4;
    CowU32 pbVar5;
    CowU32 pbVar6;
    _Bool bVar7;
      _Bool bVar8;
      
      if (param_1 != (CowU32)0x0) {
        iVar4 = 5;
        bVar7 = 0;
        iVar3 = 0;
        bVar8 = 1;
        pbVar5 = param_1;
        pbVar6 = COW_IMG(COW_ADDR_LIFT_10358128);
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = rd8((uint32_t)pbVar5) < rd8((uint32_t)pbVar6);
          bVar8 = rd8((uint32_t)pbVar5) == rd8((uint32_t)pbVar6);
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
        } while (bVar8);
        if (!bVar8) {
          iVar3 = (1 - (CowU32)bVar7) - (CowU32)(bVar7 != 0);
        }
        if (iVar3 == 0) {
          g->eax = (CowU32)(1); return;
        }
        iVar4 = 7;
        bVar7 = 0;
        iVar3 = 0;
        bVar8 = 1;
        pbVar5 = param_1;
        pbVar6 = (CowU32)COW_IMG(COW_ADDR_LIFT_10358120);
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = rd8((uint32_t)pbVar5) < rd8((uint32_t)pbVar6);
          bVar8 = rd8((uint32_t)pbVar5) == rd8((uint32_t)pbVar6);
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
        } while (bVar8);
        if (!bVar8) {
          iVar3 = (1 - (CowU32)bVar7) - (CowU32)(bVar7 != 0);
        }
        if (iVar3 == 0) {
          g->eax = (CowU32)(2); return;
        }
        iVar3 = 5;
        pbVar5 = (CowU32)0x10358118;
        do {
          if (iVar3 == 0) {
            g->eax = (CowU32)(0); return;
          }
          iVar3 = iVar3 + -1;
          bVar2 = rd8((uint32_t)pbVar5);
          bVar1 = rd8((uint32_t)param_1);
          param_1 = param_1 + 1;
          pbVar5 = pbVar5 + 1;
        } while (bVar1 == bVar2);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007ff30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->edx = param_1;   /* 0x1007ff30: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1007ff34: push esi */
    cow_lift_1007ff30(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->edx = (CowU32)(param_1);   /* what edx holds at every ret of the entry */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
