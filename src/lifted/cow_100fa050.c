/* f_0x100fa050 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100fa050 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100fa050(Guest* g, CowU32 param_1)
{
    char cVar1;
    wr32(COW_IMG(COW_ADDR_LIFT_104DFD98), param_1);
      cVar1 = cow_bridge_100eb2b0(g, COW_IMG(COW_ADDR_LIFT_100FA060), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      if (cVar1 == '\x01') {
        cVar1 = cow_bridge_100e5190(g, COW_IMG(COW_ADDR_LIFT_100FA06D), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        if (cVar1 == '\x01') {
          cVar1 = cow_bridge_100e8930(g, COW_IMG(COW_ADDR_LIFT_100FA07A), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
          if (cVar1 == '\x01') {
            cVar1 = cow_bridge_100f88b0(g, COW_IMG(COW_ADDR_LIFT_100FA087), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
            if (cVar1 == '\x01') {
              cVar1 = cow_bridge_100e0560(g, COW_IMG(COW_ADDR_LIFT_100FA094), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
              if (cVar1 == '\x01') {
                cVar1 = cow_bridge_100eadf0(g, COW_IMG(COW_ADDR_LIFT_100FA0A1), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                if (cVar1 == '\x01') {
                  cVar1 = cow_bridge_100f0720(g, COW_IMG(COW_ADDR_LIFT_100FA0AE), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                  if (cVar1 == '\x01') {
                    cVar1 = cow_bridge_100f0650(g, COW_IMG(COW_ADDR_LIFT_100FA0BB), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                    if (cVar1 == '\x01') {
                      cVar1 = cow_bridge_100e3ef0(g, COW_IMG(COW_ADDR_LIFT_100FA0C8), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                      if (cVar1 == '\x01') {
                        cVar1 = cow_bridge_100f8780(g, COW_IMG(COW_ADDR_LIFT_100FA0D1), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                        if (cVar1 == '\x01') {
                          cVar1 = cow_bridge_100e33c0(g, COW_IMG(COW_ADDR_LIFT_100FA0DA), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                          if (cVar1 == '\x01') {
                            cVar1 = cow_bridge_100e8440(g, COW_IMG(COW_ADDR_LIFT_100FA0E8), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10362330) }, 0u, 0u, g->eax, 4u);
                            if (cVar1 == '\x01') {
                              cVar1 = cow_bridge_100e4300(g, COW_IMG(COW_ADDR_LIFT_100FA0F4), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                              if (cVar1 == '\x01') {
                                cVar1 = cow_bridge_100e5f70(g, COW_IMG(COW_ADDR_LIFT_100FA0FD), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                                if (cVar1 == '\x01') {
                                  cVar1 = cow_bridge_100e6180(g, COW_IMG(COW_ADDR_LIFT_100FA106), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                                  if (cVar1 == '\x01') {
                                    cVar1 = cow_bridge_100f0050(g, COW_IMG(COW_ADDR_LIFT_100FA10F), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                                    if (cVar1 == '\x01') {
                                      cVar1 = cow_bridge_100f92f0(g, COW_IMG(COW_ADDR_LIFT_100FA118), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                                      if (cVar1 == '\x01') {
                                        cVar1 = cow_bridge_100e0040(g, COW_IMG(COW_ADDR_LIFT_100FA121), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                                        if (cVar1 == '\x01') {
                                          cVar1 = cow_bridge_100f8c60(g, COW_IMG(COW_ADDR_LIFT_100FA12A), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                                          if (cVar1 == '\x01') {
                                            cVar1 = cow_bridge_100e4340(g, COW_IMG(COW_ADDR_LIFT_100FA134), 1u, (const CowU32[]){ param_1 }, 0u, 0u, g->eax, 4u);
                                            if (cVar1 == '\x01') {
                                              cVar1 = cow_bridge_101131b0(g, COW_IMG(COW_ADDR_LIFT_100FA140), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                                              if (cVar1 == '\x01') {
                                                g->eax = (CowU32)(1); return;
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
      g->eax = (CowU32)(1); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100fa050(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100fa050: push esi */
    cow_lift_100fa050(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
