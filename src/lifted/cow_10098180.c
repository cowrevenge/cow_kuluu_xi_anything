/* f_0x10098180 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10098180 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10098180(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU8 bVar2;
    uVar1 = rd16((uint32_t)(param_1 + 0xfc));
      bVar2 = (CowU8)(uVar1 >> 8);
      if ((0x31 < uVar1) && (uVar1 < 0x3c)) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffffu)); return;
      }
      if ((0x973 < uVar1) && (uVar1 < 0x979)) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffffu)); return;
      }
      if ((0x736 < uVar1) && (uVar1 < 0x747)) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffffu)); return;
      }
      if ((0x9b9 < uVar1) && (uVar1 < 0x9bf)) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffu)); return;
      }
      if ((0x3bf < uVar1) && (uVar1 < 0x3ca)) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffffu)); return;
      }
      if ((0x32d < uVar1) && (uVar1 < 0x332)) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffffu)); return;
      }
      if ((0x978 < uVar1) && (uVar1 < 0x97e)) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffu)); return;
      }
      if ((uVar1 < 0x9bf) || (0x9c3 < uVar1)) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((CowU16)bVar2 << 8) & 0xffffu)); return;
      }
      g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffffu)); return;
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
void cow_adapter_10098180(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(g->ecx + 0xFCu); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10098180: register eax, replayed as the entry ran it */
    cow_lift_10098180(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
