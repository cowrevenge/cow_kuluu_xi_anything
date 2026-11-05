/* f_0x102c79bb - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c79bb (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c79bb(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    uVar3 = param_1 & 0xffff;
      param_1 = param_1 >> 0x10;
      if (param_2 == (CowU32)0x0) {
        uVar3 = 1;
      }
      else {
        while (param_3 != 0) {
          uVar2 = 0x15b0;
          if (param_3 < 0x15b0) {
            uVar2 = param_3;
          }
          param_3 = param_3 - uVar2;
          if (0xf < (int)uVar2) {
            uVar1 = uVar2 >> 4;
            uVar2 = uVar2 + uVar1 * -0x10;
            do {
              iVar4 = uVar3 + rd8((uint32_t)param_2);
              iVar5 = iVar4 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(1)));
              iVar6 = iVar5 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(2)));
              iVar7 = iVar6 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(3)));
              iVar8 = iVar7 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(4)));
              iVar9 = iVar8 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(5)));
              iVar10 = iVar9 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(6)));
              iVar11 = iVar10 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(7)));
              iVar12 = iVar11 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(8)));
              iVar13 = iVar12 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(9)));
              iVar14 = iVar13 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(10)));
              iVar15 = iVar14 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(0xb)));
              iVar16 = iVar15 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(0xc)));
              iVar17 = iVar16 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(0xd)));
              iVar18 = iVar17 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(0xe)));
              uVar3 = iVar18 + (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(0xf)));
              param_1 = param_1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                        iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
              param_2 = param_2 + 0x10;
              uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            uVar3 = uVar3 + rd8((uint32_t)param_2);
            param_2 = param_2 + 1;
            param_1 = param_1 + uVar3;
          }
          uVar3 = uVar3 % 0xfff1;
          param_1 = param_1 % 0xfff1;
        }
        uVar3 = param_1 << 0x10 | uVar3;
      }
      g->eax = (CowU32)(uVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c79bb(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c79bb: push ebp */
    g->ebp = g->esp;                       /* 0x102c79bc: mov ebp, esp */
    g->ecx = param_2;   /* 0x102c79be: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c79c1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c79c2: push edi */
    g->edi = param_1;   /* 0x102c79c3: the value the entry loaded and the decompiler dropped */
    g->esi = g->edi;   /* 0x102c79c6: the value the entry loaded and the decompiler dropped */
    cow_lift_102c79bb(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
