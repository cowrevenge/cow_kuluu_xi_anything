/* f_0x102f1c49 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f1c49 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f1c49(Guest* g, CowU32 param_1)
{
    int iVar1;
    if (rd32((uint32_t)(param_1 + 0xdc)) == 0) {
        cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F1C62), 2u, (const CowU32[]){ param_1, "NULL row buffer" }, 0u, 0u, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x61)) & 0x10) != 0) {
        if (rd8((uint32_t)(param_1 + 0xf8)) == '\x03') {
          cow_bridge_102f11c5(g, COW_IMG(COW_ADDR_LIFT_102F1C9B), 5u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1, rd32((uint32_t)(param_1 + 0x104)), rd32((uint32_t)(param_1 + 0x15c)), rd16((uint32_t)(param_1 + 0x10a)) }, 0u, 0u, g->eax, 20u);
        }
        else {
          if (rd16((uint32_t)(param_1 + 0x10a)) == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = param_1 + 0x160;
          }
          cow_bridge_102f13cd(g, COW_IMG(COW_ADDR_LIFT_102F1CC9), 3u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1, iVar1 }, 0u, 0u, g->eax, 12u);
        }
      }
      if (((rd8((uint32_t)(param_1 + 0x61)) & 0x20) != 0) && (rd8((uint32_t)(param_1 + 0x116)) != '\x03')) {
        cow_bridge_102f0e77(g, COW_IMG(COW_ADDR_LIFT_102F1D01), 5u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1, rd32((uint32_t)(param_1 + 0x138)), rd32((uint32_t)(param_1 + 0x144)), rd32((uint32_t)(param_1 + 300)) }, 0u, 0u, g->eax, 20u);
      }
      if ((rd8((uint32_t)(param_1 + 0x61)) & 4) != 0) {
        cow_bridge_102f0b9b(g, COW_IMG(COW_ADDR_LIFT_102F1D1E), 2u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1 }, 0u, 0u, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x60)) & 0x40) != 0) {
        cow_bridge_102f171f(g, COW_IMG(COW_ADDR_LIFT_102F1D46), 4u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1, rd32((uint32_t)(param_1 + 0x174)), rd32((uint32_t)(param_1 + 0x178)) }, 0u, 0u, g->eax, 16u);
        if (rd32((uint32_t)(param_1 + 0xf4)) == 0) {
          cow_bridge_102ef234(g, COW_IMG(COW_ADDR_LIFT_102F1D5D), 2u, (const CowU32[]){ param_1, "png_do_dither returned rowbytes=0" }, 0u, 0u, g->eax, 0u);
        }
      }
      if ((rd8((uint32_t)(param_1 + 0x60)) & 8) != 0) {
        cow_bridge_102f0a24(g, COW_IMG(COW_ADDR_LIFT_102F1D80), 3u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1, param_1 + 0x155 }, 0u, 0u, g->eax, 12u);
      }
      if ((rd8((uint32_t)(param_1 + 0x60)) & 4) != 0) {
        cow_bridge_102f0914(g, COW_IMG(COW_ADDR_LIFT_102F1D9D), 2u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1 }, 0u, 0u, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x60)) & 1) != 0) {
        cow_bridge_102f0035(g, COW_IMG(COW_ADDR_LIFT_102F1DB9), 2u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1 }, 0u, 0u, g->eax, 0u);
      }
      if ((rd8((uint32_t)(param_1 + 0x61)) & 0x80) != 0) {
        cow_bridge_102f0bdf(g, COW_IMG(COW_ADDR_LIFT_102F1DE0), 4u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1, rd16((uint32_t)(param_1 + 0x11e)), rd32((uint32_t)(param_1 + 0x5c)) }, 0u, 0u, g->eax, 16u);
      }
      if ((rd8((uint32_t)(param_1 + 0x60)) & 0x10) != 0) {
        cow_bridge_102f0008(g, COW_IMG(COW_ADDR_LIFT_102F1DFD), 2u, (const CowU32[]){ param_1 + 0xf0, rd32((uint32_t)(param_1 + 0xdc)) + 1 }, 0u, 0u, g->eax, 0u);
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ecx, ecx, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f1c49(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f1c49: push esi */
    cow_lift_102f1c49(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
