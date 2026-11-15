/* f_0x100e9ee0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e9ee0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e9ee0(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 uVar2;
    CowU8 bVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 piVar6;
    int iVar7;
    CowU32 uVar8;
    CowU32 puVar9;
    int iVar10;
    CowU32 puVar11;
    iVar7 = param_3;
      wr8((uint32_t)(param_1 + 0x9816), rd8((uint32_t)(param_1 + 0x9816)) | 1);
      piVar1 = (CowU32)(param_3 + 8);
      param_3 = 0x14;
      piVar6 = piVar1;
      do {
        if (rd32((uint32_t)piVar6) != 0) {
          bVar3 = rd8((uint32_t)(iVar7 + 4));
          uVar8 = 0;
          if (bVar3 == 5) {
            bVar3 = 0;
          }
          iVar10 = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x57d8 + (CowU32)bVar3 * 0x8c4;
          do {
            if (((int32_t)rd32((uint32_t)(iVar10 + 0x14)) != 0) && ((int32_t)rd32((uint32_t)(iVar10 + 0x14)) == rd32((uint32_t)piVar6))) {
              wr16((uint32_t)(iVar10 + 0x18), (short)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(1))));
              wr32((uint32_t)(iVar10 + 0x14), rd32((uint32_t)piVar6));
              uVar4 = rd32((uint32_t)(iVar10 + 0x34)) & 0xfffffff7;
              uVar5 = rd8((uint32_t)((int)piVar6 + 6)) & 8 ^ uVar4;
              wr32((uint32_t)(iVar10 + 0x34), uVar5);
              uVar4 = rd8((uint32_t)((int)piVar6 + 6)) & 0x20 ^
                      (((uint32_t)((uVar4 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)uVar5) & 0xffu)) & 0xffffffdf;
              wr32((uint32_t)(iVar10 + 0x34), uVar4);
              uVar4 = uVar4 & 0xffffffbf;
              uVar5 = rd8((uint32_t)((int)piVar6 + 6)) & 0x40 ^ uVar4;
              wr32((uint32_t)(iVar10 + 0x34), uVar5);
              uVar4 = rd8((uint32_t)((int)piVar6 + 6)) & 4 ^
                      (((uint32_t)((uVar4 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)uVar5) & 0xffu)) & 0xfffffffb;
              wr32((uint32_t)(iVar10 + 0x34), uVar4);
              uVar4 = uVar4 & 0xfffffffc;
              uVar5 = rd8((uint32_t)((int)piVar6 + 6)) & 3 | uVar4;
              wr32((uint32_t)(iVar10 + 0x34), uVar5);
              uVar5 = (((uint32_t)((uVar4 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)uVar5) & 0xffu)) & 0xffffffef;
              uVar4 = rd8((uint32_t)((int)piVar6 + 6)) & 0x10 ^ uVar5;
              wr32((uint32_t)(iVar10 + 0x34), uVar4);
              wr32((uint32_t)(iVar10 + 0x34), rd8((uint32_t)((int)piVar6 + 6)) & 0x80 ^
                   (((uint32_t)((uVar5 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)uVar4) & 0xffu)) & 0xffffff7f);
              if ((int16_t)rd16((uint32_t)(iVar10 + 0x2e)) != (short)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(2)))) {
                wr16((uint32_t)(iVar10 + 0x2e), (short)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(2))));
                wr16((uint32_t)(iVar10 + 0x30), (short)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(2))));
              }
              uVar2 = cow_bridge_100dc060(g, COW_IMG(COW_ADDR_LIFT_100EA000), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
              wr32((uint32_t)(iVar10 + 0x1c), uVar2);
              if (uVar8 < 0x14) goto L_100ea0ac;
              break;
            }
            iVar10 = iVar10 + 0x70;
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x14);
          iVar10 = cow_bridge_100ea140(g, COW_IMG(COW_ADDR_LIFT_100EA015), 1u, (const CowU32[]){ rd8((uint32_t)(iVar7 + 4)) }, g->ecx, g->edx, param_2, 0u);
          wr8((uint32_t)(iVar10 + 1), 0);
          uVar5 = rd32((uint32_t)(iVar10 + 0x34)) & 0xfffffff7;
          wr16((uint32_t)(iVar10 + 0x18), (short)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(1))));
          wr32((uint32_t)(iVar10 + 0x14), rd32((uint32_t)piVar6));
          uVar8 = rd8((uint32_t)((int)piVar6 + 6)) & 8 ^ uVar5;
          wr32((uint32_t)(iVar10 + 0x34), uVar8);
          uVar5 = rd8((uint32_t)((int)piVar6 + 6)) & 0x20 ^
                  (((uint32_t)((uVar5 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)uVar8) & 0xffu)) & 0xffffffdf;
          wr32((uint32_t)(iVar10 + 0x34), uVar5);
          uVar5 = uVar5 & 0xffffffbf;
          uVar8 = rd8((uint32_t)((int)piVar6 + 6)) & 0x40 ^ uVar5;
          wr32((uint32_t)(iVar10 + 0x34), uVar8);
          uVar5 = rd8((uint32_t)((int)piVar6 + 6)) & 4 ^ (((uint32_t)((uVar5 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)uVar8) & 0xffu)) & 0xfffffffb
          ;
          wr32((uint32_t)(iVar10 + 0x34), uVar5);
          uVar5 = uVar5 & 0xfffffffc;
          uVar8 = rd8((uint32_t)((int)piVar6 + 6)) & 3 | uVar5;
          wr32((uint32_t)(iVar10 + 0x34), uVar8);
          uVar8 = (((uint32_t)((uVar5 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)uVar8) & 0xffu)) & 0xffffffef;
          uVar5 = rd8((uint32_t)((int)piVar6 + 6)) & 0x10 ^ uVar8;
          wr32((uint32_t)(iVar10 + 0x34), uVar5);
          wr32((uint32_t)(iVar10 + 0x34), rd8((uint32_t)((int)piVar6 + 6)) & 0x80 ^ (((uint32_t)((uVar8 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)uVar5) & 0xffu)) & 0xffffff7f);
          wr16((uint32_t)(iVar10 + 0x2e), (short)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(2))));
          wr16((uint32_t)(iVar10 + 0x30), (short)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(2))));
          uVar2 = cow_bridge_100dc060(g, COW_IMG(COW_ADDR_LIFT_100EA0A5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
          wr32((uint32_t)(iVar10 + 0x1c), uVar2);
          wr8((uint32_t)(iVar10 + 2), 0);
        }
    L_100ea0ac:
        piVar6 = piVar6 + 4u * (uint32_t)(3);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      bVar3 = rd8((uint32_t)(iVar7 + 4));
      if (bVar3 == 5) {
        bVar3 = 0;
      }
      iVar7 = 0x14;
      puVar9 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x57d8 + (CowU32)bVar3 * 0x8c4);
      do {
        if (rd32((uint32_t)(puVar9 + 4u * (uint32_t)(5))) != 0) {
          uVar8 = 0;
          piVar6 = piVar1;
          do {
            if ((rd32((uint32_t)piVar6) != 0) && (rd32((uint32_t)piVar6) == rd32((uint32_t)(puVar9 + 4u * (uint32_t)(5))))) {
              if (uVar8 < 0x14) goto L_100ea12a;
              break;
            }
            uVar8 = uVar8 + 1;
            piVar6 = piVar6 + 4u * (uint32_t)(3);
          } while (uVar8 < 0x14);
          puVar11 = puVar9;
          for (iVar10 = 0x1c; iVar10 != 0; iVar10 = iVar10 + -1) {
            wr32((uint32_t)puVar11, 0);
            puVar11 = puVar11 + 4u * (uint32_t)(1);
          }
        }
    L_100ea12a:
        puVar9 = puVar9 + 4u * (uint32_t)(0x1c);
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
          cow_bridge_100e9a70(g, COW_IMG(COW_ADDR_LIFT_100EA135), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e9ee0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->eax = param_2;   /* 0x100e9ee0: the value the entry loaded and the decompiler dropped */
    cow_lift_100e9ee0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
