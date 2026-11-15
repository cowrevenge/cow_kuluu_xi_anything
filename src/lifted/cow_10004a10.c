/* f_0x10004a10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10004a10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10004a10(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU8 local_104[260];
    if (rd32(COW_IMG(COW_ADDR_LIFT_10455AFC)) == 1) {
        cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_10004A2E), 2u, (const CowU32[]){ local_104, COW_IMG(COW_ADDR_LIFT_1034F7EC) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10004dd0(g, COW_IMG(COW_ADDR_LIFT_10004A38), 1u, (const CowU32[]){ local_104 }, g->ecx, g->edx, g->eax, 0u);
        iVar1 = cow_bridge_1031201e(g, COW_IMG(COW_ADDR_LIFT_10004A47), 2u, (const CowU32[]){ local_104, COW_IMG(COW_ADDR_LIFT_1034F7FC) }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 != 0) {
          cow_bridge_103122d6(g, COW_IMG(COW_ADDR_LIFT_10004A63), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0x40e38, 1, iVar1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_10004A69), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 20u);
        }
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 260 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10004a10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10455AFC));   /* 0x10004a10: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x104u;                      /* 0x10004a15: 260 bytes of locals */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x10004a1b: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10004a1c: push esi */
    cow_lift_10004a10(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
