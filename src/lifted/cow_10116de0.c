/* f_0x10116de0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10116de0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10116de0(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 puVar4;
    CowU32 uVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    switch(rd32((uint32_t)(param_2 + 8)) & 0x7fffffff) {
      case 3:
        goto switchD_10116e04_caseD_3;
      default:
        g->eax = (CowU32)(1); return;
      case 5:
        uVar2 = rd32((uint32_t)(param_2 + 0x1c));
        wr32((uint32_t)(param_1 + 0x138), uVar2);
        uVar2 = cow_bridge_10116d30(g, COW_IMG(COW_ADDR_LIFT_10116E1F), 2u, (const CowU32[]){ param_1, uVar2 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x138), uVar2);
        wr32((uint32_t)(param_1 + 0x1a20), rd32((uint32_t)(param_2 + 0x20)));
        wr32((uint32_t)(param_1 + 0x1a24), rd32((uint32_t)(param_2 + 0x24)));
        g->eax = (CowU32)(1); return;
      case 0xb:
        wr32((uint32_t)(param_1 + 0x124), rd32((uint32_t)(param_2 + 0x38)));
        wr32((uint32_t)(param_1 + 0x128), rd32((uint32_t)(param_2 + 0x3c)));
        wr32((uint32_t)(param_1 + 300), rd32((uint32_t)(param_2 + 0x40)));
        wr32((uint32_t)(param_1 + 0x130), rd32((uint32_t)(param_2 + 0x44)));
        uVar2 = cow_bridge_10116d30(g, COW_IMG(COW_ADDR_LIFT_10116E92), 2u, (const CowU32[]){ param_1, rd32((uint32_t)(param_1 + 0x138)) }, g->ecx, g->edx, g->eax, 8u);
        wr32((uint32_t)(param_1 + 0x138), uVar2);
        g->eax = (CowU32)(1); return;
      case 0x20:
        uVar5 = 0;
        wr32((uint32_t)(param_1 + 0x144), rd32((uint32_t)(param_2 + 0x1c)));
        if ((int32_t)rd32((uint32_t)(param_2 + 0x1c)) == 0) goto L_10116e85;
        puVar4 = (CowU32)(param_1 + 0x148);
        puVar1 = (CowU32)(param_2 + 0x20);
        do {
          uVar5 = uVar5 + 1;
          puVar6 = puVar1;
          puVar7 = puVar4;
          for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
            wr32((uint32_t)puVar7, rd32((uint32_t)puVar6));
            puVar6 = puVar6 + 4u * (uint32_t)(1);
            puVar7 = puVar7 + 4u * (uint32_t)(1);
          }
          puVar1 = puVar1 + 4u * (uint32_t)(0x23);
          puVar4 = puVar4 + 4u * (uint32_t)(0x23);
        } while (uVar5 < rd32((uint32_t)(param_2 + 0x1c)));
    switchD_10116e04_caseD_3:
    L_10116e85:
        uVar2 = cow_bridge_10116d30(g, COW_IMG(COW_ADDR_LIFT_10116EDA), 2u, (const CowU32[]){ param_1, rd32((uint32_t)(param_1 + 0x138)) }, g->ecx, g->edx, g->eax, 8u);
        wr32((uint32_t)(param_1 + 0x138), uVar2);
        g->eax = (CowU32)(1); return;
      case 0x23:
        uVar2 = cow_bridge_10116d30(g, COW_IMG(COW_ADDR_LIFT_10116EFE), 2u, (const CowU32[]){ param_1, rd32((uint32_t)(param_1 + 0x138)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x138), uVar2);
        wr32((uint32_t)(param_1 + 0xa64), rd32((uint32_t)(param_2 + 0x1c)));
        uVar5 = 0;
        if ((int32_t)rd32((uint32_t)(param_2 + 0x1c)) == 0) {
          g->eax = (CowU32)(1); return;
        }
        puVar1 = (CowU32)(param_2 + 0x24);
        puVar4 = (CowU32)(param_1 + 0xa6c);
        do {
          wr32((uint32_t)(puVar4 + 4u * (uint32_t)(-1)), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(-1))));
          uVar5 = uVar5 + 1;
          wr32((uint32_t)puVar4, rd32((uint32_t)puVar1));
          wr32((uint32_t)(puVar4 + 4u * (uint32_t)(1)), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(1))));
          wr32((uint32_t)(puVar4 + 4u * (uint32_t)(2)), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(2))));
          wr32((uint32_t)(puVar4 + 4u * (uint32_t)(3)), rd32((uint32_t)(puVar1 + 4u * (uint32_t)(3))));
          puVar1 = puVar1 + 4u * (uint32_t)(5);
          puVar4 = puVar4 + 4u * (uint32_t)(5);
        } while (uVar5 < rd32((uint32_t)(param_2 + 0x1c)));
        g->eax = (CowU32)(1); return;
      }
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
void cow_adapter_10116de0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10116de0: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10116de1: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10116de5: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10116de6: push esi */
    { uint32_t A = (uint32_t)(g->ebx + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10116de7: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10116dea: push edi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x7FFFFFFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x10116deb: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFDu; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10116df0: register eax, replayed as the entry ran it */
    cow_lift_10116de0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
