/* f_0x102728a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102728a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102728a0(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (param_1 == -1) {
        param_1 = rd32(COW_IMG(COW_ADDR_LIFT_1099B0F8));
      }
      if (param_2 != 0) {
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BBB0) + 4u * (uint32_t)(param_1 * 0xe)), rd32((uint32_t)(param_2 + 0x14)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BBB4) + 4u * (uint32_t)(param_1 * 0xe)), rd32((uint32_t)(param_2 + 0x18)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BBB8) + 4u * (uint32_t)(param_1 * 0xe)), rd32((uint32_t)(param_2 + 0x1c)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BBBC) + 4u * (uint32_t)(param_1 * 0xe)), rd32((uint32_t)(param_2 + 0x20)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BBC0) + 4u * (uint32_t)(param_1 * 0xe)), rd32((uint32_t)(param_2 + 0x24)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BBC4) + 4u * (uint32_t)(param_1 * 0xe)), rd32((uint32_t)(param_2 + 0x28)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BBC8) + 4u * (uint32_t)(param_1 * 0xe)), rd32((uint32_t)(param_2 + 0x2c)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BBCC) + 4u * (uint32_t)(param_1 * 0xe)), rd32((uint32_t)(param_2 + 0x30)));
      }
      if (param_3 != 0) {
        cow_bridge_1027eb30(g, COW_IMG(COW_ADDR_LIFT_1027292F), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1099BCD0) + param_1 * 0x7c, param_3 + 0x1c }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10274670(g, COW_IMG(COW_ADDR_LIFT_1027293F), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1099BD10) + param_1 * 0x1f, param_3 + 0x5c }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1027a720(g, COW_IMG(COW_ADDR_LIFT_1027294F), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1099BD1C) + param_1 * 0x7c, param_3 + 0x68 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD2C) + 4u * (uint32_t)(param_1 * 0x1f)), rd32((uint32_t)(param_3 + 0x78)));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102728a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->edx = param_1;   /* 0x102728a0: the value the entry loaded and the decompiler dropped */
    cow_lift_102728a0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
