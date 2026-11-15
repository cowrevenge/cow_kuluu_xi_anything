/* f_0x100af180 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100af180 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100af180(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    switch(param_1) {
      case 0x7fffffc0:
      case 0x7ffffff0:
        iVar2 = cow_bridge_100fc510(g, COW_IMG(COW_ADDR_LIFT_100AF1A7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
        wr32((uint32_t)param_2, (int32_t)rd32((uint32_t)(iVar2 + 4)));
        uVar1 = cow_bridge_100fc2e0(g, COW_IMG(COW_ADDR_LIFT_100AF1B5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
        wr16((uint32_t)param_3, uVar1);
        g->eax = (CowU32)(1); return;
      case 0x7fffffc1:
      case 0x7fffffc2:
      case 0x7fffffc3:
      case 0x7fffffc4:
      case 0x7fffffc5:
        param_1 = param_1 + 0x40;
        goto L_100af21e;
      case 0x7fffffc6:
      case 0x7fffffc7:
      case 0x7fffffc8:
      case 0x7fffffc9:
      case 0x7fffffca:
      case 0x7fffffcb:
        iVar2 = cow_bridge_100e8df0(g, COW_IMG(COW_ADDR_LIFT_100AF1FA), 1u, (const CowU32[]){ param_1 + 0x44 }, g->ecx, g->edx, param_1, 4u);
        break;
      case 0x7fffffcc:
      case 0x7fffffcd:
      case 0x7fffffce:
      case 0x7fffffcf:
      case 0x7fffffd0:
      case 0x7fffffd1:
        param_1 = param_1 + 0x48;
    L_100af21e:
        iVar2 = cow_bridge_100e8df0(g, COW_IMG(COW_ADDR_LIFT_100AF224), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, param_1, 4u);
    L_100af224:
        if (iVar2 == 0) {
          g->eax = (CowU32)(0); return;
        }
        wr32((uint32_t)param_2, (int32_t)rd32((uint32_t)(iVar2 + 0x14)));
        wr16((uint32_t)param_3, rd16((uint32_t)(iVar2 + 0x18)));
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      default:
        wr32((uint32_t)param_2, param_1);
        wr16((uint32_t)param_3, (CowU16)param_1 & 0x3ff);
        g->eax = (CowU32)(1); return;
      case 0x7ffffff1:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AF1C6), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, param_1, 0u);
        break;
      case 0x7ffffff2:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AF1CF), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, param_1, 0u);
        goto L_100af224;
      case 0x7ffffff3:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AF1D8), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, param_1, 0u);
        break;
      case 0x7ffffff4:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AF1E1), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, param_1, 0u);
        goto L_100af224;
      case 0x7ffffff5:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AF1EA), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, param_1, 0u);
      }
      if (iVar2 == 0) {
        g->eax = (CowU32)(0); return;
      }
      wr32((uint32_t)param_2, (int32_t)rd32((uint32_t)(iVar2 + 0x14)));
      wr16((uint32_t)param_3, rd16((uint32_t)(iVar2 + 0x18)));
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100af180(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_1;   /* 0x100af180: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->eax + 0x80000040u)); }   /* 0x100af184: register ecx, replayed as the entry ran it */
    cow_lift_100af180(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
