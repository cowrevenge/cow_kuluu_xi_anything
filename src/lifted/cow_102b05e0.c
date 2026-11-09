/* f_0x102b05e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b05e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b05e0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 pcVar5;
    iVar2 = -1;
      uVar4 = 0;
      pcVar5 = param_1;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = rd8((uint32_t)pcVar5);
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        do {
          if (rd8((uint32_t)(param_1 + 1u * (uint32_t)(uVar4))) == param_2) {
            g->eax = (CowU32)(param_1 + uVar4); return;
          }
          uVar3 = 0xffffffff;
          uVar4 = uVar4 + 1;
          pcVar5 = param_1;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = rd8((uint32_t)pcVar5);
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
        } while (uVar4 < ~uVar3 - 1);
      }
      g->eax = (CowU32)((CowU32)0x0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102b05e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102b05e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b05e1: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102b05e2: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102b05e6: push edi */
    g->edi = g->esi;   /* 0x102b05e7: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x102b05e9: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x102b05ec: the value the entry loaded and the decompiler dropped */
    g->edx = 0u;   /* 0x102b05ee: the value the entry loaded and the decompiler dropped */
    cow_lift_102b05e0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
