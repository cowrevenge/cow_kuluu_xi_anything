/* f_0x1024ff70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1024ff70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1024ff70(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    float fVar3;
    CowU32 piVar4;
    int iVar5;
    if ((rd8((uint32_t)param_1) & 0x20) != 0) {
        fVar3 = rd32(COW_IMG(COW_ADDR_LIFT_103890E4)) * rdf32((uint32_t)(param_1 + 0x88));
        wrf32((uint32_t)(param_2 + 4u * (uint32_t)(1)), -2.0);
        wrf32((uint32_t)param_2, fVar3);
        wrf32((uint32_t)(param_2 + 4u * (uint32_t)(2)), -(rd32(COW_IMG(COW_ADDR_LIFT_103890E4)) * rdf32((uint32_t)(param_1 + 0x90))));
        g->eax = (CowU32)(0); return;
      }
      if ((param_1 + 0xa8 != (CowU32)0x0) && ((rd8((uint32_t)(param_1 + 1u * (uint32_t)(0xa8))) & 4) != 0)) {
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 200));
        iVar5 = 0;
        if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(iVar1 + 0x44))))) {
          do {
            piVar4 = (CowU32)cow_bridge_10279890(g, COW_IMG(COW_ADDR_LIFT_1024FFD1), 2u, (const CowU32[]){ iVar1, iVar5 }, g->ecx, g->edx, param_1, 0u);
            if ((rd32((uint32_t)piVar4) == 0xb0001) && (rd32((uint32_t)(piVar4 + 4u * (uint32_t)(7))) != 0)) {
              uVar2 = rd32((uint32_t)(rd32((uint32_t)(piVar4 + 4u * (uint32_t)(7))) + 0x68));
              wr32((uint32_t)(rd32((uint32_t)(piVar4 + 4u * (uint32_t)(7))) + 0x68), 0);
              cow_bridge_1027cd10(g, COW_IMG(COW_ADDR_LIFT_10250010), 3u, (const CowU32[]){ piVar4, rd32((uint32_t)(piVar4 + 4u * (uint32_t)(7))), param_2 }, g->ecx, g->edx, param_1, 0u);
              wrf32((uint32_t)param_2, rd32(COW_IMG(COW_ADDR_LIFT_103890E4)) * rdf32((uint32_t)param_2));
              wrf32((uint32_t)(param_2 + 4u * (uint32_t)(1)), -(rd32(COW_IMG(COW_ADDR_LIFT_103890E4)) * rdf32((uint32_t)(param_2 + 4u * (uint32_t)(1)))));
              wrf32((uint32_t)(param_2 + 4u * (uint32_t)(2)), -(rdf32((uint32_t)(param_2 + 4u * (uint32_t)(2))) * rd32(COW_IMG(COW_ADDR_LIFT_103890E4))));
              wr32((uint32_t)(rd32((uint32_t)(piVar4 + 4u * (uint32_t)(7))) + 0x68), uVar2);
              g->eax = (CowU32)(0); return;
            }
            iVar5 = iVar5 + 1;
          } while (((int32_t)(iVar5) < (int32_t)((int32_t)rd32((uint32_t)(iVar1 + 0x44)))));
        }
      }
      g->eax = (CowU32)(0xffffffff); return;
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
void cow_adapter_1024ff70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_1;   /* 0x1024ff70: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1024ff74: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1024ff75: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1024ff76: push edi */
    cow_lift_1024ff70(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
