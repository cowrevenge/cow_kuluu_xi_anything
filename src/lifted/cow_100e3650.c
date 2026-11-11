/* f_0x100e3650 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e3650 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e3650(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 bVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU32 pbVar7;
    CowU32 pcVar8;
    if (param_1 != (CowU32)0x0) {
        bVar2 = rd8((uint32_t)param_1);
        if (((bVar2 != 0) && (param_4 != (CowU32)0x0)) && (rd8((uint32_t)param_4) != '\0')) {
          if (((((int32_t)(1) < (int32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104E0AF4)) + 4))))) && (0x60 < bVar2)) && (bVar2 < 0x7b)) {
            wr8((uint32_t)param_1, bVar2 - 0x20);
          }
          iVar3 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100E3695), 3u, (const CowU32[]){ 183u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 != 0) {
            wr8((uint32_t)(iVar3 + 4), param_2);
            wr8((uint32_t)(iVar3 + 5), param_3);
            uVar4 = 0xffffffff;
            pbVar7 = param_1;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              bVar2 = rd8((uint32_t)pbVar7);
              pbVar7 = pbVar7 + 1;
            } while (bVar2 != 0);
            uVar5 = ~uVar4 - 1;
            if (uVar5 < 0x10) {
              pbVar7 = (CowU32)(iVar3 + 6);
              for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                wr32((uint32_t)pbVar7, rd32((uint32_t)param_1));
                param_1 = param_1 + 4;
                pbVar7 = pbVar7 + 4;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                wr8((uint32_t)pbVar7, rd8((uint32_t)param_1));
                param_1 = param_1 + 1;
                pbVar7 = pbVar7 + 1;
              }
              wr8((uint32_t)(~uVar4 + 5 + iVar3), 0);
              uVar4 = 0xffffffff;
              pcVar8 = param_4;
              do {
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1;
                cVar1 = rd8((uint32_t)pcVar8);
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              uVar4 = ~uVar4 - 1;
              if (0x96 < uVar4) {
                uVar4 = 0x96;
              }
              pcVar8 = (CowU32)(iVar3 + 0x15);
              for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                wr32((uint32_t)pcVar8, rd32((uint32_t)param_4));
                param_4 = param_4 + 4;
                pcVar8 = pcVar8 + 4;
              }
              for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                wr8((uint32_t)pcVar8, rd8((uint32_t)param_4));
                param_4 = param_4 + 1;
                pcVar8 = pcVar8 + 1;
              }
              wr8((uint32_t)(uVar4 + 0x15 + iVar3), 0);
              cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_100E371C), 3u, (const CowU32[]){ iVar3, 0x16, uVar4 - 1 }, g->ecx, g->edx, g->eax, 12u);
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
            }
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, edi, esi, ebp], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e3650(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100e3650: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100e3651: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x100e3652: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100e3656: push edi */
    cow_lift_100e3650(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
