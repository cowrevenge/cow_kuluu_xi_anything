/* f_0x10139920 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10139920 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10139920(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 uVar4;
    puVar3 = (CowU32)(param_1 + 0x14);
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        wr32((uint32_t)puVar3, 0);
        puVar3 = puVar3 + 1;
      }
      wr32((uint32_t)(param_1 + 0x3c), 0);
      wr16((uint32_t)(param_1 + 0x42), 1);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1013994A), 4u, (const CowU32[]){ 272037656u, 1u, g->eax, g->edi }, 274864184u, g->edx, 0u, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1057847C)) != 0) {
        uVar4 = 2;
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1013995F), 3u, (const CowU32[]){ 13u, 10u, 2u }, g->ecx, g->edx, 0u, 0u);
        cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_1013996E), 1u, (const CowU32[]){ uVar4 }, uVar1, g->edx, 0u, 0u);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10663740)) != 0) {
        cow_bridge_101f23a0(g, COW_IMG(COW_ADDR_LIFT_10139983), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_105781F4)) }, g->ecx, g->edx, 0u, 0u);
      }
      cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10139999), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781F0)) + 8)), 0 }, 274864184u, g->edx, 0u, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10139920(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->edx = g->ecx;   /* 0x10139920: the value the entry loaded and the decompiler dropped */
    g->ecx = 10u;   /* 0x10139923: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x10139928: the value the entry loaded and the decompiler dropped */
    { g->edi = (uint32_t)((uint32_t)(g->edx + 0x14u)); }   /* 0x1013992a: register edi, replayed as the entry ran it */
    cow_lift_10139920(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
