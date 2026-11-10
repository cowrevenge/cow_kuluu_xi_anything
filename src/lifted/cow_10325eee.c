/* f_0x10325eee - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10325eee (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10325eee(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    uVar1 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), uVar1 >> 1 | rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) << 0x1f);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) >> 1);
      wr32((uint32_t)param_1, rd32((uint32_t)param_1) >> 1 | uVar1 << 0x1f);
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
void cow_adapter_10325eee(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x10325eee: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10325ef2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10325ef3: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x8u); g->edx = (uint32_t)(rd32(A)); }   /* 0x10325ef4: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x4u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10325ef7: register ecx, replayed as the entry ran it */
    g->esi = g->edx;   /* 0x10325efa: the value the entry loaded and the decompiler dropped */
    g->edi = g->ecx;   /* 0x10325efc: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x1Fu) & 31u; if (c) { uint32_t a = g->esi; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->esi = (uint32_t)(r); } }; }   /* 0x10325efe: register esi, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = g->ecx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ecx = (uint32_t)(r); } }; }   /* 0x10325f01: register ecx, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)g->esi; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x10325f03: register ecx, replayed as the entry ran it */
    cow_lift_10325eee(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->edx = (CowU32)((g->edx >> 1u));   /* the entry left edx here on its way to the ret */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
