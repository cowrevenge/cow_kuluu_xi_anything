/* f_0x10297ce0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10297ce0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10297ce0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    if (param_1 == 0) {
        cow_bridge_10282490(g, COW_IMG(COW_ADDR_LIFT_10297CFE), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, ((g->eax - 1u) - 1u), 0u);
        cow_bridge_102824e0(g, COW_IMG(COW_ADDR_LIFT_10297D0B), 4u, (const CowU32[]){ 0u, 0u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297D20), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 9, 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297D5E), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x34, 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297D70), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x38, 8 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297D82), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x36, 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297D94), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x35, 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297DA6), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x39, 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297DB8), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x3a, 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297DCA), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x3b, 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
        uVar2 = 7;
        uVar1 = 0x37;
      }
      else {
        if (param_1 == 1) {
          cow_bridge_10282490(g, COW_IMG(COW_ADDR_LIFT_10297D30), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102824e0(g, COW_IMG(COW_ADDR_LIFT_10297D49), 4u, (const CowU32[]){ 255u, 255u, 255u, 255u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297DDC), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 9, 1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297DEE), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x34, 1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297E00), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x38, 8 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297E36), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x36, 1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297E48), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x35, 1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297E5A), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x39, 1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297E6C), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x3a, 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297E7E), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x3b, 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297E90), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x37, 8 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297EA2), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x16, 3 }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        if (param_1 != 2) {
          return;
        }
        cow_bridge_10282490(g, COW_IMG(COW_ADDR_LIFT_10297E08), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102824e0(g, COW_IMG(COW_ADDR_LIFT_10297E21), 4u, (const CowU32[]){ 255u, 255u, 255u, 255u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297EB4), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x34, 0 }, g->ecx, g->edx, g->eax, 0u);
        uVar2 = 2;
        uVar1 = 9;
      }
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297EC6), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), uVar1, uVar2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_10297ED8), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), 0x16, 2 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10297ce0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x10297ce0: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10297ce4: register eax, replayed as the entry ran it */
    cow_lift_10297ce0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
