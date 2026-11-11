/* f_0x10191620 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10191620 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10191620(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    switch(param_3) {
      case 1:
        iVar1 = 0;
        break;
      case 2:
        iVar1 = 1;
        break;
      case 3:
        iVar1 = 2;
        break;
      case 4:
        iVar1 = 3;
        break;
      case 5:
        iVar1 = 4;
        break;
      case 6:
        iVar1 = 5;
        break;
      case 7:
        iVar1 = 6;
        break;
      case 8:
        iVar1 = 7;
        break;
      case 9:
        iVar1 = 8;
        break;
      case 10:
        iVar1 = 9;
        break;
      case 0xb:
        iVar1 = 10;
        break;
      default:
        iVar1 = param_2;
      }
      switch(param_1) {
      case 0xe:
        break;
      case 0xf:
        if (param_2 == 0) {
          g->eax = (CowU32)((CowU32)(iVar1 * 0x16 + 0x10377ed8)); return;
        }
        g->eax = (CowU32)((CowU32)(iVar1 * 0x16 + 0x103780c8)); return;
      case 0x10:
        if (param_2 == 0) {
          g->eax = (CowU32)((CowU32)(iVar1 * 0x16 + 0x10377fd0)); return;
        }
        g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103783A8) + 4u * (uint32_t)(iVar1)))); return;
      default:
        g->eax = (CowU32)((CowU32)0x0); return;
      case 0x20:
        g->eax = (CowU32)((CowU32)(iVar1 * 0x16 + 0x10378400)); return;
      case 0x21:
        g->eax = (CowU32)((CowU32)(iVar1 * 0x16 + 0x103784f8)); return;
      case 0x22:
        g->eax = (CowU32)((CowU32)(iVar1 * 0x16 + 0x103781c0)); return;
      }
      if (param_2 == 0) {
        g->eax = (CowU32)((CowU32)(iVar1 * 0x16 + 0x10377ce8)); return;
      }
      g->eax = (CowU32)((CowU32)(iVar1 * 0x16 + 0x10377de0)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 12.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10191620(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_3;   /* 0x10191620: the value the entry loaded and the decompiler dropped */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x10191624: register eax, replayed as the entry ran it */
    cow_lift_10191620(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
