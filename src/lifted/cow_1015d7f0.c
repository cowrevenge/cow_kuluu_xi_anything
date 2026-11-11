/* f_0x1015d7f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1015d7f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1015d7f0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = 0;
      do {
        wr8((uint32_t)(iVar1 + param_1), rd8((uint32_t)(iVar1 + param_1)) >> 5 | rd8((uint32_t)(iVar1 + param_1)) << 3);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x1400);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1015d7f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1015d7f0: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1015d7f1: register esi, replayed as the entry ran it */
    g->ecx = 0u;   /* 0x1015d7f5: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + g->esi); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1015d7f7: register eax, replayed as the entry ran it */
    { g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)((uint8_t)g->eax); }   /* 0x1015d7fa: register edx, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x5u) & 31u; if (c) { uint8_t a = (uint8_t)g->edx; uint8_t r; r = (uint8_t)((uint32_t)a >> c); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(r); } }; }   /* 0x1015d7fc: register edx, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x3u) & 31u; if (c) { uint8_t a = (uint8_t)g->eax; uint8_t r; r = (uint8_t)((uint32_t)a << c); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(r); } }; }   /* 0x1015d7ff: register eax, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->edx; uint8_t b = (uint8_t)(uint8_t)g->eax; uint8_t r = (uint8_t)(a | b); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x1015d802: register edx, replayed as the entry ran it */
    cow_lift_1015d7f0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
