/* f_0x102145c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102145c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102145c0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = rd32((uint32_t)(param_1 + 0x88 + rd32((uint32_t)(param_1 + 0x144)) * 4));
      cow_bridge_102146f0(g, COW_IMG(COW_ADDR_LIFT_102145FE), 2u, (const CowU32[]){ param_2, (CowU32)rd16((uint32_t)(param_1 + 0x16c)) + (CowU32)rd16((uint32_t)(param_1 + 0x16a)) +
                           (CowU32)rd16((uint32_t)(iVar1 + 0x1a)) + (int)rd16((uint32_t)(iVar1 + 0x16)) }, param_1, g->edx, g->eax, 0u);
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
void cow_adapter_102145c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(g->ecx + 0x144u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102145c0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102145c6: push esi */
    g->edx = 0u;   /* 0x102145c7: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x102145c9: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + g->eax * 4 + 0x88u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102145cb: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x16Cu); g->edx = (g->edx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x102145d2: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x16Au); g->esi = (g->esi & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x102145d9: register esi, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x10u; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x102145e0: register eax, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)g->esi; uint32_t r = (uint32_t)(a + b); g->edx = (uint32_t)(r); }   /* 0x102145e3: register edx, replayed as the entry ran it */
    g->esi = 0u;   /* 0x102145e5: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0xAu); g->esi = (g->esi & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x102145e7: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x6u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x102145eb: register eax, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)g->esi; uint32_t r = (uint32_t)(a + b); g->edx = (uint32_t)(r); }   /* 0x102145ef: register edx, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)g->eax; uint32_t r = (uint32_t)(a + b); g->edx = (uint32_t)(r); }   /* 0x102145f1: register edx, replayed as the entry ran it */
    cow_lift_102145c0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
