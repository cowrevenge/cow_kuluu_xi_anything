/* f_0x1010d190 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010d190 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010d190(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), param_1 + 3);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), param_1 + 6);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), COW_IMG(COW_ADDR_LIFT_10332E88));
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(2)), 1);
      wr16((uint32_t)((int)param_1 + 10), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), param_1 + 0xe);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), COW_IMG(COW_ADDR_LIFT_10332E8C));
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(10)), 1);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), param_1 + 0xb);
      wr16((uint32_t)((int)param_1 + 0x2a), 0);
      wr16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x11)), 0);
      wr16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x12)), 0);
      wr16((uint32_t)((int)param_1 + 0x46), 0);
      wr32((uint32_t)param_1, rd32((uint32_t)param_2));
      iVar1 = cow_bridge_1010d220(g, COW_IMG(COW_ADDR_LIFT_1010D205), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar1 != 0) {
        cow_bridge_1010d3e0(g, COW_IMG(COW_ADDR_LIFT_1010D215), 2u, (const CowU32[]){ rd32((uint32_t)(iVar1 + 4)), 0 }, g->esi, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010d190(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010d190: push esi */
    g->esi = g->ecx;   /* 0x1010d191: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010d193: push edi */
    g->edi = 0u;   /* 0x1010d194: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->esi + 0xCu)); }   /* 0x1010d196: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x18u)); }   /* 0x1010d199: register ecx, replayed as the entry ran it */
    { g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(0x1u); }   /* 0x1010d19c: register edx, replayed as the entry ran it */
    cow_lift_1010d190(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
