/* f_0x10135e80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10135e80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10135e80(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    CowU32 uVar2;
    uVar2 = 0;
      pbVar1 = (CowU32)(param_1 + 0x78);
      while ((((uVar2 == (param_5 & 0xff) || (rd8((uint32_t)(pbVar1 + 1u * (uint32_t)(1))) != param_3)) || (rd8((uint32_t)pbVar1) >> 2 != param_2)) ||
             (rd16((uint32_t)(pbVar1 + 2)) != param_4))) {
        uVar2 = uVar2 + 1;
        pbVar1 = pbVar1 + 4;
        if (0xf < (int)uVar2) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xffffffff) & 0xffu)); return;
        }
      }
      g->eax = (CowU32)(uVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 16.
   Arguments: 2 register argument(s) [ecx, edx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10135e80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10135e80: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10135e84: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10135e88: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10135e89: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebp = (g->ebp & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10135e8a: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10135e8f: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10135e90: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x20u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10135e91: register edi, replayed as the entry ran it */
    g->esi = 0u;   /* 0x10135e95: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->edi; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->edi = (uint32_t)(r); }   /* 0x10135e97: register edi, replayed as the entry ran it */
    cow_lift_10135e80(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
