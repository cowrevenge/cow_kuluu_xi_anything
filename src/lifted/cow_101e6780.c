/* f_0x101e6780 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e6780 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e6780(Guest* g, CowU32 param_1, CowU32 param_2)
{
    char cVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 local_c;
    CowU32 local_8;
    int local_4;
    if ((0 < param_2) && (rd32((uint32_t)(param_1 + 8)) != 0)) {
        iVar2 = cow_bridge_1020a420(g, COW_IMG(COW_ADDR_LIFT_101E67AC), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        if (iVar2 != 0) {
          local_c = 0;
          local_8 = local_8 & 0xffffff00;
          cVar1 = cow_bridge_101e4ca0(g, COW_IMG(COW_ADDR_LIFT_101E67D1), 2u, (const CowU32[]){ rd8((uint32_t)(param_1 + 0x14)), &local_c }, 0u, 0u, g->eax, 8u);
          if (cVar1 != '\0') {
            cVar1 = cow_bridge_101e4ce0(g, COW_IMG(COW_ADDR_LIFT_101E67EF), 3u, (const CowU32[]){ iVar2 + 0x40, local_c, &local_8 }, 0u, 0u, g->eax, 12u);
            if (cVar1 != '\0') {
              uVar4 = local_8 & 0xff;
              if (rd8((uint32_t)(uVar4 + 0x3c + iVar2)) == '\x01') {
                cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101E681B), 2u, (const CowU32[]){ 5, param_2 }, 0u, 0u, g->eax, 0u);
                return;
              }
              cVar1 = cow_bridge_100e9730(g, COW_IMG(COW_ADDR_LIFT_101E6837), 4u, (const CowU32[]){ &local_4, 0, 0, rd8((uint32_t)(param_1 + 0x14)) }, 0u, 0u, g->eax, 16u);
              if ((cVar1 != '\0') && (rd8((uint32_t)(local_4 + 8)) == rd8((uint32_t)(uVar4 + 0x3c + iVar2)))) {
                cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101E685B), 2u, (const CowU32[]){ 5, param_2 }, 0u, 0u, g->eax, 0u);
                return;
              }
              iVar3 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_101E686F), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
              if (iVar3 != 0) {
                iVar3 = cow_bridge_10082fa0(g, COW_IMG(COW_ADDR_LIFT_101E687A), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
                if (iVar3 == rd32((uint32_t)(iVar2 + 0x1c))) {
                  cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101E688E), 2u, (const CowU32[]){ 5, param_2 }, 0u, 0u, g->eax, 0u);
                }
              }
            }
          }
        }
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 12 locals, pops [-], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e6780(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0xcu;                      /* 0x101e6780: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101e6783: push ebx */
    cow_lift_101e6780(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
