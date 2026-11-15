/* f_0x10073f20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10073f20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10073f20(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 piVar2;
    if (param_5 == 0xffffffff) {
        cow_bridge_10073c30(g, COW_IMG(COW_ADDR_LIFT_10073F45), 4u, (const CowU32[]){ param_1, param_2, param_3, param_4 }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(param_1); return;
      }
      param_4 = param_4 & param_5;
      if (param_3 == 0) {
        piVar2 = rd32((uint32_t)(param_2 + 0x14));
        if (piVar2 == (CowU32)0x0) {
    L_10073fd5:
          wr32((uint32_t)param_1, 0);
          g->eax = (CowU32)(param_1); return;
        }
        while ((rd32((uint32_t)(rd32((uint32_t)piVar2) + 0x20)) & param_5) != param_4) {
          piVar2 = rd32((uint32_t)(rd32((uint32_t)piVar2) + 0x2c));
          if (piVar2 == (CowU32)0x0) {
            wr32((uint32_t)param_1, 0);
            g->eax = (CowU32)(param_1); return;
          }
        }
      }
      else {
        if ((rd32((uint32_t)(param_2 + 0x24)) & 0x7f) == param_3) {
    L_10073fb8:
          for (piVar2 = rd32((uint32_t)(param_2 + 0x14)); piVar2 != (CowU32)0x0;
              piVar2 = rd32((uint32_t)(rd32((uint32_t)piVar2) + 0x10))) {
            if ((param_4 == 0) || ((rd32((uint32_t)(rd32((uint32_t)piVar2) + 0x20)) & param_5) == param_4)) goto L_10073fac;
          }
          goto L_10073fd5;
        }
        for (piVar1 = rd32((uint32_t)(param_2 + 0x14)); piVar2 = (CowU32)0x0, piVar1 != (CowU32)0x0;
            piVar1 = rd32((uint32_t)(rd32((uint32_t)piVar1) + 0x2c))) {
          if ((rd32((uint32_t)(rd32((uint32_t)piVar1) + 0x24)) & 0x7f) == param_3) goto L_10073fb8;
        }
      }
    L_10073fac:
      wr32((uint32_t)param_1, (int)piVar2);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 5 parameter(s), cleanup 20 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 20.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10073f20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10073f20: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10073f21: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10073f22: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x20u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10073f23: register edi, replayed as the entry ran it */
    cow_lift_10073f20(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
