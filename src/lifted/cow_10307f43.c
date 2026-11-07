/* f_0x10307f43 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10307f43 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10307f43(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    CowU32 pbVar7;
    CowU32 pbVar8;
    CowU32 pbVar9;
    CowU32 pcVar10;
    piVar2 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x1a4)) + 0x18));
      iVar3 = rd32((uint32_t)piVar2);
      iVar4 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1)));
      iVar5 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2)));
      iVar6 = rd32((uint32_t)(param_1 + 0x5c));
      if (0 < param_4) {
        param_2 = param_2 - (int)param_3;
        do {
          pbVar9 = rd8((uint32_t)(param_2 + (int)param_3));
          pcVar10 = (CowU32)rd32((uint32_t)param_3);
          if (iVar6 != 0) {
            param_1 = iVar6;
            do {
              bVar1 = rd8((uint32_t)pbVar9);
              pbVar7 = pbVar9 + 1;
              pbVar8 = pbVar9 + 2;
              pbVar9 = pbVar9 + 3;
              wr8((uint32_t)pcVar10, rd8((uint32_t)((CowU32)bVar1 + iVar3)) + rd8((uint32_t)((CowU32)rd8((uint32_t)pbVar7) + iVar4)) +
                         rd8((uint32_t)((CowU32)rd8((uint32_t)pbVar8) + iVar5)));
              pcVar10 = pcVar10 + 1;
              param_1 = param_1 + -1;
            } while (param_1 != 0);
          }
          param_3 = param_3 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10307f43(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10307f43: push ebp */
    g->ebp = g->esp;                       /* 0x10307f44: mov ebp, esp */
    g->esp -= 0x14u;                      /* 0x10307f46: 20 bytes of locals */
    g->ecx = param_1;   /* 0x10307f49: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + 0x1A4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10307f4c: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10307f52: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax); g->edx = (uint32_t)(rd32(A)); }   /* 0x10307f55: register edx, replayed as the entry ran it */
    cow_lift_10307f43(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
