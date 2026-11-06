/* f_0x102cb220 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102cb220 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102cb220(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    pbVar1 = (CowU32)(param_3 + (param_2 >> 3));
      param_1 = param_1 >> ((CowU8)param_2 & 7);
      wr8((uint32_t)(pbVar1 + 1u * (uint32_t)(3)), (CowU8)param_1);
      wr8((uint32_t)(pbVar1 + 1u * (uint32_t)(2)), (CowU8)(param_1 >> 8));
      wr8((uint32_t)(pbVar1 + 1u * (uint32_t)(1)), (CowU8)(param_1 >> 0x10));
      wr8((uint32_t)pbVar1, rd8((uint32_t)pbVar1) | (CowU8)(param_1 >> 0x18));
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102cb220(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->ecx = param_2;   /* 0x102cb220: the value the entry loaded and the decompiler dropped */
    g->edx = param_3;   /* 0x102cb224: the value the entry loaded and the decompiler dropped */
    g->eax = g->ecx;   /* 0x102cb228: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0x7u; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x102cb22a: register ecx, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x3u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->eax = (uint32_t)(r); } }; }   /* 0x102cb22d: register eax, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)g->eax; uint32_t r = (uint32_t)(a + b); g->edx = (uint32_t)(r); }   /* 0x102cb230: register edx, replayed as the entry ran it */
    g->eax = param_1;   /* 0x102cb232: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)((uint8_t)g->ecx) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->eax = (uint32_t)(r); } }; }   /* 0x102cb236: register eax, replayed as the entry ran it */
    g->ecx = g->eax;   /* 0x102cb238: the value the entry loaded and the decompiler dropped */
    cow_lift_102cb220(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
