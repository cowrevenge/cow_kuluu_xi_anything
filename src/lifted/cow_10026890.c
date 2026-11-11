/* f_0x10026890 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10026890 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10026890(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), param_2);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1032A494));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), 0x3f800000);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), 0x3f800000);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x14)), 0x3f800000);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1b)), 0x3f800000);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), 0x80808080);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), 0x80808080);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x15)), 0x80808080);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1c)), 0x80808080);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), 0x3f800000);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x16)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1d)), 0x3f800000);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x17)), 0x3f800000);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x1e)), 0x3f800000);
      iVar1 = cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_100268F0), 1u, (const CowU32[]){ 0x48 }, g->ecx, param_2, param_3, 4u);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = cow_bridge_10039920(g, COW_IMG(COW_ADDR_LIFT_100268FE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_3, 0u);
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), iVar1);
      if (iVar1 != 0) {
        cow_bridge_1001d940(g, COW_IMG(COW_ADDR_LIFT_10026924), 4u, (const CowU32[]){ iVar1, param_3 + 1, rd8((uint32_t)param_3) >> 7, (rd8((uint32_t)param_3) & 0x70) >> 4 }, g->ecx, g->edx, param_3, 0u);
        cow_bridge_1003ab80(g, COW_IMG(COW_ADDR_LIFT_10026936), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, param_3, 0u);
        wr32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + 4), rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + 4)) + 1);
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 12.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10026890(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_3;   /* 0x10026890: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10026894: push esi */
    g->esi = g->ecx;   /* 0x10026895: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10026897: push edi */
    g->edi = 0u;   /* 0x10026898: the value the entry loaded and the decompiler dropped */
    g->ecx = 2155905152u;   /* 0x1002689a: the value the entry loaded and the decompiler dropped */
    cow_lift_10026890(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
