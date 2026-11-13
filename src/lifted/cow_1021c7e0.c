/* f_0x1021c7e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1021c7e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1021c7e0(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3, int32_t param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    int iVar6;
    CowU8 bVar7;
    int iVar8;
    CowU32 psVar9;
    int iVar10;
    CowU32 puVar11;
    if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) {
        wr32((uint32_t)(param_1 + 0x10), param_2);
        wr32((uint32_t)(param_1 + 0xc), param_3);
        if (param_5 == '\0') {
          puVar11 = (CowU32)(param_1 + 0x804 + param_3 * 0x288);
          for (iVar8 = 0xa2; iVar8 != 0; iVar8 = iVar8 + -1) {
            wr32((uint32_t)puVar11, 0);
            puVar11 = puVar11 + 4u * (uint32_t)(1);
          }
          wr16((uint32_t)(param_1 + 0x808 + (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 0x288), 0xffff);
          wr32((uint32_t)(param_1 + 0x804 + (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 0x288), 0);
          wr8((uint32_t)(param_1 + 0x80a + (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 0x288), 0);
          if ((int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18 + param_1)) == '\0') {
            g->eax = (CowU32)(0); return;
          }
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18 + param_1), 1);
          bVar7 = 1;
          psVar9 = (CowU32)(param_1 + 0x98);
          do {
            if ((rd16((uint32_t)psVar9) != 0) &&
               ((rd32((uint32_t)(param_1 + 0x10)) == 0 ||
                ((rd32((uint32_t)(psVar9 + 2u * (uint32_t)(-6))) & rd32((uint32_t)(param_1 + 0x10))) != 0)))) {
              wr16((uint32_t)(param_1 + 0x808 +
                        ((CowU32)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18 + param_1)) +
                        (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 0x51) * 8), rd16((uint32_t)psVar9));
              wr8((uint32_t)(param_1 + 0x80a +
                       ((CowU32)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18 + param_1)) +
                       (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 0x51) * 8), bVar7);
              wr32((uint32_t)(param_1 + 0x804 +
               ((CowU32)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18 + param_1)) +
               (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 0x51) * 8), rd32((uint32_t)(psVar9 + 2u * (uint32_t)(-4))));
              wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18 + param_1), (int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18 + param_1)) + '\x01');
            }
            bVar7 = bVar7 + 1;
            psVar9 = psVar9 + 2u * (uint32_t)(0xc);
          } while (bVar7 < 0x51);
          bVar7 = rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18 + param_1));
          if (bVar7 == 0) {
            g->eax = (CowU32)(0); return;
          }
          if ((0 < param_3) && (param_3 < 3)) {
            cow_bridge_103156f3(g, COW_IMG(COW_ADDR_LIFT_1021CA24), 4u, (const CowU32[]){ param_1 + 0x80c + (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 0x288, bVar7 - 1, 8, COW_IMG(COW_ADDR_LIFT_1021D220) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 16u);
          }
        }
        else if (((0 < param_3) && (param_3 < 3)) &&
                (iVar8 = 1, 1 < rd8((uint32_t)(param_3 + 0x18 + param_1)))) {
          do {
            iVar6 = (int32_t)rd32((uint32_t)(param_1 + 0xc));
            iVar1 = iVar8 + 1;
            iVar10 = iVar1;
            if (iVar1 < (int)(CowU32)rd8((uint32_t)(iVar6 + 0x18 + param_1))) {
              do {
                iVar2 = iVar6 * 0x51 + iVar10;
                if ((int16_t)rd16((uint32_t)(param_1 + 0x808 + (iVar6 * 0x51 + iVar8) * 8)) ==
                    (int16_t)rd16((uint32_t)(param_1 + 0x808 + iVar2 * 8))) {
                  uVar4 = rd32((uint32_t)(param_1 + 0x804 + iVar2 * 8));
                  uVar5 = rd32((uint32_t)(param_1 + 0x808 + iVar2 * 8));
                  iVar6 = iVar10;
                  while (iVar6 = iVar6 + -1, iVar1 <= iVar6) {
                    iVar2 = iVar6 + (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 0x51;
                    iVar3 = param_1 + iVar2 * 8;
                    wr32((uint32_t)(iVar3 + 0x80c), rd32((uint32_t)(param_1 + 0x804 + iVar2 * 8)));
                    wr32((uint32_t)(iVar3 + 0x810), rd32((uint32_t)(iVar3 + 0x808)));
                  }
                  iVar6 = iVar8 + (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 0x51;
                  wr32((uint32_t)(param_1 + 0x80c + iVar6 * 8), uVar4);
                  wr32((uint32_t)(param_1 + 0x810 + iVar6 * 8), uVar5);
                }
                iVar6 = (int32_t)rd32((uint32_t)(param_1 + 0xc));
                iVar10 = iVar10 + 1;
              } while (iVar10 < (int)(CowU32)rd8((uint32_t)(iVar6 + 0x18 + param_1)));
            }
            iVar8 = iVar1;
          } while (iVar1 < (int)(CowU32)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18 + param_1)));
        }
        if (param_4 < 0x12) {
          cow_bridge_100ebf40(g, COW_IMG(COW_ADDR_LIFT_1021CA36), 1u, (const CowU32[]){ param_4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u);
        }
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp, ebx], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1021c7e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x1021c7e0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x1021c7e5: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* push ebp (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_1021c7e0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
