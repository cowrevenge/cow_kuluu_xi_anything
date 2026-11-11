/* f_0x10205da0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10205da0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

int cow_lift_10205da0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    switch(param_1) {
      case 1:
        cow_bridge_tail_10204d50(g, g->ecx, g->edx, g->eax);
        return 1;
      case 2:
        cow_bridge_10205280(g, COW_IMG(COW_ADDR_LIFT_10205DC0), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        return 0;
      case 3:
        cow_bridge_10204f90(g, COW_IMG(COW_ADDR_LIFT_10205DC8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return 0;
      case 4:
        cow_bridge_tail_10205100(g, g->ecx, g->edx, g->eax);
        return 1;
      case 5:
        cow_bridge_tail_102051d0(g, g->ecx, g->edx, g->eax);
        return 1;
      case 6:
        cow_bridge_tail_10204ee0(g, g->ecx, g->edx, g->eax);
        return 1;
      case 7:
        cow_bridge_10204ed0(g, COW_IMG(COW_ADDR_LIFT_10205DF3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      return 0;
    return 0;   /* fell through: no tail call taken, run the epilogue */
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10205da0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10205da0: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x10205da5: register eax, replayed as the entry ran it */
    if (cow_lift_10205da0(g, param_1)) {
        /* INTRA-BODY TAIL CALL out of 4 site(s): 0x10205db6 -> jmp 0x10204d50, 0x10205dcf -> jmp 0x10205100, 0x10205dd8 -> jmp 0x102051d0, 0x10205de9 -> jmp 0x10204ee0. The target's own `ret` returned for this
           entry, so the pops, the esp restore and rt_return below describe a `ret` this path never
           executed. Returning here is what keeps the frame whole. */
        return;
    }


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
