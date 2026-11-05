/* f_0x102b6720 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b6720 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b6720(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    int iVar3;
    wr32((uint32_t)(param_1 + 0x54), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x918)));
      wr32((uint32_t)(param_1 + 0x18), 3);
      uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x91c));
      wr32((uint32_t)(param_1 + 0x1c), 3);
      wr32((uint32_t)(param_1 + 0x58), uVar1);
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x920)) == 0) {
        wr32((uint32_t)(param_1 + 0x5c), 0);
        wr32((uint32_t)(param_1 + 0x20), 0);
      }
      else {
        wr32((uint32_t)(param_1 + 0x5c), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x920)));
        wr32((uint32_t)(param_1 + 0x20), 2);
      }
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x930)) == 0) {
        wr32((uint32_t)(param_1 + 0x60), 0);
        wr32((uint32_t)(param_1 + 0x24), 0);
      }
      else {
        wr32((uint32_t)(param_1 + 0x60), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x930)));
        wr32((uint32_t)(param_1 + 0x24), 3);
      }
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x928)) == 0) {
        wr32((uint32_t)(param_1 + 100), 0);
        wr32((uint32_t)(param_1 + 0x28), 0);
      }
      else {
        wr32((uint32_t)(param_1 + 100), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x928)));
        wr32((uint32_t)(param_1 + 0x28), 3);
      }
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x92c)) == 0) {
        wr32((uint32_t)(param_1 + 0x68), 0);
        wr32((uint32_t)(param_1 + 0x2c), 0);
      }
      else {
        wr32((uint32_t)(param_1 + 0x68), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x92c)));
        wr32((uint32_t)(param_1 + 0x2c), 3);
      }
      puVar2 = (CowU32)(param_1 + 0x40);
      iVar3 = 2;
      do {
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(0xf)), 0);
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      wr32((uint32_t)(param_1 + 0x14), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x940)));
      return;
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
void cow_adapter_102b6720(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099D200));   /* 0x102b6720: the value the entry loaded and the decompiler dropped */
    g->edx = 3u;   /* 0x102b6725: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b672a: push esi */
    g->esi = 0u;   /* 0x102b672b: the value the entry loaded and the decompiler dropped */
    cow_lift_102b6720(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
