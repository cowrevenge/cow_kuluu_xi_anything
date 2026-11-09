/* f_0x102cb290 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102cb290 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102cb290(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    CowU32 uVar7;
    float fVar8;
    CowU32 uVar9;
    CowU32 piVar10;
    CowU32 uVar11;
    CowU32 uVar12;
    CowU32 uVar13;
    CowU32 pfVar14;
    int iStack_50;
    iStack_50 = 0;
      piVar10 = param_1;
      do {
        iVar4 = rd32((uint32_t)piVar10);
        if (iVar4 != 0) {
          iVar5 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103CC0C8) + 4u * (uint32_t)(iVar4 * 2)));
          uVar7 = rd32((uint32_t)(piVar10 + 4u * (uint32_t)(0x20))) * 0x2b0000;
          fVar8 = (float)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344E4C) + (((uVar7 >> 0x17) + iVar4) * 3 - rd32((uint32_t)(piVar10 + 4u * (uint32_t)(0x20)))) * 4))
                         - (uVar7 & 0x7f800000));
          pfVar14 = (CowU32)(param_1 +
                             rd32((uint32_t)(((int)COW_IMG(COW_ADDR_LIFT_10344DC8) - (int)param_1) + (int)piVar10)) + 800);
          iVar6 = rd32((uint32_t)(((int)COW_IMG(COW_ADDR_LIFT_10344DCC) - (int)param_1) + (int)piVar10));
          if (iVar4 == 1) {
            do {
              iVar4 = ((CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(1))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 3) +
                      ((CowU32)(fVar8 * rdf32((uint32_t)pfVar14) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 3) * 4;
              iVar1 = ((CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(3))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 3) +
                      ((CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(2))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 3) * 4;
              iVar2 = ((CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(5))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 3) +
                      ((CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(4))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 3) * 4;
              iVar3 = ((CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(7))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 3) +
                      ((CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(6))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 3) * 4;
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB3CA), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + iVar4 * 8)) >> 8, param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + iVar4 * 8));
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB3EC), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + iVar1 * 8)) >> 8, param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + iVar1 * 8));
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB40E), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + iVar2 * 8)) >> 8, param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + iVar2 * 8));
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB42D), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + iVar3 * 8)) >> 8, param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              pfVar14 = pfVar14 + 8;
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + iVar3 * 8));
            } while (pfVar14 != (CowU32)(param_1 + iVar6 + 800));
          }
          else {
            uVar7 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344E9C) + iVar4 * 4));
            do {
              uVar9 = (CowU32)(fVar8 * rdf32((uint32_t)pfVar14) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar7;
              uVar11 = (CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(1))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar7;
              uVar12 = (CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(2))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar7;
              uVar13 = (CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(3))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar7;
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB4CB), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + uVar9 * 8)), param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + uVar9 * 8));
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB4ED), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + uVar11 * 8)), param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + uVar11 * 8));
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB512), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + uVar12 * 8)), param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + uVar12 * 8));
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB531), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + uVar13 * 8)), param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + uVar13 * 8));
              uVar9 = (CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(4))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar7;
              uVar11 = (CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(5))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar7;
              uVar12 = (CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(6))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar7;
              uVar13 = (CowU32)(fVar8 * rdf32((uint32_t)(pfVar14 + 4u * (uint32_t)(7))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar7;
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB641), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + uVar9 * 8)), param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + uVar9 * 8));
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB666), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + uVar11 * 8)), param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + uVar11 * 8));
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB68B), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + uVar12 * 8)), param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + uVar12 * 8));
              cow_bridge_102cb260(g, COW_IMG(COW_ADDR_LIFT_102CB6AD), 3u, (const CowU32[]){ rd32((uint32_t)(iVar5 + uVar13 * 8)), param_2, rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x2d6))) }, g->ecx, g->edx, g->eax, 0u);
              pfVar14 = pfVar14 + 8;
              param_2 = param_2 + rd32((uint32_t)(iVar5 + 4 + uVar13 * 8));
            } while (pfVar14 != (CowU32)(param_1 + iVar6 + 800));
          }
        }
        iStack_50 = iStack_50 + 1;
        piVar10 = piVar10 + 1;
      } while (iStack_50 != rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x40))));
      g->eax = (CowU32)(param_2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 100 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102cb290(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x64u;                      /* 0x102cb290: 100 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102cb293: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102cb294: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x70u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102cb295: register ebp, replayed as the entry ran it */
    g->eax = COW_IMG(COW_ADDR_LIFT_10344DC8);   /* 0x102cb299: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->ebp; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x102cb29e: register eax, replayed as the entry ran it */
    g->edx = g->ebp;   /* 0x102cb2a0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_102cb290(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
