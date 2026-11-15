/* f_0x10290010 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10290010 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10290010(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    CowU32 puVar8;
    CowU32 local_8;
    iVar3 = param_1;
      iVar5 = 0;
      local_8 = 0;
      iVar6 = param_2 * 0x2c;
      uVar1 = rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x18)) + (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x48)) + 8 + iVar6)) * 0xc));
      cow_bridge_10291200(g, COW_IMG(COW_ADDR_LIFT_10290049), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283d80(g, COW_IMG(COW_ADDR_LIFT_10290060), 1u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x18)) + 4 + (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x48)) + 8 + iVar6)) * 0xc
                    )) }, g->ecx, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x48)) + 4 + iVar6)) != 0) {
        iVar7 = 0;
        if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x34))))) {
          do {
            if ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x40)) + 0x28 + iVar5)) == 4) {
              cow_bridge_102a2550(g, COW_IMG(COW_ADDR_LIFT_1029008B), 2u, (const CowU32[]){ param_1, iVar7 }, g->ecx, g->edx, g->eax, 8u);
            }
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 0x30;
          } while (((int32_t)(iVar7) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x34)))));
        }
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x48));
        iVar7 = 0;
        if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(iVar5 + 4 + iVar6))))) {
          do {
            puVar8 = (CowU32)
                     ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar5 + iVar6 + 0x24)) + iVar7 * 4)) * 0x90 +
                     (int32_t)rd32((uint32_t)(iVar5 + iVar6 + 0x28)));
            if ((int8_t)rd8((uint32_t)(puVar8 + 4u * (uint32_t)(7))) != '\0') {
              if (rd32((uint32_t)(puVar8 + 4u * (uint32_t)(4))) != 0) {
                cow_bridge_102a2150(g, COW_IMG(COW_ADDR_LIFT_102900D4), 2u, (const CowU32[]){ rd32((uint32_t)puVar8), rd32((uint32_t)(puVar8 + 4u * (uint32_t)(3))) }, g->ecx, g->edx, g->eax, 8u);
              }
              piVar2 = (CowU32)rd32((uint32_t)(puVar8 + 4u * (uint32_t)(6)));
              if (((rd32((uint32_t)piVar2) == 0xf0001) && ((rd8((uint32_t)(piVar2 + 4u * (uint32_t)(0x21))) & 2) != 0)) ||
                 ((rd32((uint32_t)piVar2) == 0xf0002 && ((rd8((uint32_t)(piVar2 + 4u * (uint32_t)(0x59))) & 4) != 0)))) {
                cow_bridge_1028f700(g, COW_IMG(COW_ADDR_LIFT_10290105), 2u, (const CowU32[]){ param_1, puVar8 }, g->ecx, g->edx, g->eax, 0u);
                cow_bridge_1028f4e0(g, COW_IMG(COW_ADDR_LIFT_1029010C), 2u, (const CowU32[]){ param_1, puVar8 }, g->ecx, g->edx, g->eax, 16u);
              }
            }
            iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x48));
            iVar7 = iVar7 + 1;
          } while (((int32_t)(iVar7) < (int32_t)((int32_t)rd32((uint32_t)(iVar5 + 4 + iVar6)))));
        }
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x48)) + iVar6;
        param_1 = 0;
        if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(iVar5 + 4))))) {
          do {
            iVar5 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar5 + 0x24)) + param_1 * 4)) * 0x90 + (int32_t)rd32((uint32_t)(iVar5 + 0x28));
            if ((int8_t)rd8((uint32_t)(iVar5 + 0x1c)) != '\0') {
              piVar2 = rd32((uint32_t)(iVar5 + 0x18));
              if (rd32((uint32_t)piVar2) == 0xf0001) {
                local_8 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(0x21)));
                wr32((uint32_t)(piVar2 + 4u * (uint32_t)(0x21)), local_8 & 0xfffffffd);
              }
              else if (rd32((uint32_t)piVar2) == 0xf0002) {
                local_8 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(0x59)));
                wr32((uint32_t)(piVar2 + 4u * (uint32_t)(0x59)), local_8 & 0xfffffffb);
              }
              cow_bridge_1028f700(g, COW_IMG(COW_ADDR_LIFT_10290196), 2u, (const CowU32[]){ iVar3, iVar5 }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_1028f4e0(g, COW_IMG(COW_ADDR_LIFT_1029019D), 2u, (const CowU32[]){ iVar3, iVar5 }, g->ecx, g->edx, g->eax, 0u);
              piVar2 = rd32((uint32_t)(iVar5 + 0x18));
              if (rd32((uint32_t)piVar2) == 0xf0001) {
                wr32((uint32_t)(piVar2 + 4u * (uint32_t)(0x21)), local_8);
              }
              else if (rd32((uint32_t)piVar2) == 0xf0002) {
                wr32((uint32_t)(piVar2 + 4u * (uint32_t)(0x59)), local_8);
              }
            }
            param_1 = param_1 + 1;
            iVar5 = (int32_t)rd32((uint32_t)(iVar3 + 0x48)) + iVar6;
          } while (((int32_t)(param_1) < (int32_t)((int32_t)rd32((uint32_t)(iVar5 + 4)))));
        }
        iVar5 = 0;
        if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(iVar3 + 0x34))))) {
          param_2 = 0;
          do {
            if (((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar3 + 0x40)) + 0x28 + param_2)) == 0) &&
               (iVar7 = cow_bridge_102a21b0(g, COW_IMG(COW_ADDR_LIFT_10290209), 2u, (const CowU32[]){ (int32_t)rd32((uint32_t)(iVar3 + 0x48)) + iVar6, iVar5 }, g->ecx, g->edx, g->eax, 8u), iVar7 != 0)) {
              cow_bridge_102a2740(g, COW_IMG(COW_ADDR_LIFT_1029021B), 2u, (const CowU32[]){ iVar3, iVar5 }, g->ecx, g->edx, g->eax, 0u);
              iVar7 = (int32_t)rd32((uint32_t)(iVar3 + 0x48)) + iVar6;
              param_1 = 0;
              if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(iVar7 + 4))))) {
                do {
                  iVar7 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar7 + 0x24)) + param_1 * 4)) * 0x90 + (int32_t)rd32((uint32_t)(iVar7 + 0x28))
                  ;
                  if ((((int8_t)rd8((uint32_t)(iVar7 + 0x1c)) != '\0') && ((int32_t)rd32((uint32_t)(iVar7 + 0x44)) != 0)) &&
                     (iVar4 = cow_bridge_102a2180(g, COW_IMG(COW_ADDR_LIFT_10290256), 2u, (const CowU32[]){ iVar7, iVar5 }, g->ecx, g->edx, g->eax, 8u), iVar4 != 0)) {
                    cow_bridge_10291200(g, COW_IMG(COW_ADDR_LIFT_10290267), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
                    cow_bridge_10283d80(g, COW_IMG(COW_ADDR_LIFT_1029027E), 1u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar3 + 0x18)) + 4 +
                                  (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar3 + 0x48)) + 8 + iVar6)) * 0xc)) }, g->ecx, g->edx, g->eax, 0u);
                    cow_bridge_102a2c20(g, COW_IMG(COW_ADDR_LIFT_10290288), 4u, (const CowU32[]){ iVar3, iVar7, iVar5, 0 }, g->ecx, g->edx, g->eax, 24u);
                  }
                  param_1 = param_1 + 1;
                  iVar7 = (int32_t)rd32((uint32_t)(iVar3 + 0x48)) + iVar6;
                } while (((int32_t)(param_1) < (int32_t)((int32_t)rd32((uint32_t)(iVar7 + 4)))));
              }
            }
            iVar5 = iVar5 + 1;
            param_2 = param_2 + 0x30;
          } while (((int32_t)(iVar5) < (int32_t)((int32_t)rd32((uint32_t)(iVar3 + 0x34)))));
        }
        if ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar3 + 0x48)) + 0xc + iVar6)) != 0) {
          cow_bridge_1028ffa0(g, COW_IMG(COW_ADDR_LIFT_102902C8), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 8 locals, pops [esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10290010(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x8u;                      /* 0x10290010: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10290013: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10290014: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10290015: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10290019: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1029001a: register esi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x1029001e: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->ebp + g->ebp * 4)); }   /* 0x10290020: register eax, replayed as the entry ran it */
    cow_lift_10290010(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
