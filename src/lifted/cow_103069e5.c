/* f_0x103069e5 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_103069e5 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_103069e5(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 psVar1;
    int iVar2;
    int iVar3;
    CowU32 pbVar4;
    int iVar5;
    iVar2 = rd32((uint32_t)(param_1 + 0x5c));
      iVar3 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x1a4)) + 0x18));
      iVar5 = 0;
      if (0 < param_4) {
        do {
          pbVar4 = rd8((uint32_t)(param_2 + iVar5 * 4));
          if (iVar2 != 0) {
            param_1 = iVar2;
            do {
              psVar1 = (CowU32)(rd32((uint32_t)(iVar3 + (CowU32)(rd8((uint32_t)pbVar4) >> 3) * 4)) +
                                ((CowU32)(rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(1))) >> 2) * 0x20 + (CowU32)(rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(2))) >> 3)) * 2);
              wr16((uint32_t)psVar1, rd16((uint32_t)psVar1) + 1);
              if (rd16((uint32_t)psVar1) == 0) {
                wr16((uint32_t)psVar1, -1);
              }
              pbVar4 = pbVar4 + 3;
              param_1 = param_1 + -1;
            } while (param_1 != 0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_4);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebp, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ebp], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_103069e5(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x103069e5: push ebp */
    g->ebp = g->esp;                       /* 0x103069e6: mov ebp, esp */
    g->eax = param_1;   /* 0x103069e8: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x1A4u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x103069eb: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x103069f1: push ebx */
    { uint32_t A = (uint32_t)(g->eax + 0x5Cu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x103069f2: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x103069f5: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0x18u); g->esi = (uint32_t)(rd32(A)); }   /* 0x103069f6: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x103069f9: push edi */
    g->edi = 0u;   /* 0x103069fa: the value the entry loaded and the decompiler dropped */
    cow_lift_103069e5(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
