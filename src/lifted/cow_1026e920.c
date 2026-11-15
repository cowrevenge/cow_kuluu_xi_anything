/* f_0x1026e920 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1026e920 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1026e920(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    cow_bridge_1027e0f0(g, COW_IMG(COW_ADDR_LIFT_1026E92D), 1u, (const CowU32[]){ 278507232u }, g->ecx, g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1099AEDC)) != 0) {
        if (-1 < rd32(COW_IMG(COW_ADDR_LIFT_1099AED8)) + -1) {
          iVar1 = (rd32(COW_IMG(COW_ADDR_LIFT_1099AED8)) + -1) * 0xc0;
          iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_1099AED8));
          do {
            cow_bridge_1027dba0(g, COW_IMG(COW_ADDR_LIFT_1026E95D), 1u, (const CowU32[]){ iVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1099AEDC)) }, g->ecx, g->edx, g->eax, 4u);
            iVar1 = iVar1 + -0xc0;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1026E97E), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1099AEDC)), COW_IMG(COW_ADDR_LIFT_103B17C0), 0x63a }, g->ecx, g->edx, g->eax, 12u);
        wr32(COW_IMG(COW_ADDR_LIFT_1099AEDC), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1099AED8), 0);
      }
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_1099AECC)) + -1;
      if (-1 < iVar2) {
        iVar1 = iVar2 * 0xac;
        do {
          if ((rd32((uint32_t)(iVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1099AED0)))) & 0x100) == 0) {
            cow_bridge_10277ad0(g, COW_IMG(COW_ADDR_LIFT_1026E9CF), 1u, (const CowU32[]){ iVar1 + 0xa8 + rd32(COW_IMG(COW_ADDR_LIFT_1099AED0)) }, g->ecx, g->edx, g->eax, 4u);
          }
          else {
            wr32((uint32_t)(iVar1 + 0xa8 + rd32(COW_IMG(COW_ADDR_LIFT_1099AED0))), 0);
          }
          cow_bridge_102706b0(g, COW_IMG(COW_ADDR_LIFT_1026E9D8), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
          iVar2 = iVar2 + -1;
          iVar1 = iVar1 + -0xac;
        } while (-1 < iVar2);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_1099AED0)) != 0) {
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1026E9FF), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1099AED0)), COW_IMG(COW_ADDR_LIFT_103B17C0), 0x653 }, g->ecx, g->edx, g->eax, 12u);
        wr32(COW_IMG(COW_ADDR_LIFT_1099AED0), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1099AECC), 0);
        wr32(COW_IMG(COW_ADDR_LIFT_1099AEC8), 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1026e920(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1026e920: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1026e921: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1026e922: push edi */
    cow_lift_1026e920(g);

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
