/* f_0x100f9560 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f9560 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f9560(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (rd16((uint32_t)(param_3 + 0x12)) == rd16((uint32_t)(param_1 + 0x3aea8))) {
        if (rd32((uint32_t)(param_3 + 0x14)) == 1) {
          wr8((uint32_t)(param_1 + 0x3aeaa), rd8((uint32_t)(param_3 + 0x10)));
          wr32((uint32_t)(param_1 + 0x3ae98), rd32((uint32_t)(param_3 + 0x14)));
          wr32((uint32_t)(param_1 + 0x3ae9c), rd32((uint32_t)(param_3 + 4)));
          wr32((uint32_t)(param_1 + 0x3aea0), rd32((uint32_t)(param_3 + 8)));
          wr32((uint32_t)(param_1 + 0x3aea4), rd32((uint32_t)(param_3 + 0xc)));
          g->eax = (CowU32)(1); return;
        }
      }
      else if (rd16((uint32_t)(param_3 + 0x12)) != 0) {
        g->eax = (CowU32)(1); return;
      }
      wr32((uint32_t)(param_1 + 0x3ae98), 0);
      wr32((uint32_t)(param_1 + 0x3ae9c), 0);
      wr32((uint32_t)(param_1 + 0x3aea0), 0);
      wr32((uint32_t)(param_1 + 0x3aea4), 0);
      wr32((uint32_t)(param_1 + 0x3aea8), 0);
      wr32((uint32_t)(param_1 + 0x3ae98), rd32((uint32_t)(param_3 + 0x14)));
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [edx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f9560(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_4;   /* 0x100f9560: the value the entry loaded and the decompiler dropped */
    g->ecx = param_2;   /* 0x100f9564: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f9568: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0x12u); g->edx = (g->edx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100f9569: register edx, replayed as the entry ran it */
    cow_lift_100f9560(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
