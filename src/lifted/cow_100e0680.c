/* f_0x100e0680 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e0680 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e0680(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    short sVar2;
    sVar2 = cow_bridge_100e0740(g, COW_IMG(COW_ADDR_LIFT_100E0685), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (sVar2 < 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      puVar1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a4 + sVar2 * 0x1c);
      wr16((uint32_t)(puVar1 + 2u * (uint32_t)(2)), 0);
      wr16((uint32_t)puVar1, 0xffff);
      wr16((uint32_t)(puVar1 + 2u * (uint32_t)(1)), rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a2)));
      wr32((uint32_t)(puVar1 + 2u * (uint32_t)(4)), rd32((uint32_t)param_1));
      wr32((uint32_t)(puVar1 + 2u * (uint32_t)(6)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))));
      wr32((uint32_t)(puVar1 + 2u * (uint32_t)(8)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))));
      wr32((uint32_t)(puVar1 + 2u * (uint32_t)(10)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))));
      wr16((uint32_t)(puVar1 + 2u * (uint32_t)(0xc)), rd16((uint32_t)(param_1 + 4u * (uint32_t)(4))));
      wr8((uint32_t)(puVar1 + 2u * (uint32_t)(0xd)), rd8((uint32_t)((int)param_1 + 0x12)));
      if ((int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a0)) == -1) {
        wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a0), sVar2);
      }
      if ((int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a2)) != -1) {
        wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a4 + (int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a2)) * 0x1c), sVar2);
      }
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a2), sVar2);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e0680(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    cow_lift_100e0680(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
