/* f_0x1010d090 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010d090 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010d090(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), param_1 + 4u * (uint32_t)(3));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), param_1 + 4u * (uint32_t)(6));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), COW_IMG(COW_ADDR_LIFT_10332E88));
      wr8((uint32_t)(param_1 + 4u * (uint32_t)(2)), 1);
      wr16((uint32_t)((int)param_1 + 10), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), param_1 + 4u * (uint32_t)(0xb));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), param_1 + 4u * (uint32_t)(0xe));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), COW_IMG(COW_ADDR_LIFT_10332E8C));
      wr8((uint32_t)(param_1 + 4u * (uint32_t)(10)), 1);
      wr16((uint32_t)((int)param_1 + 0x2a), 0);
      wr32((uint32_t)param_1, param_2);
      wr16((uint32_t)(param_1 + 4u * (uint32_t)(0x11)), 0);
      wr16((uint32_t)(param_1 + 4u * (uint32_t)(0x12)), 0);
      wr16((uint32_t)((int)param_1 + 0x46), 0);
      cow_bridge_1010d3e0(g, COW_IMG(COW_ADDR_LIFT_1010D10A), 1u, (const CowU32[]){ 0 }, param_3, g->edx, 0u, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010d090(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010d090: push esi */
    g->esi = g->ecx;   /* 0x1010d091: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x1010d093: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0xCu)); }   /* 0x1010d095: register ecx, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(g->esi + 0x18u)); }   /* 0x1010d098: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x1010d09b: push eax */
    cow_lift_1010d090(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
