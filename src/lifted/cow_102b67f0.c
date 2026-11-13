/* f_0x102b67f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b67f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b67f0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    wr32((uint32_t)(param_1 + 0x54), COW_IMG(COW_ADDR_LIFT_109AEF58));
      wr32((uint32_t)(param_1 + 0x18), 3);
      wr32((uint32_t)(param_1 + 0x58), COW_IMG(COW_ADDR_LIFT_109AEE08));
      wr32((uint32_t)(param_1 + 0x1c), 3);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) == -0x920) {
        wr32((uint32_t)(param_1 + 0x5c), 0);
        wr32((uint32_t)(param_1 + 0x20), 0);
      }
      else {
        wr32((uint32_t)(param_1 + 0x5c), COW_IMG(COW_ADDR_LIFT_109AEEB0));
        wr32((uint32_t)(param_1 + 0x20), 2);
      }
      if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x930)) == 0) {
        wr32((uint32_t)(param_1 + 0x60), 0);
        wr32((uint32_t)(param_1 + 0x24), 0);
      }
      else {
        wr32((uint32_t)(param_1 + 0x60), COW_IMG(COW_ADDR_LIFT_109AED08));
        wr32((uint32_t)(param_1 + 0x24), 3);
      }
      iVar1 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x928));
      wr32((uint32_t)(param_1 + 0x14), 0x15);
      if (iVar1 == 0) {
        wr32((uint32_t)(param_1 + 100), 0);
        wr32((uint32_t)(param_1 + 0x28), 0);
        return;
      }
      wr32((uint32_t)(param_1 + 100), COW_IMG(COW_ADDR_LIFT_109AF058));
      wr32((uint32_t)(param_1 + 0x28), 6);
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
void cow_adapter_102b67f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x102b67f0: the value the entry loaded and the decompiler dropped */
    g->edx = 3u;   /* 0x102b67f4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b67f9: push esi */
    cow_lift_102b67f0(g, param_1);

    g->eax = (CowU32)(param_1);   /* what eax holds at every ret of the entry */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
