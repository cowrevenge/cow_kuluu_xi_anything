/* f_0x10101a00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10101a00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10101a00(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    switch(rd32((uint32_t)(param_1 + 8)) & 0xf) {
      case 1:
        g->eax = (CowU32)(0x1e - rd16((uint32_t)(param_1 + 6)) / 100); return;
      case 2:
        uVar2 = rd16((uint32_t)(param_1 + 6)) / 300;
        if (0xf < uVar2) {
          g->eax = (CowU32)(0xf); return;
        }
        break;
      case 3:
        iVar1 = (rd32((uint32_t)(param_1 + 8)) >> 4 & 0xffff) - 0x80;
        if (-1 < iVar1) {
          g->eax = (CowU32)(0); return;
        }
        iVar1 = (int)((uint64_t)((int64_t)iVar1 * 0x55555555) >> 0x20) - iVar1;
        uVar2 = (iVar1 >> 1) - (iVar1 >> 0x1f);
        if (0x1e < (int)uVar2) {
          g->eax = (CowU32)(0x1e); return;
        }
        break;
      case 4:
        g->eax = (CowU32)(0); return;
      default:
        uVar2 = 100;
      }
      g->eax = (CowU32)(uVar2); return;
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
void cow_adapter_10101a00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = param_1;   /* 0x10101a00: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edx + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10101a04: register eax, replayed as the entry ran it */
    g->ecx = g->eax;   /* 0x10101a07: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFu; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x10101a09: register ecx, replayed as the entry ran it */
    { { uint32_t a = g->ecx; uint32_t r = (uint32_t)(a - 1u); g->ecx = (uint32_t)(r); }; }   /* 0x10101a0c: register ecx, replayed as the entry ran it */
    cow_lift_10101a00(g, param_1);

    g->edx = (CowU32)((g->edx >> 5u));   /* the entry left edx here on its way to the ret */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
