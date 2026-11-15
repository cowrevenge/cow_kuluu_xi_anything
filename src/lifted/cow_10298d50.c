/* f_0x10298d50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10298d50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10298d50(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    iVar2 = cow_bridge_102984d0(g, COW_IMG(COW_ADDR_LIFT_10298D57), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cVar1 = cow_bridge_10298730(g, COW_IMG(COW_ADDR_LIFT_10298D64), 2u, (const CowU32[]){ iVar2, param_2 }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10298D76), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BBE80), param_2 }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(0xffffffff); return;
      }
      wr32((uint32_t)(param_1 + 0x1c), iVar2);
      if (rd32(COW_IMG(COW_ADDR_LIFT_103BBDE0)) != '\0') {
        uVar3 = cow_bridge_10281850(g, COW_IMG(COW_ADDR_LIFT_10298DA6), 5u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x1c)), rd32((uint32_t)(iVar2 + 0x20)), rd32((uint32_t)(iVar2 + 0x24)), rd32((uint32_t)(iVar2 + 0x28)), 0 }, g->ecx, g->edx, g->eax, 20u);
        wr32((uint32_t)(param_1 + 0x14), uVar3);
      }
      wr32((uint32_t)(param_1 + 0x20), rd32((uint32_t)(param_1 + 0x20)) | 1);
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10298d50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10298d50: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10298d51: push edi */
    cow_lift_10298d50(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
