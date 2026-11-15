/* f_0x101d3eb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d3eb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d3eb0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    CowU32 piVar3;
    int iVar4;
    iVar4 = 0;
      piVar3 = (CowU32)(param_1 + 0x4c);
      do {
        iVar2 = 0;
        piVar1 = piVar3;
        do {
          if ((rd32((uint32_t)piVar1) != 0) && ((int8_t)rd8((uint32_t)(rd32((uint32_t)piVar1) + 4)) == '\x02')) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)(((CowU32)piVar1 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffu)); return;
          }
          iVar2 = iVar2 + 1;
          piVar1 = piVar1 + 4u * (uint32_t)(1);
        } while (iVar2 < 0x51);
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 4u * (uint32_t)(0x51);
        if (1 < iVar4) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)piVar1 & 0xffffff00) & 0xffu)); return;
        }
      } while( 1 );
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
void cow_adapter_101d3eb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101d3eb0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d3eb1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101d3eb2: push edi */
    g->edi = 0u;   /* 0x101d3eb3: the value the entry loaded and the decompiler dropped */
    { g->esi = (uint32_t)((uint32_t)(g->ecx + 0x4Cu)); }   /* 0x101d3eb5: register esi, replayed as the entry ran it */
    cow_lift_101d3eb0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
