/* f_0x10080210 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10080210 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10080210(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uStack_344;
    CowU8 auStack_340[64];
    CowU8 auStack_300[768];
    if (((-1 < param_1) && (param_1 < 0x1d4)) && (rd32(COW_IMG(COW_ADDR_LIFT_10662DCC)) != 0)) {
        uVar1 = cow_bridge_1025b580(g, COW_IMG(COW_ADDR_LIFT_10080247), 1u, (const CowU32[]){ 0x24 }, 0u, 0u, g->eax, 0u);
        iVar2 = cow_bridge_101c4740(g, COW_IMG(COW_ADDR_LIFT_10080267), 4u, (const CowU32[]){ uVar1, auStack_340, 0x40, 0 }, 0u, 0u, g->eax, 0u);
        if (iVar2 == 0x40) {
          cow_bridge_10257bc0(g, COW_IMG(COW_ADDR_LIFT_1008027C), 2u, (const CowU32[]){ auStack_340, 0x40 }, 273142304u, 0u, g->eax, 0u);
          uVar3 = cow_bridge_10080300(g, COW_IMG(COW_ADDR_LIFT_10080282), 1u, (const CowU32[]){ param_1 }, 0u, 0u, g->eax, 4u);
          uVar4 = cow_bridge_10257ca0(g, COW_IMG(COW_ADDR_LIFT_10080295), 2u, (const CowU32[]){ &uStack_344, uVar3 }, 273142304u, 0u, g->eax, 0u);
          if (uVar4 < 0x301) {
            uVar5 = cow_bridge_101c4740(g, COW_IMG(COW_ADDR_LIFT_100802B6), 4u, (const CowU32[]){ uVar1, auStack_300, uVar4, uStack_344 }, 0u, 0u, g->eax, 0u);
            if (uVar5 == uVar4) {
              cow_bridge_10257d00(g, COW_IMG(COW_ADDR_LIFT_100802CA), 2u, (const CowU32[]){ auStack_300, uVar4 }, 273142304u, 0u, g->eax, 0u);
              uVar3 = cow_bridge_10257d60(g, COW_IMG(COW_ADDR_LIFT_100802DB), 2u, (const CowU32[]){ auStack_300, 0 }, 273142304u, 0u, g->eax, 0u);
              cow_bridge_10077e30(g, COW_IMG(COW_ADDR_LIFT_100802E6), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1034F7E0), uVar3 }, 0u, 0u, g->eax, 8u);
            }
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 836 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10080210(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x344u;                      /* 0x10080210: 836 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10080216: push esi */
    cow_lift_10080210(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
