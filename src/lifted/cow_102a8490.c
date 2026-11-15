/* f_0x102a8490 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a8490 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a8490(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 piVar2;
    CowU32 piVar3;
    CowU8 uVar4;
    CowU16 uVar5;
    int iVar6;
    CowU32 puVar7;
    CowU32 puVar8;
    int iVar9;
    CowU32 pbVar10;
    CowU32 pbVar11;
    CowU32 uVar12;
    puVar7 = param_2;
      iVar9 = param_3;
      while (0 < iVar9) {
        uVar12 = rd32(COW_IMG(COW_ADDR_LIFT_109AAAB0)) & 0xffff;
        if (rd32(COW_IMG(COW_ADDR_LIFT_109AA894)) < (int)uVar12) {
    L_102a86c2:
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102A86CC), 1u, (const CowU32[]){ 272360744u }, g->ecx, g->edx, param_2, 4u);
    L_102a86cf:
          if (0 < iVar9) {
            cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102A86E3), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BE4F0), iVar9, COW_IMG(COW_ADDR_LIFT_109AA8A8) }, g->ecx, g->edx, param_2, 12u);
          }
          break;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_109A2878), rd32(COW_IMG(COW_ADDR_LIFT_109A2878)) << 8 | (CowU32)rd8((uint32_t)param_1));
        iVar6 = rd32(COW_IMG(COW_ADDR_LIFT_109A2880)) + 8;
        pbVar10 = param_1 + 1;
        if (iVar6 < (int)uVar12) {
          wr32(COW_IMG(COW_ADDR_LIFT_109A2878), rd32(COW_IMG(COW_ADDR_LIFT_109A2878)) << 8 | (CowU32)rd8((uint32_t)pbVar10));
          pbVar10 = param_1 + 2;
          iVar6 = rd32(COW_IMG(COW_ADDR_LIFT_109A2880)) + 0x10;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_109A2880), iVar6 - uVar12);
        wr32(COW_IMG(COW_ADDR_LIFT_109AA894), rd32(COW_IMG(COW_ADDR_LIFT_109AA894)) - uVar12);
        uVar12 = (int)rd32(COW_IMG(COW_ADDR_LIFT_109A2878)) >> ((CowU8)rd32(COW_IMG(COW_ADDR_LIFT_109A2880)) & 0x1f) & rd32(COW_IMG(COW_ADDR_LIFT_109A2868));
        if (uVar12 == 0x101) goto L_102a86cf;
        if (uVar12 == 0x100) {
          wr32(COW_IMG(COW_ADDR_LIFT_109A288C), (CowU32)COW_IMG(COW_ADDR_LIFT_109A30A0));
          wr32(COW_IMG(COW_ADDR_LIFT_109AAAB2), (CowU16)(rd32(COW_IMG(COW_ADDR_LIFT_109AAAB0)) >> 0x10));
          wr32(COW_IMG(COW_ADDR_LIFT_109AAAB0), (((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109AAAB2))) & 0xffffu) << 16 | ((uint32_t)(9) & 0xffffu)));
          wr32(COW_IMG(COW_ADDR_LIFT_109A2868), 0x1ff);
          wr32(COW_IMG(COW_ADDR_LIFT_109AAAAC), (CowU32)COW_IMG(COW_ADDR_LIFT_109A3880));
          if (rd32(COW_IMG(COW_ADDR_LIFT_109AA894)) < 9) goto L_102a86c2;
          iVar6 = rd32(COW_IMG(COW_ADDR_LIFT_109A2880)) + 8;
          wr32(COW_IMG(COW_ADDR_LIFT_109A2878), rd32(COW_IMG(COW_ADDR_LIFT_109A2878)) << 8 | (CowU32)rd8((uint32_t)pbVar10));
          pbVar11 = pbVar10 + 1;
          if (iVar6 < 9) {
            wr32(COW_IMG(COW_ADDR_LIFT_109A2878), rd32(COW_IMG(COW_ADDR_LIFT_109A2878)) << 8 | (CowU32)rd8((uint32_t)pbVar11));
            pbVar11 = pbVar10 + 2;
            iVar6 = rd32(COW_IMG(COW_ADDR_LIFT_109A2880)) + 0x10;
          }
          wr32(COW_IMG(COW_ADDR_LIFT_109A2880), iVar6 + -9);
          wr32(COW_IMG(COW_ADDR_LIFT_109AA894), rd32(COW_IMG(COW_ADDR_LIFT_109AA894)) + -9);
          uVar12 = (int)rd32(COW_IMG(COW_ADDR_LIFT_109A2878)) >> ((CowU8)rd32(COW_IMG(COW_ADDR_LIFT_109A2880)) & 0x1f) & 0x1ff;
          if (uVar12 == 0x101) goto L_102a86cf;
          wr8((uint32_t)puVar7, (char)uVar12);
          wr32(COW_IMG(COW_ADDR_LIFT_109A287C), (CowU32)(COW_IMG(COW_ADDR_LIFT_109A2890) + uVar12 * 8));
          pbVar10 = pbVar11;
    L_102a86b7:
          param_1 = puVar7 + 1;
          iVar9 = iVar9 + -1;
          puVar7 = param_1;
          param_1 = pbVar10;
        }
        else {
          iVar6 = uVar12 * 8;
          piVar2 = (CowU32)(COW_IMG(COW_ADDR_LIFT_109A2890) + iVar6);
          wr32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_109A288C)), (int)rd32(COW_IMG(COW_ADDR_LIFT_109A287C)));
          wr8((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_109A288C)) + 7), rd8((uint32_t)(rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_109A288C))) + 7)));
          wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109A288C)) + 1), (int16_t)rd16((uint32_t)(rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_109A288C))) + 4)) + 1);
          if (piVar2 < rd32(COW_IMG(COW_ADDR_LIFT_109A288C))) {
            uVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_109A2897) + 4u * (uint32_t)(iVar6)));
          }
          else {
            uVar4 = rd8((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_109A288C)) + 7));
          }
          wr8((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_109A288C)) + 6), uVar4);
          wr32(COW_IMG(COW_ADDR_LIFT_109A288C), rd32(COW_IMG(COW_ADDR_LIFT_109A288C)) + 2);
          if (rd32(COW_IMG(COW_ADDR_LIFT_109AAAAC)) < rd32(COW_IMG(COW_ADDR_LIFT_109A288C))) {
            uVar5 = rd32(COW_IMG(COW_ADDR_LIFT_109AAAB0)) + 1;
            wr32(COW_IMG(COW_ADDR_LIFT_109AAAB0), (((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109AAAB2))) & 0xffffu) << 16 | ((uint32_t)(uVar5) & 0xffffu)));
            if (0xc < uVar5) {
              wr32(COW_IMG(COW_ADDR_LIFT_109AAAB0), (((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_109AAAB2))) & 0xffffu) << 16 | ((uint32_t)(0xc) & 0xffffu)));
            }
            wr32(COW_IMG(COW_ADDR_LIFT_109A2868), (1 << (rd32(COW_IMG(COW_ADDR_LIFT_109AAAB0)) & 0x1f)) - 1);
            wr32(COW_IMG(COW_ADDR_LIFT_109AAAAC), COW_IMG(COW_ADDR_LIFT_109A2888) + rd32(COW_IMG(COW_ADDR_LIFT_109A2868)) * 2);
          }
          wr32(COW_IMG(COW_ADDR_LIFT_109A287C), piVar2);
          if ((int)uVar12 < 0x100) {
            wr8((uint32_t)puVar7, (char)uVar12);
            goto L_102a86b7;
          }
          uVar12 = (CowU32)rd16((uint32_t)(COW_IMG(COW_ADDR_LIFT_109A2894) + iVar6));
          piVar3 = piVar2;
          if (iVar9 < (int)uVar12) goto L_102a8711;
          puVar7 = puVar7 + uVar12;
          iVar9 = iVar9 - uVar12;
          puVar8 = puVar7;
          do {
            puVar8 = puVar8 + -1;
            puVar1 = (CowU32)((int)piVar2 + 6);
            piVar2 = (CowU32)rd32((uint32_t)piVar2);
            wr8((uint32_t)puVar8, rd8((uint32_t)puVar1));
            param_1 = pbVar10;
          } while (piVar2 != (CowU32)0x0);
        }
      }
    L_102a86e6:
      cow_bridge_102a8730(g, COW_IMG(COW_ADDR_LIFT_102A8702), 4u, (const CowU32[]){ param_2, param_3, rd32(COW_IMG(COW_ADDR_LIFT_109AA890)), rd32(COW_IMG(COW_ADDR_LIFT_109A2888)) }, g->ecx, g->edx, param_2, 16u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xff) & 0xffu)); return;
    L_102a8711:
      do {
        piVar3 = (CowU32)rd32((uint32_t)piVar3);
      } while (iVar9 < (int)(CowU32)rd16((uint32_t)(piVar3 + 4u * (uint32_t)(1))));
      puVar7 = puVar7 + iVar9;
      wr32(COW_IMG(COW_ADDR_LIFT_109AA8A0), piVar2);
      do {
        puVar7 = puVar7 + -1;
        iVar9 = iVar9 + -1;
        wr8((uint32_t)puVar7, rd8((uint32_t)((int)piVar3 + 6)));
        piVar3 = (CowU32)rd32((uint32_t)piVar3);
      } while (iVar9 != 0);
      goto L_102a86e6;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a8490(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_2;   /* 0x102a8490: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102a8494: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102a8495: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102a8499: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102a849a: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a849e: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_102a8490(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
