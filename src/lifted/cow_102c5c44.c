/* f_0x102c5c44 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c5c44 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c5c44(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 bVar2;
    CowU8 bVar3;
    CowU32 pcVar4;
    int iVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    int iVar8;
    CowU32 pcVar9;
    CowU32 pcVar10;
    CowU32 uVar11;
    CowU32 pcVar12;
    if ((rd32((uint32_t)(param_1 + 0x68)) & 1) == 0) {
        cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C5C62), 2u, (const CowU32[]){ g->ebx, 272404916u }, param_1, g->edx, g->eax, 0u);
      }
      else {
        if ((rd32((uint32_t)(param_1 + 0x68)) & 4) != 0) {
          pcVar4 = COW_IMG(COW_ADDR_LIFT_103C9180);
    L_102c5c92:
          cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C5C87), 2u, (const CowU32[]){ param_1, pcVar4 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102c45b9(g, COW_IMG(COW_ADDR_LIFT_102C5CA1), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        if ((param_2 != 0) && ((rd8((uint32_t)(param_2 + 9)) & 4) != 0)) {
          pcVar4 = COW_IMG(COW_ADDR_LIFT_103C9168);
          goto L_102c5c92;
        }
      }
      pcVar4 = (CowU32)cow_bridge_102c44bf(g, COW_IMG(COW_ADDR_LIFT_102C5C71), 2u, (const CowU32[]){ param_1, param_3 + 1 }, g->ecx, g->edx, g->eax, 0u);
      if (pcVar4 == (CowU32)0x0) {
        cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C5C98), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C9198) }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cow_bridge_102c4595(g, COW_IMG(COW_ADDR_LIFT_102C5CC2), 3u, (const CowU32[]){ param_1, pcVar4, param_3 }, g->ecx, g->edx, g->eax, 0u);
      iVar5 = cow_bridge_102c45b9(g, COW_IMG(COW_ADDR_LIFT_102C5CCA), 2u, (const CowU32[]){ param_1, 0 }, g->ecx, g->edx, g->eax, 20u);
      if (iVar5 != 0) {
        cow_bridge_102c447c(g, COW_IMG(COW_ADDR_LIFT_102C5CD8), 2u, (const CowU32[]){ param_1, pcVar4 }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      pcVar12 = pcVar4 + param_3;
      wr8((uint32_t)pcVar12, '\0');
      cVar1 = rd8((uint32_t)pcVar4);
      pcVar9 = pcVar4;
      while (cVar1 != '\0') {
        pcVar9 = pcVar9 + 1;
        cVar1 = rd8((uint32_t)pcVar9);
      }
      if (pcVar9 + 0xc < pcVar12) {
        uVar6 = cow_bridge_102c455f(g, COW_IMG(COW_ADDR_LIFT_102C5D1C), 1u, (const CowU32[]){ pcVar9 + 1 }, g->ecx, g->edx, g->eax, 0u);
        uVar7 = cow_bridge_102c455f(g, COW_IMG(COW_ADDR_LIFT_102C5D28), 1u, (const CowU32[]){ pcVar9 + 5 }, g->ecx, g->edx, g->eax, 0u);
        bVar2 = rd8((uint32_t)(pcVar9 + 1u * (uint32_t)(9)));
        bVar3 = rd8((uint32_t)(pcVar9 + 1u * (uint32_t)(10)));
        pcVar9 = pcVar9 + 0xb;
        if ((((bVar2 != 0) || (bVar3 == 2)) && ((bVar2 != 1 || (bVar3 == 3)))) &&
           ((bVar2 != 2 || (bVar3 == 3)))) {
          pcVar10 = pcVar9;
          if (bVar2 != 3) {
            if (3 < bVar2) {
              cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C5D07), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C90FC) }, g->ecx, g->edx, g->eax, 0u);
            }
    L_102c5d81:
            for (; rd8((uint32_t)pcVar10) != '\0'; pcVar10 = pcVar10 + 1) {
            }
            uVar11 = (CowU32)bVar3;
            iVar5 = cow_bridge_102c44bf(g, COW_IMG(COW_ADDR_LIFT_102C5D95), 2u, (const CowU32[]){ param_1, uVar11 << 2 }, g->ecx, g->edx, g->eax, 0u);
            if (iVar5 == 0) {
              cow_bridge_102c447c(g, COW_IMG(COW_ADDR_LIFT_102C5D0E), 2u, (const CowU32[]){ param_1, pcVar4 }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C5D79), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C90E0) }, g->ecx, g->edx, g->eax, 0u);
              return;
            }
            iVar8 = 0;
            if (uVar11 != 0) {
              do {
                pcVar10 = pcVar10 + 1;
                wr8((uint32_t)(iVar5 + iVar8 * 4), pcVar10);
                for (; rd8((uint32_t)pcVar10) != '\0'; pcVar10 = pcVar10 + 1) {
                  if (pcVar12 < pcVar10) goto L_102c5e0e;
                }
                if (pcVar12 < pcVar10) {
    L_102c5e0e:
                  cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C5DB2), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C9154) }, g->ecx, g->edx, g->eax, 16u);
                  cow_bridge_102c447c(g, COW_IMG(COW_ADDR_LIFT_102C5DA7), 2u, (const CowU32[]){ param_1, pcVar4 }, g->ecx, g->edx, g->eax, 0u);
                  cow_bridge_102c447c(g, COW_IMG(COW_ADDR_LIFT_102C5DFD), 2u, (const CowU32[]){ param_1, iVar5 }, g->ecx, g->edx, g->eax, 0u);
                  return;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)uVar11);
            }
            cow_bridge_102c82b6(g, COW_IMG(COW_ADDR_LIFT_102C5DF4), 9u, (const CowU32[]){ param_1, param_2, pcVar4, uVar6, uVar7, (CowU32)bVar2, uVar11, pcVar9, iVar5 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102c447c(g, COW_IMG(COW_ADDR_LIFT_102C5E06), 2u, (const CowU32[]){ param_1, pcVar4 }, g->ecx, g->edx, g->eax, 52u);
            cow_bridge_102c447c(g, COW_IMG(COW_ADDR_LIFT_102C5E22), 2u, (const CowU32[]){ param_1, iVar5 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          if (bVar3 == 4) goto L_102c5d81;
        }
        pcVar12 = COW_IMG(COW_ADDR_LIFT_103C9128);
      }
      else {
        pcVar12 = COW_IMG(COW_ADDR_LIFT_103C9154);
      }
      cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C5E19), 2u, (const CowU32[]){ param_1, pcVar12 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102c447c(g, COW_IMG(COW_ADDR_LIFT_102C5E2B), 2u, (const CowU32[]){ param_1, pcVar4 }, g->ecx, g->edx, g->eax, 24u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c5c44(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c5c44: push ebp */
    g->ebp = g->esp;                       /* 0x102c5c45: mov ebp, esp */
    g->esp -= 0x14u;                      /* 0x102c5c47: 20 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c5c4a: push ebx */
    g->ebx = param_2;   /* 0x102c5c4b: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c5c4e: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c5c4f: push edi */
    { uint32_t A = (uint32_t)(g->ebx + 0x68u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102c5c50: register eax, replayed as the entry ran it */
    cow_lift_102c5c44(g, param_1, param_2, param_3);

    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
