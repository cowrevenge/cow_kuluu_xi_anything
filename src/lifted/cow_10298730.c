/* f_0x10298730 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10298730 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10298730(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    char cVar3;
    CowU32 pcVar4;
    int iVar5;
    int iVar6;
    CowU32 uVar7;
    CowU32 pcVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    CowU8 local_1;
    local_1 = 0;
      cVar3 = cow_bridge_102a8e50(g, COW_IMG(COW_ADDR_LIFT_10298743), 1u, (const CowU32[]){ g->ebp }, param_1, param_2, g->eax, 0u);
      if (cVar3 != '\0') {
        local_1 = cow_bridge_102a8760(g, COW_IMG(COW_ADDR_LIFT_10298755), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 0u);
        uVar7 = 0xffffffff;
        pcVar8 = param_2;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar3 = rd8((uint32_t)pcVar8);
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        pcVar4 = (CowU32)cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_10298776), 4u, (const CowU32[]){ 1, ~uVar7, COW_IMG(COW_ADDR_LIFT_103BBC70), 200 }, g->ecx, g->edx, 0u, 24u);
        wr8((uint32_t)(param_1 + 0x18), pcVar4);
        pcVar8 = param_2;
        do {
          cVar3 = rd8((uint32_t)pcVar8);
          pcVar8 = pcVar8 + 1;
          wr8((uint32_t)pcVar4, cVar3);
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
      }
      cVar3 = cow_bridge_102a64a0(g, COW_IMG(COW_ADDR_LIFT_1029878E), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 4u);
      if (cVar3 != '\0') {
        uVar7 = 0xffffffff;
        pcVar8 = param_2;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar3 = rd8((uint32_t)pcVar8);
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        pcVar4 = (CowU32)cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_102987B2), 4u, (const CowU32[]){ 1, ~uVar7, COW_IMG(COW_ADDR_LIFT_103BBC70), 0xce }, g->ecx, g->edx, 0u, 16u);
        wr8((uint32_t)(param_1 + 0x18), pcVar4);
        pcVar8 = param_2;
        do {
          cVar3 = rd8((uint32_t)pcVar8);
          pcVar8 = pcVar8 + 1;
          wr8((uint32_t)pcVar4, cVar3);
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
        local_1 = cow_bridge_102a64f0(g, COW_IMG(COW_ADDR_LIFT_102987CD), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 8u);
      }
      cVar3 = cow_bridge_102a76c0(g, COW_IMG(COW_ADDR_LIFT_102987DA), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 4u);
      if (cVar3 != '\0') {
        uVar7 = 0xffffffff;
        pcVar8 = param_2;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar3 = rd8((uint32_t)pcVar8);
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        pcVar4 = (CowU32)cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_102987FE), 4u, (const CowU32[]){ 1, ~uVar7, COW_IMG(COW_ADDR_LIFT_103BBC70), 0xd6 }, g->ecx, g->edx, 0u, 16u);
        wr8((uint32_t)(param_1 + 0x18), pcVar4);
        pcVar8 = param_2;
        do {
          cVar3 = rd8((uint32_t)pcVar8);
          pcVar8 = pcVar8 + 1;
          wr8((uint32_t)pcVar4, cVar3);
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
        local_1 = cow_bridge_102a6fa0(g, COW_IMG(COW_ADDR_LIFT_10298819), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 8u);
      }
      if (((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0x2d0)) != 0) && ((int32_t)rd32((uint32_t)(param_1 + 0x38)) != 0)) {
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x30));
        iVar11 = (int32_t)rd32((uint32_t)(param_1 + 0x20)) * (int32_t)rd32((uint32_t)(param_1 + 0x1c));
        iVar5 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1029885F), 4u, (const CowU32[]){ 1, iVar2 * iVar11, COW_IMG(COW_ADDR_LIFT_103BBC70), 0xf1 }, g->ecx, g->edx, g->eax, 16u);
        param_2 = (CowU32)0x0;
        if (0 < iVar11) {
          iVar10 = iVar5;
          do {
            bVar1 = rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28)) + (int)param_2));
            iVar6 = 0;
            if (0 < iVar2) {
              do {
                iVar9 = (int32_t)rd32((uint32_t)(param_1 + 0x38)) + iVar6;
                iVar6 = iVar6 + 1;
                wr8((uint32_t)(iVar10 + -1 + iVar6), rd8((uint32_t)(iVar9 + (CowU32)bVar1 * iVar2)));
              } while (iVar6 < iVar2);
            }
            param_2 = (CowU32)((int)param_2 + 1);
            iVar10 = iVar10 + iVar2;
          } while ((int)param_2 < iVar11);
        }
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_102988B8), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x28)), COW_IMG(COW_ADDR_LIFT_103BBC70), 0xf7 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_102988CB), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x38)), COW_IMG(COW_ADDR_LIFT_103BBC70), 0xf8 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x24), iVar2);
        wr32((uint32_t)(param_1 + 0x30), 0);
        wr32((uint32_t)(param_1 + 0x38), 0);
        wr32((uint32_t)(param_1 + 0x28), iVar5);
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(local_1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ecx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10298730(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10298730: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10298731: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10298732: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10298736: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10298737: push edi */
    cow_lift_10298730(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
