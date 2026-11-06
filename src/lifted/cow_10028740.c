/* f_0x10028740 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10028740 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10028740(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    wr32((uint32_t)param_3, param_1);
      wr32((uint32_t)param_4, ((param_2 & 0xfffffff0) - 0x10) + param_1);
      iVar1 = rd32((uint32_t)param_3);
      wr32((uint32_t)(iVar1 + 0xc), 0);
      iVar2 = rd32((uint32_t)param_4);
      wr32((uint32_t)(iVar1 + 0x14), 0);
      wr32((uint32_t)(iVar1 + 8), iVar2);
      wr32((uint32_t)(iVar1 + 0x10), rd32((uint32_t)param_4));
      wr32((uint32_t)(iVar1 + 4), 0);
      wr32((uint32_t)(iVar1 + 0x18), rd32((uint32_t)(iVar1 + 0x18)) & 0xfffffffc);
      wr32((uint32_t)(iVar1 + 0x1c), 0);
      iVar1 = rd32((uint32_t)param_4);
      wr32((uint32_t)(iVar1 + 0xc), rd32((uint32_t)param_3));
      wr32((uint32_t)(iVar1 + 8), 0);
      iVar2 = rd32((uint32_t)param_3);
      wr32((uint32_t)(iVar1 + 0x10), 0);
      wr32((uint32_t)(iVar1 + 0x14), iVar2);
      wr32((uint32_t)(iVar1 + 0x1c), 0);
      wr32((uint32_t)(iVar1 + 4), 1);
      wr32((uint32_t)(iVar1 + 0x18), rd32((uint32_t)(iVar1 + 0x18)) & 0xfffffffc);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10028740(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->edx = param_2;   /* 0x10028740: the value the entry loaded and the decompiler dropped */
    g->ecx = param_3;   /* 0x10028744: the value the entry loaded and the decompiler dropped */
    g->eax = param_1;   /* 0x10028748: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)0xFFFFFFF0u; uint32_t r = (uint32_t)(a & b); g->edx = (uint32_t)(r); }   /* 0x1002874c: register edx, replayed as the entry ran it */
    cow_lift_10028740(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
