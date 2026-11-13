/* f_0x102148e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102148e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102148e0(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    iVar1 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x88));
      uVar3 = (CowU32)rd16((uint32_t)(param_1 + 0x186));
      if (((iVar1 != 0) && (uVar3 != 0)) && (0 < param_2)) {
        iVar2 = uVar3 - (int)(int16_t)rd16((uint32_t)(param_1 + 0x17a));
        if (param_2 <= iVar2) {
          wr32((uint32_t)(iVar1 + 0xc), (int)(uVar3 * 100) / iVar2);
          wr32((uint32_t)(iVar1 + 0x14), ((int16_t)rd16((uint32_t)(param_1 + 0x17a)) * -100) / (int)(uVar3 - (int)(int16_t)rd16((uint32_t)(param_1 + 0x17a))));
          return;
        }
        wr32((uint32_t)(iVar1 + 0xc), (int)(uVar3 * 100) / param_2);
        wr32((uint32_t)(iVar1 + 0x14), ((int16_t)rd16((uint32_t)(param_1 + 0x17a)) * -100) / param_2);
      }
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
void cow_adapter_102148e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    { uint32_t A = (uint32_t)(g->ecx + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102148e0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102148e3: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102148e4: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102148e5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102148e6: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x88u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102148e7: register edi, replayed as the entry ran it */
    g->esi = 0u;   /* 0x102148ed: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + 0x186u); g->esi = (g->esi & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x102148ef: register esi, replayed as the entry ran it */
    cow_lift_102148e0(g, param_1, param_2);

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
