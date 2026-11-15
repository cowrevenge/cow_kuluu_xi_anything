/* f_0x100544a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100544a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100544a0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    uVar1 = rd32((uint32_t)(param_1 + 0x24)) & 0xffffff80 ^ 0x19;
      wr32((uint32_t)(param_1 + 0x24), uVar1);
      uVar1 = uVar1 & 0xfc00017f;
      wr32((uint32_t)(param_1 + 0x24), (((uint32_t)((short)(uVar1 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((((uint32_t)(1) & 0xffu) << 8 | ((uint32_t)((char)uVar1) & 0xffu))) & 0xffffu)));
      wr32((uint32_t)(param_1 + 0x30), 0);
      wr32((uint32_t)(param_1 + 0x34), 0);
      wr32((uint32_t)(param_1 + 0x38), 0x3f800000);
      wr32((uint32_t)(param_1 + 0x3c), 0x3f800000);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100544a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(g->ecx + 0x24u); g->eax = (uint32_t)(rd32(A)); }   /* 0x100544a0: register eax, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->eax; uint8_t b = (uint8_t)0x80u; uint8_t r = (uint8_t)(a & b); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x100544a3: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x19u; uint32_t r = (uint32_t)(a ^ b); g->eax = (uint32_t)(r); }   /* 0x100544a5: register eax, replayed as the entry ran it */
    g->edx = g->eax;   /* 0x100544a8: the value the entry loaded and the decompiler dropped */
    cow_lift_100544a0(g, param_1);

    g->eax = (CowU32)(1065353216u);   /* the entry left eax here on its way to the ret */
    g->edx = (CowU32)(((g->edx & 4227858815u) | 1u));   /* the entry left edx here on its way to the ret */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
