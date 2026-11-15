/* f_0x101fa550 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fa550 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fa550(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    cow_bridge_101f9010(g, COW_IMG(COW_ADDR_LIFT_101FA55B), 1u, (const CowU32[]){ 1u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_101fad40(g, COW_IMG(COW_ADDR_LIFT_101FA562), 1u, (const CowU32[]){ 1u }, this_00, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x84), 0);
      wr16((uint32_t)((int)param_1 + 0x74), 0);
      wr32((uint32_t)((int)param_1 + 0x8c), 0);
      wr16((uint32_t)((int)param_1 + 0x78), 0);
      wr32((uint32_t)((int)param_1 + 0x94), 0);
      wr16((uint32_t)((int)param_1 + 0x7a), 0);
      wr32((uint32_t)((int)param_1 + 0x90), 0);
      wr16((uint32_t)((int)param_1 + 0x7c), 0);
      wr16((uint32_t)((int)param_1 + 0x7e), 0);
      wr16((uint32_t)((int)param_1 + 0x80), 0);
      wr16((uint32_t)((int)param_1 + 0x82), 0);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101FA5AD), 1u, (const CowU32[]){ 272125996u }, 274864184u, g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1066389C)) != (CowU32)0x0) {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066389C))))) + 0x74u))), COW_IMG(COW_ADDR_LIFT_101FA5BC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101FA5CC), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10384FF4) }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101FA5DB), 1u, (const CowU32[]){ 272126056u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101FA5EA), 1u, (const CowU32[]){ 272126036u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101FA5F9), 1u, (const CowU32[]){ 272126016u }, 274864184u, g->edx, g->eax, 0u);
      if (rd32((uint32_t)((int)param_1 + 0x6c4)) != (CowU32)0x0) {
        cow_bridge_10071ec0(g, COW_IMG(COW_ADDR_LIFT_101FA610), 0u, (const CowU32[]){ 0u }, (CowU32)rd32((uint32_t)rd32((uint32_t)(((int)param_1 + 0x6c4)))), g->edx, g->eax, 0u);
        cow_bridge_10071050(g, COW_IMG(COW_ADDR_LIFT_101FA617), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x6c4), g->edx, g->eax, 0u);
        wr32((uint32_t)((int)param_1 + 0x6c4), 0);
      }
      if (rd32((uint32_t)((int)param_1 + 0x6c8)) != (CowU32)0x0) {
        cow_bridge_10071ec0(g, COW_IMG(COW_ADDR_LIFT_101FA630), 0u, (const CowU32[]){ 0u }, (CowU32)rd32((uint32_t)rd32((uint32_t)(((int)param_1 + 0x6c8)))), g->edx, g->eax, 0u);
        cow_bridge_10071050(g, COW_IMG(COW_ADDR_LIFT_101FA637), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x6c8), g->edx, g->eax, 0u);
        wr32((uint32_t)((int)param_1 + 0x6c8), 0);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
        cow_bridge_10221300(g, COW_IMG(COW_ADDR_LIFT_101FA64D), 1u, (const CowU32[]){ 4u }, (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) + 0x20), g->edx, g->eax, 0u);
      }
      cow_bridge_101ee520(g, COW_IMG(COW_ADDR_LIFT_101FA654), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_106218E5), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101fa550(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101fa550: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101fa551: push esi */
    cow_lift_101fa550(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
