/* f_0x10149b90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10149b90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10149b90(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    if (param_2 != '\0') {
        cow_bridge_10160ef0(g, COW_IMG(COW_ADDR_LIFT_10149BAE), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        iVar1 = cow_bridge_10161070(g, COW_IMG(COW_ADDR_LIFT_10149BBA), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = cow_bridge_10160fb0(g, COW_IMG(COW_ADDR_LIFT_10149BC8), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar2 != 0) && (iVar1 != 0)) {
          cow_bridge_10153180(g, COW_IMG(COW_ADDR_LIFT_10149BEC), 7u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_105782E0), 0x100, 10, 0x50, 1, iVar1, rd8((uint32_t)(iVar2 + 2)) }, g->ecx, g->edx, g->eax, 0u);
          iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10578438));
          uVar3 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578438)) + 8));
          wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578438)) + 0x3a), 0);
          wr32((uint32_t)(iVar1 + 0x14), 0);
          cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_10149C0F), 2u, (const CowU32[]){ uVar3, 1 }, 274864184u, g->edx, g->eax, 0u);
          uVar5 = 0;
          uVar4 = 1;
          uVar3 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10149C1F), 4u, (const CowU32[]){ 13u, 130u, 1u, 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10210e30(g, COW_IMG(COW_ADDR_LIFT_10149C3B), 5u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_105782E0), 0, uVar3, uVar4, uVar5 }, COW_IMG(COW_ADDR_LIFT_10149C40), param_1, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10149b90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10149b90: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10149b94: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10149b90(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
