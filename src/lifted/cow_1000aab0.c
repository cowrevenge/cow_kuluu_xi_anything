/* f_0x1000aab0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1000aab0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1000aab0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    cow_bridge_10009920(g, COW_IMG(COW_ADDR_LIFT_1000AAB8), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_1000AAC8), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0xe, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_1000AAD8), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 9, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AAEA), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0, 0xb, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AAFC), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0, 0xd, 3 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AB0E), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0, 0xe, 3 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AB20), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0, 0x10, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AB32), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0, 0x11, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AB44), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0, 1, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AB56), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0, 2, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AB68), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0, 4, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AB7A), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 1, 4, 1 }, g->ecx, g->edx, g->eax, 0u);
      uVar2 = 1;
      uVar1 = 1;
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xfcu))), COW_IMG(COW_ADDR_LIFT_1000AB8C), 4u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 1, 1, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1000a3b0(g, COW_IMG(COW_ADDR_LIFT_1000AB9D), 2u, (const CowU32[]){ uVar1, uVar2 }, g->esi, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_1000ABAD), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0xe, 1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_1000ABBD), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 9, 2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0xc8u))), COW_IMG(COW_ADDR_LIFT_1000ABCD), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), 0x1b, 0 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1000aab0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1000aab0: push esi */
    g->esi = g->ecx;   /* 0x1000aab1: the value the entry loaded and the decompiler dropped */
    cow_lift_1000aab0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
