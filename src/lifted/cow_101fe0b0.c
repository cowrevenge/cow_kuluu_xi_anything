/* f_0x101fe0b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fe0b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fe0b0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    char cVar2;
    char cVar3;
    CowU32 pbVar4;
    int iVar5;
    CowU32 uVar6;
    CowU32 pbVar7;
    CowU32 pcVar8;
    CowU32 uVar9;
    CowU32 uVar10;
    int iStack_4;
    if ((int8_t)rd8((uint32_t)(param_1 + 0x16)) != '\0') {
        if ((int16_t)rd16((uint32_t)(param_1 + 0x30)) != 0) {
          cow_bridge_1015bd70(g, COW_IMG(COW_ADDR_LIFT_101FE0F4), 7u, (const CowU32[]){ (int16_t)rd16((uint32_t)(param_1 + 0x30)), (int16_t)rd16((uint32_t)(param_1 + 0x24)) + 8, (int16_t)rd16((uint32_t)(param_1 + 0x26)) + 0x10, 0x3f800000, 0, 0x80808080, 0 }, g->ecx, g->edx, g->eax, 0u);
          iVar5 = cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_101FE106), 1u, (const CowU32[]){ rd16((uint32_t)(param_1 + 0x30)) }, g->ecx, g->edx, g->eax, 0u);
          if (iVar5 != 0) {
            cow_bridge_10129f00(g, COW_IMG(COW_ADDR_LIFT_101FE12D), 5u, (const CowU32[]){ (int16_t)rd16((uint32_t)(param_1 + 0x24)) + 0x2c, (int16_t)rd16((uint32_t)(param_1 + 0x26)) + 0x18, rd32((uint32_t)(iVar5 + 0x14c8)), 0, 0x80509050 }, g->ecx, g->edx, g->eax, 20u);
          }
        }
        wr16((uint32_t)(param_1 + 0x1c), (int16_t)rd16((uint32_t)(param_1 + 0x1c)) + (short)(int8_t)rd8((uint32_t)(param_1 + 0x1f)));
        if (((int16_t)((int16_t)rd16((uint32_t)(param_1 + 0x1c))) < (int16_t)(0xa1))) {
          if (((int16_t)((int16_t)rd16((uint32_t)(param_1 + 0x1c))) < (int16_t)(0x60))) {
            wr8((uint32_t)(param_1 + 0x1f), 8);
          }
        }
        else {
          wr8((uint32_t)(param_1 + 0x1f), 0xf8);
        }
        wr16((uint32_t)(param_1 + 0x1a), (int16_t)rd16((uint32_t)(param_1 + 0x1a)) + 2);
        wr8((uint32_t)(param_1 + 0x1d), 0);
        if (((int16_t)(0x7f) < (int16_t)((int16_t)rd16((uint32_t)(param_1 + 0x1a))))) {
          wr16((uint32_t)(param_1 + 0x1a), 0x30);
        }
        wr8((uint32_t)(param_1 + 0x1b), 0);
        pcVar8 = (CowU32)(param_1 + 0x66);
        iVar5 = 0xc;
        do {
          if ((int32_t)rd32((uint32_t)(pcVar8 + -10)) != 0xffff) {
            cow_bridge_101fdcc0(g, COW_IMG(COW_ADDR_LIFT_101FE19E), 5u, (const CowU32[]){ rd32((uint32_t)(pcVar8 + -6)), (int)rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(-2))), (int)rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(-1))), (int)rd8((uint32_t)pcVar8), 0 }, g->ecx, g->edx, g->eax, 0u);
          }
          pcVar8 = pcVar8 + 0x10;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_101FE1B6), 1u, (const CowU32[]){ rd16((uint32_t)(param_1 + 0x18)) }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar5 != 0) && (pbVar4 = rd8((uint32_t)(iVar5 + 0x1530)), pbVar4 != (CowU32)0x0)) {
          iVar5 = 0;
          do {
            cow_bridge_101fdc20(g, COW_IMG(COW_ADDR_LIFT_101FE1E2), 3u, (const CowU32[]){ (int)(char)rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(iVar5))), iVar5 % 5, iVar5 / 5 }, g->ecx, g->edx, g->eax, 0u);
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x19);
          pcVar8 = (CowU32)(param_1 + 0x66);
          iStack_4 = 0xc;
          do {
            if ((int32_t)rd32((uint32_t)(pcVar8 + -10)) != 0xffff) {
              uVar6 = 0x1000000;
              pbVar7 = pbVar4;
              do {
                if (((uVar6 & rd32((uint32_t)(pcVar8 + -0xe))) != 0) &&
                   (rd8((uint32_t)pbVar7) == (rd8((uint32_t)rd32((uint32_t)((pcVar8 + -6)))) & 0xf))) {
                  cVar1 = rd8((uint32_t)pcVar8);
                  cVar2 = rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(-1)));
                  cVar3 = rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(-2)));
                  uVar10 = 4;
                  uVar9 = rd32((uint32_t)(pcVar8 + -6));
                  goto L_101fe231;
                }
                uVar6 = uVar6 >> 1;
                pbVar7 = pbVar7 + 1;
              } while (uVar6 != 0);
              cVar1 = rd8((uint32_t)pcVar8);
              cVar2 = rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(-1)));
              cVar3 = rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(-2)));
              uVar10 = 3;
              uVar9 = rd32((uint32_t)(pcVar8 + -6));
    L_101fe231:
              cow_bridge_101fdcc0(g, COW_IMG(COW_ADDR_LIFT_101FE238), 5u, (const CowU32[]){ uVar9, (int)cVar3, (int)cVar2, (int)cVar1, uVar10 }, g->ecx, g->edx, g->eax, 0u);
            }
            pcVar8 = pcVar8 + 0x10;
            iStack_4 = iStack_4 + -1;
          } while (iStack_4 != 0);
        }
        if ((int16_t)rd16((uint32_t)(param_1 + 0x32)) != 0) {
          cow_bridge_101fdcc0(g, COW_IMG(COW_ADDR_LIFT_101FE26F), 5u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x38)), (int)(int8_t)rd8((uint32_t)(param_1 + 0x34)), (int)(int8_t)rd8((uint32_t)(param_1 + 0x35)), (int)(int8_t)rd8((uint32_t)(param_1 + 0x36)), (int)(int8_t)rd8((uint32_t)(param_1 + 0x1e)) }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101fe0b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101fe0b0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101fe0b1: push edi */
    g->edi = g->ecx;   /* 0x101fe0b2: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x16u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101fe0b4: register eax, replayed as the entry ran it */
    cow_lift_101fe0b0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 9 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
