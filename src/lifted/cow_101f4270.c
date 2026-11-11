/* f_0x101f4270 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f4270 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f4270(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    char cVar2;
    CowU32 uVar3;
    sVar1 = rd16((uint32_t)rd32((uint32_t)((param_2 + 0x14b4))));
      if (sVar1 != 10) {
        if (sVar1 == 0xc) {
          cVar2 = cow_bridge_101cc1c0(g, COW_IMG(COW_ADDR_LIFT_101F429A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (cVar2 == '\0') {
            g->eax = (CowU32)(0); return;
          }
        }
        else if (sVar1 != 0xe) {
          g->eax = (CowU32)(0); return;
        }
      }
      if ((rd8((uint32_t)(param_1 + 0x11)) & 0x40) == 0) {
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(-0x7f7f7f80) & 0xffffu)); return;
      }
      uVar3 = cow_bridge_100f1080(g, COW_IMG(COW_ADDR_LIFT_101F42B3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((-(CowU32)((rd8((uint32_t)(param_1 + 0x11)) & 3) != uVar3) & 0x7faf6fb0) + 0x80509050); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f4270(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_2;   /* 0x101f4270: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101f4274: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0x14B4u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101f4275: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x101f427b: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x101f427d: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xAu; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x101f4280: register eax, replayed as the entry ran it */
    cow_lift_101f4270(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
