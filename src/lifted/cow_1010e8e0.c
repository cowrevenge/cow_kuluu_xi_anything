/* f_0x1010e8e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010e8e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010e8e0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 puVar2;
    CowU32 piVar3;
    int iVar4;
    wr32((uint32_t)(param_1 + 8), COW_IMG(COW_ADDR_LIFT_10332E88));
      wr32((uint32_t)(rd32((uint32_t)(param_1 + 0x20)) + 8), 0);
      if (rd8((uint32_t)(param_1 + 0xc)) == '\0') {
        for (puVar2 = rd32((uint32_t)(param_1 + 0x18)); puVar2 != (CowU32)0x0;
            puVar2 = (CowU32)rd32((uint32_t)(puVar2 + 4u * (uint32_t)(2)))) {
          wr32((uint32_t)puVar2, 0);
        }
      }
      piVar1 = rd32((uint32_t)(param_1 + 0x18));
      while (piVar1 != (CowU32)0x0) {
        piVar3 = (CowU32)rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2)));
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(2)), 0);
        iVar4 = rd32((uint32_t)piVar1);
        if (iVar4 != 0) {
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010E931), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E937), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
        }
        wr32((uint32_t)piVar1, -0x10101011);
        if (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))) != 0) {
          cow_bridge_1010e370(g, COW_IMG(COW_ADDR_LIFT_1010E94E), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E954), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, g->eax, 4u);
        piVar1 = piVar3;
      }
      piVar1 = (CowU32)(param_1 + 0x1c);
      piVar3 = (CowU32)(param_1 + 0x10);
      wr32((uint32_t)(param_1 + 0x18), piVar1);
      wr32((uint32_t)(param_1 + 0x20), piVar3);
      wr16((uint32_t)(param_1 + 0xe), 0);
      wr32((uint32_t)(param_1 + 0x18), 0);
      iVar4 = rd32((uint32_t)piVar1);
      if (iVar4 != 0) {
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010E980), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E986), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar1, -0x10101011);
      iVar4 = rd32((uint32_t)(param_1 + 0x24));
      if (iVar4 != 0) {
        cow_bridge_1010e730(g, COW_IMG(COW_ADDR_LIFT_1010E99D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E9A3), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      iVar4 = rd32((uint32_t)piVar3);
      if (iVar4 != 0) {
        cow_bridge_1010ea00(g, COW_IMG(COW_ADDR_LIFT_1010E9B3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E9B9), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar3, -0x10101011);
      iVar4 = rd32((uint32_t)(param_1 + 0x18));
      if (iVar4 != 0) {
        cow_bridge_1010e730(g, COW_IMG(COW_ADDR_LIFT_1010E9D0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E9D6), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      if ((param_2 & 1) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E9EA), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 4u);
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010e8e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010e8e0: push ebp */
    g->ebp = g->ecx;   /* 0x1010e8e1: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ebp + 0x20u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010e8e3: register eax, replayed as the entry ran it */
    cow_lift_1010e8e0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
