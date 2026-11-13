/* f_0x10070050 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10070050 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10070050(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    CowU32 uVar8;
    CowU32 uVar9;
    puVar1 = (CowU32)(param_2 * 0x40 + 0x10 + param_1);
      uVar2 = rd32((uint32_t)(param_1 + 0x814));
      uVar3 = rd32((uint32_t)(param_1 + 0x818));
      uVar4 = rd32((uint32_t)(param_1 + 0x81c));
      uVar5 = rd32((uint32_t)(param_1 + 0x820));
      uVar6 = rd32((uint32_t)(param_1 + 0x824));
      uVar7 = rd32((uint32_t)(param_1 + 0x828));
      uVar8 = rd32((uint32_t)(param_1 + 0x82c));
      wr32((uint32_t)puVar1, rd32((uint32_t)(param_1 + 0x810)));
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(1)), uVar2);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(2)), uVar3);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(3)), uVar4);
      uVar2 = rd32((uint32_t)(param_1 + 0x830));
      uVar3 = rd32((uint32_t)(param_1 + 0x834));
      uVar4 = rd32((uint32_t)(param_1 + 0x838));
      uVar9 = rd32((uint32_t)(param_1 + 0x83c));
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(4)), uVar5);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(5)), uVar6);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(6)), uVar7);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(7)), uVar8);
      uVar5 = rd32((uint32_t)(param_1 + 0x840));
      uVar6 = rd32((uint32_t)(param_1 + 0x844));
      uVar7 = rd32((uint32_t)(param_1 + 0x848));
      uVar8 = rd32((uint32_t)(param_1 + 0x84c));
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(8)), uVar2);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(9)), uVar3);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(10)), uVar4);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(0xb)), uVar9);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(0xc)), uVar5);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(0xd)), uVar6);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(0xe)), uVar7);
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(0xf)), uVar8);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ecx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10070050(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10070050: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->edx = (uint32_t)(rd32(A)); }   /* 0x10070051: register edx, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->ecx + 0x810u)); }   /* 0x10070055: register eax, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x6u) & 31u; if (c) { uint32_t a = g->edx; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->edx = (uint32_t)(r); } }; }   /* 0x1007005b: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10070050(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
