/* f_0x101ade00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101ade00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101ade00(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    CowU32 puVar3;
    int iVar4;
    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1033791C));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), 0xffffffff);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), 0);
      puVar3 = param_1 + 4u * (uint32_t)(-0x40f4f1e);
      iVar4 = 2;
      do {
        pcVar2 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)((int)puVar3 + (int)pcVar2), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        puVar3 = (CowU32)((int)puVar3 + 0x79);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x41)), 0);
      wr8((uint32_t)((int)param_1 + 0x105), 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101ade00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101ade00: push ebx */
    g->eax = g->ecx;   /* 0x101ade01: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101ade03: push esi */
    g->esi = g->eax;   /* 0x101ade04: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x101ade06: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)(COW_IMG(COW_ADDR_LIFT_103D3C84) + RD); uint32_t r = (uint32_t)(a - b); g->esi = (uint32_t)(r); }   /* 0x101ade08: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101ade0e: push edi */
    cow_lift_101ade00(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->eax = (CowU32)(param_1);   /* what eax holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
