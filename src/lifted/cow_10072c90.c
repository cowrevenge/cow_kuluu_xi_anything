/* f_0x10072c90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10072c90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10072c90(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1047D124)) == (CowU32)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_1047D124)));
      }
      while (iVar2 != 0) {
        if ((int32_t)rd32((uint32_t)(iVar2 + 0x20)) == 0x6e6f6c63) {
          if (rd32((uint32_t)(iVar2 + 0x2c)) == (CowU32)0x0) {
            cow_bridge_10073b80(g, COW_IMG(COW_ADDR_LIFT_10072CC2), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1047D124)), 0u);
            iVar2 = 0;
          }
          else {
            iVar1 = rd32((uint32_t)rd32((uint32_t)((iVar2 + 0x2c))));
            cow_bridge_10073b80(g, COW_IMG(COW_ADDR_LIFT_10072CD4), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1047D124)), 0u);
            iVar2 = iVar1;
          }
        }
        else if (rd32((uint32_t)(iVar2 + 0x2c)) == (CowU32)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = rd32((uint32_t)rd32((uint32_t)((iVar2 + 0x2c))));
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10072c90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1047D124));   /* 0x10072c90: the value the entry loaded and the decompiler dropped */
    cow_lift_10072c90(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
