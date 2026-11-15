/* f_0x101e2490 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e2490 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e2490(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    CowU8 local_160[64];
    CowU8 local_120[288];
    cow_bridge_101e2880(g, COW_IMG(COW_ADDR_LIFT_101E24AB), 2u, (const CowU32[]){ local_160, param_2 }, g->ecx, g->edx, param_2, 0u);
      cow_bridge_101b9880(g, COW_IMG(COW_ADDR_LIFT_101E24C3), 7u, (const CowU32[]){ 1, local_160, param_1, 0x20, 0, param_1, 1 }, local_120, g->edx, param_2, 0u);
      uVar1 = cow_bridge_101b9bc0(g, COW_IMG(COW_ADDR_LIFT_101E24CE), 1u, (const CowU32[]){ 0u }, local_120, g->edx, param_2, 0u);
      cow_bridge_101b9a00(g, COW_IMG(COW_ADDR_LIFT_101E24D9), 0u, (const CowU32[]){ 0u }, local_120, g->edx, param_2, 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 352 locals, pops [esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e2490(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_2;   /* 0x101e2490: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x160u;                      /* 0x101e2494: 352 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101e249a: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e249b: push esi */
    g->esi = g->ecx;   /* 0x101e249c: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->esp + 0x8u)); }   /* 0x101e249e: register ecx, replayed as the entry ran it */
    g->ecx = g->esi;   /* 0x101e24a4: the value the entry loaded and the decompiler dropped */
    cow_lift_101e2490(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
