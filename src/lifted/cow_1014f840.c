/* f_0x1014f840 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014f840 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014f840(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU32 piVar2;
    CowU32 psVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    CowU32 puVar6;
    cow_bridge_10126320(g, COW_IMG(COW_ADDR_LIFT_1014F84C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)((int)param_1 + 0xe), 0xffff);
      wr32((uint32_t)((int)param_1 + 8), 0);
      wr8((uint32_t)((int)param_1 + 0xc), 1);
      wr16((uint32_t)((int)param_1 + 0x14), 0);
      wr16((uint32_t)((int)param_1 + 0x16), 0);
      wr16((uint32_t)((int)param_1 + 0x18), 0);
      wr16((uint32_t)((int)param_1 + 0x1a), 0);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10334EB8));
      wr32((uint32_t)((int)param_1 + 0x28), 0);
      piVar2 = (CowU32)cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_1014F883), 1u, (const CowU32[]){ 272039860u }, COW_IMG(COW_ADDR_LIFT_104E1BF8), g->edx, g->eax, 0u);
      if (piVar2 != (CowU32)0x0) {
        psVar3 = COW_IMG(COW_ADDR_LIFT_10371B6C);
        puVar6 = (CowU32)((int)param_1 + 0x38);
        do {
          sVar1 = rd16((uint32_t)psVar3);
          psVar3 = psVar3 + 2u * (uint32_t)(1);
          wr32((uint32_t)puVar6, rd32((uint32_t)(rd32((uint32_t)piVar2) + sVar1 * 4)));
          puVar6 = puVar6 + 4u * (uint32_t)(1);
        } while ((int)psVar3 < 0x10371b7e);
        puVar4 = COW_IMG(COW_ADDR_LIFT_10371B82);
        puVar6 = (CowU32)((int)param_1 + 0x80);
        do {
          puVar5 = puVar4 + 2u * (uint32_t)(2);
          wr32((uint32_t)(puVar6 + 4u * (uint32_t)(-9)), rd32((uint32_t)(rd32((uint32_t)piVar2) + (CowU32)rd16((uint32_t)(puVar4 + 2u * (uint32_t)(-1))) * 4)));
          wr32((uint32_t)puVar6, rd32((uint32_t)(rd32((uint32_t)piVar2) + (CowU32)rd16((uint32_t)puVar4) * 4)));
          puVar4 = puVar5;
          puVar6 = puVar6 + 4u * (uint32_t)(1);
        } while ((int)puVar5 < 0x10371ba6);
        wr32((uint32_t)((int)param_1 + 0xa4), rd32((uint32_t)(rd32((uint32_t)piVar2) + 0xb90)));
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014f840(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014f840: push esi */
    g->esi = g->ecx;   /* 0x1014f841: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1014f843: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x4u)); }   /* 0x1014f844: register ecx, replayed as the entry ran it */
    cow_lift_1014f840(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
