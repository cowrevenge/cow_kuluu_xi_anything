/* f_0x100a0110 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a0110 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a0110(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    CowU32 puVar4;
    iVar2 = 0;
      puVar4 = (CowU32)(param_3 + 0x28);
      do {
        wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_10488D08) + iVar2), rd32((uint32_t)puVar4));
        wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_10488D0C) + iVar2), rd32((uint32_t)(puVar4 + 4u * (uint32_t)(1))));
        wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_10488D10) + iVar2), rd32((uint32_t)(puVar4 + 4u * (uint32_t)(2))));
        uVar1 = rd32((uint32_t)(puVar4 + 4u * (uint32_t)(3)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10488D18) + 4u * (uint32_t)(iVar2)), 0);
        wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_10488D14) + iVar2), uVar1);
        iVar3 = iVar2 + 0x100;
        wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_104882B8) + iVar2), rd32((uint32_t)puVar4));
        wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_104882BC) + iVar2), rd32((uint32_t)(puVar4 + 4u * (uint32_t)(1))));
        wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_104882C0) + iVar2), rd32((uint32_t)(puVar4 + 4u * (uint32_t)(2))));
        uVar1 = rd32((uint32_t)(puVar4 + 4u * (uint32_t)(3)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_104882C8) + 4u * (uint32_t)(iVar2)), 0);
        wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_104882C4) + iVar2), uVar1);
        iVar2 = iVar3;
        puVar4 = puVar4 + 4u * (uint32_t)(4);
      } while (iVar3 < 0x400);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)(((CowU32)iVar3 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a0110(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = param_3;   /* 0x100a0110: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100a0114: push ebx */
    g->edx = 0u;   /* 0x100a0115: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a0117: push esi */
    { g->ecx = (uint32_t)((uint32_t)(g->eax + 0x28u)); }   /* 0x100a0118: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x100a011b: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100a011d: push edi */
    g->edi = g->ecx;   /* 0x100a011e: the value the entry loaded and the decompiler dropped */
    { g->esi = (uint32_t)((uint32_t)(g->eax + COW_IMG(COW_ADDR_LIFT_10488D08) + RD)); }   /* 0x100a0120: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100a0126: register ebx, replayed as the entry ran it */
    cow_lift_100a0110(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->edx = (CowU32)(0x0u);   /* what edx holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
