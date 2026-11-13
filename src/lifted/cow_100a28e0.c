/* f_0x100a28e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a28e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a28e0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU8 bVar2;
    CowU32 pbVar3;
    int iVar4;
    CowU32 puVar5;
    puVar1 = (CowU32)(param_1 + 0x70);
      wr8((uint32_t)(param_1 + 0x58), 0);
      wr8((uint32_t)(param_1 + 0x59), 0);
      wr8((uint32_t)(param_1 + 0x5a), 0);
      wr8((uint32_t)(param_1 + 0x5b), 0);
      wr32((uint32_t)(param_1 + 0x5c), 0);
      wr32((uint32_t)(param_1 + 0x60), 0);
      wr32((uint32_t)(param_1 + 100), 0);
      wr32((uint32_t)(param_1 + 0x68), 0);
      wr32((uint32_t)(param_1 + 0x6c), 0);
      puVar5 = puVar1;
      for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
        wr32((uint32_t)puVar5, 0);
        puVar5 = puVar5 + 4u * (uint32_t)(1);
      }
      pbVar3 = rd8((uint32_t)(param_1 + 0x48));
      if (pbVar3 != (CowU32)0x0) {
        bVar2 = rd8((uint32_t)pbVar3);
        if (bVar2 == 1) {
          wr8((uint32_t)(param_1 + 0x58), 1);
          bVar2 = rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(2)));
          wr8((uint32_t)(param_1 + 0x5a), bVar2);
          wr8((uint32_t)(param_1 + 0x5b), rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(3))));
          if (bVar2 == 1) {
            wr32((uint32_t)(param_1 + 100), 0xec);
          }
          else if (bVar2 == 2) {
            wr32((uint32_t)(param_1 + 100), 0xb4);
          }
          else {
            wr32((uint32_t)(param_1 + 100), 0);
          }
          iVar4 = cow_bridge_100a2b70(g, COW_IMG(COW_ADDR_LIFT_100A2945), 2u, (const CowU32[]){ g->ebp, g->ebx }, g->esi, g->edx, 0u, 0u);
          wr32((uint32_t)(param_1 + 0x34), 0);
          wr32((uint32_t)(param_1 + 0x6c), (int32_t)rd32((uint32_t)(param_1 + 0x6c)) + iVar4);
          wr32((uint32_t)(param_1 + 0x38), (int32_t)rd32((uint32_t)(param_1 + 0x38)) + -1);
        }
        else if ((9 < bVar2) && (bVar2 < 0xe)) {
          wr8((uint32_t)(param_1 + 0x58), bVar2);
          wr8((uint32_t)(param_1 + 0x5a), rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(2))));
          wr8((uint32_t)(param_1 + 0x5b), rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(3))));
          iVar4 = cow_bridge_100a2b70(g, COW_IMG(COW_ADDR_LIFT_100A2992), 2u, (const CowU32[]){ puVar1, 0 }, g->ecx, g->edx, 0u, 0u);
          wr32((uint32_t)(param_1 + 0x38), 0);
          wr32((uint32_t)(param_1 + 0x34), 0);
          wr32((uint32_t)(param_1 + 0x6c), (int32_t)rd32((uint32_t)(param_1 + 0x6c)) + iVar4);
          return;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a28e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100a28e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100a28e1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a28e2: push esi */
    g->esi = g->ecx;   /* 0x100a28e3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100a28e5: push edi */
    g->ebx = 0u;   /* 0x100a28e6: the value the entry loaded and the decompiler dropped */
    { g->ebp = (uint32_t)((uint32_t)(g->esi + 0x70u)); }   /* 0x100a28e8: register ebp, replayed as the entry ran it */
    g->ecx = 32u;   /* 0x100a28eb: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x100a28f0: the value the entry loaded and the decompiler dropped */
    g->edi = g->ebp;   /* 0x100a28f2: the value the entry loaded and the decompiler dropped */
    cow_lift_100a28e0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
