/* f_0x1025d3d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1025d3d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1025d3d0(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 psVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    short sVar10;
    int iVar11;
    CowU32 piVar12;
    int iVar13;
    int local_c;
    uVar4 = param_2;
      local_c = 0;
      uVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x38)) * (int32_t)rd32((uint32_t)(param_1 + 0x38));
      sVar10 = (short)param_2;
      if (0 < (int)uVar5) {
        psVar6 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 8);
        do {
          if (sVar10 == rd16((uint32_t)psVar6)) {
            if (local_c != -1) goto L_1025d5b3;
            break;
          }
          local_c = local_c + 1;
          psVar6 = psVar6 + 2u * (uint32_t)(0x12);
        } while (local_c < (int)uVar5);
      }
      local_c = 0;
      if (0 < (int)uVar5) {
        psVar6 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 8);
        do {
          if (rd16((uint32_t)psVar6) == 0) {
            if (local_c != -1) goto L_1025d45c;
            break;
          }
          local_c = local_c + 1;
          psVar6 = psVar6 + 2u * (uint32_t)(0x12);
        } while (local_c < (int)uVar5);
      }
      param_2 = (int32_t)rd32((uint32_t)(param_1 + 0x4c));
      local_c = -1;
      iVar7 = 0;
      if (0 < (int)uVar5) {
        piVar12 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0x1c);
        do {
          if (rd32((uint32_t)piVar12) < param_2) {
            local_c = iVar7;
            param_2 = rd32((uint32_t)piVar12);
          }
          iVar7 = iVar7 + 1;
          piVar12 = piVar12 + 4u * (uint32_t)(9);
        } while (iVar7 < (int)uVar5);
      }
    L_1025d45c:
      if (local_c < 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar5 & 0xffffff00) & 0xffu)); return;
      }
      iVar13 = local_c * 0x24;
      wr16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 8 + iVar13), sVar10);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x2cu))))) + 0x18u))), COW_IMG(COW_ADDR_LIFT_1025D483), 2u, (const CowU32[]){ uVar4, (int32_t)rd32((uint32_t)(param_1 + 0x44)) + 10 + iVar13 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x2cu))))) + 0x1cu))), COW_IMG(COW_ADDR_LIFT_1025D490), 2u, (const CowU32[]){ uVar4, rd32((uint32_t)(param_1 + 0x30)) }, g->ecx, g->edx, g->eax, 0u);
      psVar6 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + iVar13);
      param_2 = 0;
      wr16((uint32_t)(psVar6 + 2u * (uint32_t)(0xc)), (int16_t)rd16((uint32_t)(param_1 + 0x34)) * rd16((uint32_t)psVar6));
      wr16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + iVar13 + 0x1a), (int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 4 + iVar13)) * (int16_t)rd16((uint32_t)(param_1 + 0x34)));
      wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + iVar13 + 0x13), rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0xc + iVar13)));
      wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + iVar13 + 0x14), rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0xd + iVar13)));
      wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + iVar13 + 0x15), rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0xe + iVar13)));
      wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + iVar13 + 0x16), rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0xf + iVar13)));
      iVar7 = (int32_t)rd32((uint32_t)(param_1 + 0x44)) + iVar13;
      wr8((uint32_t)(iVar7 + 0x11), (int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0xc + iVar13)) / '\x02' + (int8_t)rd8((uint32_t)(iVar7 + 10)));
      iVar7 = (int32_t)rd32((uint32_t)(param_1 + 0x44)) + iVar13;
      wr8((uint32_t)(iVar7 + 0x12), (int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0xd + iVar13)) / '\x02' + (int8_t)rd8((uint32_t)(iVar7 + 0xb)));
      wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0x20 + iVar13), 1);
      iVar11 = (int32_t)rd32((uint32_t)(param_1 + 0x30));
      iVar13 = (int32_t)rd32((uint32_t)(param_1 + 0x44)) + iVar13;
      iVar7 = (int32_t)rd32((uint32_t)(param_1 + 0x48)) +
              ((CowU32)rd16((uint32_t)(iVar13 + 0x1a)) * (int32_t)rd32((uint32_t)(param_1 + 0x3c)) +
              (CowU32)rd16((uint32_t)(iVar13 + 0x18))) * 2;
      cVar2 = (int8_t)rd8((uint32_t)(iVar13 + 0xc));
      if ('\0' < (int8_t)rd8((uint32_t)(iVar13 + 0xd))) {
        iVar3 = (int32_t)rd32((uint32_t)(param_1 + 0x3c));
        iVar9 = (int)cVar2;
        do {
          iVar8 = 0;
          if (0 < iVar9) {
            do {
              wr16((uint32_t)(iVar7 + iVar8 * 2), rd16((uint32_t)(iVar7 + iVar8 * 2)) & 0xfff ^ (CowU16)rd8((uint32_t)(iVar8 + iVar11)) << 0xc);
              iVar8 = iVar8 + 1;
              iVar9 = (int)(int8_t)rd8((uint32_t)(iVar13 + 0xc));
            } while (iVar8 < iVar9);
          }
          iVar7 = iVar7 + iVar3 * 2;
          iVar11 = iVar11 + cVar2;
          param_2 = param_2 + 1;
        } while (((int8_t)(param_2) < (int8_t)((int8_t)rd8((uint32_t)(iVar13 + 0xd)))));
      }
      wr8((uint32_t)(param_1 + 0x40), 1);
    L_1025d5b3:
      local_c = local_c * 0x24;
      puVar1 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0x10 + local_c);
      wr32((uint32_t)param_3, rd32((uint32_t)puVar1));
      wr32((uint32_t)(param_3 + 4u * (uint32_t)(1)), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(1))));
      wr32((uint32_t)(param_3 + 4u * (uint32_t)(2)), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(2))));
      wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)) + 0x1c + local_c), rd32((uint32_t)(param_1 + 0x4c)));
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)(((CowU32)local_c >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 12 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1025d3d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0xcu;                      /* 0x1025d3d0: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1025d3d3: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1025d3d4: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1025d3d5: push esi */
    g->esi = g->ecx;   /* 0x1025d3d6: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x1Cu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1025d3d8: register ebp, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x1025d3dc: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x38u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1025d3de: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1025d3e1: push edi */
    cow_lift_1025d3d0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
