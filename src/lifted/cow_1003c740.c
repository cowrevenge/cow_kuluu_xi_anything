/* f_0x1003c740 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1003c740 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1003c740(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    uVar1 = (rd32((uint32_t)(param_2 + 4)) ^ rd32((uint32_t)(param_1 + 4))) & 0xf ^ rd32((uint32_t)(param_1 + 4));
      wr32((uint32_t)(param_1 + 4), uVar1);
      uVar1 = (rd32((uint32_t)(param_2 + 4)) ^ uVar1) & 0x3f0 ^ uVar1;
      wr32((uint32_t)(param_1 + 4), uVar1);
      uVar1 = (rd32((uint32_t)(param_2 + 4)) ^ uVar1) & 0xfc00 ^ uVar1;
      wr32((uint32_t)(param_1 + 4), uVar1);
      uVar1 = (rd8((uint32_t)(param_2 + 6)) & 1) << 0x10 ^ uVar1 & 0xfffeffff;
      wr32((uint32_t)(param_1 + 4), uVar1);
      uVar1 = (rd32((uint32_t)(param_2 + 4)) ^ uVar1) & 0x40000 ^ uVar1;
      wr32((uint32_t)(param_1 + 4), uVar1);
      uVar1 = (rd32((uint32_t)(param_2 + 4)) ^ uVar1) & 0x80000 ^ uVar1;
      wr32((uint32_t)(param_1 + 4), uVar1);
      uVar1 = (rd32((uint32_t)(param_2 + 4)) ^ uVar1) & 0xf00000 ^ uVar1;
      wr32((uint32_t)(param_1 + 4), uVar1);
      wr32((uint32_t)(param_1 + 4), (rd8((uint32_t)(param_2 + 7)) & 0xf) << 0x18 ^ uVar1 & 0xf0ffffff);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1003c740(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1003c740: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1003c743: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1003c744: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1003c748: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->edx; uint32_t r = (uint32_t)(a ^ b); g->eax = (uint32_t)(r); }   /* 0x1003c74b: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1003c74d: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->edx; uint32_t r = (uint32_t)(a ^ b); g->eax = (uint32_t)(r); }   /* 0x1003c750: register eax, replayed as the entry ran it */
    cow_lift_1003c740(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
