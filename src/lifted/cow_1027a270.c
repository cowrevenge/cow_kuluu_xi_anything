/* f_0x1027a270 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1027a270 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1027a270(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    iVar2 = (int)param_1;
      iVar1 = rd32((uint32_t)((int)param_1 + 0x68));
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        if (((rd32((uint32_t)(rd32((uint32_t)(iVar2 + 100)) + iVar1 * 4)) & 0x100) != 0) &&
           (param_1 = rd32((uint32_t)(rd32((uint32_t)(iVar2 + 0x60)) + iVar1 * 4)), rd32((uint32_t)param_1) != 0x70004)) {
          cow_bridge_10285760(g, COW_IMG(COW_ADDR_LIFT_1027A2A3), 1u, (const CowU32[]){ &param_1 }, 0u, 0u, g->eax, 0u);
          wr32((uint32_t)(rd32((uint32_t)(iVar2 + 0x60)) + iVar1 * 4), 0);
        }
      }
      iVar1 = rd32((uint32_t)(iVar2 + 0x68));
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        param_1 = rd32((uint32_t)(rd32((uint32_t)(iVar2 + 0x60)) + iVar1 * 4));
        if (((param_1 != (CowU32)0x0) && ((rd32((uint32_t)(rd32((uint32_t)(iVar2 + 100)) + iVar1 * 4)) & 0x100) != 0))
           && (rd32((uint32_t)param_1) == 0x70004)) {
          if ((rd8((uint32_t)(param_1 + 8)) & 8) == 0) {
            cow_bridge_10285760(g, COW_IMG(COW_ADDR_LIFT_1027A301), 1u, (const CowU32[]){ &param_1 }, 0u, 0u, g->eax, 4u);
          }
          else {
            cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1027A2F2), 3u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103B37EC), 0x848 }, 0u, 0u, g->eax, 12u);
          }
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
void cow_adapter_1027a270(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1027a270: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1027a271: push edi */
    cow_lift_1027a270(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
