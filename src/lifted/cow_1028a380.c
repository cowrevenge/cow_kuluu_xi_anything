/* f_0x1028a380 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028a380 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1028a380(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    CowU32 pcVar3;
    CowU32 pcVar4;
    CowU32 pcVar5;
    CowU32 puVar6;
    CowU32 uVar7;
    int iVar8;
    CowU32 uVar9;
    CowU32 pcVar10;
    CowU32 pcVar11;
    CowU32 pcVar12;
    if (param_1 != (CowU32)0x0) {
        uVar7 = 0xffffffff;
        pcVar2 = param_1;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = rd8((uint32_t)pcVar2);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        pcVar2 = (CowU32)cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1028A3AE), 4u, (const CowU32[]){ 1u, (param_1 | 4294967295u), 272340892u, 234u }, g->ecx, g->edx, 0u, 0u);
        if (pcVar2 == (CowU32)0x0) {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028A3CB), 3u, (const CowU32[]){ 272316316u, 272340892u, 237u }, g->ecx, g->edx, 0u, 0u);
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028A3D5), 1u, (const CowU32[]){ 272341028u }, g->ecx, g->edx, 0u, 16u);
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        wr8((uint32_t)pcVar2, '\0');
        if (rd8((uint32_t)param_1) == '/') {
          iVar8 = -1;
          pcVar3 = pcVar2;
          do {
            pcVar5 = pcVar3;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar5 = pcVar3 + 1;
            cVar1 = rd8((uint32_t)pcVar3);
            pcVar3 = pcVar5;
          } while (cVar1 != '\0');
          wr16((uint32_t)(pcVar5 + -1), rd32(COW_IMG(COW_ADDR_LIFT_1034FFB8)));
        }
        uVar7 = 0xffffffff;
        pcVar3 = param_1;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = rd8((uint32_t)pcVar3);
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = (CowU32)cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1028A419), 4u, (const CowU32[]){ 1, ~uVar7, COW_IMG(COW_ADDR_LIFT_103B979C), 0xf6 }, g->ecx, g->edx, 0u, 0u);
        if (pcVar3 == (CowU32)0x0) {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028A43A), 3u, (const CowU32[]){ 272316316u, 272340892u, 249u }, g->ecx, g->edx, 0u, 0u);
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028A445), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B97F0), param_1 }, g->ecx, g->edx, 0u, 0u);
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1028A455), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_103B979C), 0xfa }, g->ecx, g->edx, 0u, 32u);
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        iVar8 = (int)pcVar3 - (int)param_1;
        do {
          cVar1 = rd8((uint32_t)param_1);
          wr8((uint32_t)(param_1 + 1u * (uint32_t)(iVar8)), cVar1);
          param_1 = param_1 + 1;
        } while (cVar1 != '\0');
        pcVar5 = pcVar3;
        pcVar10 = (CowU32)0x0;
        while( 1 ) {
          pcVar4 = (CowU32)cow_bridge_103129b8(g, COW_IMG(COW_ADDR_LIFT_1028A47F), 2u, (const CowU32[]){ pcVar5, COW_IMG(COW_ADDR_LIFT_103B97EC) }, g->ecx, g->edx, 0u, 0u);
          pcVar5 = (CowU32)0x0;
          if (pcVar4 == (CowU32)0x0) break;
          if (pcVar10 != (CowU32)0x0) {
            uVar7 = 0xffffffff;
            do {
              pcVar12 = pcVar10;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar12 = pcVar10 + 1;
              cVar1 = rd8((uint32_t)pcVar10);
              pcVar10 = pcVar12;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            iVar8 = -1;
            pcVar10 = pcVar2;
            do {
              pcVar11 = pcVar10;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar11 = pcVar10 + 1;
              cVar1 = rd8((uint32_t)pcVar10);
              pcVar10 = pcVar11;
            } while (cVar1 != '\0');
            pcVar10 = pcVar12 + -uVar7;
            pcVar12 = pcVar11 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              wr32((uint32_t)pcVar12, rd32((uint32_t)pcVar10));
              pcVar10 = pcVar10 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              wr8((uint32_t)pcVar12, rd8((uint32_t)pcVar10));
              pcVar10 = pcVar10 + 1;
              pcVar12 = pcVar12 + 1;
            }
            iVar8 = -1;
            pcVar10 = pcVar2;
            do {
              pcVar12 = pcVar10;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar12 = pcVar10 + 1;
              cVar1 = rd8((uint32_t)pcVar10);
              pcVar10 = pcVar12;
            } while (cVar1 != '\0');
            wr16((uint32_t)(pcVar12 + -1), rd32(COW_IMG(COW_ADDR_LIFT_1034FFB8)));
          }
          pcVar10 = pcVar4;
        }
        iVar8 = -1;
        pcVar5 = pcVar2;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          cVar1 = rd8((uint32_t)pcVar5);
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (iVar8 != -2) {
          uVar7 = 0xffffffff;
          pcVar5 = pcVar2;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = rd8((uint32_t)pcVar5);
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          puVar6 = (CowU32)
                   cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1028A4FC), 4u, (const CowU32[]){ 1, ~uVar7, COW_IMG(COW_ADDR_LIFT_103B979C), 0x133 }, g->ecx, g->edx, 0u, 0u);
          pcVar5 = pcVar2;
          do {
            cVar1 = rd8((uint32_t)pcVar5);
            wr8((uint32_t)(pcVar5 + 1u * (uint32_t)((int)puVar6 - (int)pcVar2)), cVar1);
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          if (puVar6 == (CowU32)0x0) {
            cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028A529), 3u, (const CowU32[]){ 272316316u, 272340892u, 311u }, g->ecx, g->edx, 0u, 0u);
            cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028A534), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B97C8), pcVar3 }, g->ecx, g->edx, 0u, 0u);
            cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1028A544), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_103B979C), 0x138 }, g->ecx, g->edx, 0u, 0u);
            cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1028A554), 3u, (const CowU32[]){ pcVar3, COW_IMG(COW_ADDR_LIFT_103B979C), 0x139 }, g->ecx, g->edx, 0u, 44u);
            g->eax = (CowU32)((CowU32)0x0); return;
          }
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1028A56F), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_103B979C), 0x13d }, g->ecx, g->edx, 0u, 0u);
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1028A57F), 3u, (const CowU32[]){ pcVar3, COW_IMG(COW_ADDR_LIFT_103B979C), 0x13e }, g->ecx, g->edx, 0u, 24u);
          g->eax = (CowU32)(puVar6); return;
        }
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1028A59A), 3u, (const CowU32[]){ pcVar2, COW_IMG(COW_ADDR_LIFT_103B979C), 0x11b }, g->ecx, g->edx, 0u, 0u);
        if (rd8((uint32_t)pcVar3) == '/') {
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1028A5B4), 3u, (const CowU32[]){ pcVar3, COW_IMG(COW_ADDR_LIFT_103B979C), 0x122 }, g->ecx, g->edx, 0u, 0u);
          puVar6 = (CowU32)cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1028A5C7), 4u, (const CowU32[]){ 1u, 2u, 272340892u, 291u }, g->ecx, g->edx, 0u, 0u);
          wr16((uint32_t)puVar6, rd32(COW_IMG(COW_ADDR_LIFT_1034FFB8)));
          g->eax = (CowU32)(puVar6); return;
        }
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1028A5EA), 3u, (const CowU32[]){ pcVar3, COW_IMG(COW_ADDR_LIFT_103B979C), 0x12d }, g->ecx, g->edx, 0u, 12u);
      }
      g->eax = (CowU32)((CowU32)0x0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1028a380(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1028a380: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1028a381: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1028a382: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1028a383: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1028a384: register esi, replayed as the entry ran it */
    g->eax = 0u;   /* 0x1028a388: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1028a38a: push edi */
    cow_lift_1028a380(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
