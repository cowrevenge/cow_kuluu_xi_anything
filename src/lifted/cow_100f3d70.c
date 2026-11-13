/* f_0x100f3d70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f3d70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f3d70(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, int32_t param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    if ((int16_t)rd16((uint32_t)(param_1 + 4u * (uint32_t)(0x416))) != 0) {
        g->eax = (CowU32)(3); return;
      }
      wr32((uint32_t)param_1, param_2);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x413)), param_5);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x35)), 0xfffffffe);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x36)), 0xfffffffe);
      wr16((uint32_t)(param_1 + 4u * (uint32_t)(0x416)), param_3);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x414)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x415)), 0);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x412)), param_6);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x37)), 1);
      if (param_4 < 0) {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x38)), 0xffffffff);
        uVar1 = cow_bridge_100f32b0(g, COW_IMG(COW_ADDR_LIFT_100F3DF2), 1u, (const CowU32[]){ 271983288u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(uVar1); return;
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x38)), (CowU32)(0 < param_4));
      uVar1 = cow_bridge_100f32b0(g, COW_IMG(COW_ADDR_LIFT_100F3E0E), 1u, (const CowU32[]){ 271983288u }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)(uVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 6 parameter(s), cleanup 20 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 20.
   Arguments: 2 register argument(s) [ecx, edx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f3d70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0xcu));

    cow_lift_100f3d70(g, param_1, param_2, param_3, param_4, param_5, param_6);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
