/* f_0x100ac8e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ac8e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ac8e0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 pvVar2;
    int iVar3;
    cow_bridge_100a89e0(g, COW_IMG(COW_ADDR_LIFT_100AC8EA), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_1006c260(g, COW_IMG(COW_ADDR_LIFT_100AC8F5), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x88c), g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1032FD58));
      wr32((uint32_t)((int)param_1 + 0x664), 0);
      wr8((uint32_t)((int)param_1 + 0x878), 0);
      wr32((uint32_t)((int)param_1 + 0x668), 0);
      wr32((uint32_t)((int)param_1 + 0x884), 0);
      wr32((uint32_t)((int)param_1 + 0x888), 0);
      puVar1 = (CowU32)((int)param_1 + 0x628);
      iVar3 = 4;
      do {
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(1)), 0);
        wr32((uint32_t)puVar1, 0);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(-1)), 0);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(2)), 0x3f800000);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(-0xf)), 0);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(-0x10)), 0);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(-0x11)), 0);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(-0xe)), 0x3f800000);
        puVar1 = puVar1 + 4u * (uint32_t)(4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      cow_bridge_10085000(g, COW_IMG(COW_ADDR_LIFT_100AC950), 1u, (const CowU32[]){ 0x3f800000 }, param_1, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x87c), 0xffffffff);
      wr32((uint32_t)((int)param_1 + 0x880), 0);
      wr32((uint32_t)((int)param_1 + 0x870), 0);
      wr32((uint32_t)((int)param_1 + 0x874), 0);
      if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)) + 0x1ac)) == 0) {
        pvVar2 = param_1;
      }
      else {
        pvVar2 = rd32((uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1065CB04)) + 0x1ac)) + 0x14));
      }
      cow_bridge_10085010(g, COW_IMG(COW_ADDR_LIFT_100AC98C), 1u, (const CowU32[]){ pvVar2 }, param_1, g->edx, g->eax, 0u);
      wr8((uint32_t)((int)param_1 + 0xb2), rd8((uint32_t)((int)param_1 + 0xb2)) | 1);
      wr8((uint32_t)((int)param_1 + 0xb0), 1);
      cow_bridge_100749b0(g, COW_IMG(COW_ADDR_LIFT_100AC9AB), 1u, (const CowU32[]){ 4u }, param_1, g->edx, 1u, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ecx, ebx, esi], frame pointer no, 0 locals, pops [esi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ac8e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100ac8e0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100ac8e1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ac8e2: push esi */
    g->esi = g->ecx;   /* 0x100ac8e3: the value the entry loaded and the decompiler dropped */
    cow_lift_100ac8e0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
