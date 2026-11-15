/* f_0x10015120 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10015120 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10015120(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, CowU32 param_10, CowU32 param_11, CowU32 param_12, CowU32 param_13, CowU32 param_14, CowU32 param_15, CowU32 param_16, CowU32 param_17)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_100279f0(g, COW_IMG(COW_ADDR_LIFT_10015131), 1u, (const CowU32[]){ g->eax }, (CowU32)((int)param_1 + 0x54), g->edx, g->eax, 0u);
      cow_bridge_100279f0(g, COW_IMG(COW_ADDR_LIFT_10015143), 1u, (const CowU32[]){ (g->esp + 12u) }, (CowU32)((int)param_1 + 0x94), g->edx, g->eax, 0u);
      cow_bridge_100279b0(g, COW_IMG(COW_ADDR_LIFT_1001514E), 0u, (const CowU32[]){ 0u }, (g->esi + 276u), g->edx, g->eax, 0u);
      cow_bridge_100279f0(g, COW_IMG(COW_ADDR_LIFT_1001515E), 1u, (const CowU32[]){ (g->esp + 12u) }, (CowU32)((int)param_1 + 0xd4), (g->esp + 12u), g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x104), 0);
      wr32((uint32_t)((int)param_1 + 0x108), 0);
      wr32((uint32_t)((int)param_1 + 0x10c), 0);
      cow_bridge_100279f0(g, COW_IMG(COW_ADDR_LIFT_10015180), 1u, (const CowU32[]){ (CowU32)((int)param_1 + 0x94) }, (CowU32)((int)param_1 + 0x294), g->edx, 0u, 0u);
      cow_bridge_100283c0(g, COW_IMG(COW_ADDR_LIFT_10015187), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x294), g->edx, g->eax, 0u);
      cow_bridge_100279a0(g, COW_IMG(COW_ADDR_LIFT_10015190), 0u, (const CowU32[]){ 0u }, (g->esp + 12u), g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 17 parameter(s), cleanup 64 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 64.
   Arguments: 1 register argument(s) [ecx], 16 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10015120(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    CowU32 param_11 = rd32((uint32_t)(sp0 + 4u + 0x24u));
    CowU32 param_12 = rd32((uint32_t)(sp0 + 4u + 0x28u));
    CowU32 param_13 = rd32((uint32_t)(sp0 + 4u + 0x2cu));
    CowU32 param_14 = rd32((uint32_t)(sp0 + 4u + 0x30u));
    CowU32 param_15 = rd32((uint32_t)(sp0 + 4u + 0x34u));
    CowU32 param_16 = rd32((uint32_t)(sp0 + 4u + 0x38u));
    CowU32 param_17 = rd32((uint32_t)(sp0 + 4u + 0x3cu));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10015120: push esi */
    g->esi = g->ecx;   /* 0x10015121: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->esp + 0x8u)); }   /* 0x10015123: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10015127: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x54u)); }   /* 0x10015129: register ecx, replayed as the entry ran it */
    cow_lift_10015120(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12, param_13, param_14, param_15, param_16, param_17);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 64u);
}
/* COW_ADAPTER END */
