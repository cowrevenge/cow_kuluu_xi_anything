/* f_0x102abb10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102abb10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102abb10(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    int iVar3;
    CowU32 piVar4;
    int iStack_4c;
    CowU32 uStack_48;
    CowU32 uStack_44;
    CowU32 uStack_40;
    int aiStack_3c[6];
    CowU8 auStack_24[4];
    CowU32 auStack_20[2];
    CowU8 auStack_18[12];
    CowU8 auStack_c[12];
    iStack_4c = 0;
      if (0 < param_4) {
        do {
          iVar3 = rd32((uint32_t)(param_2 + iStack_4c * 4));
          uStack_48 = rd32((uint32_t)(param_1 + iVar3 * 4));
          uStack_44 = rd32((uint32_t)(param_1 + 4 + iVar3 * 4));
          uStack_40 = rd32((uint32_t)(param_1 + 8 + iVar3 * 4));
          iVar3 = 0;
          puVar2 = auStack_20;
          piVar4 = param_3;
          do {
            iVar1 = rd32((uint32_t)piVar4);
            aiStack_3c[iVar3 + 3] = iVar1;
            if (iVar1 == -1) {
              wr32((uint32_t)(puVar2 + 4u * (uint32_t)(-1)), 0xffffffff);
              wr32((uint32_t)puVar2, 0xffffffff);
              wr32((uint32_t)(puVar2 + 4u * (uint32_t)(1)), 0xffffffff);
            }
            else {
              wr32((uint32_t)(puVar2 + 4u * (uint32_t)(-1)), rd32((uint32_t)(param_1 + rd32((uint32_t)(param_2 + iVar1 * 4)) * 4)));
              wr32((uint32_t)puVar2, rd32((uint32_t)(param_1 + 4 + rd32((uint32_t)(param_2 + iVar1 * 4)) * 4)));
              wr32((uint32_t)(puVar2 + 4u * (uint32_t)(1)), rd32((uint32_t)(param_1 + 8 + rd32((uint32_t)(param_2 + iVar1 * 4)) * 4)));
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
            puVar2 = puVar2 + 3;
          } while (iVar3 < 3);
          cow_bridge_102abc10(g, COW_IMG(COW_ADDR_LIFT_102ABBC3), 5u, (const CowU32[]){ &uStack_48, auStack_24, auStack_18, auStack_c, aiStack_3c }, 0u, 0u, g->eax, 0u);
          iVar3 = 0;
          do {
            if (aiStack_3c[iVar3] != -1) {
              wr32((uint32_t)param_3, aiStack_3c[aiStack_3c[iVar3] + 3]);
            }
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < 3);
          iStack_4c = iStack_4c + 1;
          param_3 = piVar4;
        } while (iStack_4c < param_4);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 76 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102abb10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 0x4cu;                      /* 0x102abb10: 76 bytes of locals */
    cow_lift_102abb10(g, param_1, param_2, param_3, param_4);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
