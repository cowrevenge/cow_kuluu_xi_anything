/* f_0x101d79e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d79e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

int cow_lift_101d79e0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    switch(rd8((uint32_t)(param_1 + 6))) {
      case 1:
        wr32(COW_IMG(COW_ADDR_LIFT_1066344D), 1);
        break;
      case 2:
        wr32(COW_IMG(COW_ADDR_LIFT_1066344D), 0);
        break;
      case 0xe4:
      case 0xe5:
        wr32(COW_IMG(COW_ADDR_LIFT_1066344D), 3);
        break;
      default:
        wr32(COW_IMG(COW_ADDR_LIFT_1066344D), 2);
      }
      wr32(COW_IMG(COW_ADDR_LIFT_1066344E), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1066344C), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_10663452), rd16((uint32_t)(param_1 + 0xc)));
      wr32(COW_IMG(COW_ADDR_LIFT_10663454), rd32((uint32_t)(param_1 + 0x10)));
      wr32(COW_IMG(COW_ADDR_LIFT_10663458), (int32_t)rd32((uint32_t)(param_1 + 8)));
      wr32(COW_IMG(COW_ADDR_LIFT_10663450), (short)(((CowU32)rd32(COW_IMG(COW_ADDR_LIFT_10663452)) * rd32(COW_IMG(COW_ADDR_LIFT_10663458))) % 0x78) + 0xb4);
      if (((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663400)) + 8)) == 0) || ((int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663400)) + 8)) + 0x6e)) != '\0')) {
        cow_bridge_tail_101d7ac0(g, g->ecx, g->edx, param_1);
        return 1;
      }
      return 0;
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
void cow_adapter_101d79e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x101d79e0: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x6u); g->ecx = (uint32_t)((uint32_t)(int32_t)((int8_t)rd8(A))); }   /* 0x101d79e4: register ecx, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0x1Cu; uint32_t r = (uint32_t)(a + b); g->ecx = (uint32_t)(r); }   /* 0x101d79e8: register ecx, replayed as the entry ran it */
    if (cow_lift_101d79e0(g, param_1)) {
        /* INTRA-BODY TAIL CALL out of 1 site(s): 0x101d7a86 -> jmp 0x101d7ac0. The target's own `ret` returned for this
           entry, so the pops, the esp restore and rt_return below describe a `ret` this path never
           executed. Returning here is what keeps the frame whole. */
        return;
    }


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
