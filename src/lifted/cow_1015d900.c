/* f_0x1015d900 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1015d900 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1015d900(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr16((uint32_t)(param_1 + 0x80), 0x280);
      wr8((uint32_t)(param_1 + 0x62), 0);
      wr8((uint32_t)(param_1 + 0xae), 0);
      wr16((uint32_t)(param_1 + 0xb0), 0);
      wr16((uint32_t)(param_1 + 0x7c), 0);
      wr16((uint32_t)(param_1 + 0x7e), 0);
      wr32((uint32_t)(param_1 + 0x84), 0);
      wr32((uint32_t)(param_1 + 0x88), 0);
      wr8((uint32_t)(param_1 + 0xab), 0);
      wr8((uint32_t)(param_1 + 0xb4), 0);
      wr8((uint32_t)(param_1 + 0xb2), 0);
      wr8((uint32_t)(param_1 + 0xb3), 0);
      wr16((uint32_t)(param_1 + 0x82), 0x1e0);
      wr32((uint32_t)(param_1 + 0x8c), COW_IMG(COW_ADDR_LIFT_1062193C));
      wr32((uint32_t)(param_1 + 0x90), COW_IMG(COW_ADDR_LIFT_106643A8));
      wr32((uint32_t)(param_1 + 0x94), COW_IMG(COW_ADDR_LIFT_10578478));
      wr32((uint32_t)(param_1 + 0x98), COW_IMG(COW_ADDR_LIFT_1057845C));
      wr32((uint32_t)(param_1 + 0x9c), COW_IMG(COW_ADDR_LIFT_10621940));
      wr8((uint32_t)(param_1 + 0xaa), 1);
      wr8((uint32_t)(param_1 + 0xb5), 0xff);
      wr8((uint32_t)(param_1 + 0xb6), 0xff);
      cow_bridge_tail_1015d9a0(g, g->ecx, g->edx, g->eax);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), 1 parameter(s), no return (tail call).
   TAIL CALL: this entry ends in `jmp 0x1015d9a0`, not `call`+`ret`, so the frame has no epilogue.
   Frame, pushes and locals read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, no pops, no ret - ends in jmp 0x1015d9a0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move. */
void cow_adapter_1015d900(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->eax = 0u;   /* 0x1015d900: the value the entry loaded and the decompiler dropped */
    cow_lift_1015d900(g, param_1);
    /* no epilogue: the target's own `ret` returned for this entry, popping OUR CALLER's return-address
       slot. eax is whatever it left there, and esp is where it left it. */
}
/* COW_ADAPTER END */
