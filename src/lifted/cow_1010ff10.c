/* f_0x1010ff10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010ff10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010ff10(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 piVar2;
    int iVar3;
    CowU32 piVar4;
    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10332E9C));
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
        if (rd32((uint32_t)piVar4) != 0) {
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010FF55), 1u, (const CowU32[]){ rd32((uint32_t)piVar4) }, g->ecx, g->edx, g->eax, 4u);
        }
        wr32((uint32_t)piVar4, -0x10101011);
        if (rd32((uint32_t)(piVar4 + 4u * (uint32_t)(2))) != 0) {
          cow_bridge_10110070(g, COW_IMG(COW_ADDR_LIFT_1010FF6C), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010FF72), 1u, (const CowU32[]){ piVar4 }, g->ecx, g->edx, g->eax, 4u);
        piVar4 = piVar2;
      }
      piVar4 = param_1 + 4u * (uint32_t)(5);
      piVar2 = param_1 + 4u * (uint32_t)(2);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), piVar4);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), piVar2);
      wr16((uint32_t)((int)param_1 + 6), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), 0);
      if (rd32((uint32_t)piVar4) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010FF9A), 1u, (const CowU32[]){ rd32((uint32_t)piVar4) }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar4, -0x10101011);
      iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(7)));
      if (iVar3 != 0) {
        cow_bridge_10110000(g, COW_IMG(COW_ADDR_LIFT_1010FFB1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010FFB7), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
      }
      if (rd32((uint32_t)piVar2) != 0) {
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_1010FFC7), 1u, (const CowU32[]){ rd32((uint32_t)piVar2) }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)piVar2, -0x10101011);
      iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(4)));
      if (iVar3 != 0) {
        cow_bridge_10110000(g, COW_IMG(COW_ADDR_LIFT_1010FFDE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010FFE4), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
      }
      if ((param_2 & 1) != 0) {
        cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010FFF4), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 4u);
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010ff10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010ff10: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010ff11: push ebp */
    g->ebp = g->ecx;   /* 0x1010ff12: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1010ff14: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010ff16: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010ff17: register eax, replayed as the entry ran it */
    cow_lift_1010ff10(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
