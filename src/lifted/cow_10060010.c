/* f_0x10060010 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10060010 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10060010(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1032B914));
      if (rd32(COW_IMG(COW_ADDR_LIFT_10456910)) != (CowU32)0x0) {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10456910))))) + 0x8u))), COW_IMG(COW_ADDR_LIFT_1006002B), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10456910)) }, g->ecx, g->edx, g->eax, 0u);
        wr32(COW_IMG(COW_ADDR_LIFT_10456910), (CowU32)0x0);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10456914)) != (CowU32)0x0) {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10456914))))) + 0x8u))), COW_IMG(COW_ADDR_LIFT_10060040), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10456914)) }, g->ecx, g->edx, g->eax, 0u);
        wr32(COW_IMG(COW_ADDR_LIFT_10456914), (CowU32)0x0);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10456918)) != (CowU32)0x0) {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10456918))))) + 0x8u))), COW_IMG(COW_ADDR_LIFT_10060055), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10456918)) }, g->ecx, g->edx, g->eax, 0u);
        wr32(COW_IMG(COW_ADDR_LIFT_10456918), (CowU32)0x0);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_1045691C)) != (CowU32)0x0) {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045691C))))) + 0x8u))), COW_IMG(COW_ADDR_LIFT_1006006A), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1045691C)) }, g->ecx, g->edx, g->eax, 0u);
        wr32(COW_IMG(COW_ADDR_LIFT_1045691C), (CowU32)0x0);
      }
      wr32(COW_IMG(COW_ADDR_LIFT_1045689C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10456920), 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1047BF1C)) == param_1) {
        wr32(COW_IMG(COW_ADDR_LIFT_1047BF1C), (CowU32)0x0);
      }
      cow_bridge_100747c0(g, COW_IMG(COW_ADDR_LIFT_10060096), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((param_2 & 1) != 0) {
        cow_bridge_10028710(g, COW_IMG(COW_ADDR_LIFT_100600A3), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 4u);
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10060010(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10060010: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10060011: push edi */
    g->edi = g->ecx;   /* 0x10060012: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x10060014: the value the entry loaded and the decompiler dropped */
    cow_lift_10060010(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
