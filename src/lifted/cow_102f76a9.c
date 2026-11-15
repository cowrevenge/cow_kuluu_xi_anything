/* f_0x102f76a9 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f76a9 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f76a9(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    puVar2 = param_2;
      for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr32((uint32_t)puVar2, (((uint32_t)((((uint32_t)(param_3) & 0xffu) << 8 | ((uint32_t)(param_3) & 0xffu))) & 0xffffu) << 16 | ((uint32_t)((((uint32_t)(param_3) & 0xffu) << 8 | ((uint32_t)(param_3) & 0xffu))) & 0xffffu)));
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
        wr8((uint32_t)puVar2, param_3);
        puVar2 = (CowU32)((int)puVar2 + 1);
      }
      g->eax = (CowU32)(param_2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f76a9(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102f76a9: register eax, replayed as the entry ran it */
    g->ecx = param_4;   /* 0x102f76ad: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102f76b1: push ebx */
    { g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)((uint8_t)g->eax); }   /* 0x102f76b2: register ebx, replayed as the entry ran it */
    { g->ebx = (g->ebx & 0xFFFF00FFu) | ((uint32_t)(uint8_t)((uint8_t)g->ebx) << 8); }   /* 0x102f76b4: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f76b6: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102f76b7: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102f76b8: register edi, replayed as the entry ran it */
    g->edx = g->ecx;   /* 0x102f76bc: the value the entry loaded and the decompiler dropped */
    g->esi = g->edi;   /* 0x102f76be: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x2u) & 31u; if (c) { uint32_t a = g->ecx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ecx = (uint32_t)(r); } }; }   /* 0x102f76c0: register ecx, replayed as the entry ran it */
    g->eax = g->ebx;   /* 0x102f76c3: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->eax = (uint32_t)(r); } }; }   /* 0x102f76c5: register eax, replayed as the entry ran it */
    { g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)((uint16_t)g->ebx); }   /* 0x102f76c8: register eax, replayed as the entry ran it */
    cow_lift_102f76a9(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ecx = (CowU32)((g->edx & 3u));   /* the entry left ecx here on its way to the ret */
    g->edx = (CowU32)(param_4);   /* what edx holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
