/* f_0x100e3e70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e3e70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e3e70(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr8((uint32_t)(param_1 + 2u * (uint32_t)(3)), param_2);
      wr8((uint32_t)((int)param_1 + 0x1d), 1);
      wr16((uint32_t)(param_1 + 2u * (uint32_t)(7)), 0x1000);
      wr16((uint32_t)(param_1 + 2u * (uint32_t)(8)), 0x2008);
      wr16((uint32_t)(param_1 + 2u * (uint32_t)(9)), 0x3008);
      wr16((uint32_t)(param_1 + 2u * (uint32_t)(10)), 0x4008);
      wr16((uint32_t)(param_1 + 2u * (uint32_t)(6)), (rd16((uint32_t)param_1) << 7 | rd16((uint32_t)(param_1 + 2u * (uint32_t)(2)))) * 2 | (CowU16)rd8((uint32_t)(param_1 + 2u * (uint32_t)(4))));
      wr16((uint32_t)(param_1 + 2u * (uint32_t)(0xb)), 0x5008);
      wr16((uint32_t)(param_1 + 2u * (uint32_t)(0xc)), 0x6000);
      wr16((uint32_t)(param_1 + 2u * (uint32_t)(0xd)), 0x7000);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e3e70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_3;   /* 0x100e3e70: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100e3e74: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax); g->edx = (g->edx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100e3e78: register edx, replayed as the entry ran it */
    cow_lift_100e3e70(g, param_1, param_2, param_3);

    g->eax = (CowU32)(param_3);   /* what eax holds at every ret of the entry */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
