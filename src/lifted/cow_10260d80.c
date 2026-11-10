/* f_0x10260d80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10260d80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10260d80(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    cow_bridge_102659d0(g, COW_IMG(COW_ADDR_LIFT_10260D94), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, param_3, 0u);
      wr32((uint32_t)(param_1 + 0x10), 0);
      wr32((uint32_t)(param_1 + 0x14), 0);
      wr32((uint32_t)(param_1 + 0x18), 0);
      wr32((uint32_t)(param_1 + 0x1c), 0);
      wr32((uint32_t)(param_1 + 0x20), rd32((uint32_t)param_5));
      wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_5 + 4u * (uint32_t)(1))));
      wr32((uint32_t)(param_1 + 0x28), rd32((uint32_t)(param_5 + 4u * (uint32_t)(2))));
      uVar1 = rd32((uint32_t)(param_5 + 4u * (uint32_t)(3)));
      wr32((uint32_t)(param_1 + 0x30), param_4);
      wr32((uint32_t)(param_1 + 0x2c), uVar1);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10260d80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->eax = param_3;   /* 0x10260d80: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10260d84: push esi */
    g->esi = g->ecx;   /* 0x10260d85: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10260d87: register ecx, replayed as the entry ran it */
    g->ecx = g->esi;   /* 0x10260d8d: the value the entry loaded and the decompiler dropped */
    cow_lift_10260d80(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->edx = (CowU32)((g->esi + 32u));   /* the entry left edx here on its way to the ret */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
