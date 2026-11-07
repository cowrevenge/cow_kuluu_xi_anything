/* f_0x100f6890 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f6890 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f6890(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    int iVar3;
    CowU32 piVar4;
    int iVar5;
    if (param_2 == 0) {
        if (rd16((uint32_t)(rd32((uint32_t)param_1) + 0x16)) < 0xc9) {
          g->eax = (CowU32)(0x17); return;
        }
        wr16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x39)), 0);
        wr16((uint32_t)((int)param_1 + 0xe6), 0);
        piVar4 = param_1 + 0x312;
        for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
          wr32((uint32_t)piVar4, 0);
          piVar4 = piVar4 + 1;
        }
        cow_bridge_1030ff10(g, COW_IMG(COW_ADDR_LIFT_100F68E3), 4u, (const CowU32[]){ 6, param_1 + 0x312, 0x200, 0 }, 128u, g->edx, 0u, 16u);
      }
      iVar3 = cow_bridge_100f6980(g, COW_IMG(COW_ADDR_LIFT_100F68EE), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
      if ((iVar3 == 0x17) && (200 < rd16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x39))))) {
        iVar5 = 0;
        piVar4 = param_1 + 0x3a;
        do {
          if ((int)(rd16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x39))) - 200) <= iVar5) {
            g->eax = (CowU32)(0x17); return;
          }
          cow_bridge_10310443(g, COW_IMG(COW_ADDR_LIFT_100F692A), 2u, (const CowU32[]){ piVar4, param_1 + 0x392 }, g->ecx, g->edx, g->eax, 8u);
          iVar2 = cow_bridge_100f4250(g, COW_IMG(COW_ADDR_LIFT_100F693A), 3u, (const CowU32[]){ 0u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          while (iVar2 == 0x16) {
            iVar2 = cow_bridge_100f4250(g, COW_IMG(COW_ADDR_LIFT_100F694C), 3u, (const CowU32[]){ 1u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          sVar1 = rd16((uint32_t)(rd32((uint32_t)param_1) + 0x16));
          if (sVar1 != 0) {
            wr16((uint32_t)(rd32((uint32_t)param_1) + 0x16), sVar1 + -1);
          }
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 0x12;
        } while (iVar5 < 4);
      }
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f6890(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f6890: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100f6891: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f6895: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x100f6896: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_100f6890(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
