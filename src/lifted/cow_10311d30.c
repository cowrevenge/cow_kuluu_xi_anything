/* f_0x10311d30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10311d30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10311d30(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    uVar1 = 0;
      if ((param_1 & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((param_1 & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((param_1 & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((param_1 & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((param_1 & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((param_1 & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
      uVar2 = param_1 & 0xc00;
      if (uVar2 != 0) {
        if (uVar2 == 0x400) {
          uVar1 = uVar1 | 0x100;
        }
        else if (uVar2 == 0x800) {
          uVar1 = uVar1 | 0x200;
        }
        else if (uVar2 == 0xc00) {
          uVar1 = uVar1 | 0x300;
        }
      }
      if ((param_1 & 0x300) == 0) {
        uVar1 = uVar1 | 0x20000;
      }
      else if ((param_1 & 0x300) == 0x200) {
        uVar1 = uVar1 | 0x10000;
      }
      if ((param_1 & 0x1000) != 0) {
        uVar1 = uVar1 | 0x40000;
      }
      g->eax = (CowU32)(uVar1); return;
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
void cow_adapter_10311d30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10311d30: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10311d31: register ebx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x10311d35: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10311d37: push ebp */
    cow_lift_10311d30(g, param_1);

    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
