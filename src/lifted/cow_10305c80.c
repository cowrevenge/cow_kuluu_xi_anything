/* f_0x10305c80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10305c80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10305c80(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 piVar2;
    CowU32 piVar3;
    CowU8 bVar4;
    CowU8 bVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    CowU32 puVar12;
    CowU32 pbVar13;
    int iVar14;
    CowU32 uVar15;
    int iVar16;
    int iVar17;
    int local_c;
    int local_8;
    iVar6 = rd32((uint32_t)(param_1 + 0x1a0));
      iVar7 = rd32((uint32_t)(param_1 + 0x5c));
      iVar8 = rd32((uint32_t)(param_1 + 0x11c));
      iVar9 = rd32((uint32_t)(iVar6 + 8));
      iVar10 = rd32((uint32_t)(iVar6 + 0xc));
      iVar11 = rd32((uint32_t)(iVar6 + 0x10));
      iVar6 = rd32((uint32_t)(iVar6 + 0x14));
      if (-1 < param_5 + -1) {
        param_3 = param_3 << 2;
        local_c = param_5;
        do {
          piVar1 = (CowU32)(param_3 + rd32((uint32_t)param_2));
          pbVar13 = rd8((uint32_t)(param_3 + rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)))));
          piVar2 = (CowU32)(param_3 + rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))));
          piVar3 = (CowU32)(param_3 + rd32((uint32_t)(param_2 + 4u * (uint32_t)(3))));
          param_3 = param_3 + 4;
          if (iVar7 != 0) {
            iVar16 = rd32((uint32_t)piVar1) - (int)pbVar13;
            iVar17 = rd32((uint32_t)piVar2) - (int)pbVar13;
            iVar14 = rd32((uint32_t)piVar3) - (int)pbVar13;
            puVar12 = (CowU32)rd32((uint32_t)param_4);
            local_8 = iVar7;
            while( 1 ) {
              uVar15 = (CowU32)rd8((uint32_t)(pbVar13 + 1u * (uint32_t)(iVar16)));
              bVar4 = rd8((uint32_t)pbVar13);
              bVar5 = rd8((uint32_t)(pbVar13 + 1u * (uint32_t)(iVar17)));
              wr8((uint32_t)puVar12, rd8((uint32_t)(((iVar8 - rd32((uint32_t)((CowU32)bVar5 * 4 + iVar9))) - uVar15) + 0xff)));
              wr8((uint32_t)(puVar12 + 1u * (uint32_t)(1)), rd8((uint32_t)(((iVar8 - (rd32((uint32_t)((CowU32)bVar4 * 4 + iVar6)) +
                                        rd32((uint32_t)((CowU32)bVar5 * 4 + iVar11)) >> 0x10)) - uVar15) + 0xff)));
              wr8((uint32_t)(puVar12 + 1u * (uint32_t)(2)), rd8((uint32_t)(((iVar8 - rd32((uint32_t)((CowU32)bVar4 * 4 + iVar10))) - uVar15) + 0xff)));
              wr8((uint32_t)(puVar12 + 1u * (uint32_t)(3)), rd8((uint32_t)(pbVar13 + 1u * (uint32_t)(iVar14))));
              pbVar13 = pbVar13 + 1;
              local_8 = local_8 + -1;
              if (local_8 == 0) break;
              puVar12 = puVar12 + 4;
            }
          }
          local_c = local_c + -1;
          param_4 = param_4 + 1;
        } while (local_c != 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx, edi], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10305c80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10305c80: push ebp */
    g->ebp = g->esp;                       /* 0x10305c81: mov ebp, esp */
    g->esp -= 0x2cu;                      /* 0x10305c83: 44 bytes of locals */
    g->ecx = param_1;   /* 0x10305c86: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + 0x1A0u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10305c89: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10305c8f: push edi */
    { uint32_t A = (uint32_t)(g->ecx + 0x5Cu); g->edi = (uint32_t)(rd32(A)); }   /* 0x10305c90: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x11Cu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10305c93: register ecx, replayed as the entry ran it */
    cow_lift_10305c80(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
