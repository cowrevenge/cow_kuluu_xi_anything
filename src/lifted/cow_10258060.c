/* f_0x10258060 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10258060 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10258060(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (param_2 != 0) {
        if ((param_3 != 0) && (param_3 == 1)) {
          switch(param_1) {
          default:
            break;
          case 2:
            goto switchD_102580fc_caseD_2;
          }
        }
        goto switchD_10258079_caseD_1;
      }
      switch(param_3) {
      case 0:
        if (param_1 == 1) {
          g->eax = (CowU32)((CowU32)COW_IMG(COW_ADDR_LIFT_1037AB30)); return;
        }
        break;
      case 2:
        if (param_1 == 1) {
          g->eax = (CowU32)((CowU32)COW_IMG(COW_ADDR_LIFT_1034F7B0)); return;
        }
        break;
      case 3:
        goto switchD_102580b7_switchD;
      case 4:
        if (param_1 != 0) {
    switchD_102580da_caseD_2:
          g->eax = (CowU32)((CowU32)COW_IMG(COW_ADDR_LIFT_10389EB0)); return;
        }
        goto switchD_102580b7_switchD;
      case 5:
        switch(param_1) {
        case 1:
          g->eax = (CowU32)((CowU32)COW_IMG(COW_ADDR_LIFT_10389EB4)); return;
        case 2:
          goto switchD_102580da_caseD_2;
        }
        break;
      case 6:
        if (param_1 != 0) {
          g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_1034F7B4)); return;
        }
    switchD_102580b7_switchD:
        switch(param_1) {
        case 1:
          g->eax = (CowU32)((CowU32)COW_IMG(COW_ADDR_LIFT_10389EBC)); return;
        case 2:
        case 3:
    switchD_102580fc_caseD_2:
          g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_1034F7B4)); return;
        }
        break;
      case 7:
        if (param_1 == 1) {
          g->eax = (CowU32)((CowU32)COW_IMG(COW_ADDR_LIFT_10389EB8)); return;
        }
      }
    switchD_10258079_caseD_1:
      g->eax = (CowU32)((CowU32)COW_IMG(COW_ADDR_LIFT_103D3C84)); return;
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
void cow_adapter_10258060(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_2;   /* 0x10258060: the value the entry loaded and the decompiler dropped */
    cow_lift_10258060(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
