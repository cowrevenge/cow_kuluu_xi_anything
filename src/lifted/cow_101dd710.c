/* f_0x101dd710 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101dd710 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101dd710(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    puVar3 = param_2;
      param_2 = (CowU32)0x3;
      puVar1 = (CowU32)(param_3 * 0x7b + 0x1a + param_1);
      do {
        puVar4 = puVar3;
        puVar5 = puVar1;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
          puVar4 = puVar4 + 4u * (uint32_t)(1);
          puVar5 = puVar5 + 4u * (uint32_t)(1);
        }
        iVar2 = 0x27;
        do {
          if ((int8_t)rd8((uint32_t)((int)puVar1 + iVar2)) != ' ') break;
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
        puVar3 = puVar3 + 4u * (uint32_t)(10);
        param_2 = (CowU32)((int)param_2 + -1);
        wr8((uint32_t)((int)puVar1 + param_1 + (iVar2 - param_1) + 1), 0);
        puVar1 = (CowU32)((int)puVar1 + 0x29);
        if (param_2 == (CowU32)0x0) {
          return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101dd710(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_3;   /* 0x101dd710: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101dd714: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101dd715: push ebp */
    g->ebp = g->ecx;   /* 0x101dd716: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edx = (uint32_t)(rd32(A)); }   /* 0x101dd718: register edx, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x101dd71c: register ecx, replayed as the entry ran it */
    g->ebx = 4294967270u;   /* 0x101dd71f: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101dd724: push esi */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->ecx * 8)); }   /* 0x101dd725: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101dd728: push edi */
    { uint32_t a = g->ebx; uint32_t b = (uint32_t)g->ebp; uint32_t r = (uint32_t)(a - b); g->ebx = (uint32_t)(r); }   /* 0x101dd729: register ebx, replayed as the entry ran it */
    cow_lift_101dd710(g, param_1, param_2, param_3);

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
