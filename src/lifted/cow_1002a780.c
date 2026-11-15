/* f_0x1002a780 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1002a780 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1002a780(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 psVar1;
    CowU8 local_4c[12];
    CowU8 local_40[64];
    cow_bridge_10027990(g, COW_IMG(COW_ADDR_LIFT_1002A790), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      psVar1 = (CowU32)cow_bridge_100351f0(g, COW_IMG(COW_ADDR_LIFT_1002A79D), 1u, (const CowU32[]){ param_2 }, (g->edi + 8u), g->edx, g->eax, 0u);
      if (psVar1 != (CowU32)0x0) {
        cow_bridge_100279b0(g, COW_IMG(COW_ADDR_LIFT_1002A7AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10027b80(g, COW_IMG(COW_ADDR_LIFT_1002A7B9), 1u, (const CowU32[]){ rd32((uint32_t)(psVar1 + 2u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10027bd0(g, COW_IMG(COW_ADDR_LIFT_1002A7C6), 1u, (const CowU32[]){ rd32((uint32_t)(psVar1 + 2u * (uint32_t)(3))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10027c20(g, COW_IMG(COW_ADDR_LIFT_1002A7D3), 1u, (const CowU32[]){ rd32((uint32_t)(psVar1 + 2u * (uint32_t)(5))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1002a890(g, COW_IMG(COW_ADDR_LIFT_1002A7E0), 2u, (const CowU32[]){ psVar1, local_4c }, g->edi, g->edx, g->eax, 0u);
        cow_bridge_10027cf0(g, COW_IMG(COW_ADDR_LIFT_1002A7EE), 1u, (const CowU32[]){ local_4c }, local_40, g->edx, g->eax, 0u);
        cow_bridge_10027d10(g, COW_IMG(COW_ADDR_LIFT_1002A803), 1u, (const CowU32[]){ rd16((uint32_t)psVar1) * 0x40 + (int32_t)rd32((uint32_t)((int)param_1 + 0x14)) }, local_40, g->edx, g->eax, 0u);
        cow_bridge_10028140(g, COW_IMG(COW_ADDR_LIFT_1002A811), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
      }
      cow_bridge_100279a0(g, COW_IMG(COW_ADDR_LIFT_1002A81A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 76 locals, pops [edi, esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1002a780(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0x4cu;                      /* 0x1002a780: 76 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1002a783: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1002a784: push edi */
    g->edi = g->ecx;   /* 0x1002a785: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->esp + 0x14u)); }   /* 0x1002a787: register ecx, replayed as the entry ran it */
    cow_lift_1002a780(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
