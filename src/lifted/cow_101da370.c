/* f_0x101da370 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101da370 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101da370(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    cow_bridge_101d7ac0(g, COW_IMG(COW_ADDR_LIFT_101DA378), 1u, (const CowU32[]){ 1 }, g->ecx, g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
        cow_bridge_10221300(g, COW_IMG(COW_ADDR_LIFT_101DA393), 1u, (const CowU32[]){ 0x80000000 }, g->ecx, g->edx, g->eax, 0u);
      }
      cow_bridge_10140e40(g, COW_IMG(COW_ADDR_LIFT_101DA39E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA3AD), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1036F718) }, 274864184u, g->edx, g->eax, 0u);
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10664514));
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664514)) + 0x3a), 0);
      wr32((uint32_t)(iVar2 + 0x14), 0);
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_101DA3C8), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10664520));
      uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664520)) + 8));
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664520)) + 0x3a), 0);
      wr32((uint32_t)(iVar2 + 0x14), 0);
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_101DA3E3), 2u, (const CowU32[]){ uVar1, 1 }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_101f2600(g, COW_IMG(COW_ADDR_LIFT_101DA3EE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1066342C)) + 0x89a), 0xffff);
      cow_bridge_1020a4c0(g, COW_IMG(COW_ADDR_LIFT_101DA408), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA417), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EF68) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA426), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EF54) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA435), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EF40) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA444), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EF2C) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA453), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EF18) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA462), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EF04) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA471), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EEF0) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA480), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EEDC) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA48F), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EEC8) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA49E), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EE3C) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA4AD), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EEA0) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA4BC), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EE8C) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA4CB), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EE78) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA4DA), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EE64) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DA4E9), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037EE50) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_101d7820(g, COW_IMG(COW_ADDR_LIFT_101DA4F4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10663448)) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_101DA503), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10663448)) }, g->ecx, g->edx, g->eax, 4u);
        wr32(COW_IMG(COW_ADDR_LIFT_10663448), 0);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10663444)) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_101DA51B), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10663444)) }, g->ecx, g->edx, g->eax, 4u);
        wr32(COW_IMG(COW_ADDR_LIFT_10663444), 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101da370(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101da370: push ebx */
    cow_lift_101da370(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
