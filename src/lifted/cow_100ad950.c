/* f_0x100ad950 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ad950 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ad950(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 uVar5;
    int iVar6;
    wr8((uint32_t)param_5, 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1048991C), COW_IMG(COW_ADDR_LIFT_1035CFA4));
      if ((((param_1 != (CowU32)0x0) && (uVar2 = rd32((uint32_t)param_1), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar2))) != 0)) &&
          (param_2 != (CowU32)0x0)) && (uVar3 = rd32((uint32_t)param_2), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar3))) != 0)) {
        uVar5 = (CowU32)rd32(COW_IMG(COW_ADDR_LIFT_10485F7A));
        if (uVar3 == uVar5) {
          cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100AD9E2), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1035CFA8)), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
          return;
        }
        if ((((rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) & 0xff000000) == 0x1000000) && (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar5))) != 0)) &&
           (uVar3 == rd16((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar5))) + 0x1fa)))) {
          cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADA2C), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1035CFA8)), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
          return;
        }
        if ((uVar2 == uVar5) ||
           ((((rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) & 0xff000000) == 0x1000000 && (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar5))) != 0)) &&
            (uVar2 == rd16((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar5))) + 0x1fa)))))) {
          cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADA7C), 4u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1035CFA4)), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
          return;
        }
        iVar6 = 0;
        iVar4 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_100ADA8C), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
        if (iVar4 != 0) {
          do {
            uVar2 = rd32((uint32_t)(iVar4 + 0x14));
            if (uVar2 != rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) + 0x78))) {
              if ((((rd16((uint32_t)(iVar4 + 0x18)) != 0) &&
                   (iVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(iVar4 + 0x18))))), iVar4 != 0)) &&
                  (rd32((uint32_t)(iVar4 + 0x78)) == uVar2)) &&
                 ((uVar1 = rd16((uint32_t)(iVar4 + 0x1fa)), uVar1 != 0 &&
                  ((rd32((uint32_t)(iVar4 + 300)) >> 0x16 & 1) == 0)))) {
                if (((rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) & 0xff000000) == 0x1000000) && (rd32((uint32_t)param_1) == (CowU32)uVar1)) {
                  iVar6 = 2;
                }
                if ((((rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) & 0xff000000) == 0x1000000) && (rd32((uint32_t)param_2) == (CowU32)uVar1)) &&
                   (iVar6 == 0)) {
                  iVar6 = 3;
                }
              }
              if (uVar2 == rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)))) {
                iVar6 = 2;
              }
              if ((uVar2 == rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)))) && (iVar6 == 0)) {
                iVar6 = 3;
              }
            }
            iVar4 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_100ADB49), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          } while (iVar4 != 0);
          if (iVar6 != 0) {
            cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADB6E), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1048991C)) + 4u * (uint32_t)(iVar6))), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
            return;
          }
        }
        iVar6 = 0;
        iVar4 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_100ADB7F), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, g->eax, 4u);
        if (iVar4 != 0) {
          do {
            uVar2 = rd32((uint32_t)(iVar4 + 0x14));
            if (uVar2 != rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) + 0x78))) {
              if ((((rd16((uint32_t)(iVar4 + 0x18)) != 0) &&
                   (iVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(iVar4 + 0x18))))), iVar4 != 0)) &&
                  (rd32((uint32_t)(iVar4 + 0x78)) == uVar2)) &&
                 ((uVar1 = rd16((uint32_t)(iVar4 + 0x1fa)), uVar1 != 0 &&
                  ((rd32((uint32_t)(iVar4 + 300)) >> 0x16 & 1) == 0)))) {
                if (((rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) & 0xff000000) == 0x1000000) && (rd32((uint32_t)param_1) == (CowU32)uVar1)) {
                  iVar6 = 4;
                }
                if ((((rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) & 0xff000000) == 0x1000000) && (rd32((uint32_t)param_2) == (CowU32)uVar1)) &&
                   (iVar6 == 0)) {
                  iVar6 = 5;
                }
              }
              if (uVar2 == rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)))) {
                iVar6 = 4;
              }
              if ((uVar2 == rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)))) && (iVar6 == 0)) {
                iVar6 = 5;
              }
            }
            iVar4 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_100ADC3C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          } while (iVar4 != 0);
          if (iVar6 != 0) {
            cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADC61), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1048991C)) + 4u * (uint32_t)(iVar6))), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
            return;
          }
        }
        if (((((rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) & 0xff000000) == 0x1000000) &&
             (iVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32((uint32_t)param_1)))), iVar4 != 0)) &&
            ((rd32((uint32_t)(iVar4 + 0x120)) >> 0xd & 1) != 0)) &&
           (iVar4 = rd32((uint32_t)(iVar4 + 0x188)), iVar4 != 0)) {
          iVar6 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)))));
          if (((iVar6 != 0) && (rd32((uint32_t)(iVar6 + 0x18c)) != 0)) &&
             ((rd32((uint32_t)(iVar6 + 0x130)) >> 0x19 & 1) == 0)) {
            cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADCE9), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1048991C)) + 4u * (uint32_t)(6))), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
            return;
          }
          iVar6 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_100ADCF8), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
          while (iVar6 != 0) {
            if (rd32((uint32_t)(iVar6 + 0x14)) == iVar4) {
              cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADD9A), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1048991C)) + 4u * (uint32_t)(6))), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
              return;
            }
            iVar6 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_100ADD0D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
        }
        if ((((rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) & 0xff000000) == 0x1000000) && (iVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32((uint32_t)param_2)))), iVar4 != 0)
            ) && (((rd32((uint32_t)(iVar4 + 0x120)) >> 0xd & 1) != 0 &&
                  (iVar4 = rd32((uint32_t)(iVar4 + 0x188)), iVar4 != 0)))) {
          iVar6 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)))));
          if (((iVar6 != 0) && (rd32((uint32_t)(iVar6 + 0x18c)) != 0)) &&
             ((rd32((uint32_t)(iVar6 + 0x130)) >> 0x19 & 1) == 0)) {
            cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADDBC), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1048991C)) + 4u * (uint32_t)(7))), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
            return;
          }
          iVar6 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_100ADDCB), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
          while (iVar6 != 0) {
            if (rd32((uint32_t)(iVar6 + 0x14)) == iVar4) {
              cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADE05), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1048991C)) + 4u * (uint32_t)(7))), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
              return;
            }
            iVar6 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_100ADDDC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
        }
        if ((rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) & 0xff000000) == 0) {
          cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADE27), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1048991C)) + 4u * (uint32_t)(8))), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
          return;
        }
        if ((rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) & 0xff000000) == 0) {
          cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADE4E), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1048991C)) + 4u * (uint32_t)(9))), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
          return;
        }
      }
      cow_bridge_100ade80(g, COW_IMG(COW_ADDR_LIFT_100ADE70), 4u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1048991C)) + 4u * (uint32_t)(10))), param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 16u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ad950(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->ecx = param_4;   /* 0x100ad950: the value the entry loaded and the decompiler dropped */
    g->edx = param_3;   /* 0x100ad954: the value the entry loaded and the decompiler dropped */
    cow_lift_100ad950(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
