/* f_0x101cbec0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101cbec0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101cbec0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBEC7), 1u, (const CowU32[]){ 47u }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBED9), 1u, (const CowU32[]){ 63u }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBEEB), 1u, (const CowU32[]){ 64u }, g->ecx, g->edx, g->eax, 4u);
          if (cVar1 == '\0') {
            cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBEFD), 1u, (const CowU32[]){ 65u }, g->ecx, g->edx, g->eax, 4u);
            if (cVar1 == '\0') {
              cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBF0F), 1u, (const CowU32[]){ 66u }, g->ecx, g->edx, g->eax, 4u);
              if (cVar1 == '\0') {
                cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBF21), 1u, (const CowU32[]){ 67u }, g->ecx, g->edx, g->eax, 4u);
                if (cVar1 == '\0') {
                  cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBF33), 1u, (const CowU32[]){ 68u }, g->ecx, g->edx, g->eax, 4u);
                  if (cVar1 == '\0') {
                    cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBF45), 1u, (const CowU32[]){ 69u }, g->ecx, g->edx, g->eax, 4u);
                    if (cVar1 == '\0') {
                      cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBF57), 1u, (const CowU32[]){ 70u }, g->ecx, g->edx, g->eax, 4u);
                      if (cVar1 == '\0') {
                        cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBF69), 1u, (const CowU32[]){ 71u }, g->ecx, g->edx, g->eax, 4u);
                        if (cVar1 == '\0') {
                          cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBF7B), 1u, (const CowU32[]){ 72u }, g->ecx, g->edx, g->eax, 4u);
                          if (cVar1 == '\0') {
                            cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBF8D), 1u, (const CowU32[]){ 73u }, g->ecx, g->edx, g->eax, 4u);
                            if (cVar1 == '\0') {
                              cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBF9F), 1u, (const CowU32[]){ 74u }, g->ecx, g->edx, g->eax, 4u);
                              if (cVar1 == '\0') {
                                cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBFB1), 1u, (const CowU32[]){ 75u }, g->ecx, g->edx, g->eax, 4u);
                                if (cVar1 == '\0') {
                                  cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBFBF), 1u, (const CowU32[]){ 76u }, g->ecx, g->edx, g->eax, 4u);
                                  if (cVar1 == '\0') {
                                    cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBFCD), 1u, (const CowU32[]){ 77u }, g->ecx, g->edx, g->eax, 4u);
                                    if (cVar1 == '\0') {
                                      cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBFDB), 1u, (const CowU32[]){ 78u }, g->ecx, g->edx, g->eax, 4u);
                                      if (cVar1 == '\0') {
                                        cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBFE9), 1u, (const CowU32[]){ 79u }, g->ecx, g->edx, g->eax, 4u);
                                        if (cVar1 == '\0') {
                                          cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CBFF7), 1u, (const CowU32[]){ 80u }, g->ecx, g->edx, g->eax, 4u);
                                          if (cVar1 == '\0') {
                                            cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CC005), 1u, (const CowU32[]){ 81u }, g->ecx, g->edx, g->eax, 4u);
                                            if (cVar1 == '\0') {
                                              cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CC013), 1u, (const CowU32[]){ 82u }, g->ecx, g->edx, g->eax, 4u);
                                              if (cVar1 == '\0') {
                                                cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_101CC021), 1u, (const CowU32[]){ 83u }, g->ecx, g->edx, g->eax, 4u);
                                                if (cVar1 == '\0') {
                                                  g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
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
void cow_adapter_101cbec0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */


    cow_lift_101cbec0(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
