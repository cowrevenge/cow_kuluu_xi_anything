/* f_0x100b9d30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b9d30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b9d30(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    CowU32 uVar1;
    uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9D3A), 1u, (const CowU32[]){ 1u }, param_1, g->edx, g->eax, 0u);
      this_00 = rd32(COW_IMG(COW_ADDR_LIFT_10578204));
      if ((short)uVar1 == 0) {
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_100B9D56), 2u, (const CowU32[]){ rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_100B9D5D), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        wr16((uint32_t)((int)param_1 + 0x256), (int16_t)rd16((uint32_t)((int)param_1 + 0x256)) + 3);
        return;
      }
      cow_bridge_1013e520(g, COW_IMG(COW_ADDR_LIFT_100B9D78), 3u, (const CowU32[]){ uVar1, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)((int)param_1 + 0x256), (int16_t)rd16((uint32_t)((int)param_1 + 0x256)) + 3);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b9d30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b9d30: push esi */
    cow_lift_100b9d30(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
