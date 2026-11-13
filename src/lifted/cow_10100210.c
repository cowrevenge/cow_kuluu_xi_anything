/* f_0x10100210 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10100210 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10100210(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr8((uint32_t)(param_1 + 0x28), (int8_t)rd8((uint32_t)(param_1 + 0x28)) + param_3 + ' ');
      wr8((uint32_t)(param_1 + 0x29), (int8_t)rd8((uint32_t)(param_1 + 0x29)) + param_3 + ' ');
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10100210(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10100210: register ecx, replayed as the entry ran it */
    g->eax = param_3;   /* 0x10100214: the value the entry loaded and the decompiler dropped */
    { g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)((uint8_t)g->ecx); }   /* 0x10100218: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010021a: push ebx */
    { uint32_t A = (uint32_t)(g->eax + 0x28u); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1010021b: register ebx, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->edx; uint8_t b = (uint8_t)0x20u; uint8_t r = (uint8_t)(a + b); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x1010021e: register edx, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->ebx; uint8_t b = (uint8_t)(uint8_t)g->edx; uint8_t r = (uint8_t)(a + b); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x10100221: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x29u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10100223: register edx, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->ecx; uint8_t b = (uint8_t)0x20u; uint8_t r = (uint8_t)(a + b); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x10100226: register ecx, replayed as the entry ran it */
    cow_lift_10100210(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->eax = (CowU32)(param_3);   /* what eax holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
