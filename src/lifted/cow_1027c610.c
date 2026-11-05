/* f_0x1027c610 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1027c610 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1027c610(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    iVar2 = 0;
      if (param_1 != 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_1099D20C), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1099D20C), cow_bridge_10275d60(g, COW_IMG(COW_ADDR_LIFT_1027C634), 4u, (const CowU32[]){ param_1, 4, COW_IMG(COW_ADDR_LIFT_103B40EC), 0x290 }, 0u, g->edx, g->eax, 16u));
        if (0 < param_1) {
          do {
            uVar1 = cow_bridge_10291330(g, COW_IMG(COW_ADDR_LIFT_1027C654), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B4494), COW_IMG(COW_ADDR_LIFT_103B40EC), 0x292 }, 0u, g->edx, g->eax, 0u);
            wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D20C)) + iVar2 * 4), uVar1);
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_1);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1027c610(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1027c610: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1027c611: push edi */
    cow_lift_1027c610(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
