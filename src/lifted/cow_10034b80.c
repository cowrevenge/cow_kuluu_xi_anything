/* f_0x10034b80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10034b80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10034b80(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 puVar4;
    int iVar5;
    uVar1 = rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045EC24)) + 0x32));
      if ((int)param_1 < (int)(CowU32)uVar1) {
        iVar5 = (int)param_1 << 6;
        puVar4 = COW_IMG(COW_ADDR_LIFT_1045F058) + (int)param_1 * 0x34;
        iVar3 = (int)param_1;
        param_1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1045EC24)) + 0x34 + (int)param_1 * 0x1e);
        do {
          uVar2 = (CowU32)rd8((uint32_t)param_1);
          if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045EC28) + 4u * (uint32_t)(iVar3))) == 0) {
            cow_bridge_10027340(g, COW_IMG(COW_ADDR_LIFT_10034BEE), 3u, (const CowU32[]){ puVar4, COW_IMG(COW_ADDR_LIFT_1045F058) + uVar2 * 0x34, puVar4 + -0xc }, g->ecx, g->edx, g->eax, 12u);
          }
          cow_bridge_10032fe0(g, COW_IMG(COW_ADDR_LIFT_10034C03), 1u, (const CowU32[]){ iVar5 + rd32(COW_IMG(COW_ADDR_LIFT_1045EC20)) }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10027340(g, COW_IMG(COW_ADDR_LIFT_10034C25), 3u, (const CowU32[]){ iVar5 + 0x30 + rd32(COW_IMG(COW_ADDR_LIFT_1045EC20)), puVar4 + -0x18, COW_IMG(COW_ADDR_LIFT_1045F058) + uVar2 * 0x34 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10027d10(g, COW_IMG(COW_ADDR_LIFT_10034C3B), 1u, (const CowU32[]){ uVar2 * 0x40 + rd32(COW_IMG(COW_ADDR_LIFT_1045EC20)) }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045EC28) + 4u * (uint32_t)(iVar3)), 1);
          param_1 = param_1 + 0x1e;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 0x34;
          iVar5 = iVar5 + 0x40;
        } while (iVar3 < (int)(CowU32)uVar1);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10034b80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10034b80: push ecx */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_1045EC24));   /* 0x10034b81: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10034b87: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10034b88: register ebx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x10034b8c: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edx + 0x32u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10034b8e: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->ebx + g->ebx * 2)); }   /* 0x10034b92: register ecx, replayed as the entry ran it */
    cow_lift_10034b80(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
