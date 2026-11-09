/* f_0x1006be20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1006be20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1006be20(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    if (0x26f < rd32(COW_IMG(COW_ADDR_LIFT_10354040))) {
        if (rd32(COW_IMG(COW_ADDR_LIFT_10354040)) == 0x271) {
          cow_bridge_1006bd90(g, COW_IMG(COW_ADDR_LIFT_1006BE41), 1u, (const CowU32[]){ 4357u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10354040)), 4u);
        }
        iVar2 = 0;
        do {
          uVar1 = (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1047C114) + 4u * (uint32_t)(iVar2))) ^ rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1047C110) + 4u * (uint32_t)(iVar2)))) & 0x7fffffff ^
                  rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1047C110) + 4u * (uint32_t)(iVar2)));
          wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1047C110) + 4u * (uint32_t)(iVar2)), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1035404C) + (uVar1 & 1) * 4)) ^ uVar1 >> 1 ^ rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1047C744) + 4u * (uint32_t)(iVar2))));
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0xe3);
        if (iVar2 < 0x26f) {
          puVar3 = COW_IMG(COW_ADDR_LIFT_1047C110) + iVar2;
          do {
            puVar4 = puVar3 + 1;
            uVar1 = (rd32((uint32_t)(puVar3 + 4u * (uint32_t)(1))) ^ rd32((uint32_t)puVar3)) & 0x7fffffff ^ rd32((uint32_t)puVar3);
            wr32((uint32_t)puVar3, rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1035404C) + (uVar1 & 1) * 4)) ^ rd32((uint32_t)(puVar3 + 4u * (uint32_t)(-0xe3))) ^ uVar1 >> 1);
            puVar3 = puVar4;
          } while ((int)puVar4 < 0x1047cacc);
        }
        uVar1 = (rd32(COW_IMG(COW_ADDR_LIFT_1047C110)) ^ rd32(COW_IMG(COW_ADDR_LIFT_1047CACC))) & 0x7fffffff ^ rd32(COW_IMG(COW_ADDR_LIFT_1047CACC));
        wr32(COW_IMG(COW_ADDR_LIFT_1047CACC), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1035404C) + (uVar1 & 1) * 4)) ^ uVar1 >> 1 ^ rd32(COW_IMG(COW_ADDR_LIFT_1047C740)));
        wr32(COW_IMG(COW_ADDR_LIFT_10354040), 0);
      }
      puVar3 = COW_IMG(COW_ADDR_LIFT_1047C110) + rd32(COW_IMG(COW_ADDR_LIFT_10354040));
      wr32(COW_IMG(COW_ADDR_LIFT_10354040), rd32(COW_IMG(COW_ADDR_LIFT_10354040)) + 1);
      uVar1 = rd32((uint32_t)puVar3) ^ rd32((uint32_t)puVar3) >> 0xb;
      uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
      uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
      g->eax = (CowU32)(uVar1 >> 0x12 ^ uVar1); return;
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
void cow_adapter_1006be20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10354040));   /* 0x1006be20: the value the entry loaded and the decompiler dropped */
    cow_lift_1006be20(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
