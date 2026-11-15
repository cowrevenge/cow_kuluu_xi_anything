/* f_0x1008f1d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1008f1d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1008f1d0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    uVar1 = rd32((uint32_t)(param_1 + 0x124));
      uVar2 = (uVar1 << 4 ^ uVar1) & 0xf00 ^ uVar1;
      wr32((uint32_t)(param_1 + 0x124), (uVar2 & 0xe) << 3 | (((uint32_t)((uVar2 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)uVar1) & 0xffu)) & 0xffffff0f);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1008f1d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(g->ecx + 0x124u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1008f1d0: register edx, replayed as the entry ran it */
    g->eax = g->edx;   /* 0x1008f1d6: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x4u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->eax = (uint32_t)(r); } }; }   /* 0x1008f1d8: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->edx; uint32_t r = (uint32_t)(a ^ b); g->eax = (uint32_t)(r); }   /* 0x1008f1db: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xF00u; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1008f1dd: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->edx; uint32_t r = (uint32_t)(a ^ b); g->eax = (uint32_t)(r); }   /* 0x1008f1e2: register eax, replayed as the entry ran it */
    g->edx = g->eax;   /* 0x1008f1e4: the value the entry loaded and the decompiler dropped */
    { uint8_t a = (uint8_t)g->eax; uint8_t b = (uint8_t)0xFu; uint8_t r = (uint8_t)(a & b); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x1008f1e6: register eax, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)0xEu; uint32_t r = (uint32_t)(a & b); g->edx = (uint32_t)(r); }   /* 0x1008f1e8: register edx, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x3u) & 31u; if (c) { uint32_t a = g->edx; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->edx = (uint32_t)(r); } }; }   /* 0x1008f1eb: register edx, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)g->eax; uint32_t r = (uint32_t)(a | b); g->edx = (uint32_t)(r); }   /* 0x1008f1ee: register edx, replayed as the entry ran it */
    cow_lift_1008f1d0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
