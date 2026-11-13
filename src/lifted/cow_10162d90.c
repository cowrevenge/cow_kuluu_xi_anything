/* f_0x10162d90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10162d90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10162d90(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU16 extraout_var;
    sVar1 = ((short)rd32(COW_IMG(COW_ADDR_LIFT_106218B8)) - (short)rd32(COW_IMG(COW_ADDR_LIFT_106218B4))) + -0xa0;
      wr16((uint32_t)(param_1 + 0x32), sVar1);
      if (((int16_t)((int16_t)rd16((uint32_t)(param_1 + 0x52))) < (int16_t)(sVar1))) {
        wr16((uint32_t)(param_1 + 0x32), (int16_t)rd16((uint32_t)(param_1 + 0x52)));
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 8)) != 0) {
        cow_bridge_1011a710(g, COW_IMG(COW_ADDR_LIFT_10162DC7), 1u, (const CowU32[]){ (CowU32)(param_1 + 0x24) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1011a5a0(g, COW_IMG(COW_ADDR_LIFT_10162DEF), 7u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x24))) & 0xffffu)), (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)(param_1 + 0x26))) & 0xffffu)), (int16_t)rd16((uint32_t)(param_1 + 0x32)) + 0xe, (int16_t)rd16((uint32_t)(param_1 + 0x2a)) - (int16_t)rd16((uint32_t)(param_1 + 0x26)), 1, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10162d90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_106218B8));   /* 0x10162d90: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10162d95: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10162d96: push edi */
    g->edi = rd32(COW_IMG(COW_ADDR_LIFT_106218B4));   /* 0x10162d97: the value the entry loaded and the decompiler dropped */
    g->esi = g->ecx;   /* 0x10162d9d: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->edi; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10162d9f: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFF60u; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10162da1: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x52u); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10162da6: register ecx, replayed as the entry ran it */
    cow_lift_10162d90(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
