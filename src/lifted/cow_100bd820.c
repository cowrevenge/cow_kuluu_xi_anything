/* f_0x100bd820 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100bd820 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100bd820(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    wr32((uint32_t)param_1, 0);
      cow_bridge_10259e90(g, COW_IMG(COW_ADDR_LIFT_100BD837), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x708), g->edx, g->eax, 0u);
      cow_bridge_10259110(g, COW_IMG(COW_ADDR_LIFT_100BD842), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x714), g->edx, g->eax, 0u);
      cow_bridge_1025a830(g, COW_IMG(COW_ADDR_LIFT_100BD84D), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x720), g->edx, g->eax, 0u);
      cow_bridge_10155160(g, COW_IMG(COW_ADDR_LIFT_100BD858), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x72c), g->edx, g->eax, 0u);
      cow_bridge_10155370(g, COW_IMG(COW_ADDR_LIFT_100BD863), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x754), g->edx, g->eax, 0u);
      cow_bridge_101c8260(g, COW_IMG(COW_ADDR_LIFT_100BD870), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x788), g->edx, g->eax, 0u);
      cow_bridge_101c8260(g, COW_IMG(COW_ADDR_LIFT_100BD87D), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x7f0), g->edx, g->eax, 0u);
      cow_bridge_101c8260(g, COW_IMG(COW_ADDR_LIFT_100BD88A), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x858), g->edx, g->eax, 0u);
      cow_bridge_101c8260(g, COW_IMG(COW_ADDR_LIFT_100BD895), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x8c0), g->edx, g->eax, 0u);
      cow_bridge_101c8380(g, COW_IMG(COW_ADDR_LIFT_100BD8A1), 1u, (const CowU32[]){ 55474u }, (CowU32)((int)param_1 + 0x7f0), g->edx, g->eax, 0u);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_100BD8A8), 1u, (const CowU32[]){ 28u }, g->ecx, g->edx, g->eax, 4u);
      cow_bridge_101c8380(g, COW_IMG(COW_ADDR_LIFT_100BD8B3), 1u, (const CowU32[]){ uVar1 }, (CowU32)((int)param_1 + 0x788), g->edx, g->eax, 0u);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_100BD8BA), 1u, (const CowU32[]){ 34u }, g->ecx, g->edx, g->eax, 4u);
      cow_bridge_101c8380(g, COW_IMG(COW_ADDR_LIFT_100BD8C5), 1u, (const CowU32[]){ uVar1 }, (CowU32)((int)param_1 + 0x858), g->edx, g->eax, 0u);
      uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_100BD8CC), 1u, (const CowU32[]){ 27u }, g->ecx, g->edx, g->eax, 4u);
      cow_bridge_101c8380(g, COW_IMG(COW_ADDR_LIFT_100BD8DB), 1u, (const CowU32[]){ uVar1 }, (CowU32)((int)param_1 + 0x8c0), g->edx, g->eax, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100bd820(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100bd820: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100bd821: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100bd822: push esi */
    g->esi = g->ecx;   /* 0x100bd823: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100bd825: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x708u)); }   /* 0x100bd826: register ecx, replayed as the entry ran it */
    cow_lift_100bd820(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
