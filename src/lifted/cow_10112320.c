/* f_0x10112320 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10112320 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10112320(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32((uint32_t)param_1, param_3);
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(1)), (char)param_5);
      wr8((uint32_t)((int)param_1 + 5), param_4);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), COW_IMG(COW_ADDR_LIFT_10332F3C));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), param_2 + 0x24);
      if ((char)param_5 == '\0') {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), rd32((uint32_t)(param_2 + 0x34)));
        cow_bridge_10112380(g, COW_IMG(COW_ADDR_LIFT_1011235A), 1u, (const CowU32[]){ param_5 }, g->esi, g->edx, param_4, 0u);
        g->eax = (CowU32)(param_1); return;
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), rd32((uint32_t)(param_2 + 0x3c)));
      cow_bridge_10112380(g, COW_IMG(COW_ADDR_LIFT_1011236E), 1u, (const CowU32[]){ param_5 }, g->ecx, g->edx, param_4, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 16.
   Arguments: 2 register argument(s) [ecx, edx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10112320(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_4;   /* 0x10112320: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10112324: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10112328: push esi */
    g->esi = g->ecx;   /* 0x10112329: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1011232b: register ecx, replayed as the entry ran it */
    cow_lift_10112320(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
