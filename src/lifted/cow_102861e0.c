/* f_0x102861e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102861e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102861e0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    if (rd32(COW_IMG(COW_ADDR_LIFT_109A2788)) != 0) {
        uVar1 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102861F7), 1u, (const CowU32[]){ g->esi }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_10286208), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), COW_IMG(COW_ADDR_LIFT_103B8234), uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 16u);
      }
      cow_bridge_10285f20(g, COW_IMG(COW_ADDR_LIFT_10286211), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286217), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x24));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) < (int32_t)rd32((uint32_t)(param_1 + 0x28))) {
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x28));
      }
      cow_bridge_10286970(g, COW_IMG(COW_ADDR_LIFT_10286237), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x1c)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_10286242), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x20)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_1028624B), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 != iVar5 * 8) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028625E), 1u, (const CowU32[]){ 272335372u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286264), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10286272), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), iVar5 * 8, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 20u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 & 0xffffff00) & 0xffu)); return;
      }
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286282), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x34));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x34)) < (int32_t)rd32((uint32_t)(param_1 + 0x38))) {
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x38));
      }
      cow_bridge_10286970(g, COW_IMG(COW_ADDR_LIFT_1028629E), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x2c)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_102862A9), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x30)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102862B2), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 != iVar5 * 8) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102862C5), 1u, (const CowU32[]){ 272335292u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102862CB), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102862D9), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), iVar5 * 8, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 20u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 & 0xffffff00) & 0xffu)); return;
      }
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102862E9), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x44));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x44)) < (int32_t)rd32((uint32_t)(param_1 + 0x48))) {
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x48));
      }
      cow_bridge_10286620(g, COW_IMG(COW_ADDR_LIFT_10286300), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286970(g, COW_IMG(COW_ADDR_LIFT_1028630B), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x3c)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a00(g, COW_IMG(COW_ADDR_LIFT_10286313), 2u, (const CowU32[]){ 0x10, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_1028631E), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x40)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286b10(g, COW_IMG(COW_ADDR_LIFT_10286326), 2u, (const CowU32[]){ 0x10, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = iVar5 * 8 + 0x80;
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286333), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 != iVar5) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10286346), 1u, (const CowU32[]){ 272335252u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_1028634C), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028635A), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), iVar5, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 20u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 & 0xffffff00) & 0xffu)); return;
      }
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_1028636A), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x58));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x58)) < (int32_t)rd32((uint32_t)(param_1 + 0x5c))) {
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x5c));
      }
      cow_bridge_10286970(g, COW_IMG(COW_ADDR_LIFT_10286386), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x4c)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_102867c0(g, COW_IMG(COW_ADDR_LIFT_1028638E), 3u, (const CowU32[]){ param_1, iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_10286399), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x54)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102863A5), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 != iVar5 * 0xc) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102863B8), 1u, (const CowU32[]){ 272335216u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102863BE), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102863CC), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), iVar5 * 0xc, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 20u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 & 0xffffff00) & 0xffu)); return;
      }
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102863DC), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x68));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x68)) < (int32_t)rd32((uint32_t)(param_1 + 0x6c))) {
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x6c));
      }
      cow_bridge_10286970(g, COW_IMG(COW_ADDR_LIFT_102863F8), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x60)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_10286403), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 100)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_1028640C), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 != iVar5 * 8) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028641F), 1u, (const CowU32[]){ 272335180u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286425), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10286433), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), iVar5 * 8, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 20u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 & 0xffffff00) & 0xffu)); return;
      }
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286443), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x7c));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x7c)) < (int32_t)rd32((uint32_t)(param_1 + 0x80))) {
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x80));
      }
      cow_bridge_10286970(g, COW_IMG(COW_ADDR_LIFT_10286462), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x70)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_1028646D), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x74)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_10286478), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x78)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286484), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 != iVar5 * 0xc) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10286497), 1u, (const CowU32[]){ 272335144u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_1028649D), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102864AB), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), iVar5 * 0xc, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 20u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 & 0xffffff00) & 0xffu)); return;
      }
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102864BB), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x90));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x90)) < (int32_t)rd32((uint32_t)(param_1 + 0x94))) {
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x94));
      }
      cow_bridge_10286970(g, COW_IMG(COW_ADDR_LIFT_102864E0), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x84)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_102864EE), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x88)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_102864FC), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x8c)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286508), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 != iVar5 * 0xc) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028651B), 1u, (const CowU32[]){ 272335108u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286521), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028652F), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), iVar5 * 0xc, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 20u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 & 0xffffff00) & 0xffu)); return;
      }
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_1028653F), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x58));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x58)) < (int32_t)rd32((uint32_t)(param_1 + 0x5c))) {
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x5c));
      }
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_1028655E), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x98)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_1028656C), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xa0)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10286575), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 != iVar5 * 8) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10286588), 1u, (const CowU32[]){ 272335064u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_1028658E), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
        uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1028659C), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), iVar5 * 8, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 20u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 & 0xffffff00) & 0xffu)); return;
      }
      iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102865AC), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0xa4));
      if ((int32_t)rd32((uint32_t)(param_1 + 0xa4)) < (int32_t)rd32((uint32_t)(param_1 + 0x5c))) {
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x5c));
      }
      cow_bridge_10286a80(g, COW_IMG(COW_ADDR_LIFT_102865CE), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x9c)), iVar5, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102865DB), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      if (iVar3 - iVar2 == iVar5 * 4) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)(((CowU32)(iVar3 - iVar2) >> 8)) & 0xffffffu) << 8 | ((uint32_t)(0xff) & 0xffu))) & 0xffu)); return;
      }
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102865EE), 1u, (const CowU32[]){ 272335020u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      iVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_102865F4), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 0u);
      uVar4 = cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10286602), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B81E4), iVar5 * 4, iVar3 - iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), 20u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar4 & 0xffffff00) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102861e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_109A2788));   /* 0x102861e0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102861e5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102861e6: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102861e7: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102861e8: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102861ec: push edi */
    cow_lift_102861e0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
