/* f_0x100eb2b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100eb2b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100eb2b0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    CowU32 puVar6;
    uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB2BC), 2u, (const CowU32[]){ 28u, 269403296u }, g->ecx, g->edx, g->eax, 8u);
      if ((char)uVar2 == '\x01') {
        uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB2D3), 2u, (const CowU32[]){ 30u, 269403376u }, g->ecx, g->edx, g->eax, 8u);
        if ((char)uVar2 == '\x01') {
          uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB2EA), 2u, (const CowU32[]){ 31u, 269403472u }, g->ecx, g->edx, g->eax, 8u);
          if ((char)uVar2 == '\x01') {
            uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB301), 2u, (const CowU32[]){ 32u, 269403696u }, g->ecx, g->edx, g->eax, 8u);
            if ((char)uVar2 == '\x01') {
              uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB318), 2u, (const CowU32[]){ 29u, 269403840u }, g->ecx, g->edx, g->eax, 8u);
              if ((char)uVar2 == '\x01') {
                uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB32F), 2u, (const CowU32[]){ 38u, 269403952u }, g->ecx, g->edx, g->eax, 8u);
                if ((char)uVar2 == '\x01') {
                  uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB346), 2u, (const CowU32[]){ 33u, 269404208u }, g->ecx, g->edx, g->eax, 8u);
                  if ((char)uVar2 == '\x01') {
                    uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB35D), 2u, (const CowU32[]){ 34u, 269404256u }, g->ecx, g->edx, g->eax, 8u);
                    if ((char)uVar2 == '\x01') {
                      uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB374), 2u, (const CowU32[]){ 35u, 269404656u }, g->ecx, g->edx, g->eax, 8u);
                      if ((char)uVar2 == '\x01') {
                        uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB38B), 2u, (const CowU32[]){ 37u, 269404576u }, g->ecx, g->edx, g->eax, 8u);
                        if ((char)uVar2 == '\x01') {
                          uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB3A2), 2u, (const CowU32[]){ 43u, 269404848u }, g->ecx, g->edx, g->eax, 8u);
                          if ((char)uVar2 == '\x01') {
                            uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB3B9), 2u, (const CowU32[]){ 44u, 269404864u }, g->ecx, g->edx, g->eax, 8u);
                            if ((char)uVar2 == '\x01') {
                              uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB3D0), 2u, (const CowU32[]){ 36u, 269404880u }, g->ecx, g->edx, g->eax, 8u);
                              if ((char)uVar2 == '\x01') {
                                uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB3E6), 2u, (const CowU32[]){ 210u, 269404976u }, g->ecx, g->edx, g->eax, 8u);
                                if ((char)uVar2 == '\x01') {
                                  uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB3F9), 2u, (const CowU32[]){ 115u, 269402432u }, g->ecx, g->edx, g->eax, 8u);
                                  if ((char)uVar2 == '\x01') {
                                    uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB40C), 2u, (const CowU32[]){ 116u, 269402512u }, g->ecx, g->edx, g->eax, 8u);
                                    if ((char)uVar2 == '\x01') {
                                      uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB41F), 2u, (const CowU32[]){ 71u, 269402912u }, g->ecx, g->edx, g->eax, 8u);
                                      if ((char)uVar2 == '\x01') {
                                        uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB432), 2u, (const CowU32[]){ 73u, 269403072u }, g->ecx, g->edx, g->eax, 8u);
                                        if ((char)uVar2 == '\x01') {
                                          uVar2 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100EB448), 2u, (const CowU32[]){ 211u, 269406080u }, g->ecx, g->edx, g->eax, 8u);
                                          if ((char)uVar2 == '\x01') {
                                            iVar5 = 0x12;
                                            puVar6 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9868);
                                            for (iVar3 = 0x407b; iVar3 != 0; iVar3 = iVar3 + -1) {
                                              wr32((uint32_t)puVar6, 0);
                                              puVar6 = puVar6 + 1;
                                            }
                                            iVar3 = 0;
                                            do {
                                              bVar1 = 0;
                                              iVar4 = iVar3;
                                              do {
                                                iVar3 = iVar4 + 0x2c;
                                                wr8((uint32_t)(iVar4 + 0x986a + rd32(COW_IMG(COW_ADDR_LIFT_104DFD98))), bVar1);
                                                bVar1 = bVar1 + 1;
                                                iVar4 = iVar3;
                                              } while (bVar1 < 0x51);
                                              iVar5 = iVar5 + -1;
                                            } while (iVar5 != 0);
                                            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
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
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar2 & 0xffffff00) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100eb2b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */


    cow_lift_100eb2b0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
