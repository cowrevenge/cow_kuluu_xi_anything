/* f_0x10143bf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10143bf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10143bf0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 piVar2;
    int iVar3;
    uVar1 = cow_bridge_10141c20(g, COW_IMG(COW_ADDR_LIFT_10143BFD), 1u, (const CowU32[]){ g->eax }, g->ecx, g->edx, param_1, 0u);
      if (uVar1 == 0) {
        iVar3 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578288)) + 0x1c));
    L_10143c7f:
        cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_10143C49), 2u, (const CowU32[]){ iVar3, 0 }, rd32(COW_IMG(COW_ADDR_LIFT_10578280)), g->edx, param_1, 0u);
        cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10143C5E), 2u, (const CowU32[]){ rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578280)) + 8)), 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, param_1, 0u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      }
      if ((int32_t)rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578280)) + 0x38)) == 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      iVar3 = 0;
      if (0 < (int16_t)rd16((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578280)) + 0x20))) {
        piVar2 = (CowU32)((int32_t)rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578280)) + 0x38)) + 0x48);
        do {
          if (rd32((uint32_t)piVar2) == uVar1 + 0x7400) goto L_10143c7f;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 4u * (uint32_t)(0x15);
        } while (iVar3 < (int16_t)rd16((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578280)) + 0x20)));
      }
      cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_10143C84), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578288)) + 0x1c)), 0 }, rd32(COW_IMG(COW_ADDR_LIFT_10578280)), g->edx, param_1, 0u);
      cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10143C9A), 2u, (const CowU32[]){ rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578280)) + 8)), 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, param_1, 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10143bf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->eax = param_1;   /* 0x10143bf0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10143bf4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10143bf5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10143bf6: push edi */
    cow_lift_10143bf0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
