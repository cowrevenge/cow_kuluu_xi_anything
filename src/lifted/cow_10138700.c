/* f_0x10138700 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10138700 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10138700(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_105781DC)) & 1) != 0) {
        g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_1036F940) + param_1 * 2); return;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_105781DC), rd32(COW_IMG(COW_ADDR_LIFT_105781DC)) | 1);
      iVar1 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if (((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) & 0x80) != 0) && ((iVar1 == 2 || (iVar1 == 3)))) {
        iVar1 = 1;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_1036F94E), (iVar1 != 0) + '\t');
      iVar1 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if (((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) & 0x80) != 0) && ((iVar1 == 2 || (iVar1 == 3)))) {
        iVar1 = 1;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_1036F94F), (iVar1 != 0) + '\a');
      iVar1 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if (((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) & 0x80) != 0) && ((iVar1 == 2 || (iVar1 == 3)))) {
        iVar1 = 1;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_1036F950), (iVar1 == 0) + '\t');
      iVar1 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if (((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) & 0x80) != 0) && ((iVar1 == 2 || (iVar1 == 3)))) {
        iVar1 = 1;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_1036F952), 6);
      wr32(COW_IMG(COW_ADDR_LIFT_1036F956), 0xb);
      wr32(COW_IMG(COW_ADDR_LIFT_1036F957), 0xb);
      wr32(COW_IMG(COW_ADDR_LIFT_1036F951), (iVar1 == 0) + '\a');
      wr32(COW_IMG(COW_ADDR_LIFT_1036F953), 9);
      wr32(COW_IMG(COW_ADDR_LIFT_1036F954), 5);
      wr32(COW_IMG(COW_ADDR_LIFT_1036F955), 10);
      g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_1036F940) + param_1 * 2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 4.
   Arguments: 1 register argument(s) [edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10138700(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_105781DC) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10138700: register eax, replayed as the entry ran it */
    cow_lift_10138700(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
