/* f_0x1021e550 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1021e550 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1021e550(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    CowU8 bVar5;
    CowU32 uVar6;
    CowU32 puVar7;
    CowU32 puVar8;
    int local_4;
    local_4 = 0;
      if (param_1 == 0) {
        if (param_6 != (CowU32)0x0) {
          wr8((uint32_t)param_6, 0);
          g->eax = (CowU32)(param_4); return;
        }
      }
      else {
        uVar6 = 1;
        if (1 < param_5) {
          do {
            iVar1 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3;
            uVar2 = uVar6 & 0x80000007;
            if ((int)uVar2 < 0) {
              uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
            }
            bVar5 = (CowU8)(1 << ((CowU8)uVar2 & 0x1f));
            if ((rd8((uint32_t)(iVar1 + param_1)) & bVar5) == 0) {
              if ((bVar5 & rd8((uint32_t)(iVar1 + param_2))) != 0) {
                wr8((uint32_t)(iVar1 + param_2), ~bVar5 & rd8((uint32_t)(iVar1 + param_2)));
                iVar1 = 0;
                if (0 < param_5) {
                  do {
                    if (rd16((uint32_t)(param_3 + iVar1 * 2)) == uVar6) break;
                    iVar1 = iVar1 + 1;
                  } while (iVar1 < param_5);
                }
                if (iVar1 < param_5 + -1) {
                  iVar3 = (param_5 + -1) - iVar1;
                  puVar7 = (CowU32)(param_3 + 2 + iVar1 * 2);
                  puVar8 = (CowU32)(param_3 + iVar1 * 2);
                  for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
                    wr16((uint32_t)puVar8, rd16((uint32_t)puVar7));
                    puVar7 = puVar7 + 2u * (uint32_t)(1);
                    puVar8 = puVar8 + 2u * (uint32_t)(1);
                  }
                  iVar1 = iVar1 + iVar3;
                }
                wr16((uint32_t)(param_3 + iVar1 * 2), 0);
                param_4 = param_4 + -1;
    L_1021e637:
                local_4 = local_4 + 1;
              }
            }
            else if ((bVar5 & rd8((uint32_t)(iVar1 + param_2))) == 0) {
              wr8((uint32_t)(iVar1 + param_2), rd8((uint32_t)(iVar1 + param_2)) | bVar5);
              wr16((uint32_t)(param_3 + param_4 * 2), (short)uVar6);
              param_4 = param_4 + 1;
              goto L_1021e637;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < param_5);
        }
        if (param_6 != (CowU32)0x0) {
          wr8((uint32_t)param_6, local_4 != 0);
        }
      }
      g->eax = (CowU32)(param_4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ecx], frame pointer no, 0 locals, pops [ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1021e550(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1021e550: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1021e551: register eax, replayed as the entry ran it */
    cow_lift_1021e550(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
