/* f_0x101671d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101671d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101671d0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int local_8;
    cow_bridge_10074310(g, COW_IMG(COW_ADDR_LIFT_101671E8), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0x49, 0, 0xffffffff }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      if (local_8 != 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_10667A74), local_8 + 0x30);
      }
      cow_bridge_10074310(g, COW_IMG(COW_ADDR_LIFT_1016720E), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0x53, 0, 0xffffffff }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      if (local_8 != 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_1066714C), local_8 + 0x30);
      }
      cow_bridge_10074310(g, COW_IMG(COW_ADDR_LIFT_10167237), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 4, 0x5f6e6f6d, 0xffffffff }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      if (local_8 != 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_1057829C), local_8 + 0x30);
      }
      cow_bridge_10074310(g, COW_IMG(COW_ADDR_LIFT_1016725F), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 4, 0x32636e6d, 0xffffffff }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      if (local_8 != 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_105782A0), local_8 + 0x30);
      }
      cow_bridge_10074310(g, COW_IMG(COW_ADDR_LIFT_10167288), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 4, 0x6376656c, 0xffffffff }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      if (local_8 != 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_10667A78), local_8 + 0x30);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10667A74)) != 0) {
        iVar1 = 0;
        do {
          cow_bridge_1021e870(g, COW_IMG(COW_ADDR_LIFT_101672B5), 2u, (const CowU32[]){ iVar1 + rd32(COW_IMG(COW_ADDR_LIFT_10667A74)), 100 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
          iVar1 = iVar1 + 100;
        } while (iVar1 < 0x19000);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_1066714C)) != 0) {
        iVar1 = 0;
        do {
          cow_bridge_1021e870(g, COW_IMG(COW_ADDR_LIFT_101672DF), 2u, (const CowU32[]){ iVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1066714C)), 0x30 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
          iVar1 = iVar1 + 0x30;
        } while (iVar1 < 0x21000);
      }
      cow_bridge_1022bda0(g, COW_IMG(COW_ADDR_LIFT_101672F2), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      cow_bridge_1022be30(g, COW_IMG(COW_ADDR_LIFT_101672F9), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      cow_bridge_10223930(g, COW_IMG(COW_ADDR_LIFT_101672FE), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      cow_bridge_102239c0(g, COW_IMG(COW_ADDR_LIFT_10167305), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      cow_bridge_10226180(g, COW_IMG(COW_ADDR_LIFT_1016730A), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
      cow_bridge_10226210(g, COW_IMG(COW_ADDR_LIFT_10167311), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1047D128)), 0u);
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
void cow_adapter_101671d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1047D128));   /* 0x101671d0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x1cu;                      /* 0x101671d5: 28 bytes of locals */
    cow_lift_101671d0(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
