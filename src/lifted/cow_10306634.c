/* f_0x10306634 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10306634 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10306634(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    CowU32 puVar11;
    CowU32 pbVar12;
    CowU32 uVar13;
    CowU32 pbVar14;
    int iVar15;
    CowU32 pbVar16;
    iVar3 = rd32((uint32_t)(param_1 + 0x19c));
      iVar4 = rd32((uint32_t)(iVar3 + 0x10));
      iVar5 = rd32((uint32_t)(param_1 + 0x11c));
      iVar6 = rd32((uint32_t)(iVar3 + 0x14));
      iVar7 = rd32((uint32_t)(iVar3 + 0x18));
      iVar3 = rd32((uint32_t)(iVar3 + 0x1c));
      param_3 = param_3 * 4;
      uVar13 = rd32((uint32_t)(param_1 + 0x5c)) >> 1;
      pbVar16 = rd8((uint32_t)(param_3 + rd32((uint32_t)param_2)));
      pbVar12 = rd8((uint32_t)(param_3 + rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)))));
      pbVar14 = rd8((uint32_t)(param_3 + rd32((uint32_t)(param_2 + 4u * (uint32_t)(2)))));
      puVar11 = (CowU32)rd32((uint32_t)param_4);
      if (uVar13 != 0) {
        param_4 = (CowU32)uVar13;
        do {
          bVar1 = rd8((uint32_t)pbVar12);
          pbVar12 = pbVar12 + 1;
          bVar2 = rd8((uint32_t)pbVar14);
          pbVar14 = pbVar14 + 1;
          iVar8 = rd32((uint32_t)((CowU32)bVar2 * 4 + iVar4));
          iVar15 = rd32((uint32_t)((CowU32)bVar1 * 4 + iVar3));
          iVar9 = rd32((uint32_t)((CowU32)bVar2 * 4 + iVar7));
          iVar10 = rd32((uint32_t)((CowU32)bVar1 * 4 + iVar6));
          uVar13 = (CowU32)rd8((uint32_t)pbVar16);
          wr8((uint32_t)puVar11, rd8((uint32_t)(iVar8 + uVar13 + iVar5)));
          iVar15 = iVar15 + iVar9 >> 0x10;
          wr8((uint32_t)(puVar11 + 1u * (uint32_t)(1)), rd8((uint32_t)(uVar13 + iVar15 + iVar5)));
          wr8((uint32_t)(puVar11 + 1u * (uint32_t)(2)), rd8((uint32_t)(uVar13 + iVar10 + iVar5)));
          uVar13 = (CowU32)rd8((uint32_t)(pbVar16 + 1u * (uint32_t)(1)));
          wr8((uint32_t)(puVar11 + 1u * (uint32_t)(3)), rd8((uint32_t)(iVar8 + uVar13 + iVar5)));
          wr8((uint32_t)(puVar11 + 1u * (uint32_t)(4)), rd8((uint32_t)(iVar15 + uVar13 + iVar5)));
          wr8((uint32_t)(puVar11 + 1u * (uint32_t)(5)), rd8((uint32_t)(uVar13 + iVar10 + iVar5)));
          pbVar16 = pbVar16 + 2;
          puVar11 = puVar11 + 6;
          param_4 = (CowU32)((int)param_4 - 1);
        } while (param_4 != (CowU32)0x0);
      }
      if ((rd8((uint32_t)(param_1 + 0x5c)) & 1) != 0) {
        uVar13 = (CowU32)rd8((uint32_t)pbVar16);
        iVar3 = rd32((uint32_t)((CowU32)rd8((uint32_t)pbVar12) * 4 + iVar3));
        iVar7 = rd32((uint32_t)((CowU32)rd8((uint32_t)pbVar14) * 4 + iVar7));
        iVar6 = rd32((uint32_t)((CowU32)rd8((uint32_t)pbVar12) * 4 + iVar6));
        wr8((uint32_t)puVar11, rd8((uint32_t)(rd32((uint32_t)((CowU32)rd8((uint32_t)pbVar14) * 4 + iVar4)) + uVar13 + iVar5)));
        wr8((uint32_t)(puVar11 + 1u * (uint32_t)(1)), rd8((uint32_t)(uVar13 + (iVar3 + iVar7 >> 0x10) + iVar5)));
        wr8((uint32_t)(puVar11 + 1u * (uint32_t)(2)), rd8((uint32_t)(uVar13 + iVar6 + iVar5)));
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
void cow_adapter_10306634(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10306634: push ebp */
    g->ebp = g->esp;                       /* 0x10306635: mov ebp, esp */
    g->esp -= 0x18u;                      /* 0x10306637: 24 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1030663a: push ebx */
    g->ebx = param_1;   /* 0x1030663b: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ebx + 0x19Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x1030663e: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x10u); g->edx = (uint32_t)(rd32(A)); }   /* 0x10306644: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebx + 0x11Cu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10306647: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebx + 0x5Cu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1030664d: register ebx, replayed as the entry ran it */
    cow_lift_10306634(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
