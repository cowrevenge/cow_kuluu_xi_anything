/* f_0x1000c6e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1000c6e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1000c6e0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
    char cVar1;
    int iVar2;
    CowU8 local_8;
    CowU8 local_7;
    CowU8 local_6;
    CowU8 local_5;
    CowU8 local_4;
    CowU8 local_3;
    CowU8 local_2;
    CowU8 local_1;
    if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104566E8)) + 0x18)) != 0) {
        local_5 = 0x80;
        local_6 = 0x80;
        local_7 = 0;
        local_8 = 0x80;
        local_1 = 0x80;
        local_2 = 0;
        local_3 = 0x80;
        local_4 = 0;
        cVar1 = cow_bridge_1000c900(g, COW_IMG(COW_ADDR_LIFT_1000C72F), 2u, (const CowU32[]){ param_1 + 0x814, &local_8 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104566E8)), 0u);
        if (cVar1 != '\0') {
          local_5 = 0x80;
          local_6 = 0;
          local_7 = 0x80;
          local_8 = 0;
          local_1 = 0x80;
          local_2 = 0x80;
          local_3 = 0;
          local_4 = 0x80;
          cVar1 = cow_bridge_1000c900(g, COW_IMG(COW_ADDR_LIFT_1000C769), 2u, (const CowU32[]){ param_1 + 0x81c, &local_8 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104566E8)), 0u);
          if ((cVar1 != '\0') && (cVar1 = cow_bridge_1000c850(g, COW_IMG(COW_ADDR_LIFT_1000C77B), 1u, (const CowU32[]){ param_1 + 0x82c }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104566E8)), 0u), cVar1 != '\0')) {
            iVar2 = cow_bridge_1000a6e0(g, COW_IMG(COW_ADDR_LIFT_1000C796), 5u, (const CowU32[]){ param_2, param_3, 0, 1, 0 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104566E8)), 0u);
            wr32((uint32_t)(param_1 + 0x824), iVar2);
            if (iVar2 != 0) {
              return;
            }
          }
        }
        cow_bridge_1000d620(g, COW_IMG(COW_ADDR_LIFT_1000C7AB), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104566E8)), 0u);
        cow_bridge_1000c7c0(g, COW_IMG(COW_ADDR_LIFT_1000C7B2), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_104566E8)), 0u);
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1000c6e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104566E8));   /* 0x1000c6e0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x1000c6e5: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1000c6e8: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1000c6e9: push esi */
    cow_lift_1000c6e0(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
