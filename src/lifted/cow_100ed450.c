/* f_0x100ed450 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ed450 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ed450(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100ED46E), 3u, (const CowU32[]){ 0x3b, (((uint32_t)(param_4) & 0xffu) << 8 | ((uint32_t)(param_2) & 0xffu)), (((uint32_t)(param_4) & 0xffu) << 8 | ((uint32_t)(param_2) & 0xffu)) }, g->ecx, g->edx, g->eax, 12u);
      if (iVar1 == 0) {
        g->eax = (CowU32)(0); return;
      }
      wr32((uint32_t)(iVar1 + 8), param_3);
      wr8((uint32_t)(iVar1 + 0xd), param_5);
      wr32((uint32_t)(iVar1 + 4), 1);
      wr8((uint32_t)(iVar1 + 0xc), param_4);
      wr32((uint32_t)(iVar1 + 0x10), param_1);
      wr8((uint32_t)(iVar1 + 0x14), param_2);
      wr32((uint32_t)(iVar1 + 0x18), 0x12);
      wr8((uint32_t)(iVar1 + 0x1c), 0);
      cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_100ED4B4), 3u, (const CowU32[]){ iVar1, 0x20, 0 }, g->ecx, g->edx, g->eax, 12u);
      g->eax = (CowU32)((g->eax & 0xffff00ffu) | (((CowU32)(1) & 0xffu) << 8)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ed450(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->ecx = param_2;   /* 0x100ed450: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100ed454: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100ed455: register ebx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x100ed459: the value the entry loaded and the decompiler dropped */
    { g->eax = (g->eax & 0xFFFF00FFu) | ((uint32_t)(uint8_t)((uint8_t)g->ebx) << 8); }   /* 0x100ed45b: register eax, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x100ed45d: register ecx, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->ecx; uint32_t r = (uint32_t)(a | b); g->eax = (uint32_t)(r); }   /* 0x100ed463: register eax, replayed as the entry ran it */
    cow_lift_100ed450(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
