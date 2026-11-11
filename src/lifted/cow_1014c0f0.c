/* f_0x1014c0f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014c0f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014c0f0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    int iVar3;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1057844D)) == '\0') {
        cow_bridge_10161760(g, COW_IMG(COW_ADDR_LIFT_1014C10B), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = cow_bridge_10161720(g, COW_IMG(COW_ADDR_LIFT_1014C117), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_101617a0(g, COW_IMG(COW_ADDR_LIFT_1014C124), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar3 != 0) && (iVar2 != 0)) {
          uVar1 = cow_bridge_101617b0(g, COW_IMG(COW_ADDR_LIFT_1014C138), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10153180(g, COW_IMG(COW_ADDR_LIFT_1014C154), 7u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_105782E0), 0x100, 10, 0x7b, 1, iVar2, uVar1 }, g->ecx, g->edx, g->eax, 28u);
          cow_bridge_10210e30(g, COW_IMG(COW_ADDR_LIFT_1014C175), 7u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1014C180), param_1, COW_IMG(COW_ADDR_LIFT_105782E0), 0, 0, 1, 0 }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014c0f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_1057844D) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1014c0f0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014c0f5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_1014c0f0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
