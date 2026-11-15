/* f_0x1014edc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014edc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014edc0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 uVar2;
    int iVar3;
    cow_bridge_10126320(g, COW_IMG(COW_ADDR_LIFT_1014EDCD), 0u, (const CowU32[]){ 0u }, g->ecx, param_2, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10333360));
      wr16((uint32_t)((int)param_1 + 0xe), 0xffff);
      wr32((uint32_t)((int)param_1 + 8), 0);
      wr8((uint32_t)((int)param_1 + 0xc), 1);
      wr16((uint32_t)((int)param_1 + 0x20), 0);
      wr16((uint32_t)((int)param_1 + 0x22), 0);
      wr16((uint32_t)((int)param_1 + 0x24), 0);
      wr16((uint32_t)((int)param_1 + 0x26), 0);
      wr16((uint32_t)((int)param_1 + 0x28), 0);
      wr16((uint32_t)((int)param_1 + 0x2a), 0);
      wr16((uint32_t)((int)param_1 + 0x2c), 0);
      wr16((uint32_t)((int)param_1 + 0x2e), 0);
      wr16((uint32_t)((int)param_1 + 0x30), 0);
      wr16((uint32_t)((int)param_1 + 0x32), 0);
      wr16((uint32_t)((int)param_1 + 0x34), 0);
      wr16((uint32_t)((int)param_1 + 0x36), 0);
      wr16((uint32_t)((int)param_1 + 0x38), 0);
      wr16((uint32_t)((int)param_1 + 0x3a), 0);
      wr16((uint32_t)((int)param_1 + 0x3c), 0);
      wr16((uint32_t)((int)param_1 + 0x3e), 0);
      iVar3 = 2;
      puVar1 = (CowU32)((int)param_1 + 0x48);
      do {
        wr16((uint32_t)puVar1, 0);
        wr16((uint32_t)((int)puVar1 + 2), 0);
        wr16((uint32_t)(puVar1 + 4u * (uint32_t)(1)), 0);
        wr16((uint32_t)((int)puVar1 + 6), 0);
        puVar1 = puVar1 + 4u * (uint32_t)(2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10334E58));
      wr8((uint32_t)((int)param_1 + 0x14), 1);
      wr32((uint32_t)((int)param_1 + 0x18), 0);
      uVar2 = cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_1014EE5D), 1u, (const CowU32[]){ 272039880u }, COW_IMG(COW_ADDR_LIFT_104E1BF8), g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x1c), uVar2);
      wr32((uint32_t)((int)param_1 + 0x20), 0);
      wr32((uint32_t)((int)param_1 + 0x24), 0);
      wr32((uint32_t)((int)param_1 + 0x28), 0);
      wr32((uint32_t)((int)param_1 + 0x2c), 0);
      wr32((uint32_t)((int)param_1 + 0x38), 0);
      wr32((uint32_t)((int)param_1 + 0x3c), 0);
      wr32((uint32_t)((int)param_1 + 0x40), 0);
      wr32((uint32_t)((int)param_1 + 0x48), 0);
      wr32((uint32_t)((int)param_1 + 0x4c), 0);
      wr32((uint32_t)((int)param_1 + 0x50), 0);
      wr32((uint32_t)((int)param_1 + 0x54), 0);
      puVar1 = (CowU32)((int)param_1 + 0x58);
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        wr32((uint32_t)puVar1, 0);
        puVar1 = puVar1 + 4u * (uint32_t)(1);
      }
      puVar1 = (CowU32)((int)param_1 + 0xd8);
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        wr32((uint32_t)puVar1, 0);
        puVar1 = puVar1 + 4u * (uint32_t)(1);
      }
      puVar1 = (CowU32)((int)param_1 + 0x118);
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        wr32((uint32_t)puVar1, 0);
        puVar1 = puVar1 + 4u * (uint32_t)(1);
      }
      wr32((uint32_t)((int)param_1 + 0x158), 0);
      wr16((uint32_t)((int)param_1 + 0x15c), 0);
      wr8((uint32_t)((int)param_1 + 0x15e), 0xf);
      wr32((uint32_t)((int)param_1 + 0x160), 0);
      wr8((uint32_t)((int)param_1 + 0x164), 0);
      wr32((uint32_t)((int)param_1 + 0x168), 0);
      wr32((uint32_t)((int)param_1 + 0x16c), 0x90);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014edc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1014edc0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014edc1: push esi */
    g->esi = g->ecx;   /* 0x1014edc2: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1014edc4: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x4u)); }   /* 0x1014edc5: register ecx, replayed as the entry ran it */
    cow_lift_1014edc0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ecx = (CowU32)(16u);   /* the entry left ecx here on its way to the ret */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
