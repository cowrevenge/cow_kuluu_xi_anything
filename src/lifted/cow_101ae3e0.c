/* f_0x101ae3e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101ae3e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101ae3e0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    if (rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10456A28))) == 0x60) {
        cVar1 = cow_bridge_101b5c90(g, COW_IMG(COW_ADDR_LIFT_101AE3FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        if (cVar1 == '\0') {
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE411), 1u, (const CowU32[]){ 0u }, (g->esi + 3436u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE41B), 1u, (const CowU32[]){ 0u }, (g->esi + 4u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE428), 1u, (const CowU32[]){ 0u }, (g->esi + 1324u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE435), 1u, (const CowU32[]){ 0u }, (g->esi + 1852u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE442), 1u, (const CowU32[]){ 0u }, (g->esi + 2116u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE44F), 1u, (const CowU32[]){ 0u }, (g->esi + 2380u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE45C), 1u, (const CowU32[]){ 0u }, (g->esi + 2644u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE469), 1u, (const CowU32[]){ 0u }, (g->esi + 4228u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE476), 1u, (const CowU32[]){ 0u }, (g->esi + 2908u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE483), 1u, (const CowU32[]){ 0u }, (g->esi + 796u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
          cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE490), 1u, (const CowU32[]){ 0u }, (g->esi + 3964u), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        }
        iVar2 = cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE49D), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        if (iVar2 != 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_1037ADE4), 1);
        }
        iVar2 = cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE4B7), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        if (iVar2 != 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_1037ADE4), 6);
        }
        iVar2 = cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE4D1), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        if (iVar2 != 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_1037ADE4), 0xc);
        }
        iVar2 = cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE4EB), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        if (iVar2 != 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_1037ADE4), 2);
        }
        iVar2 = cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE505), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        if (iVar2 != 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_1037ADE4), 4);
        }
        iVar2 = cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE51F), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        if (iVar2 != 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_1037ADE4), 0x1d);
        }
        iVar2 = cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE539), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        if (iVar2 != 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_1037ADE4), 0x1e);
        }
        iVar2 = cow_bridge_101adf20(g, COW_IMG(COW_ADDR_LIFT_101AE556), 1u, (const CowU32[]){ 270196704u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10456A28)), 0u);
        if (iVar2 != 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_1037ADE4), 0x1f);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101ae3e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10456A28));   /* 0x101ae3e0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101ae3e5: push esi */
    g->esi = g->ecx;   /* 0x101ae3e6: the value the entry loaded and the decompiler dropped */
    cow_lift_101ae3e0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
