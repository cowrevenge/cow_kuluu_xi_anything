/* f_0x102bfa9f - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102bfa9f (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102bfa9f(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    int iVar3;
    CowU32 pbVar4;
    CowU32 pbVar5;
    bVar1 = rd8((uint32_t)((int)param_1 + 9));
      if (bVar1 < 8) {
        iVar2 = rd32((uint32_t)param_1);
        if (bVar1 == 1) {
          pbVar4 = (CowU32)((iVar2 - 1U >> 3) + param_2);
          pbVar5 = (CowU32)(iVar2 + -1 + param_2);
          iVar3 = 7 - (iVar2 - 1U & 7);
          if (iVar2 != 0) {
            param_2 = iVar2;
            do {
              wr8((uint32_t)pbVar5, rd8((uint32_t)pbVar4) >> ((CowU8)iVar3 & 0x1f) & 1);
              if (iVar3 == 7) {
                iVar3 = 0;
                pbVar4 = pbVar4 + -1;
              }
              else {
                iVar3 = iVar3 + 1;
              }
              pbVar5 = pbVar5 + -1;
              param_2 = param_2 + -1;
            } while (param_2 != 0);
          }
        }
        else if (bVar1 == 2) {
          pbVar4 = (CowU32)((iVar2 - 1U >> 2) + param_2);
          pbVar5 = (CowU32)(iVar2 + -1 + param_2);
          iVar3 = (iVar2 - 1U & 3) * -2 + 6;
          if (iVar2 != 0) {
            param_2 = iVar2;
            do {
              wr8((uint32_t)pbVar5, rd8((uint32_t)pbVar4) >> ((CowU8)iVar3 & 0x1f) & 3);
              if (iVar3 == 6) {
                iVar3 = 0;
                pbVar4 = pbVar4 + -1;
              }
              else {
                iVar3 = iVar3 + 2;
              }
              pbVar5 = pbVar5 + -1;
              param_2 = param_2 + -1;
            } while (param_2 != 0);
          }
        }
        else if (bVar1 == 4) {
          pbVar4 = (CowU32)((iVar2 - 1U >> 1) + param_2);
          pbVar5 = (CowU32)(iVar2 + -1 + param_2);
          iVar3 = (iVar2 - 1U & 1) * -4 + 4;
          if (iVar2 != 0) {
            param_2 = iVar2;
            do {
              wr8((uint32_t)pbVar5, rd8((uint32_t)pbVar4) >> ((CowU8)iVar3 & 0x1f) & 0xf);
              if (iVar3 == 4) {
                iVar3 = 0;
                pbVar4 = pbVar4 + -1;
              }
              else {
                iVar3 = 4;
              }
              pbVar5 = pbVar5 + -1;
              param_2 = param_2 + -1;
            } while (param_2 != 0);
          }
        }
        wr8((uint32_t)((int)param_1 + 9), 8);
        wr8((uint32_t)((int)param_1 + 0xb), rd8((uint32_t)((int)param_1 + 10)) << 3);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), (CowU32)rd8((uint32_t)((int)param_1 + 10)) * iVar2);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102bfa9f(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102bfa9f: push ebp */
    g->ebp = g->esp;                       /* 0x102bfaa0: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102bfaa2: push ebx */
    g->ebx = param_2;   /* 0x102bfaa3: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ebx + 0x9u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102bfaa6: register ecx, replayed as the entry ran it */
    cow_lift_102bfa9f(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
