/* f_0x101101f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101101f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101101f0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 uVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 puVar6;
    CowU32 pcVar7;
    CowU32 pcVar8;
    if ((2 < param_4) &&
         (((iVar3 = cow_bridge_10109570(g, COW_IMG(COW_ADDR_LIFT_1011021A), 1u, (const CowU32[]){ 272023416u }, g->ecx, g->edx, g->eax, 0u), iVar3 == 0 ||
           (iVar3 = cow_bridge_10109570(g, COW_IMG(COW_ADDR_LIFT_1011022A), 1u, (const CowU32[]){ 272015768u }, g->ecx, g->edx, g->eax, 0u), iVar3 == 0)) ||
          (iVar3 = cow_bridge_10109570(g, COW_IMG(COW_ADDR_LIFT_1011023A), 1u, (const CowU32[]){ 272023408u }, g->ecx, g->edx, g->eax, 0u), iVar3 == 0)))) {
        iVar3 = cow_bridge_10109570(g, COW_IMG(COW_ADDR_LIFT_1011024E), 1u, (const CowU32[]){ 272023416u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == 0) {
          uVar4 = 1;
        }
        else {
          iVar3 = cow_bridge_10109570(g, COW_IMG(COW_ADDR_LIFT_10110265), 1u, (const CowU32[]){ 272015768u }, g->ecx, g->edx, g->eax, 0u);
          uVar4 = -(CowU32)(iVar3 != 0) & 2;
        }
        wr32((uint32_t)(param_1 + 8), uVar4);
        if (3 < param_4) {
          uVar2 = cow_bridge_101093f0(g, COW_IMG(COW_ADDR_LIFT_10110285), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = cow_bridge_1031479c(g, COW_IMG(COW_ADDR_LIFT_10110290), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 4u);
          if (iVar3 != 0) {
            uVar2 = cow_bridge_101093f0(g, COW_IMG(COW_ADDR_LIFT_101102A7), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            iVar3 = cow_bridge_1031479c(g, COW_IMG(COW_ADDR_LIFT_101102B2), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 4u);
            if (iVar3 != 0) {
              uVar2 = cow_bridge_101093f0(g, COW_IMG(COW_ADDR_LIFT_101102CB), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              iVar3 = cow_bridge_1031479c(g, COW_IMG(COW_ADDR_LIFT_101102D6), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 4u);
              if (iVar3 != 0) {
                if ((rd32((uint32_t)(param_3 + 0xc)) == 0) ||
                   (puVar6 = rd8((uint32_t)(rd32((uint32_t)(param_3 + 0xc)) + 4)), puVar6 == (CowU32)0x0)
                   ) {
                  puVar6 = COW_IMG(COW_ADDR_LIFT_103D3C84);
                }
                uVar5 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_101102FE), 1u, (const CowU32[]){ puVar6 }, g->ecx, g->edx, g->eax, 0u);
                wr32((uint32_t)(param_1 + 0x10), uVar5);
                if ((rd32((uint32_t)(param_3 + 0x14)) == 0) ||
                   (puVar6 = rd8((uint32_t)(rd32((uint32_t)(param_3 + 0x14)) + 4)), puVar6 == (CowU32)0x0
                   )) {
                  puVar6 = COW_IMG(COW_ADDR_LIFT_103D3C84);
                }
                uVar5 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_10110325), 1u, (const CowU32[]){ puVar6 }, g->ecx, g->edx, g->eax, 0u);
                wr32((uint32_t)(param_1 + 0xc), uVar5);
                if ((rd32((uint32_t)(param_3 + 0x1c)) == 0) ||
                   (iVar3 = rd32((uint32_t)(rd32((uint32_t)(param_3 + 0x1c)) + 4)), iVar3 == 0)) {
                  uVar5 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_10110345), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103D3C84) }, g->ecx, g->edx, g->eax, 4u);
                  wr32((uint32_t)(param_1 + 0x14), uVar5);
                  g->eax = (CowU32)(0); return;
                }
                uVar5 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_10110360), 1u, (const CowU32[]){ 272448644u }, g->ecx, g->edx, 272448644u, 4u);
                wr32((uint32_t)(param_1 + 0x14), uVar5);
                g->eax = (CowU32)(0); return;
              }
            }
          }
        }
        uVar2 = cow_bridge_101093f0(g, COW_IMG(COW_ADDR_LIFT_10110380), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_1031479c(g, COW_IMG(COW_ADDR_LIFT_1011038B), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 4u);
        if (iVar3 != 0) {
          if (rd32((uint32_t)(param_3 + 0xc)) == 0) {
            pcVar7 = (CowU32)0x0;
          }
          else {
            pcVar7 = rd8((uint32_t)(rd32((uint32_t)(param_3 + 0xc)) + 4));
          }
          cVar1 = rd8((uint32_t)pcVar7);
          while ((cVar1 != '\0' && (iVar3 = cow_bridge_1031479c(g, COW_IMG(COW_ADDR_LIFT_101103B5), 1u, (const CowU32[]){ cVar1 }, g->ecx, g->edx, g->eax, 4u), iVar3 == 0))) {
            cVar1 = rd8((uint32_t)(pcVar7 + 1u * (uint32_t)(1)));
            pcVar7 = pcVar7 + 1;
          }
          cVar1 = rd8((uint32_t)pcVar7);
          pcVar8 = pcVar7;
          while ((cVar1 != '\0' && (iVar3 = cow_bridge_1031479c(g, COW_IMG(COW_ADDR_LIFT_101103D6), 1u, (const CowU32[]){ rd8((uint32_t)pcVar8) }, g->ecx, g->edx, g->eax, 4u), iVar3 != 0))) {
            cVar1 = rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(1)));
            pcVar8 = pcVar8 + 1;
          }
          if (rd8((uint32_t)pcVar8) == '@') {
            iVar3 = cow_bridge_1031479c(g, COW_IMG(COW_ADDR_LIFT_101103F5), 1u, (const CowU32[]){ rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 4u);
            if (iVar3 != 0) {
              uVar5 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_10110402), 1u, (const CowU32[]){ pcVar7 }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)(param_1 + 0x10), uVar5);
              uVar5 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_1011040B), 1u, (const CowU32[]){ pcVar8 + 1 }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)(param_1 + 0xc), uVar5);
              if ((rd32((uint32_t)(param_3 + 0x14)) == 0) ||
                 (puVar6 = rd8((uint32_t)(rd32((uint32_t)(param_3 + 0x14)) + 4)), puVar6 == (CowU32)0x0))
              {
                puVar6 = COW_IMG(COW_ADDR_LIFT_103D3C84);
              }
              uVar5 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_1011042E), 1u, (const CowU32[]){ puVar6 }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)(param_1 + 0x14), uVar5);
            }
          }
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 16.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101101f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101101f0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101101f1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101101f2: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101101f3: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101101f4: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x20u); g->edi = (g->edi & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x101101f5: register edi, replayed as the entry ran it */
    g->ebp = g->ecx;   /* 0x101101fa: the value the entry loaded and the decompiler dropped */
    cow_lift_101101f0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
