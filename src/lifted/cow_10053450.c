/* f_0x10053450 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10053450 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10053450(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 puVar5;
    wr32((uint32_t)((int)param_1 + 0x20), rd32((uint32_t)(param_2 + 0x20)));
      wr32((uint32_t)((int)param_1 + 0x24), rd32((uint32_t)(param_2 + 0x24)));
      wr32((uint32_t)((int)param_1 + 0x28), rd32((uint32_t)(param_2 + 0x28)));
      wr32((uint32_t)((int)param_1 + 0x2c), rd32((uint32_t)(param_2 + 0x2c)));
      cow_bridge_1003c740(g, COW_IMG(COW_ADDR_LIFT_10053482), 1u, (const CowU32[]){ (g->edi + 48u) }, (CowU32)((int)param_1 + 0x30), g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x70), rd32((uint32_t)(param_2 + 0x70)));
      wr32((uint32_t)((int)param_1 + 0x74), rd32((uint32_t)(param_2 + 0x74)));
      wr32((uint32_t)((int)param_1 + 0x78), rd32((uint32_t)(param_2 + 0x78)));
      wr32((uint32_t)((int)param_1 + 0x7c), rd32((uint32_t)(param_2 + 0x7c)));
      wr32((uint32_t)((int)param_1 + 0x80), rd32((uint32_t)(param_2 + 0x80)));
      wr32((uint32_t)((int)param_1 + 0x84), rd32((uint32_t)(param_2 + 0x84)));
      wr32((uint32_t)((int)param_1 + 0x88), rd32((uint32_t)(param_2 + 0x88)));
      wr32((uint32_t)((int)param_1 + 0x8c), rd32((uint32_t)(param_2 + 0x8c)));
      wr32((uint32_t)((int)param_1 + 0x90), rd32((uint32_t)(param_2 + 0x90)));
      wr32((uint32_t)((int)param_1 + 0x94), rd32((uint32_t)(param_2 + 0x94)));
      wr32((uint32_t)((int)param_1 + 0x98), rd32((uint32_t)(param_2 + 0x98)));
      wr32((uint32_t)((int)param_1 + 0x98), rd32((uint32_t)(param_2 + 0x98)));
      wr32((uint32_t)((int)param_1 + 0x9c), rd32((uint32_t)(param_2 + 0x9c)));
      wr32((uint32_t)((int)param_1 + 0xa0), rd32((uint32_t)(param_2 + 0xa0)));
      wr32((uint32_t)((int)param_1 + 0xa4), rd32((uint32_t)(param_2 + 0xa4)));
      wr32((uint32_t)((int)param_1 + 0xa8), rd32((uint32_t)(param_2 + 0xa8)));
      wr32((uint32_t)((int)param_1 + 0xac), rd32((uint32_t)(param_2 + 0xac)));
      wr32((uint32_t)((int)param_1 + 0xb0), rd32((uint32_t)(param_2 + 0xb0)));
      puVar5 = (CowU32)((int)param_1 + 0xb4);
      iVar1 = 3;
      do {
        wr32((uint32_t)puVar5, rd32((uint32_t)(((param_2 + 0x70) - ((int)param_1 + 0x70)) + (int)puVar5)));
        puVar5 = puVar5 + 4u * (uint32_t)(1);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      wr32((uint32_t)((int)param_1 + 0xb0), 0);
      wr32((uint32_t)((int)param_1 + 0xac), 0);
      wr32((uint32_t)((int)param_1 + 0xa8), 0);
      wr32((uint32_t)((int)param_1 + 0xa4), 0);
      wr32((uint32_t)((int)param_1 + 0xc0), rd32((uint32_t)(param_2 + 0xc0)));
      wr32((uint32_t)((int)param_1 + 0xc4), rd32((uint32_t)(param_2 + 0xc4)));
      wr32((uint32_t)((int)param_1 + 200), rd32((uint32_t)(param_2 + 200)));
      wr32((uint32_t)((int)param_1 + 0xcc), rd32((uint32_t)(param_2 + 0xcc)));
      wr32((uint32_t)((int)param_1 + 0xd0), rd32((uint32_t)(param_2 + 0xd0)));
      wr16((uint32_t)((int)param_1 + 0xd4), rd16((uint32_t)(param_2 + 0xd4)));
      wr16((uint32_t)((int)param_1 + 0xd6), rd16((uint32_t)(param_2 + 0xd6)));
      uVar3 = rd32((uint32_t)((int)param_1 + 0xd8));
      uVar4 = (rd32((uint32_t)(param_2 + 0xd8)) ^ uVar3) & 0x1ff ^ uVar3;
      wr32((uint32_t)((int)param_1 + 0xd8), uVar4);
      uVar2 = (rd32((uint32_t)(param_2 + 0xd8)) ^ uVar4) & 0x200 ^ uVar4;
      wr32((uint32_t)((int)param_1 + 0xd8), uVar2);
      uVar3 = (((uint32_t)((short)(uVar3 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((((uint32_t)((char)(uVar2 >> 8)) & 0xffu) << 8 | ((uint32_t)((char)uVar4) & 0xffu))) & 0xffffu)) & 0xfffff3ff ^
              rd32((uint32_t)(param_2 + 0xd8)) & 0x400;
      wr32((uint32_t)((int)param_1 + 0xd8), uVar3);
      uVar3 = (rd32((uint32_t)(param_2 + 0xd8)) ^ uVar3) & 0x1000 ^ uVar3;
      wr32((uint32_t)((int)param_1 + 0xd8), uVar3);
      uVar3 = (rd32((uint32_t)(param_2 + 0xd8)) ^ uVar3) & 0x2000 ^ uVar3;
      wr32((uint32_t)((int)param_1 + 0xd8), uVar3);
      uVar3 = (rd32((uint32_t)(param_2 + 0xd8)) ^ uVar3) & 0xfffc000 ^ uVar3;
      wr32((uint32_t)((int)param_1 + 0xd8), uVar3);
      uVar3 = (rd32((uint32_t)(param_2 + 0xd8)) ^ uVar3) & 0x10000000 ^ uVar3;
      wr32((uint32_t)((int)param_1 + 0xd8), uVar3);
      uVar3 = (rd32((uint32_t)(param_2 + 0xd8)) ^ uVar3) & 0x20000000 ^ uVar3;
      wr32((uint32_t)((int)param_1 + 0xd8), uVar3);
      uVar3 = (rd32((uint32_t)(param_2 + 0xd8)) ^ uVar3) & 0x40000000 ^ uVar3;
      wr32((uint32_t)((int)param_1 + 0xd8), uVar3);
      wr32((uint32_t)((int)param_1 + 0xd8), (uVar3 ^ rd32((uint32_t)(param_2 + 0xd8))) & 0x7fffffff ^ rd32((uint32_t)(param_2 + 0xd8)));
      wr16((uint32_t)((int)param_1 + 0xdc), rd16((uint32_t)(param_2 + 0xdc)));
      wr8((uint32_t)((int)param_1 + 0xde), rd8((uint32_t)(param_2 + 0xde)));
      wr8((uint32_t)((int)param_1 + 0xdf), rd8((uint32_t)(param_2 + 0xdf)));
      wr32((uint32_t)((int)param_1 + 0xe0), rd32((uint32_t)(param_2 + 0xe0)));
      wr32((uint32_t)((int)param_1 + 0xe4), rd32((uint32_t)(param_2 + 0xe4)));
      wr32((uint32_t)((int)param_1 + 0xe8), rd32((uint32_t)(param_2 + 0xe8)));
      wr32((uint32_t)((int)param_1 + 0xec), rd32((uint32_t)(param_2 + 0xec)));
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10053450(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10053450: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10053451: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10053452: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10053453: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10053454: register edi, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x10053458: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->edi + 0x20u)); }   /* 0x1005345a: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x20u)); }   /* 0x1005345d: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax); g->edx = (uint32_t)(rd32(A)); }   /* 0x10053460: register edx, replayed as the entry ran it */
    cow_lift_10053450(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
