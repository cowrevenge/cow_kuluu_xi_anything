/* f_0x10287640 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10287640 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10287640(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 puVar6;
    int iVar7;
    int local_8;
    uVar1 = param_2;
      if (rd32(COW_IMG(COW_ADDR_LIFT_109A2788)) != 0) {
        uVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_1028765A), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028766B), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), COW_IMG(COW_ADDR_LIFT_103B8808), uVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 16u);
      }
      cow_bridge_10285f20(g, COW_IMG(COW_ADDR_LIFT_10287674), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      param_2 = (int32_t)rd32((uint32_t)(param_1 + 0x5c));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x5c)) <= (int32_t)rd32((uint32_t)(param_1 + 0x58))) {
        param_2 = (int32_t)rd32((uint32_t)(param_1 + 0x58));
      }
      iVar5 = 0;
      if (0 < param_2) {
        do {
          if ((((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x58))) <= (int32_t)(iVar5))) ||
             ((rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x54)) + iVar5 * 4)) & 0x20) != 0)) {
            puVar6 = rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x50)) + iVar5 * 4));
            iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102876B1), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 4u);
            local_8 = 4;
            do {
              iVar7 = 4;
              do {
                cow_bridge_10287270(g, COW_IMG(COW_ADDR_LIFT_102876CE), 2u, (const CowU32[]){ rd32((uint32_t)puVar6), uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 8u);
                puVar6 = puVar6 + 4u * (uint32_t)(1);
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
            iVar7 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102876E8), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
            if (iVar7 - iVar3 != 0x40) {
              cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10287718), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B87E4), iVar5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
              iVar5 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_1028771E), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
              uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028772D), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), 0x40, iVar5 - iVar3 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 24u);
              g->eax = (CowU32)(uVar4 & 0xffffff00); return;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_2);
      }
      g->eax = (CowU32)((((uint32_t)(((CowU32)param_2 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(0xff) & 0xffu))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10287640(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_109A2788));   /* 0x10287640: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x10287645: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* push ebp (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10287640(g, param_1, param_2);

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
