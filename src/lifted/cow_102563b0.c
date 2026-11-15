/* f_0x102563b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102563b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102563b0(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    char cVar2;
    int iVar3;
    CowU32 puVar4;
    CowU32 uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    CowU32 puVar10;
    if (param_1 == param_2) {
        g->eax = (CowU32)(param_3); return;
      }
      do {
        uVar1 = rd32((uint32_t)(param_2 + -0x14));
        iVar8 = param_2 + -0x1c;
        iVar7 = param_3 + -0x1c;
        if (iVar7 == iVar8) {
          if (rd32((uint32_t)(param_3 + -0x14)) < uVar1) {
            cow_bridge_1032708c(g, COW_IMG(COW_ADDR_LIFT_102563F2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
          }
          cow_bridge_10255b00(g, COW_IMG(COW_ADDR_LIFT_102563F9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
          iVar3 = (int32_t)rd32((uint32_t)(param_3 + -0x14)) - uVar1;
          iVar9 = -1;
          if ((iVar3 == -1) || (iVar9 = iVar3, iVar3 != 0)) {
            iVar6 = uVar1 + (int32_t)rd32((uint32_t)(param_3 + -0x18));
            cow_bridge_10314a10(g, COW_IMG(COW_ADDR_LIFT_1025641B), 3u, (const CowU32[]){ iVar6, iVar6 + iVar9, iVar3 - iVar9 }, g->ecx, g->edx, param_1, 0u);
            iVar9 = (int32_t)rd32((uint32_t)(param_3 + -0x14)) - iVar9;
            cVar2 = cow_bridge_10255260(g, COW_IMG(COW_ADDR_LIFT_1025642D), 2u, (const CowU32[]){ iVar9, 0 }, g->ecx, g->edx, param_1, 0u);
            if (cVar2 != '\0') {
              cow_bridge_102559c0(g, COW_IMG(COW_ADDR_LIFT_10256439), 1u, (const CowU32[]){ iVar9 }, g->ecx, g->edx, param_1, 0u);
            }
          }
          cow_bridge_10255b00(g, COW_IMG(COW_ADDR_LIFT_10256444), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
        }
        else {
          if (uVar1 != 0) {
            puVar4 = rd32((uint32_t)(param_2 + -0x18));
            if (puVar4 == (CowU32)0x0) {
              puVar4 = COW_IMG(COW_ADDR_LIFT_1033CE70);
            }
            if (rd8((uint32_t)((int)puVar4 + -1)) < 0xfe) {
              iVar9 = (int32_t)rd32((uint32_t)(param_3 + -0x18));
              if (iVar9 != 0) {
                cVar2 = (int8_t)rd8((uint32_t)(iVar9 + -1));
                if ((cVar2 == '\0') || (cVar2 == -1)) {
                  cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_10256485), 1u, (const CowU32[]){ (CowU32)(iVar9 + -1) }, g->ecx, g->edx, param_1, 4u);
                }
                else {
                  wr8((uint32_t)(iVar9 + -1), cVar2 + -1);
                }
              }
              wr32((uint32_t)(param_3 + -0x18), 0);
              wr32((uint32_t)(param_3 + -0x14), 0);
              wr32((uint32_t)(param_3 + -0x10), 0);
              puVar4 = rd32((uint32_t)(param_2 + -0x18));
              if (puVar4 == (CowU32)0x0) {
                puVar4 = COW_IMG(COW_ADDR_LIFT_1033CE70);
              }
              wr32((uint32_t)(param_3 + -0x18), puVar4);
              wr32((uint32_t)(param_3 + -0x14), rd32((uint32_t)(param_2 + -0x14)));
              wr32((uint32_t)(param_3 + -0x10), rd32((uint32_t)(param_2 + -0x10)));
              wr8((uint32_t)((int)puVar4 + -1), (int8_t)rd8((uint32_t)((int)puVar4 + -1)) + '\x01');
              goto L_102564f1;
            }
          }
          cVar2 = cow_bridge_10255260(g, COW_IMG(COW_ADDR_LIFT_102564C0), 2u, (const CowU32[]){ uVar1, 1 }, g->ecx, g->edx, param_1, 0u);
          if (cVar2 != '\0') {
            puVar4 = rd32((uint32_t)(param_2 + -0x18));
            if (puVar4 == (CowU32)0x0) {
              puVar4 = COW_IMG(COW_ADDR_LIFT_1033CE70);
            }
            puVar10 = rd32((uint32_t)(param_3 + -0x18));
            for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              wr32((uint32_t)puVar10, rd32((uint32_t)puVar4));
              puVar4 = puVar4 + 4u * (uint32_t)(1);
              puVar10 = puVar10 + 4u * (uint32_t)(1);
            }
            for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              wr8((uint32_t)puVar10, rd8((uint32_t)puVar4));
              puVar4 = (CowU32)((int)puVar4 + 1);
              puVar10 = (CowU32)((int)puVar10 + 1);
            }
            wr32((uint32_t)(param_3 + -0x14), uVar1);
            wr8((uint32_t)(uVar1 + (int32_t)rd32((uint32_t)(param_3 + -0x18))), 0);
          }
        }
    L_102564f1:
        wr16((uint32_t)(param_3 + -0xc), rd16((uint32_t)(param_2 + -0xc)));
        wr16((uint32_t)(param_3 + -10), rd16((uint32_t)(param_2 + -10)));
        wr16((uint32_t)(param_3 + -8), rd16((uint32_t)(param_2 + -8)));
        wr16((uint32_t)(param_3 + -6), rd16((uint32_t)(param_2 + -6)));
        wr32((uint32_t)(param_3 + -4), rd32((uint32_t)(param_2 + -4)));
        param_3 = iVar7;
        param_2 = iVar8;
        if (iVar8 == param_1) {
          g->eax = (CowU32)(iVar7); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102563b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_1;   /* 0x102563b0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102563b4: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102563b5: register esi, replayed as the entry ran it */
    cow_lift_102563b0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
