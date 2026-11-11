/* f_0x1011c940 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1011c940 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1011c940(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU16 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    uVar2 = (CowU32)rd8((uint32_t)param_1);
      uVar4 = (CowU32)rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
      if (uVar2 < 0xa0) {
        iVar1 = uVar2 - 0x71;
      }
      else {
        iVar1 = uVar2 - 0xb1;
      }
      uVar2 = iVar1 * 2 | 1;
      if (0x7f < uVar4) {
        uVar4 = uVar4 - 1;
      }
      if (uVar4 < 0x9e) {
        uVar4 = uVar4 - 0x1f;
      }
      else {
        uVar2 = uVar2 + 1;
        uVar4 = uVar4 - 0x7d;
      }
      uVar5 = uVar2 << 8 | uVar4;
      uVar3 = (CowU16)(uVar2 >> 0x10);
      if (0x931f < uVar5) {
        g->eax = (CowU32)((((uint32_t)(uVar3) & 0xffffu) << 16 | ((uint32_t)(0xcb) & 0xffffu))); return;
      }
      if (0x7920 < uVar5) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((uVar4 - 0xcd1) + uVar2 * 0x5e) & 0xffu)); return;
      }
      if (0x5020 < uVar5) {
        g->eax = (CowU32)((uVar4 - 0xdec) + uVar2 * 0x5e); return;
      }
      if (0x3020 < uVar5) {
        g->eax = (CowU32)((uVar4 - 0xdc1) + uVar2 * 0x5e); return;
      }
      if (0x2f20 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x21e + uVar2); return;
      }
      if (0x2e20 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x271 + uVar2); return;
      }
      if (0x2e45 < uVar5) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 + 0x271 + uVar2) & 0xffu)); return;
      }
      if (0x2d5e < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x351 + uVar2); return;
      }
      if (0x2d3f < uVar5) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(uVar4 + 0x359 + uVar2) & 0xffffu)); return;
      }
      if (0x2d20 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x35a + uVar2); return;
      }
      if (0x2a20 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x223 + uVar2); return;
      }
      if (0x2920 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x276 + uVar2); return;
      }
      if (0x2820 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x203 + uVar2); return;
      }
      if (0x2750 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x1b3 + uVar2); return;
      }
      if (0x2720 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x1c2 + uVar2); return;
      }
      if (0x2640 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x18b + uVar2); return;
      }
      if (0x2620 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x193 + uVar2); return;
      }
      if (0x2520 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x13e + uVar2); return;
      }
      if (0x2420 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0xec + uVar2); return;
      }
      if (0x2360 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x93 + uVar2); return;
      }
      if (0x2340 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x99 + uVar2); return;
      }
      if (0x232f < uVar5) {
        g->eax = (CowU32)(uVar4 + 0xa0 + uVar2); return;
      }
      if (uVar5 == 0x227f) {
        g->eax = (CowU32)((((uint32_t)(uVar3) & 0xffffu) << 16 | ((uint32_t)(0xf2) & 0xffffu))); return;
      }
      if (0x2271 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x56 + uVar2); return;
      }
      if (0x225b < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x5d + uVar2); return;
      }
      if (0x2249 < uVar5) {
        g->eax = (CowU32)(uVar4 + 0x68 + uVar2); return;
      }
      if (uVar5 < 0x223a) {
        g->eax = (CowU32)((uVar4 - 0xbdf) + uVar2 * 0x5e); return;
      }
      g->eax = (CowU32)(uVar4 + 0x70 + uVar2); return;
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
void cow_adapter_1011c940(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->ecx = param_1;   /* 0x1011c940: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x1011c944: the value the entry loaded and the decompiler dropped */
    g->edx = 0u;   /* 0x1011c946: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1011c948: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x1u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1011c94a: register edx, replayed as the entry ran it */
    cow_lift_1011c940(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
