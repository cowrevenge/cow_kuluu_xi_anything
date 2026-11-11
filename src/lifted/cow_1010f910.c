/* f_0x1010f910 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010f910 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010f910(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 puVar2;
    CowU32 piVar3;
    int iVar4;
    CowU32 puVar5;
    puVar5 = rd32(COW_IMG(COW_ADDR_LIFT_104E1708));
      if (rd32(COW_IMG(COW_ADDR_LIFT_104E1708)) == (CowU32)0x0) {
        wr32(COW_IMG(COW_ADDR_LIFT_104E1708), (CowU32)0x0);
        return;
      }
      piVar1 = rd32(COW_IMG(COW_ADDR_LIFT_104E1708)) + 6;
      wr32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_104E1708)), COW_IMG(COW_ADDR_LIFT_10332E9C));
      wr32((uint32_t)(rd32((uint32_t)piVar1) + 8), 0);
      if (rd8((uint32_t)(puVar5 + 1)) == '\0') {
        for (puVar2 = (CowU32)rd32((uint32_t)(puVar5 + 4u * (uint32_t)(4))); puVar2 != (CowU32)0x0;
            puVar2 = (CowU32)rd32((uint32_t)(puVar2 + 4u * (uint32_t)(2)))) {
          wr32((uint32_t)puVar2, 0);
        }
      }
      piVar1 = (CowU32)rd32((uint32_t)(puVar5 + 4u * (uint32_t)(4)));
      while (piVar1 != (CowU32)0x0) {
        piVar3 = (CowU32)rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2)));
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(2)), 0);
        iVar4 = rd32((uint32_t)piVar1);
        if (iVar4 != 0) {
          cow_bridge_1010fed0(g, COW_IMG(COW_ADDR_LIFT_1010F967), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1010fed0(g, COW_IMG(COW_ADDR_LIFT_1010F96E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010F974), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
        }
        wr32((uint32_t)piVar1, -0x10101011);
        if (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))) != 0) {
          cow_bridge_10110070(g, COW_IMG(COW_ADDR_LIFT_1010F98B), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010F991), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, g->eax, 4u);
        piVar1 = piVar3;
      }
      piVar1 = puVar5 + 5;
      piVar3 = puVar5 + 2;
      wr32((uint32_t)(puVar5 + 4u * (uint32_t)(4)), piVar1);
      wr32((uint32_t)(puVar5 + 4u * (uint32_t)(6)), piVar3);
      wr16((uint32_t)((int)puVar5 + 6), 0);
      wr32((uint32_t)(puVar5 + 4u * (uint32_t)(4)), 0);
      if (rd32((uint32_t)piVar1) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010F9BC), 1u, (const CowU32[]){ rd32((uint32_t)piVar1) }, 0u, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar1, -0x10101011);
      iVar4 = rd32((uint32_t)(puVar5 + 4u * (uint32_t)(7)));
      if (iVar4 != 0) {
        cow_bridge_10110000(g, COW_IMG(COW_ADDR_LIFT_1010F9D3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010F9D9), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      if (rd32((uint32_t)piVar3) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010F9E8), 1u, (const CowU32[]){ rd32((uint32_t)piVar3) }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar3, -0x10101011);
      iVar4 = rd32((uint32_t)(puVar5 + 4u * (uint32_t)(4)));
      if (iVar4 != 0) {
        cow_bridge_10110000(g, COW_IMG(COW_ADDR_LIFT_1010F9FF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010FA05), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010FA0E), 1u, (const CowU32[]){ puVar5 }, g->ecx, g->edx, g->eax, 4u);
      wr32(COW_IMG(COW_ADDR_LIFT_104E1708), (CowU32)0x0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010f910(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010f910: push ebp */
    g->ebp = rd32(COW_IMG(COW_ADDR_LIFT_104E1708));   /* 0x1010f911: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x1010f917: the value the entry loaded and the decompiler dropped */
    cow_lift_1010f910(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
