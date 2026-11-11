/* f_0x100a3040 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a3040 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a3040(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    if (rd32(COW_IMG(COW_ADDR_LIFT_10487F08)) == 0) {
        uVar1 = cow_bridge_100a30e0(g, COW_IMG(COW_ADDR_LIFT_100A3060), 2u, (const CowU32[]){ 273174904u, 1024u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10487F08)), 0u);
        cow_bridge_100a2fd0(g, COW_IMG(COW_ADDR_LIFT_100A306F), 4u, (const CowU32[]){ 0x104808b0, 1, 1, uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10487F08)), 0u);
        iVar2 = cow_bridge_10028fd0(g, COW_IMG(COW_ADDR_LIFT_100A307C), 3u, (const CowU32[]){ 240u, 4u, g->ebx }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10487F08)), 0u);
        cow_bridge_100748f0(g, COW_IMG(COW_ADDR_LIFT_100A3088), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10487F08)), 0u);
        wr32(COW_IMG(COW_ADDR_LIFT_1047D13C), 1);
        if (iVar2 == 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_10487F08), 0);
        }
        else {
          wr32(COW_IMG(COW_ADDR_LIFT_10487F08), cow_bridge_100a2790(g, COW_IMG(COW_ADDR_LIFT_100A309F), 1u, (const CowU32[]){ 273156272u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10487F08)), 0u));
          if (rd32(COW_IMG(COW_ADDR_LIFT_10487F08)) != 0) {
            wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10487F08)) + 0x50), COW_IMG(COW_ADDR_LIFT_100A3160));
            wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10487F08)) + 0x54), 0x100a3130);
            cow_bridge_100a28e0(g, COW_IMG(COW_ADDR_LIFT_100A30C6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10487F08)), 0u);
            g->eax = (CowU32)(1); return;
          }
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a3040(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10487F08));   /* 0x100a3040: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100a3045: push ebx */
    g->ebx = 0u;   /* 0x100a3046: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a3048: push esi */
    cow_lift_100a3040(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
