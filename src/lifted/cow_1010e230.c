/* f_0x1010e230 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010e230 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010e230(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 piVar2;
    int iVar3;
    CowU32 piVar4;
    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10332E88));
      wr32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 8), 0);
      if ((int8_t)rd8((uint32_t)(param_1 + 4u * (uint32_t)(1))) == '\0') {
        for (puVar1 = (CowU32)rd32((uint32_t)(param_1 + 4u * (uint32_t)(4))); puVar1 != (CowU32)0x0;
            puVar1 = (CowU32)rd32((uint32_t)(puVar1 + 4u * (uint32_t)(2)))) {
          wr32((uint32_t)puVar1, 0);
        }
      }
      piVar4 = (CowU32)rd32((uint32_t)(param_1 + 4u * (uint32_t)(4)));
      while (piVar4 != (CowU32)0x0) {
        piVar2 = (CowU32)rd32((uint32_t)(piVar4 + 4u * (uint32_t)(2)));
        wr32((uint32_t)(piVar4 + 4u * (uint32_t)(2)), 0);
        iVar3 = rd32((uint32_t)piVar4);
        if (iVar3 != 0) {
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010E281), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E287), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
        }
        wr32((uint32_t)piVar4, -0x10101011);
        if (rd32((uint32_t)(piVar4 + 4u * (uint32_t)(2))) != 0) {
          cow_bridge_1010e370(g, COW_IMG(COW_ADDR_LIFT_1010E29E), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E2A4), 1u, (const CowU32[]){ piVar4 }, g->ecx, g->edx, g->eax, 4u);
        piVar4 = piVar2;
      }
      piVar4 = param_1 + 4u * (uint32_t)(5);
      piVar2 = param_1 + 4u * (uint32_t)(2);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), piVar4);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), piVar2);
      wr16((uint32_t)((int)param_1 + 6), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), 0);
      iVar3 = rd32((uint32_t)piVar4);
      if (iVar3 != 0) {
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010E2D0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E2D6), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar4, -0x10101011);
      iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(7)));
      if (iVar3 != 0) {
        cow_bridge_1010e730(g, COW_IMG(COW_ADDR_LIFT_1010E2ED), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E2F3), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
      }
      iVar3 = rd32((uint32_t)piVar2);
      if (iVar3 != 0) {
        cow_bridge_1010ea00(g, COW_IMG(COW_ADDR_LIFT_1010E303), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E309), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar2, -0x10101011);
      iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(4)));
      if (iVar3 != 0) {
        cow_bridge_1010e730(g, COW_IMG(COW_ADDR_LIFT_1010E320), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E326), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
      }
      if ((param_2 & 1) != 0) {
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E33A), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 4u);
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
void cow_adapter_1010e230(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010e230: push ebp */
    g->ebp = g->ecx;   /* 0x1010e231: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ebp + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010e233: register eax, replayed as the entry ran it */
    cow_lift_1010e230(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
