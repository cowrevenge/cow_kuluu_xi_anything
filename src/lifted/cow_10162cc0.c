/* f_0x10162cc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10162cc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10162cc0(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    short sVar4;
    int iVar5;
    CowU32 uVar6;
    iVar5 = 1;
      sVar1 = (short)(param_2 - param_1);
      sVar4 = (short)param_1;
      if (sVar1 == 0) {
        g->eax = (CowU32)((((uint32_t)((short)((CowU32)(param_2 - param_1) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(sVar4) & 0xffffu))); return;
      }
      if (sVar1 < 0) {
        iVar5 = -1;
      }
      uVar2 = (int)sVar1 >> 0x1f;
      if ((int)(((int)sVar1 ^ uVar2) - uVar2) < 0x11) {
        sVar1 = (short)(((10 - param_3) * iVar5 * 0x10) / 0x3c);
      }
      else {
        sVar1 = (short)((iVar5 * 0x10) / 2);
      }
      uVar6 = (CowU32)sVar1;
      uVar2 = (int)sVar4 - (int)(short)param_2;
      uVar3 = (int)uVar2 >> 0x1f;
      iVar5 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
      if ((int)((uVar2 ^ uVar3) - uVar3) < iVar5) {
        g->eax = (CowU32)((((uint32_t)((short)((CowU32)iVar5 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((short)param_2) & 0xffffu))); return;
      }
      g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(uVar6 + (int)sVar4) & 0xffffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10162cc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10162cc0: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10162cc1: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10162cc5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10162cc6: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10162cc7: register edi, replayed as the entry ran it */
    g->esi = 1u;   /* 0x10162ccb: the value the entry loaded and the decompiler dropped */
    g->eax = g->edi;   /* 0x10162cd0: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->ebx; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10162cd2: register eax, replayed as the entry ran it */
    cow_lift_10162cc0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
