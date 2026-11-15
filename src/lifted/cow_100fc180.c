/* f_0x100fc180 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100fc180 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100fc180(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    CowU8 local_100[256];
    if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) == 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c35c), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c35c)) | param_1);
      uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c35c));
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 2) == 0) {
          if ((uVar1 & 4) == 0) {
            if ((uVar1 & 8) == 0) {
              if ((uVar1 & 0x10) == 0) {
                if ((uVar1 & 0x20) == 0) {
                  if ((uVar1 & 0x40) == 0) {
                    if ((char)uVar1 < '\0') {
                      puVar2 = COW_IMG(COW_ADDR_LIFT_1036245C);
                    }
                    else if ((uVar1 & 0x100) == 0) {
                      if ((uVar1 & 0x200) == 0) {
                        if ((uVar1 & 0x400) == 0) {
                          if ((uVar1 & 0x2000) == 0) {
                            if ((uVar1 & 0x4000) == 0) goto L_100fc28c;
                            puVar2 = COW_IMG(COW_ADDR_LIFT_10357CC4);
                          }
                          else {
                            puVar2 = COW_IMG(COW_ADDR_LIFT_10357CC8);
                          }
                        }
                        else {
                          puVar2 = COW_IMG(COW_ADDR_LIFT_10357CCC);
                        }
                      }
                      else {
                        puVar2 = COW_IMG(COW_ADDR_LIFT_10354010);
                      }
                    }
                    else {
                      puVar2 = COW_IMG(COW_ADDR_LIFT_10362458);
                    }
                  }
                  else {
                    puVar2 = COW_IMG(COW_ADDR_LIFT_10362460);
                  }
                }
                else {
                  puVar2 = COW_IMG(COW_ADDR_LIFT_1034F2A4);
                }
              }
              else {
                puVar2 = COW_IMG(COW_ADDR_LIFT_10362464);
              }
            }
            else {
              puVar2 = COW_IMG(COW_ADDR_LIFT_103514EC);
            }
          }
          else {
            puVar2 = COW_IMG(COW_ADDR_LIFT_10362468);
          }
        }
        else {
          puVar2 = COW_IMG(COW_ADDR_LIFT_103514E4);
        }
      }
      else {
        puVar2 = COW_IMG(COW_ADDR_LIFT_1036246C);
      }
      cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_100FC289), 2u, (const CowU32[]){ local_100, puVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 8u);
    L_100fc28c:
      cow_bridge_100f0550(g, COW_IMG(COW_ADDR_LIFT_100FC296), 1u, (const CowU32[]){ local_100 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
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
void cow_adapter_100fc180(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x100fc180: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x100u;                      /* 0x100fc185: 256 bytes of locals */
    cow_lift_100fc180(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 8 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
