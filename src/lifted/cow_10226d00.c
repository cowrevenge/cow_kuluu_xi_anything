/* f_0x10226d00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10226d00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10226d00(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    uVar1 = cow_bridge_10226ce0(g, COW_IMG(COW_ADDR_LIFT_10226D0E), 1u, (const CowU32[]){ g->eax }, param_1, param_2, param_3, 0u);
      uVar2 = cow_bridge_10226ce0(g, COW_IMG(COW_ADDR_LIFT_10226D1C), 1u, (const CowU32[]){ param_3 }, param_1, g->edx, param_3, 0u);
      if (((uVar1 == 0xffffffff) || (uVar2 == 0xffffffff)) || (uVar1 == uVar2)) {
        g->eax = (CowU32)(uVar2 & 0xffffff00); return;
      }
      if ((int)uVar2 < (int)uVar1) {
        if ((int)uVar2 < (int)uVar1) {
          puVar4 = (CowU32)((int)param_1 + uVar2 * 2 + 2);
          puVar5 = (CowU32)((int)param_1 + uVar2 * 2);
          for (iVar3 = uVar1 - uVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
            wr16((uint32_t)puVar5, rd16((uint32_t)puVar4));
            puVar4 = puVar4 + 2u * (uint32_t)(1);
            puVar5 = puVar5 + 2u * (uint32_t)(1);
          }
          wr16((uint32_t)((int)param_1 + uVar1 * 2), (CowU16)param_3);
          g->eax = (CowU32)((((uint32_t)(((((uint32_t)((short)(uVar2 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((CowU16)param_3) & 0xffffu)) >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))); return;
        }
      }
      else {
        for (; (int)uVar1 < (int)uVar2; uVar2 = uVar2 - 1) {
          wr16((uint32_t)((int)param_1 + uVar2 * 2), rd16((uint32_t)((int)param_1 + uVar2 * 2 + -2)));
        }
      }
      wr16((uint32_t)((int)param_1 + uVar1 * 2), (CowU16)param_3);
      g->eax = (CowU32)((((uint32_t)(((((uint32_t)((short)(uVar2 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((CowU16)param_3) & 0xffffu)) >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10226d00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->eax = param_3;   /* 0x10226d00: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10226d04: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10226d05: push ebp */
    g->ebx = g->ecx;   /* 0x10226d07: the value the entry loaded and the decompiler dropped */
    cow_lift_10226d00(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
