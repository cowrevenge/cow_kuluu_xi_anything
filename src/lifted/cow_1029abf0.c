/* f_0x1029abf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1029abf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1029abf0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int local_c;
    int local_8;
    int local_4;
    iVar1 = param_4;
      if (param_3 != 2) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1029AC0D), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BC554), param_3, 2 }, 0u, 0u, param_3, 12u);
        return;
      }
      uVar2 = cow_bridge_1028a110(g, COW_IMG(COW_ADDR_LIFT_1029AC33), 5u, (const CowU32[]){ &param_4, 4, 1, param_2 + 0x50, param_4 }, 0u, 0u, param_3, 0u);
      if (param_4 < 1) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1029AC49), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BC514), param_4 }, 0u, 0u, param_3, 8u);
        return;
      }
      uVar2 = cow_bridge_1028a110(g, COW_IMG(COW_ADDR_LIFT_1029AC64), 5u, (const CowU32[]){ &local_c, 4, 1, uVar2, iVar1 }, 0u, 0u, param_3, 0u);
      if (local_c < 1) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1029AC7C), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BC4DC), local_c }, 0u, 0u, param_3, 8u);
        return;
      }
      cow_bridge_1029a350(g, COW_IMG(COW_ADDR_LIFT_1029AC96), 2u, (const CowU32[]){ param_1, param_4 }, 0u, 0u, param_3, 0u);
      param_3 = 0;
      if (0 < param_4) {
        while ((uVar2 = cow_bridge_1028a110(g, COW_IMG(COW_ADDR_LIFT_1029ACC3), 5u, (const CowU32[]){ &local_8, 4, 2, uVar2, iVar1 }, 0u, 0u, param_3, 0u), -1 < local_8 && (0 < local_4))) {
          iVar3 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1029ACF2), 4u, (const CowU32[]){ 1, local_4 << 2, COW_IMG(COW_ADDR_LIFT_103BC4AC), 0x5b }, 0u, 0u, param_3, 0u);
          if (iVar3 == 0) {
            cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1029ADC6), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BC478), param_3, local_4 }, 0u, 0u, param_3, 12u);
            return;
          }
          uVar2 = cow_bridge_1028a110(g, COW_IMG(COW_ADDR_LIFT_1029AD0E), 5u, (const CowU32[]){ iVar3, 4, local_4, uVar2, iVar1 }, 0u, 0u, param_3, 0u);
          iVar4 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1029AD2A), 4u, (const CowU32[]){ 1, local_4 * 4, COW_IMG(COW_ADDR_LIFT_103BC4AC), 0x69 }, 0u, 0u, param_3, 0u);
          if (iVar4 == 0) {
            cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1029ADE5), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BC440), param_3, local_4 }, 0u, 0u, param_3, 12u);
            return;
          }
          uVar2 = cow_bridge_1028a110(g, COW_IMG(COW_ADDR_LIFT_1029AD46), 5u, (const CowU32[]){ iVar4, 4, local_4, uVar2, iVar1 }, 0u, 0u, param_3, 0u);
          iVar5 = cow_bridge_1029a440(g, COW_IMG(COW_ADDR_LIFT_1029AD59), 2u, (const CowU32[]){ param_1, local_8 }, 0u, 0u, param_3, 0u);
          if (iVar5 != 0) {
            iVar6 = cow_bridge_102af560(g, COW_IMG(COW_ADDR_LIFT_1029AD67), 0u, (const CowU32[]){ 0u }, 0u, 0u, param_3, 0u);
            wr32((uint32_t)(iVar6 + 0x9c), iVar5);
            wr32((uint32_t)(iVar6 + 0x50), local_4);
            wr32((uint32_t)(iVar6 + 0x30), iVar3);
            wr32((uint32_t)(iVar6 + 0x38), iVar4);
            wr32((uint32_t)(iVar6 + 0x3c), 0);
            wr32((uint32_t)(iVar6 + 0x58), iVar5 + 0x24);
            cow_bridge_1029a3a0(g, COW_IMG(COW_ADDR_LIFT_1029AD92), 2u, (const CowU32[]){ param_1, iVar6 }, 0u, 0u, param_3, 8u);
          }
          param_3 = param_3 + 1;
          if (param_4 <= param_3) {
            return;
          }
        }
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1029AE01), 4u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BC414), param_3, local_8, local_4 }, 0u, 0u, param_3, 16u);
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1029abf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->eax = param_3;   /* 0x1029abf0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0xcu;                      /* 0x1029abf4: 12 bytes of locals */
    cow_lift_1029abf0(g, param_1, param_2, param_3, param_4);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
