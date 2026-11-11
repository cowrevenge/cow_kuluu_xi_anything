/* f_0x1010e0d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010e0d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010e0d0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 puVar2;
    CowU32 piVar3;
    int iVar4;
    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10332E88));
      wr32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(6))) + 8), 0);
      if (rd8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(1))) == '\0') {
        for (puVar2 = (CowU32)rd32((uint32_t)(param_1 + 4u * (uint32_t)(4))); puVar2 != (CowU32)0x0;
            puVar2 = (CowU32)rd32((uint32_t)(puVar2 + 4u * (uint32_t)(2)))) {
          wr32((uint32_t)puVar2, 0);
        }
      }
      piVar1 = (CowU32)rd32((uint32_t)(param_1 + 4u * (uint32_t)(4)));
      while (piVar1 != (CowU32)0x0) {
        piVar3 = (CowU32)rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2)));
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(2)), 0);
        iVar4 = rd32((uint32_t)piVar1);
        if (iVar4 != 0) {
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010E120), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E126), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
        }
        wr32((uint32_t)piVar1, -0x10101011);
        if (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))) != 0) {
          cow_bridge_1010e370(g, COW_IMG(COW_ADDR_LIFT_1010E13D), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E143), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, g->eax, 4u);
        piVar1 = piVar3;
      }
      piVar1 = param_1 + 5;
      piVar3 = param_1 + 2;
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), piVar1);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), piVar3);
      wr16((uint32_t)((int)param_1 + 6), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), 0);
      iVar4 = rd32((uint32_t)piVar1);
      if (iVar4 != 0) {
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010E170), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E176), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar1, -0x10101011);
      iVar4 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(7)));
      if (iVar4 != 0) {
        cow_bridge_1010e730(g, COW_IMG(COW_ADDR_LIFT_1010E18D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E193), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      iVar4 = rd32((uint32_t)piVar3);
      if (iVar4 != 0) {
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010E1A5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010E1AB), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar3, -0x10101011);
      iVar4 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(4)));
      if (iVar4 != 0) {
        cow_bridge_1010e730(g, COW_IMG(COW_ADDR_LIFT_1010E1C3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010E1C9), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 4u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010e0d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010e0d0: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010e0d1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010e0d2: push edi */
    g->edi = g->ecx;   /* 0x1010e0d3: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010e0d5: register eax, replayed as the entry ran it */
    cow_lift_1010e0d0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
