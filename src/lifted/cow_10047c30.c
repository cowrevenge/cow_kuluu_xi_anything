/* f_0x10047c30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10047c30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10047c30(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    puVar2 = (CowU32)(param_1 + 0x70);
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      wr32((uint32_t)(param_1 + 0x20), rd32((uint32_t)param_2));
      wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))));
      wr32((uint32_t)(param_1 + 0x28), rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))));
      wr32((uint32_t)(param_1 + 0x2c), rd32((uint32_t)(param_2 + 4u * (uint32_t)(3))));
      wr32((uint32_t)(param_1 + 0x34), rd32((uint32_t)(param_2 + 4u * (uint32_t)(4))));
      wr32((uint32_t)(param_1 + 0x38), rd32((uint32_t)(param_2 + 4u * (uint32_t)(5))));
      wr32((uint32_t)(param_1 + 0x3c), rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))));
      wr32((uint32_t)(param_1 + 0x40), rd32((uint32_t)(param_2 + 4u * (uint32_t)(7))));
      puVar2 = param_2 + 4u * (uint32_t)(0x18);
      puVar3 = (CowU32)(param_1 + 0xc0);
      for (iVar1 = (((CowU32)rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) >> 7 & 0x7ffff) - 6 & 0xfffffff) << 2; iVar1 != 0;
          iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar3, rd32((uint32_t)puVar2));
        puVar2 = puVar2 + 4u * (uint32_t)(1);
        puVar3 = puVar3 + 4u * (uint32_t)(1);
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr8((uint32_t)puVar3, rd8((uint32_t)puVar2));
        puVar2 = (CowU32)((int)puVar2 + 1);
        puVar3 = (CowU32)((int)puVar3 + 1);
      }
      wr32((uint32_t)(param_1 + 0x9c), 0);
      wr32((uint32_t)(param_1 + 0x70), rd32((uint32_t)(param_2 + 4u * (uint32_t)(8))));
      wr32((uint32_t)(param_1 + 0x74), rd32((uint32_t)(param_2 + 4u * (uint32_t)(9))));
      wr32((uint32_t)(param_1 + 0x98), rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xb))));
      cow_bridge_1003b640(g, COW_IMG(COW_ADDR_LIFT_10047CCE), 0u, (const CowU32[]){ 0u }, (g->edx + 48u), g->edx, 0u, 0u);
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
void cow_adapter_10047c30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->edx = g->ecx;   /* 0x10047c30: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10047c32: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10047c33: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10047c34: push esi */
    { g->ebx = (uint32_t)((uint32_t)(g->edx + 0x70u)); }   /* 0x10047c35: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10047c38: push edi */
    g->ecx = 20u;   /* 0x10047c39: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x10047c3e: the value the entry loaded and the decompiler dropped */
    g->edi = g->ebx;   /* 0x10047c40: the value the entry loaded and the decompiler dropped */
    cow_lift_10047c30(g, param_1, param_2);

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
