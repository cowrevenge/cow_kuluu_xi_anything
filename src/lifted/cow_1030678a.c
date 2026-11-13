/* f_0x1030678a - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1030678a (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1030678a(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU8 bVar2;
    CowU8 bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    CowU32 pbVar8;
    CowU32 pbVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    CowU32 puVar13;
    CowU32 pbVar14;
    CowU32 uVar15;
    CowU32 puVar16;
    CowU32 pbVar17;
    int iVar18;
    int iVar19;
    CowU32 local_c;
    iVar19 = (int32_t)rd32((uint32_t)(param_1 + 0x19c));
      iVar4 = (int32_t)rd32((uint32_t)(iVar19 + 0x10));
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x11c));
      iVar6 = (int32_t)rd32((uint32_t)(iVar19 + 0x14));
      iVar7 = (int32_t)rd32((uint32_t)(iVar19 + 0x18));
      iVar19 = (int32_t)rd32((uint32_t)(iVar19 + 0x1c));
      piVar1 = (CowU32)((int32_t)rd32((uint32_t)param_2) + (int)param_3 * 8);
      pbVar8 = (CowU32)rd32((uint32_t)piVar1);
      pbVar9 = (CowU32)rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1)));
      local_c = rd32((uint32_t)(param_1 + 0x5c)) >> 1;
      pbVar14 = rd8((uint32_t)((int)param_3 * 4 + (int32_t)rd32((uint32_t)((int)param_2 + 4))));
      pbVar17 = rd8((uint32_t)((int)param_3 * 4 + (int32_t)rd32((uint32_t)((int)param_2 + 8))));
      puVar13 = (CowU32)rd32((uint32_t)param_4);
      puVar16 = (CowU32)rd32((uint32_t)(param_4 + 4u * (uint32_t)(1)));
      param_2 = pbVar8;
      param_3 = pbVar9;
      if (local_c != 0) {
        do {
          bVar2 = rd8((uint32_t)pbVar14);
          pbVar14 = pbVar14 + 1;
          bVar3 = rd8((uint32_t)pbVar17);
          pbVar17 = pbVar17 + 1;
          iVar10 = (int32_t)rd32((uint32_t)((CowU32)bVar3 * 4 + iVar4));
          iVar18 = (int32_t)rd32((uint32_t)((CowU32)bVar2 * 4 + iVar19));
          iVar11 = (int32_t)rd32((uint32_t)((CowU32)bVar3 * 4 + iVar7));
          iVar12 = (int32_t)rd32((uint32_t)((CowU32)bVar2 * 4 + iVar6));
          uVar15 = (CowU32)rd8((uint32_t)param_2);
          wr8((uint32_t)puVar13, rd8((uint32_t)(iVar10 + uVar15 + iVar5)));
          iVar18 = iVar18 + iVar11 >> 0x10;
          wr8((uint32_t)(puVar13 + 1u * (uint32_t)(1)), rd8((uint32_t)(uVar15 + iVar18 + iVar5)));
          wr8((uint32_t)(puVar13 + 1u * (uint32_t)(2)), rd8((uint32_t)(uVar15 + iVar12 + iVar5)));
          uVar15 = (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(1)));
          wr8((uint32_t)(puVar13 + 1u * (uint32_t)(3)), rd8((uint32_t)(iVar10 + uVar15 + iVar5)));
          wr8((uint32_t)(puVar13 + 1u * (uint32_t)(4)), rd8((uint32_t)(uVar15 + iVar18 + iVar5)));
          wr8((uint32_t)(puVar13 + 1u * (uint32_t)(5)), rd8((uint32_t)(uVar15 + iVar12 + iVar5)));
          uVar15 = (CowU32)rd8((uint32_t)param_3);
          param_2 = param_2 + 2;
          wr8((uint32_t)puVar16, rd8((uint32_t)(iVar10 + uVar15 + iVar5)));
          wr8((uint32_t)(puVar16 + 1u * (uint32_t)(1)), rd8((uint32_t)(uVar15 + iVar18 + iVar5)));
          wr8((uint32_t)(puVar16 + 1u * (uint32_t)(2)), rd8((uint32_t)(uVar15 + iVar12 + iVar5)));
          puVar13 = puVar13 + 6;
          uVar15 = (CowU32)rd8((uint32_t)(param_3 + 1u * (uint32_t)(1)));
          param_3 = param_3 + 2;
          wr8((uint32_t)(puVar16 + 1u * (uint32_t)(3)), rd8((uint32_t)(iVar10 + uVar15 + iVar5)));
          wr8((uint32_t)(puVar16 + 1u * (uint32_t)(4)), rd8((uint32_t)(iVar18 + uVar15 + iVar5)));
          wr8((uint32_t)(puVar16 + 1u * (uint32_t)(5)), rd8((uint32_t)(uVar15 + iVar12 + iVar5)));
          puVar16 = puVar16 + 6;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if ((rd8((uint32_t)(param_1 + 0x5c)) & 1) != 0) {
        iVar4 = (int32_t)rd32((uint32_t)((CowU32)rd8((uint32_t)pbVar17) * 4 + iVar4));
        iVar19 = (int32_t)rd32((uint32_t)((CowU32)rd8((uint32_t)pbVar14) * 4 + iVar19));
        iVar7 = (int32_t)rd32((uint32_t)((CowU32)rd8((uint32_t)pbVar17) * 4 + iVar7));
        iVar6 = (int32_t)rd32((uint32_t)((CowU32)rd8((uint32_t)pbVar14) * 4 + iVar6));
        uVar15 = (CowU32)rd8((uint32_t)param_2);
        wr8((uint32_t)puVar13, rd8((uint32_t)(iVar4 + uVar15 + iVar5)));
        iVar19 = iVar19 + iVar7 >> 0x10;
        wr8((uint32_t)(puVar13 + 1u * (uint32_t)(1)), rd8((uint32_t)(uVar15 + iVar19 + iVar5)));
        wr8((uint32_t)(puVar13 + 1u * (uint32_t)(2)), rd8((uint32_t)(uVar15 + iVar6 + iVar5)));
        uVar15 = (CowU32)rd8((uint32_t)param_3);
        wr8((uint32_t)puVar16, rd8((uint32_t)(iVar4 + uVar15 + iVar5)));
        wr8((uint32_t)(puVar16 + 1u * (uint32_t)(1)), rd8((uint32_t)(uVar15 + iVar19 + iVar5)));
        wr8((uint32_t)(puVar16 + 1u * (uint32_t)(2)), rd8((uint32_t)(uVar15 + iVar6 + iVar5)));
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
void cow_adapter_1030678a(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1030678a: push ebp */
    g->ebp = g->esp;                       /* 0x1030678b: mov ebp, esp */
    g->esp -= 0x20u;                      /* 0x1030678d: 32 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10306790: push ebx */
    g->ebx = param_1;   /* 0x10306791: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ebx + 0x19Cu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10306794: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x10u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1030679a: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebx + 0x11Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x1030679d: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebx + 0x5Cu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x103067a3: register ebx, replayed as the entry ran it */
    cow_lift_1030678a(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
