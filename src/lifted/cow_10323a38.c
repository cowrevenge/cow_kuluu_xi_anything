/* f_0x10323a38 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10323a38 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10323a38(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 local_8;
    uVar1 = rd16((uint32_t)((int)param_2 + 6));
      uVar3 = (uVar1 & 0x7ff0) >> 4;
      uVar2 = rd32((uint32_t)param_2);
      local_8 = 0x80000000;
      if (uVar3 == 0) {
        if (((rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) & 0xfffff) == 0) && (uVar2 == 0)) {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), 0);
          wr32((uint32_t)param_1, 0);
          wr16((uint32_t)(param_1 + 4u * (uint32_t)(2)), 0);
          return;
        }
        iVar4 = 0x3c01;
        local_8 = 0;
      }
      else if (uVar3 == 0x7ff) {
        iVar4 = 0x7fff;
      }
      else {
        iVar4 = uVar3 + 0x3c00;
      }
      local_8 = uVar2 >> 0x15 | (rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) & 0xfffff) << 0xb | local_8;
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), local_8);
      wr32((uint32_t)param_1, uVar2 << 0xb);
      while ((local_8 & 0x80000000) == 0) {
        local_8 = rd32((uint32_t)param_1) >> 0x1f | local_8 * 2;
        wr32((uint32_t)param_1, rd32((uint32_t)param_1) * 2);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), local_8);
        iVar4 = iVar4 + 0xffff;
      }
      wr16((uint32_t)(param_1 + 4u * (uint32_t)(2)), uVar1 & 0x8000 | (CowU16)iVar4);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10323a38(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10323a38: push ebp */
    g->ebp = g->esp;                       /* 0x10323a39: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10323a3b: push ecx */
    g->edx = param_3;   /* 0x10323a3c: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10323a3f: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10323a40: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10323a41: push edi */
    { uint32_t A = (uint32_t)(g->edx + 0x6u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10323a42: register eax, replayed as the entry ran it */
    g->edi = 2047u;   /* 0x10323a46: the value the entry loaded and the decompiler dropped */
    g->ecx = g->eax;   /* 0x10323a4b: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x8000u; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x10323a4d: register eax, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x4u) & 31u; if (c) { uint32_t a = g->ecx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ecx = (uint32_t)(r); } }; }   /* 0x10323a52: register ecx, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)g->edi; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x10323a55: register ecx, replayed as the entry ran it */
    cow_lift_10323a38(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->eax = (CowU32)(param_2);   /* what eax holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
