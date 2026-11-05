/* f_0x1028d370 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028d370 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1028d370(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    int iVar6;
    iVar1 = param_1;
      iVar6 = 0;
      if (0 < rd32((uint32_t)(param_1 + 0x58))) {
        while ((rd32((uint32_t)(param_3 + iVar6 * 4)) != 0 ||
               (iVar3 = cow_bridge_1028d4b0(g, COW_IMG(COW_ADDR_LIFT_1028D39D), 3u, (const CowU32[]){ iVar1, iVar6, &param_1 }, 0u, 0u, g->eax, 12u), uVar2 = param_2, iVar3 == 0))) {
          iVar6 = iVar6 + 1;
          if (rd32((uint32_t)(iVar1 + 0x58)) <= iVar6) {
            return;
          }
        }
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028D3C2), 2u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103BA4A0) }, 0u, 0u, g->eax, 0u);
        iVar6 = 0;
        if (0 < rd32((uint32_t)(iVar1 + 0x58))) {
          do {
            if ((rd32((uint32_t)(param_3 + iVar6 * 4)) != 1) &&
               (iVar3 = cow_bridge_1028d4b0(g, COW_IMG(COW_ADDR_LIFT_1028D3ED), 3u, (const CowU32[]){ iVar1, iVar6, &param_1 }, 0u, 0u, g->eax, 12u), iVar3 != 0)) {
              uVar4 = cow_bridge_10279b60(g, COW_IMG(COW_ADDR_LIFT_1028D403), 2u, (const CowU32[]){ iVar1, iVar6 }, 0u, 0u, g->eax, 0u);
              uVar5 = cow_bridge_10279bc0(g, COW_IMG(COW_ADDR_LIFT_1028D40E), 3u, (const CowU32[]){ iVar1, 3, iVar6 }, 0u, 0u, g->eax, 0u);
              param_2 = cow_bridge_10279b40(g, COW_IMG(COW_ADDR_LIFT_1028D422), 2u, (const CowU32[]){ iVar1, rd32((uint32_t)(rd32((uint32_t)(iVar1 + 0x98)) + iVar6 * 4)) }, 0u, 0u, g->eax, 0u);
              cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028D432), 3u, (const CowU32[]){ uVar2, COW_IMG(COW_ADDR_LIFT_103BA488), uVar4 }, 0u, 0u, g->eax, 0u);
              cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028D442), 3u, (const CowU32[]){ uVar2, COW_IMG(COW_ADDR_LIFT_103BA2A8), param_2 }, 0u, 0u, g->eax, 0u);
              cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028D452), 3u, (const CowU32[]){ uVar2, COW_IMG(COW_ADDR_LIFT_103BA2A8), iVar3 }, 0u, 0u, g->eax, 0u);
              cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028D465), 3u, (const CowU32[]){ uVar2, COW_IMG(COW_ADDR_LIFT_103BA2A8), uVar5 }, 0u, 0u, g->eax, 0u);
              cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028D475), 3u, (const CowU32[]){ uVar2, COW_IMG(COW_ADDR_LIFT_103BA480), param_1 }, 0u, 0u, g->eax, 0u);
              cow_bridge_1028cf60(g, COW_IMG(COW_ADDR_LIFT_1028D47D), 3u, (const CowU32[]){ iVar1, uVar2, iVar6 }, 0u, 0u, g->eax, 0u);
              cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028D488), 2u, (const CowU32[]){ uVar2, COW_IMG(COW_ADDR_LIFT_103B3238) }, 0u, 0u, g->eax, 0u);
              wr32((uint32_t)(param_3 + iVar6 * 4), 1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < rd32((uint32_t)(iVar1 + 0x58)));
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 8 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1028d370(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 0x8u;                      /* 0x1028d370: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1028d373: push ebx */
    cow_lift_1028d370(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
