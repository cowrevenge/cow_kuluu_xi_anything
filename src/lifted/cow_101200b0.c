/* f_0x101200b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101200b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101200b0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    uVar4 = (param_1 >> 0x18) * (param_2 >> 0x18) >> 7;
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      uVar2 = (param_1 >> 0x10 & 0xff) * (param_2 >> 0x10 & 0xff) >> 7;
      if (0xff < uVar2) {
        uVar2 = 0xff;
      }
      uVar3 = (param_1 >> 8 & 0xff) * (param_2 >> 8 & 0xff) >> 7;
      if (0xff < uVar3) {
        uVar3 = 0xff;
      }
      uVar1 = (param_1 & 0xff) * (param_2 & 0xff) >> 7;
      if (0xff < uVar1) {
        uVar1 = 0xff;
      }
      g->eax = (CowU32)(((uVar2 & 0xff | uVar4 << 8) << 8 | uVar3 & 0xff) << 8 | uVar1 & 0xff); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101200b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_1;   /* 0x101200b0: the value the entry loaded and the decompiler dropped */
    g->ecx = param_2;   /* 0x101200b4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101200b8: push esi */
    g->esi = g->eax;   /* 0x101200b9: the value the entry loaded and the decompiler dropped */
    g->edx = g->ecx;   /* 0x101200bb: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101200bd: push edi */
    { { unsigned c = (unsigned)(0x18u) & 31u; if (c) { uint32_t a = g->esi; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->esi = (uint32_t)(r); } }; }   /* 0x101200be: register esi, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x18u) & 31u; if (c) { uint32_t a = g->edx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->edx = (uint32_t)(r); } }; }   /* 0x101200c1: register edx, replayed as the entry ran it */
    cow_lift_101200b0(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
