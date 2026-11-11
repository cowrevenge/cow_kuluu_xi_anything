/* f_0x10307ebb - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10307ebb (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10307ebb(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    CowU32 pbVar5;
    int iVar6;
    int local_c;
    int local_8;
    iVar2 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x1a4)) + 0x18));
      iVar3 = rd32((uint32_t)(param_1 + 0x5c));
      iVar4 = rd32((uint32_t)(param_1 + 100));
      if (0 < (int)param_4) {
        param_2 = param_2 - (int)param_3;
        local_c = (int)param_4;
        do {
          pbVar5 = rd8((uint32_t)(param_2 + (int)param_3));
          if (iVar3 != 0) {
            param_4 = (CowU32)rd32((uint32_t)param_3);
            local_8 = iVar3;
            do {
              cVar1 = '\0';
              iVar6 = 0;
              if (0 < iVar4) {
                do {
                  cVar1 = cVar1 + rd8((uint32_t)(rd32((uint32_t)(iVar2 + iVar6 * 4)) + (CowU32)rd8((uint32_t)pbVar5)));
                  pbVar5 = pbVar5 + 1;
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar4);
              }
              local_8 = local_8 + -1;
              wr8((uint32_t)param_4, cVar1);
              param_4 = param_4 + 1;
            } while (local_8 != 0);
          }
          param_3 = param_3 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx, esi], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10307ebb(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10307ebb: push ebp */
    g->ebp = g->esp;                       /* 0x10307ebc: mov ebp, esp */
    g->esp -= 0x14u;                      /* 0x10307ebe: 20 bytes of locals */
    g->eax = param_1;   /* 0x10307ec1: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x1A4u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10307ec4: register ecx, replayed as the entry ran it */
    g->edx = param_4;   /* 0x10307eca: the value the entry loaded and the decompiler dropped */
    cow_lift_10307ebb(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
