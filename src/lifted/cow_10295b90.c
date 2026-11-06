/* f_0x10295b90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10295b90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10295b90(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    wr32((uint32_t)(param_1 + 0x1c), param_2);
      if (rd32((uint32_t)(param_1 + 0x34)) != 0) {
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_10295BB4), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x34)), COW_IMG(COW_ADDR_LIFT_103BB964), 0x109 }, 0u, g->edx, g->eax, 12u);
      }
      uVar1 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_10295BD0), 4u, (const CowU32[]){ 1, param_2 * 4, COW_IMG(COW_ADDR_LIFT_103BB964), 0x10a }, 0u, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x34), uVar1);
      if (rd32((uint32_t)(param_1 + 0x30)) != 0) {
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_10295BED), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x30)), COW_IMG(COW_ADDR_LIFT_103BB964), 0x10d }, 0u, 0u, g->eax, 12u);
      }
      uVar1 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_10295C0B), 4u, (const CowU32[]){ 1, rd32((uint32_t)(param_1 + 0x28)) * param_2 * 4, COW_IMG(COW_ADDR_LIFT_103BB964), 0x10e }, 0u, g->edx, g->eax, 16u);
      wr32((uint32_t)(param_1 + 0x30), uVar1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10295b90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10295b90: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10295b91: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10295b95: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10295b96: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x34u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10295b9a: register eax, replayed as the entry ran it */
    cow_lift_10295b90(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
