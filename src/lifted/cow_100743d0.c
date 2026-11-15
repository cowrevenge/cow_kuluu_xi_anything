/* f_0x100743d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100743d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100743d0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_1047D130));
      iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(5)));
      if (rd32((uint32_t)param_1) == 0) {
        if (iVar3 != 0) {
          piVar1 = rd32((uint32_t)(iVar3 + 0x10));
          if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))) != 0) {
            if (piVar1 == (CowU32)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = rd32((uint32_t)piVar1);
            }
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), iVar3);
            if (iVar3 != 0) {
              do {
                if ((rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) + 0x20)) & rd32((uint32_t)(param_1 + 4u * (uint32_t)(4)))) == rd32((uint32_t)(param_1 + 4u * (uint32_t)(3)))) {
                  return;
                }
                piVar1 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) + 0x10));
                if (piVar1 == (CowU32)0x0) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = rd32((uint32_t)piVar1);
                }
                wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), iVar3);
              } while (iVar3 != 0);
            }
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
            return;
          }
          if (piVar1 != (CowU32)0x0) {
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), rd32((uint32_t)piVar1));
            return;
          }
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
        }
        return;
      }
      if (iVar3 != 0) {
        piVar1 = rd32((uint32_t)(iVar3 + 8));
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))) == 0) {
          if (piVar1 == (CowU32)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = rd32((uint32_t)piVar1);
          }
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), iVar3);
          while (iVar3 != 0) {
            iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(5)));
            if ((rd32((uint32_t)(iVar3 + 0x24)) & 0x7f) == 1) {
              if ((int32_t)rd32((uint32_t)(iVar3 + 0x38)) != iVar2) {
                wr32((uint32_t)(iVar3 + 0x38), iVar2);
                wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 1);
                goto L_100744f8;
              }
              if (rd32((uint32_t)(iVar3 + 0x3c)) == (CowU32)0x0) {
                wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
              }
              else {
                wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), rd32((uint32_t)rd32((uint32_t)((iVar3 + 0x3c)))));
              }
            }
            else {
    L_100744f8:
              if ((rd8((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) + 0x24)) & 0x7f) == 0) {
                uVar4 = cow_bridge_10072270(g, COW_IMG(COW_ADDR_LIFT_1007445B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                param_1 = (CowU32)((uint64_t)uVar4 >> 0x20);
                wr32((uint32_t)((int)uVar4 + 0x38), iVar2);
                iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(6)));
                wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar3 + -1);
                if (iVar3 + -1 < 0) break;
              }
            }
            if ((rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) + 0x24)) & 0x7f) == rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)))) {
              return;
            }
            piVar1 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) + 8));
            if (piVar1 == (CowU32)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = rd32((uint32_t)piVar1);
            }
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), iVar3);
          }
        }
        else {
          if (piVar1 == (CowU32)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = rd32((uint32_t)piVar1);
          }
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), iVar3);
          if (iVar3 != 0) {
            do {
              iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(5)));
              if ((rd32((uint32_t)(iVar3 + 0x24)) & 0x7f) == 1) {
                if ((int32_t)rd32((uint32_t)(iVar3 + 0x38)) != iVar2) {
                  wr32((uint32_t)(iVar3 + 0x38), iVar2);
                  wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 1);
                  goto L_1007444e;
                }
                if (rd32((uint32_t)(iVar3 + 0x3c)) == (CowU32)0x0) {
                  wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
                }
                else {
                  wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), rd32((uint32_t)rd32((uint32_t)((iVar3 + 0x3c)))));
                }
              }
              else {
    L_1007444e:
                if ((rd8((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) + 0x24)) & 0x7f) == 0) {
                  uVar4 = cow_bridge_10072270(g, COW_IMG(COW_ADDR_LIFT_10074505), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                  param_1 = (CowU32)((uint64_t)uVar4 >> 0x20);
                  wr32((uint32_t)((int)uVar4 + 0x38), iVar2);
                  iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(6)));
                  wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar3 + -1);
                  if (iVar3 + -1 < 0) break;
                }
              }
              iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(5)));
              if (((rd32((uint32_t)(iVar3 + 0x24)) & 0x7f) == rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)))) &&
                 ((rd32((uint32_t)(iVar3 + 0x20)) & rd32((uint32_t)(param_1 + 4u * (uint32_t)(4)))) == rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))))) {
                return;
              }
              if (rd32((uint32_t)(iVar3 + 8)) == (CowU32)0x0) {
                iVar3 = 0;
              }
              else {
                iVar3 = rd32((uint32_t)rd32((uint32_t)((iVar3 + 8))));
              }
              wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), iVar3);
              if (iVar3 == 0) {
                wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
                return;
              }
            } while( 1 );
          }
        }
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, ebp, esi], frame pointer no, 0 locals, pops [esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100743d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->edx = g->ecx;   /* 0x100743d0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100743d2: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100743d3: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100743d4: push esi */
    { uint32_t A = (uint32_t)(g->edx); g->eax = (uint32_t)(rd32(A)); }   /* 0x100743d5: register eax, replayed as the entry ran it */
    g->esi = rd32(COW_IMG(COW_ADDR_LIFT_1047D130));   /* 0x100743d7: the value the entry loaded and the decompiler dropped */
    cow_lift_100743d0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
