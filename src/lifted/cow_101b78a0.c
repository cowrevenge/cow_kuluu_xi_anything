/* f_0x101b78a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101b78a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101b78a0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    _Bool bVar1;
      
      if (param_1 < 0x7c84) {
        if (param_1 == 0x7c83) goto L_101b7b1d;
        if (param_1 < 0x6084) {
          if (param_1 != 0x6083) {
            if (param_1 < 0x5484) {
              if (param_1 != 0x5483) {
                if (param_1 < 0x4e84) {
                  if (param_1 != 0x4e83) {
                    if (param_1 == 0x4583) {
                      g->eax = (CowU32)(0x9483); return;
                    }
                    if ((param_1 != 0x4a83) && (param_1 != 0x4c83)) {
                      g->eax = (CowU32)(param_1); return;
                    }
                  }
                }
                else if ((param_1 != 0x5083) && (param_1 != 0x5283)) {
                  g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(param_1) & 0xffffu)); return;
                }
              }
            }
            else if (param_1 < 0x5a84) {
              if (((param_1 != 0x5a83) && (param_1 != 0x5683)) && (param_1 != 0x5883)) {
                g->eax = (CowU32)(param_1); return;
              }
            }
            else if ((param_1 != 0x5c83) && (param_1 != 0x5e83)) {
              g->eax = (CowU32)(param_1); return;
            }
          }
          goto L_101b78f8;
        }
        if (param_1 < 0x7384) {
          if (param_1 != 0x7383) {
            if (param_1 < 0x6e84) {
              if (((param_1 != 0x6e83) && (param_1 != 0x6383)) &&
                 ((param_1 != 0x6583 && (param_1 != 0x6783)))) {
                g->eax = (CowU32)(param_1); return;
              }
            }
            else {
              if (param_1 == 0x7083) goto L_101b7b1d;
              if (param_1 != 0x7183) {
                g->eax = (CowU32)(param_1); return;
              }
            }
            goto L_101b78f8;
          }
          goto L_101b7b1d;
        }
        if (0x7783 < param_1) {
          if (param_1 == 0x7983) goto L_101b7b1d;
          if (param_1 != 0x7a83) {
            g->eax = (CowU32)(param_1); return;
          }
          goto L_101b78f8;
        }
        if ((param_1 == 0x7783) || (param_1 == 0x7483)) goto L_101b78f8;
        bVar1 = param_1 == 0x7583;
      }
      else {
        if (param_1 < 0xc283) {
          if (param_1 != 0xc282) {
            if (param_1 < 0xb583) {
              if (param_1 != 0xb582) {
                if (param_1 < 0xaf83) {
                  if ((((param_1 != 0xaf82) && (param_1 != 0xa982)) && (param_1 != 0xab82)) &&
                     (param_1 != 0xad82)) {
                    g->eax = (CowU32)(param_1); return;
                  }
                }
                else if ((param_1 != 0xb182) && (param_1 != 0xb382)) {
                  g->eax = (CowU32)(param_1); return;
                }
              }
            }
            else if (param_1 < 0xbb83) {
              if (((param_1 != 0xbb82) && (param_1 != 0xb782)) && (param_1 != 0xb982)) {
                g->eax = (CowU32)(param_1); return;
              }
            }
            else if ((param_1 != 0xbd82) && (param_1 != 0xbf82)) {
              g->eax = (CowU32)(param_1); return;
            }
          }
          goto L_101b78f8;
        }
        if (param_1 < 0xd383) {
          if (param_1 == 0xd382) {
    L_101b78f8:
            g->eax = (CowU32)(param_1 + 0x100); return;
          }
          if (param_1 < 0xcf83) {
            if (param_1 == 0xcf82) goto L_101b7b1d;
            if (((param_1 != 0xc482) && (param_1 != 0xc682)) && (param_1 != 0xcd82)) {
              g->eax = (CowU32)(param_1); return;
            }
            goto L_101b78f8;
          }
          if (param_1 == 0xd082) goto L_101b78f8;
          bVar1 = param_1 == 0xd282;
        }
        else {
          if (param_1 < 0xd883) {
            if ((param_1 == 0xd882) || (param_1 == 0xd582)) goto L_101b7b1d;
            if (param_1 != 0xd682) {
              g->eax = (CowU32)(param_1); return;
            }
            goto L_101b78f8;
          }
          if (param_1 == 0xd982) goto L_101b78f8;
          bVar1 = param_1 == 0xdb82;
        }
      }
      if (!bVar1) {
        g->eax = (CowU32)(param_1); return;
      }
    L_101b7b1d:
      g->eax = (CowU32)(param_1 - 0x100); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101b78a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x101b78a0: the value the entry loaded and the decompiler dropped */
    g->ecx = g->eax;   /* 0x101b78a4: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x101b78a6: register ecx, replayed as the entry ran it */
    cow_lift_101b78a0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
