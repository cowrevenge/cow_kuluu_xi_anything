/* f_0x10072c30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10072c30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10072c30(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    wr8((uint32_t)(param_1 + 0x3c), 0);
      wr32((uint32_t)(param_1 + 0x41), 0);
      wr32((uint32_t)(param_1 + 0x34), param_3);
      wr32((uint32_t)(param_1 + 0x18), param_3);
      wr32((uint32_t)(param_1 + 0x1c), 0x4d727400);
      cow_bridge_100749b0(g, COW_IMG(COW_ADDR_LIFT_10072C54), 2u, (const CowU32[]){ param_1, g->esi }, g->esi, g->edx, param_3, 0u);
      puVar2 = (CowU32)cow_bridge_10074110(g, COW_IMG(COW_ADDR_LIFT_10072C64), 1u, (const CowU32[]){ (g->esp + 12u) }, g->ecx, g->edx, param_3, 0u);
      uVar1 = rd32((uint32_t)puVar2);
      wr32((uint32_t)(param_1 + 0x3d), uVar1);
      wr32((uint32_t)param_2, uVar1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10072c30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_3;   /* 0x10072c30: the value the entry loaded and the decompiler dropped */
    g->esi = g->ecx;   /* 0x10072c35: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x10072c37: the value the entry loaded and the decompiler dropped */
    cow_lift_10072c30(g, param_1, param_2, param_3);

    g->eax = (CowU32)(param_2);   /* what eax holds at every ret of the entry */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
