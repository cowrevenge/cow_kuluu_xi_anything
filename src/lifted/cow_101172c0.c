/* f_0x101172c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101172c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101172c0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_10126320(g, COW_IMG(COW_ADDR_LIFT_101172C9), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_10126350(g, COW_IMG(COW_ADDR_LIFT_101172D1), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x14), g->edx, g->eax, 0u);
      wr16((uint32_t)((int)param_1 + 0x3a), 0);
      wr16((uint32_t)((int)param_1 + 0x3c), 0);
      wr16((uint32_t)((int)param_1 + 0x3e), 0);
      wr16((uint32_t)((int)param_1 + 0x40), 0);
      wr16((uint32_t)((int)param_1 + 0x42), 0);
      wr16((uint32_t)((int)param_1 + 0x44), 0);
      wr16((uint32_t)((int)param_1 + 0x46), 0);
      wr16((uint32_t)((int)param_1 + 0x48), 0);
      wr16((uint32_t)((int)param_1 + 0x9c), 0);
      wr16((uint32_t)((int)param_1 + 0x9e), 0);
      wr16((uint32_t)((int)param_1 + 0xa0), 0);
      wr16((uint32_t)((int)param_1 + 0xa2), 0);
      wr16((uint32_t)((int)param_1 + 0xbc), 0);
      wr16((uint32_t)((int)param_1 + 0xbe), 0);
      wr16((uint32_t)((int)param_1 + 0xc0), 0);
      wr16((uint32_t)((int)param_1 + 0xc2), 0);
      cow_bridge_101170d0(g, COW_IMG(COW_ADDR_LIFT_10117338), 2u, (const CowU32[]){ 0u, g->esi }, (CowU32)((int)param_1 + 0xc4), g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 4), 0);
      wr16((uint32_t)((int)param_1 + 0x4c), 0xffff);
      wr16((uint32_t)((int)param_1 + 0x4a), 0xffff);
      wr16((uint32_t)((int)param_1 + 0x4e), 0);
      wr16((uint32_t)((int)param_1 + 0x50), 0);
      wr16((uint32_t)((int)param_1 + 0x54), 0);
      wr16((uint32_t)((int)param_1 + 0x52), 0);
      wr32((uint32_t)((int)param_1 + 8), 0);
      wr16((uint32_t)((int)param_1 + 0x56), 0);
      wr32((uint32_t)((int)param_1 + 0x10), 0);
      wr8((uint32_t)((int)param_1 + 0x30), 0xff);
      wr32((uint32_t)((int)param_1 + 0x34), 0xffff);
      wr16((uint32_t)((int)param_1 + 0x38), 0);
      wr16((uint32_t)((int)param_1 + 0x58), 0);
      wr8((uint32_t)((int)param_1 + 0x5c), 1);
      wr16((uint32_t)((int)param_1 + 0x5e), 0);
      wr32((uint32_t)((int)param_1 + 0x7c), 0);
      wr32((uint32_t)((int)param_1 + 0x80), 0);
      wr8((uint32_t)((int)param_1 + 0x5d), 0);
      wr8((uint32_t)((int)param_1 + 0x60), 0);
      wr8((uint32_t)((int)param_1 + 0x61), 1);
      wr8((uint32_t)((int)param_1 + 0x62), 1);
      wr8((uint32_t)((int)param_1 + 0x68), 1);
      wr8((uint32_t)((int)param_1 + 0x69), 1);
      wr8((uint32_t)((int)param_1 + 0x6a), 1);
      wr8((uint32_t)((int)param_1 + 99), 1);
      wr8((uint32_t)((int)param_1 + 0x84), 1);
      wr8((uint32_t)((int)param_1 + 0x85), 1);
      wr8((uint32_t)((int)param_1 + 0x86), 1);
      wr8((uint32_t)((int)param_1 + 0x6b), 0);
      wr8((uint32_t)((int)param_1 + 0x6d), 0);
      wr8((uint32_t)((int)param_1 + 0x6c), 0);
      wr8((uint32_t)((int)param_1 + 0x6e), 0);
      wr8((uint32_t)((int)param_1 + 0x6f), 0);
      wr32((uint32_t)((int)param_1 + 0x88), 0);
      wr32((uint32_t)((int)param_1 + 0xc), 0);
      wr8((uint32_t)((int)param_1 + 0x70), 0);
      wr8((uint32_t)((int)param_1 + 0x71), 0);
      wr8((uint32_t)((int)param_1 + 0x73), 1);
      wr8((uint32_t)((int)param_1 + 0x72), 0);
      wr32((uint32_t)((int)param_1 + 0x94), 0xfffffc19);
      wr8((uint32_t)((int)param_1 + 0x75), 0);
      wr8((uint32_t)((int)param_1 + 0x76), 0);
      wr8((uint32_t)((int)param_1 + 0x9b), 0);
      wr32((uint32_t)((int)param_1 + 0xa4), 0);
      wr32((uint32_t)((int)param_1 + 0xa8), 0);
      wr32((uint32_t)((int)param_1 + 0xac), 0);
      wr32((uint32_t)((int)param_1 + 0xb0), 0);
      wr32((uint32_t)((int)param_1 + 0xb4), 0);
      wr32((uint32_t)((int)param_1 + 0xb8), 0);
      wr8((uint32_t)((int)param_1 + 0x98), 0);
      wr8((uint32_t)((int)param_1 + 0x74), 1);
      wr8((uint32_t)((int)param_1 + 0x77), 1);
      wr8((uint32_t)((int)param_1 + 0x78), 1);
      wr8((uint32_t)((int)param_1 + 0x99), 0);
      wr8((uint32_t)((int)param_1 + 0x9a), 0);
      wr16((uint32_t)((int)param_1 + 0xbc), 0);
      wr16((uint32_t)((int)param_1 + 0xbe), 0);
      wr16((uint32_t)((int)param_1 + 0xc0), 0);
      wr16((uint32_t)((int)param_1 + 0xc2), 0);
      wr32((uint32_t)((int)param_1 + 0xcc), 0x80808080);
      wr8((uint32_t)((int)param_1 + 0xd0), 0);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101172c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101172c0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101172c1: push esi */
    g->esi = g->ecx;   /* 0x101172c2: the value the entry loaded and the decompiler dropped */
    cow_lift_101172c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
