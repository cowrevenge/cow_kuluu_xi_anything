/* f_0x101784e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101784e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101784e0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    puVar1 = COW_IMG(COW_ADDR_LIFT_10632040);
      for (iVar2 = 0x1c00; iVar2 != 0; iVar2 = iVar2 + -1) {
        wr32((uint32_t)puVar1, 0);
        puVar1 = puVar1 + 1;
      }
      puVar1 = COW_IMG(COW_ADDR_LIFT_1063208C);
      do {
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(-0x11)), 3);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(-1)), 0);
        wr32((uint32_t)puVar1, 0x3f800000);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(1)), 0);
        puVar1 = puVar1 + 0x1c;
      } while ((int)puVar1 < 0x1063908c);
      puVar1 = COW_IMG(COW_ADDR_LIFT_1065C4D8);
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        wr32((uint32_t)puVar1, 0);
        puVar1 = puVar1 + 1;
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [edi], frame pointer no, 0 locals, pops [edi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101784e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101784e0: push edi */
    g->ecx = 7168u;   /* 0x101784e1: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x101784e6: the value the entry loaded and the decompiler dropped */
    g->edi = COW_IMG(COW_ADDR_LIFT_10632040);   /* 0x101784e8: the value the entry loaded and the decompiler dropped */
    cow_lift_101784e0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->ecx = (CowU32)(64u);   /* the entry left ecx here on its way to the ret */
    g->eax = (CowU32)(0u);   /* the entry left eax here on its way to the ret */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
