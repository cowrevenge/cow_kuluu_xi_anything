/* f_0x101fcd90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fcd90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fcd90(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 piVar2;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_1066389C)) != 0) && (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0)) {
        piVar2 = (CowU32)cow_bridge_101fc580(g, COW_IMG(COW_ADDR_LIFT_101FCDB2), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
        if (piVar2 != (CowU32)0x0) {
          if (param_2 == 5) {
            if (rd32((uint32_t)piVar2) == 0x7fffffff) {
              cow_bridge_101fcd60(g, COW_IMG(COW_ADDR_LIFT_101FCE07), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
              cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_101FCE48), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
              g->eax = (CowU32)(1); return;
            }
            if (-1 < rd32((uint32_t)piVar2)) {
              if (rd32((uint32_t)(param_1 + 0x6c)) != (CowU32)0x0) {
                cow_bridge_indirect(g, rd32((uint32_t)((param_1 + 0x6cu))), COW_IMG(COW_ADDR_LIFT_101FCE5C), 1u, (const CowU32[]){ piVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 4u);
              }
              cow_bridge_101fcd60(g, COW_IMG(COW_ADDR_LIFT_101FCE43), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
              cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_101FCE6B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
              g->eax = (CowU32)(1); return;
            }
            wr16((uint32_t)(param_1 + 0x5e), rd16((uint32_t)(param_1 + 0x58)));
            wr16((uint32_t)(param_1 + 0x58), -(short)rd32((uint32_t)piVar2));
            wr16((uint32_t)(param_1 + 0x5c), (short)rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))));
            uVar1 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_101FCE92), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
            wr16((uint32_t)(param_1 + 0x5a), uVar1);
            cow_bridge_101fcae0(g, COW_IMG(COW_ADDR_LIFT_101FCDE7), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
            cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_101FCDF5), 2u, (const CowU32[]){ 0, 0 }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
            cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_101FCEAD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
          }
          else if (param_2 == 6) {
            if (((int16_t)(-1) < (int16_t)((int16_t)rd16((uint32_t)(param_1 + 0x5c))))) {
              wr16((uint32_t)(param_1 + 0x5c), 0xffff);
              wr16((uint32_t)(param_1 + 0x58), rd16((uint32_t)(param_1 + 0x5e)));
              cow_bridge_101fcae0(g, COW_IMG(COW_ADDR_LIFT_101FCE1E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
              cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_101FCE2C), 2u, (const CowU32[]){ (int)(int16_t)rd16((uint32_t)(param_1 + 0x5a)), 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
              g->eax = (CowU32)(1); return;
            }
            if ((int16_t)rd16((uint32_t)(param_1 + 0x58)) == 0) {
              cow_bridge_101fcd60(g, COW_IMG(COW_ADDR_LIFT_101FCE66), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
              g->eax = (CowU32)(1); return;
            }
            wr16((uint32_t)(param_1 + 0x58), 0);
            wr16((uint32_t)(param_1 + 0x5e), 0);
            cow_bridge_101fcae0(g, COW_IMG(COW_ADDR_LIFT_101FCE9D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
            cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_101FCEA8), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1066389C)), 0u);
            g->eax = (CowU32)(1); return;
          }
          g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(1) & 0xffffu)); return;
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101fcd90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1066389C));   /* 0x101fcd90: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101fcd95: push esi */
    cow_lift_101fcd90(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
