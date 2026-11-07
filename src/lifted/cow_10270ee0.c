/* f_0x10270ee0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10270ee0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10270ee0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    wr32(COW_IMG(COW_ADDR_LIFT_1099CD94), rd32((uint32_t)(COW_ADDR_LIFT_1099B398 + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099B0F4)) * 0x1f))));
      iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_1099B0F4)) * 0x7c;
      wr32(COW_IMG(COW_ADDR_LIFT_1099CD98), rd32((uint32_t)(COW_ADDR_LIFT_1099B39C + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099B0F4)) * 0x1f))));
      wr32(COW_IMG(COW_ADDR_LIFT_1099CD9C), rd32((uint32_t)(COW_ADDR_LIFT_1099B3A0 + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099B0F4)) * 0x1f))));
      wr32(COW_IMG(COW_ADDR_LIFT_1099CDA0), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099B3A4) + iVar1)));
      wr32(COW_IMG(COW_ADDR_LIFT_1099CDA4), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099B3A8) + iVar1)));
      wr32(COW_IMG(COW_ADDR_LIFT_1099CDA8), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099B3AC) + iVar1)));
      wr32(COW_IMG(COW_ADDR_LIFT_1099CDAC), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099B3B0) + iVar1)));
      wr32(COW_IMG(COW_ADDR_LIFT_1099CDB0), rd32((uint32_t)(COW_ADDR_LIFT_1099B3B4 + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099B0F4)) * 0x1f))));
      cow_bridge_1026e210(g, COW_IMG(COW_ADDR_LIFT_10270F48), 1u, (const CowU32[]){ 278515000u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099B0F4)), 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ecx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10270ee0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099B0F4));   /* 0x10270ee0: the value the entry loaded and the decompiler dropped */
    cow_lift_10270ee0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
