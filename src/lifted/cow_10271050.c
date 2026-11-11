/* f_0x10271050 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10271050 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

int cow_lift_10271050(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_1099B0D8)) & 0x200) != 0) {
        cow_bridge_10271300(g, COW_IMG(COW_ADDR_LIFT_10271080), 5u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1099B0E8)), rd32(COW_IMG(COW_ADDR_LIFT_1099B0F0)), rd32(COW_IMG(COW_ADDR_LIFT_1099B0E4)), rd32(COW_IMG(COW_ADDR_LIFT_1099B0EC)), param_1 }, g->ecx, g->edx, g->eax, 20u);
        return 0;
      }
      bVar1 = (rd32(COW_IMG(COW_ADDR_LIFT_1099B0D8)) & 0x40) != 0;
      if ((char)rd32(COW_IMG(COW_ADDR_LIFT_1099B0D8)) < '\0') {
        bVar1 = bVar1 | 2;
      }
      if ((rd32(COW_IMG(COW_ADDR_LIFT_1099B0D8)) & 0x20) == 0) {
        if (bVar1 == 0) {
          return 0;
        }
      }
      else {
        bVar1 = 4;
      }
      cow_bridge_102710d0(g, COW_IMG(COW_ADDR_LIFT_102710BE), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1099B0E8)), rd32(COW_IMG(COW_ADDR_LIFT_1099B0F0)), bVar1, param_1 }, g->ecx, g->edx, g->eax, 16u);
      cow_bridge_tail_10270ee0(g, g->ecx, g->edx, g->eax);
      return 1;
    return 0;   /* fell through: no tail call taken, run the epilogue */
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10271050(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_1099B0D8));   /* 0x10271050: the value the entry loaded and the decompiler dropped */
    if (cow_lift_10271050(g, param_1)) {
        /* INTRA-BODY TAIL CALL out of 1 site(s): 0x102710c1 -> jmp 0x10270ee0. The target's own `ret` returned for this
           entry, so the pops, the esp restore and rt_return below describe a `ret` this path never
           executed. Returning here is what keeps the frame whole. */
        return;
    }


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
