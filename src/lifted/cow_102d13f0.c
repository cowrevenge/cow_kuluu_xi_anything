/* f_0x102d13f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102d13f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102d13f0(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    CowU32 piVar5;
    CowU32 puVar6;
    int iVar7;
    CowU32 puVar8;
    iVar2 = param_1 * 0x218;
      iVar4 = -1;
      iVar3 = 0;
      iVar7 = param_2 * 0x20 + iVar2 + param_4;
      piVar5 = (CowU32)(iVar7 + 300);
      do {
        if (((int32_t)((int32_t)rd32((uint32_t)(rd32((uint32_t)piVar5) + 0x14))) < (int32_t)(param_3))) {
          iVar4 = iVar3;
          param_3 = (int32_t)rd32((uint32_t)(rd32((uint32_t)piVar5) + 0x14));
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 4u * (uint32_t)(1);
      } while (iVar3 < 7);
      if (iVar4 < 0) {
        g->eax = (CowU32)(0); return;
      }
      iVar3 = iVar4 + param_2 * 8 + param_1 * 0x86;
      uVar1 = rd32((uint32_t)(param_4 + 300 + iVar3 * 4));
      cow_bridge_102d14d0(g, COW_IMG(COW_ADDR_LIFT_102D148E), 4u, (const CowU32[]){ uVar1, rd32((uint32_t)(iVar2 + 0x124 + param_4)), rd32((uint32_t)(iVar2 + 0x120 + param_4)), param_4 }, g->ecx, g->edx, param_3, 16u);
      if (iVar4 < 6) {
        puVar6 = (CowU32)(param_4 + 0x130 + iVar3 * 4);
        puVar8 = (CowU32)(param_4 + 300 + iVar3 * 4);
        for (iVar4 = 6 - iVar4; iVar4 != 0; iVar4 = iVar4 + -1) {
          wr32((uint32_t)puVar8, rd32((uint32_t)puVar6));
          puVar6 = puVar6 + 4u * (uint32_t)(1);
          puVar8 = puVar8 + 4u * (uint32_t)(1);
        }
      }
      wr32((uint32_t)(iVar7 + 0x128), (int32_t)rd32((uint32_t)(iVar7 + 0x128)) + -1);
      g->eax = (CowU32)(uVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102d13f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_3;   /* 0x102d13f0: the value the entry loaded and the decompiler dropped */
    g->ecx = param_1;   /* 0x102d13f4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* push ebp (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_102d13f0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
