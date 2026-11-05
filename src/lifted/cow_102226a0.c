/* f_0x102226a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102226a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102226a0(Guest* g, CowU32 param_1)
{
    CowU32 extraout_ECX;
    CowU32 piVar1;
    uint64_t uVar2;
    int iStack_8;
    int iStack_4;
    if (rd32((uint32_t)(param_1 + 0x40)) != 0) {
        if (rd32((uint32_t)(param_1 + 0x44)) < 3) {
          piVar1 = (CowU32)0x0;
        }
        else {
          piVar1 = (CowU32)(rd32((uint32_t)(param_1 + 0x20)) + 0x10);
        }
        if (rd32((uint32_t)piVar1) != 0) {
          cow_bridge_10221be0(g, COW_IMG(COW_ADDR_LIFT_102226D4), 2u, (const CowU32[]){ &iStack_8, &iStack_4 }, 0u, 0u, g->eax, 0u);
          iStack_8 = iStack_8 + rd32((uint32_t)(param_1 + 0x68));
          iStack_4 = iStack_4 + rd32((uint32_t)(param_1 + 0x6c));
          uVar2 = cow_bridge_102225f0(g, COW_IMG(COW_ADDR_LIFT_102226F5), 1u, (const CowU32[]){ 0 }, 0u, 0u, g->eax, 4u);
          cow_bridge_10222470(g, COW_IMG(COW_ADDR_LIFT_10222702), 3u, (const CowU32[]){ extraout_ECX, (int)((uint64_t)uVar2 >> 0x20), (int)uVar2 }, 0u, 0u, g->eax, 0u);
        }
      }
      cow_bridge_10221f50(g, COW_IMG(COW_ADDR_LIFT_10222709), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 8 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102226a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x8u;                      /* 0x102226a0: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102226a3: push esi */
    cow_lift_102226a0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
