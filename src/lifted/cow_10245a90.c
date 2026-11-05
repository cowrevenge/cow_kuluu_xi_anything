/* f_0x10245a90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10245a90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10245a90(Guest* g, CowU32 param_1, CowU32 param_2)
{
    CowU32 puVar1;
    CowU32 local_8;
    CowU8 local_4[4];
    if (rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)) != 0) {
        cow_bridge_1018bbb0(g, COW_IMG(COW_ADDR_LIFT_10245AA6), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)), 0u);
        puVar1 = (CowU32)cow_bridge_1018c180(g, COW_IMG(COW_ADDR_LIFT_10245AB0), 1u, (const CowU32[]){ local_4 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)), 0u);
        cow_bridge_1018bc40(g, COW_IMG(COW_ADDR_LIFT_10245ABF), 1u, (const CowU32[]){ rd32((uint32_t)puVar1) }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)), 0u);
        cow_bridge_1018bf50(g, COW_IMG(COW_ADDR_LIFT_10245ACD), 1u, (const CowU32[]){ param_1 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)), 0u);
        cow_bridge_1018bf00(g, COW_IMG(COW_ADDR_LIFT_10245ADB), 1u, (const CowU32[]){ param_2 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)), 0u);
        cow_bridge_1018c1e0(g, COW_IMG(COW_ADDR_LIFT_10245AE5), 1u, (const CowU32[]){ local_8 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)), 0u);
        puVar1 = (CowU32)cow_bridge_1018c180(g, COW_IMG(COW_ADDR_LIFT_10245AEF), 1u, (const CowU32[]){ &param_1 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)), 4u);
        cow_bridge_1018bbc0(g, COW_IMG(COW_ADDR_LIFT_10245AFD), 1u, (const CowU32[]){ 0 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)), 0u);
        cow_bridge_101874f0(g, COW_IMG(COW_ADDR_LIFT_10245B10), 2u, (const CowU32[]){ rd32((uint32_t)puVar1), local_8 }, 0x796e7573, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)), 0u);
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10245a90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1065CB04));   /* 0x10245a90: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x10245a95: 8 bytes of locals */
    cow_lift_10245a90(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
