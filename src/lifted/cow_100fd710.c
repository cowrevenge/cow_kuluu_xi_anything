/* f_0x100fd710 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100fd710 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100fd710(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 pbVar4;
    int iVar5;
    int iVar6;
    CowU32 uVar7;
    CowU8 bVar8;
    CowU32 pbVar9;
    CowU8 local_10[16];
    _Bool bVar10;
      
      if ((param_3 == 0) || (param_2 == 0)) {
        g->eax = (CowU32)(0); return;
      }
      local_10[0] = 0;
      local_10[1] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
      local_10[4] = 0;
      local_10[5] = 0;
      local_10[6] = 0;
      local_10[7] = 0;
      local_10[8] = 0;
      local_10[9] = 0;
      local_10[10] = 0;
      local_10[0xb] = 0;
      local_10[0xc] = 0;
      local_10[0xd] = 0;
      local_10[0xe] = 0;
      local_10[0xf] = 0;
      if (param_3 != 0) {
        pbVar9 = local_10;
        uVar7 = (CowU32)param_3;
        iVar3 = 3;
        do {
          if (iVar3 < 1) break;
          uVar1 = uVar7 / 100;
          if (uVar7 % 100 != 0) {
            uVar7 = (uVar7 % 100) * param_1;
            bVar10 = 0;
            if (uVar7 != 0) {
              pbVar4 = pbVar9;
              do {
                uVar2 = uVar7 / 100;
                bVar8 = rd8((uint32_t)pbVar4) + (char)(uVar7 % 100) + bVar10;
                bVar10 = 99 < bVar8;
                wr8((uint32_t)pbVar4, bVar8);
                if (bVar10) {
                  wr8((uint32_t)pbVar4, rd8((uint32_t)pbVar4) + 0x9c);
                }
                pbVar4 = pbVar4 + 1;
                uVar7 = uVar2;
              } while (uVar2 != 0);
            }
          }
          pbVar9 = pbVar9 + 1;
          uVar7 = uVar1;
          iVar3 = iVar3 + -1;
        } while (uVar1 != 0);
      }
      if (1 < param_2) {
        uVar7 = 0;
        iVar3 = 0;
        do {
          uVar1 = local_10[iVar3] * param_2 + uVar7;
          uVar7 = uVar1 / 100;
          iVar5 = iVar3 + 1;
          local_10[iVar3] = (CowU8)(uVar1 % 100);
          iVar3 = iVar5;
        } while (iVar5 < 10);
      }
      iVar5 = 0;
      iVar6 = 2;
      iVar3 = 1;
      do {
        iVar5 = iVar5 + (CowU32)local_10[iVar6] * iVar3;
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 * 100;
      } while (iVar6 < 10);
      if (iVar5 == 0) {
        iVar5 = 1;
      }
      g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(iVar5) & 0xffffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100fd710(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_3;   /* 0x100fd710: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x10u;                      /* 0x100fd714: 16 bytes of locals */
    cow_lift_100fd710(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
