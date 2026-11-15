/* f_0x102022b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102022b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102022b0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    char cVar2;
    CowU32 uVar3;
    int iVar4;
    int iVar5;
    uVar1 = rd32(COW_IMG(COW_ADDR_LIFT_103852AC));
      uVar3 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_102022C6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar4 = cow_bridge_102034c0(g, COW_IMG(COW_ADDR_LIFT_102022D3), 2u, (const CowU32[]){ 0u, 0u }, g->esi, g->edx, g->eax, 0u);
      iVar5 = cow_bridge_101505a0(g, COW_IMG(COW_ADDR_LIFT_102022ED), 5u, (const CowU32[]){ uVar3, iVar4, uVar1, 0xe0d04040, 0xe0d0d040 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10202350(g, COW_IMG(COW_ADDR_LIFT_10202301), 3u, (const CowU32[]){ param_1, param_2, iVar5 }, g->esi, g->edx, g->eax, 0u);
      cVar2 = cow_bridge_10193890(g, COW_IMG(COW_ADDR_LIFT_10202308), 1u, (const CowU32[]){ 7u }, g->ecx, g->edx, g->eax, 4u);
      if ((((cVar2 == '\0') && ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x59)) != '\0')) && (iVar5 != -0x1f2fbfc0)) &&
         (iVar4 != 0)) {
        wr32((uint32_t)(iVar4 + 0x88), rd32((uint32_t)(iVar4 + 0x88)) & 0xfffff9ff ^ 0x600);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102022b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102022b0: push ebx */
    g->ebx = rd32(COW_IMG(COW_ADDR_LIFT_103852AC));   /* 0x102022b1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102022b7: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102022b8: push esi */
    g->esi = g->ecx;   /* 0x102022b9: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102022bb: push edi */
    g->ecx = COW_IMG(COW_ADDR_LIFT_1047D600);   /* 0x102022bc: the value the entry loaded and the decompiler dropped */
    cow_lift_102022b0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
