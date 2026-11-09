/* f_0x101779c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101779c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101779c0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 local_40;
    CowU32 local_3c;
    CowU32 local_38;
    CowU32 local_34;
    CowU32 local_30;
    CowU32 local_2c;
    CowU32 local_28;
    CowU32 local_24;
    CowU32 local_20;
    CowU32 local_1c;
    CowU32 local_18;
    CowU32 local_14;
    CowU32 local_10;
    CowU32 local_c;
    CowU32 local_8;
    CowU32 local_4;
    local_40 = 0x3f800000;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0x3f800000;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0x3f800000;
      cow_bridge_1000bd50(g, COW_IMG(COW_ADDR_LIFT_10177A58), 2u, (const CowU32[]){ 256u, g->eax }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xf4u))), COW_IMG(COW_ADDR_LIFT_10177A6E), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10177A86), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x89, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0x130u))), COW_IMG(COW_ADDR_LIFT_10177A9D), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0x142 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10177AB5), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 1, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10177ACD), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 2, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10177AE5), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 1, 1, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10177AFD), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 4, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10177B15), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, 5, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_10177B2D), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 1, 4, 1 }, g->ecx, g->edx, g->eax, 64u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 64 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101779c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 0x40u;                      /* 0x101779c0: 64 bytes of locals */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_1045666C));   /* 0x101779c3: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->esp)); }   /* 0x101779c9: register eax, replayed as the entry ran it */
    cow_lift_101779c0(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
