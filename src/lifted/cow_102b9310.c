/* f_0x102b9310 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b9310 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b9310(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    wr32((uint32_t)(param_1 + 8), rd32((uint32_t)(param_1 + 0x20)));
      wr32((uint32_t)(param_1 + 0xc), rd32((uint32_t)(param_1 + 0x24)));
      wr32((uint32_t)(param_1 + 0x10), rd32((uint32_t)(param_1 + 0x28)));
      wr32((uint32_t)(param_1 + 0x14), rd32((uint32_t)(param_1 + 0x2c)));
      wr32((uint32_t)(param_1 + 0x18), rd32((uint32_t)(param_1 + 0x30)));
      wr32((uint32_t)(param_1 + 0x1c), rd32((uint32_t)(param_1 + 0x34)));
      uVar1 = cow_bridge_10284ef0(g, COW_IMG(COW_ADDR_LIFT_102B933E), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      if ((uVar1 & 0x20000) == 0) {
        wr32((uint32_t)(param_1 + 0x254), rd32((uint32_t)(param_1 + 0x26c)));
        wr32((uint32_t)(param_1 + 600), rd32((uint32_t)(param_1 + 0x270)));
        wr32((uint32_t)(param_1 + 0x25c), rd32((uint32_t)(param_1 + 0x274)));
        wr32((uint32_t)(param_1 + 0x260), rd32((uint32_t)(param_1 + 0x278)));
        wr32((uint32_t)(param_1 + 0x264), rd32((uint32_t)(param_1 + 0x27c)));
        wr32((uint32_t)(param_1 + 0x268), rd32((uint32_t)(param_1 + 0x280)));
      }
      uVar1 = cow_bridge_10284ef0(g, COW_IMG(COW_ADDR_LIFT_102B9396), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      if ((uVar1 & 4) != 0) {
        wr32((uint32_t)(param_1 + 0x4a0), rd32((uint32_t)(param_1 + 0x4b0)));
        wr32((uint32_t)(param_1 + 0x4a4), rd32((uint32_t)(param_1 + 0x4b4)));
        wr32((uint32_t)(param_1 + 0x4a8), rd32((uint32_t)(param_1 + 0x4b8)));
        wr32((uint32_t)(param_1 + 0x4ac), rd32((uint32_t)(param_1 + 0x4bc)));
      }
      return;
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
void cow_adapter_102b9310(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b9310: push esi */
    cow_lift_102b9310(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
