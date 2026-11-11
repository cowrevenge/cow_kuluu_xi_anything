/* f_0x10159440 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10159440 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10159440(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    char cVar2;
    int iVar3;
    cow_bridge_10159170(g, COW_IMG(COW_ADDR_LIFT_1015944D), 1u, (const CowU32[]){ param_3 }, param_1, g->edx, param_3, 0u);
      cVar2 = cow_bridge_10158470(g, COW_IMG(COW_ADDR_LIFT_10159454), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, param_3, 0u);
      if (cVar2 == '\x01') {
        iVar3 = cow_bridge_101598a0(g, COW_IMG(COW_ADDR_LIFT_1015945F), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, param_3, 0u);
        if (iVar3 != 0) {
          cow_bridge_10159660(g, COW_IMG(COW_ADDR_LIFT_1015946C), 1u, (const CowU32[]){ iVar3 }, (g->esi + 40u), g->edx, param_3, 0u);
          uVar1 = rd32((uint32_t)(param_1 + 0x5c));
          wr8((uint32_t)(param_1 + 0x52), 1);
          wr32((uint32_t)(param_1 + 0x5c), (uVar1 * 4 ^ uVar1) & 0xc ^ uVar1);
        }
      }
      cVar2 = cow_bridge_101591d0(g, COW_IMG(COW_ADDR_LIFT_1015948B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_3, 0u);
      if (cVar2 != '\0') {
        wr32((uint32_t)(param_1 + 0xc4), param_2);
        g->eax = (CowU32)(1); return;
      }
      wr32((uint32_t)(param_1 + 0x60), 0xffffffff);
      wr32((uint32_t)(param_1 + 100), 0);
      if (rd8((uint32_t)(param_1 + 0x52)) == '\x01') {
        cow_bridge_10159740(g, COW_IMG(COW_ADDR_LIFT_101594AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_3, 0u);
        wr8((uint32_t)(param_1 + 0x52), 0);
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10159440(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_3;   /* 0x10159440: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10159444: push esi */
    g->esi = g->ecx;   /* 0x10159446: the value the entry loaded and the decompiler dropped */
    cow_lift_10159440(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
