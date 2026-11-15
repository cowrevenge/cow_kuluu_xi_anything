/* f_0x10322353 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10322353 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10322353(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (param_1 != (CowU32)0x0) {
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322368), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322370), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322378), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322380), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(4))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322388), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322390), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322397), 1u, (const CowU32[]){ rd32((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_1032239F), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(8))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223A7), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(9))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223AF), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(10))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223B7), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xb))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223BF), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xc))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223C7), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xd))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223CF), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(7))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223D7), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xe))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223DF), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xf))) }, g->ecx, g->edx, g->eax, 64u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223EA), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x10))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223F2), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x11))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103223FA), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x12))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322402), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x13))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_1032240A), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x14))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322412), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x15))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_1032241A), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x16))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322422), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x17))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_1032242A), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x18))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322432), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x19))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_1032243A), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322442), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1b))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_1032244A), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1c))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322452), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1d))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_1032245A), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1e))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322462), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1f))) }, g->ecx, g->edx, g->eax, 64u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322470), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x20))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_1032247B), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x21))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322486), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x22))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_10322491), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x23))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_1032249C), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x24))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103224A7), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x25))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103224B2), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x26))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103224BD), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x27))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103224C8), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x28))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103224D3), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x29))) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_103224DE), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2a))) }, g->ecx, g->edx, g->eax, 44u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10322353(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10322353: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10322354: register esi, replayed as the entry ran it */
    cow_lift_10322353(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
