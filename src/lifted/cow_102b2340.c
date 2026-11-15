/* f_0x102b2340 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b2340 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b2340(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    iVar2 = cow_bridge_10291220(g, COW_IMG(COW_ADDR_LIFT_102B2352), 2u, (const CowU32[]){ g->ebx, 271981860u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B236F), 3u, (const CowU32[]){ 272316316u, 272365828u, 870u }, g->ecx, g->edx, g->eax, 0u)
        ;
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B237A), 2u, (const CowU32[]){ 272341448u, g->ebx }, g->ecx, g->edx, g->eax, 20u);
        return;
      }
      cVar1 = cow_bridge_1029cd60(g, COW_IMG(COW_ADDR_LIFT_102B238E), 2u, (const CowU32[]){ iVar2, rd32((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B23A9), 3u, (const CowU32[]){ 272316316u, 272365828u, 874u }, g->ecx, g->edx, g->eax, 0u)
        ;
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B23B4), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B99B4), param_2 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B23BA), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 24u);
        return;
      }
      if (rd32((uint32_t)param_1) == 0x150002) {
        cow_bridge_102b2420(g, COW_IMG(COW_ADDR_LIFT_102B23D0), 2u, (const CowU32[]){ param_1, iVar2 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B23D9), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
        return;
      }
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B23F4), 3u, (const CowU32[]){ 272316316u, 272365828u, 881u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B2401), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BF930), rd32((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 20u);
      cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102B240A), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102b2340(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102b2340: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102b2341: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b2345: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102b2346: push edi */
    cow_lift_102b2340(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
