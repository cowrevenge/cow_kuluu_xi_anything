/* f_0x100a38b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a38b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a38b0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if ((rd8((uint32_t)(param_3 + 0xc)) == -6) && (rd32(COW_IMG(COW_ADDR_LIFT_10578158)) != 0)) {
        cow_bridge_10129de0(g, COW_IMG(COW_ADDR_LIFT_100A38CC), 1u, (const CowU32[]){ 45u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (rd8((uint32_t)(param_3 + 0xc)) == -7) {
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_100A38E2), 1u, (const CowU32[]){ 185u }, g->ecx, g->edx, g->eax, 0u);
      }
      switch(rd8((uint32_t)(param_3 + 4)) - 1) {
      case 0:
        cow_bridge_100f8080(g, COW_IMG(COW_ADDR_LIFT_100A3903), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(1); return;
      case 1:
        cow_bridge_100f82b0(g, COW_IMG(COW_ADDR_LIFT_100A3915), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 2:
        cow_bridge_100f8320(g, COW_IMG(COW_ADDR_LIFT_100A3927), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(1); return;
      case 3:
        cow_bridge_100f8390(g, COW_IMG(COW_ADDR_LIFT_100A3939), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(1); return;
      case 4:
        cow_bridge_100f8400(g, COW_IMG(COW_ADDR_LIFT_100A394B), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(1); return;
      case 5:
        cow_bridge_100f8480(g, COW_IMG(COW_ADDR_LIFT_100A395D), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 6:
        cow_bridge_100f84f0(g, COW_IMG(COW_ADDR_LIFT_100A396F), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 7:
        cow_bridge_100f8580(g, COW_IMG(COW_ADDR_LIFT_100A3981), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 8:
        if (rd32(COW_IMG(COW_ADDR_LIFT_10578450)) != 0) {
          cow_bridge_1014d0b0(g, COW_IMG(COW_ADDR_LIFT_100A3998), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_100f85f0(g, COW_IMG(COW_ADDR_LIFT_100A39A3), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(1); return;
      case 9:
        if (rd32(COW_IMG(COW_ADDR_LIFT_10578450)) != 0) {
          cow_bridge_1014d0b0(g, COW_IMG(COW_ADDR_LIFT_100A39BA), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_10578198)) != 0) {
          cow_bridge_1012f2a0(g, COW_IMG(COW_ADDR_LIFT_100A39CA), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_100f8660(g, COW_IMG(COW_ADDR_LIFT_100A39D5), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 10:
        if (rd32(COW_IMG(COW_ADDR_LIFT_10578450)) != 0) {
          cow_bridge_1014d0b0(g, COW_IMG(COW_ADDR_LIFT_100A39EC), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_100f86e0(g, COW_IMG(COW_ADDR_LIFT_100A39F7), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 0xb:
        if (rd32(COW_IMG(COW_ADDR_LIFT_10578198)) != 0) {
          cow_bridge_1012f880(g, COW_IMG(COW_ADDR_LIFT_100A3A0E), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_100f8760(g, COW_IMG(COW_ADDR_LIFT_100A3A19), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 0xc:
        if ((rd8((uint32_t)(param_3 + 0xc)) == '\x01') && (rd32(COW_IMG(COW_ADDR_LIFT_10578198)) != 0)) {
          cow_bridge_1012eff0(g, COW_IMG(COW_ADDR_LIFT_100A3A35), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 0xd:
        if ((rd8((uint32_t)(param_3 + 0xc)) == '\x01') && (rd32(COW_IMG(COW_ADDR_LIFT_10578450)) != 0)) {
          cow_bridge_1014ce80(g, COW_IMG(COW_ADDR_LIFT_100A3A4E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        break;
      case 0xe:
        if (rd8((uint32_t)(param_3 + 0xc)) == '\x01') {
          if (rd32(COW_IMG(COW_ADDR_LIFT_10578450)) != 0) {
            cow_bridge_1014d000(g, COW_IMG(COW_ADDR_LIFT_100A3A67), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          if (rd32(COW_IMG(COW_ADDR_LIFT_10578198)) != 0) {
            cow_bridge_1012f1b0(g, COW_IMG(COW_ADDR_LIFT_100A3A76), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a38b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a38b0: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x100a38b1: register esi, replayed as the entry ran it */
    cow_lift_100a38b0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
