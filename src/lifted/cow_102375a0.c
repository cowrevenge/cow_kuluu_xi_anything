/* f_0x102375a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102375a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102375a0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_102375B3), 1u, (const CowU32[]){ 272138420u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_102375C2), 1u, (const CowU32[]){ 272138400u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_102375D1), 1u, (const CowU32[]){ 272138380u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_102375E0), 1u, (const CowU32[]){ 272138360u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_102375EF), 1u, (const CowU32[]){ 272138340u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_102375FE), 1u, (const CowU32[]){ 272138320u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023760D), 1u, (const CowU32[]){ 272138300u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1023761C), 1u, (const CowU32[]){ 272138280u }, 274864184u, g->edx, g->eax, 0u);
      switch(param_2) {
      case 0:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10237643), 3u, (const CowU32[]){ 272138420u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x1c), param_2);
        return;
      case 1:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1023765E), 3u, (const CowU32[]){ 272138400u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x1c), param_2);
        return;
      case 2:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10237679), 3u, (const CowU32[]){ 272138380u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x1c), param_2);
        return;
      case 3:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10237694), 3u, (const CowU32[]){ 272138360u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x1c), param_2);
        return;
      case 4:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_102376AF), 3u, (const CowU32[]){ 272138340u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x1c), param_2);
        return;
      case 5:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_102376CA), 3u, (const CowU32[]){ 272138320u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x1c), param_2);
        return;
      case 6:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_102376E5), 3u, (const CowU32[]){ 272138300u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x1c), param_2);
        return;
      case 7:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10237700), 3u, (const CowU32[]){ 272138280u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)(param_1 + 0x1c), param_2);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102375a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102375a0: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102375a1: push edi */
    g->edi = g->ecx;   /* 0x102375a2: the value the entry loaded and the decompiler dropped */
    cow_lift_102375a0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
