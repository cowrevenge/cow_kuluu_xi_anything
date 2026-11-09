/* f_0x101604b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101604b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101604b0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_101604C5), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x1c, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_101604DB), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x19, 5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_101604F1), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x18, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160509), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 0x11, 2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160521), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 0x10, 1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160539), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 0xd, 1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160551), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 0xe, 1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160569), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 0x18, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160581), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 1, 5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160599), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 2, 2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_101605B1), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 3, 1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_101605C9), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 4, 5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_101605E1), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 5, 2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_101605F9), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 6, 1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160611), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 1, 1, 1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160629), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 1, 4, 1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10160641), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 1, 0x18, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1045666C)), 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101604b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1045666C));   /* 0x101604b0: the value the entry loaded and the decompiler dropped */
    cow_lift_101604b0(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
