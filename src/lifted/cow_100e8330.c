/* f_0x100e8330 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e8330 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e8330(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU8 auStack_500[256];
    CowU8 auStack_400[512];
    CowU8 auStack_200[512];
    if (param_1 == -0x14cc) {
        cow_bridge_103118b7(g, COW_IMG(COW_ADDR_LIFT_100E8368), 4u, (const CowU32[]){ 3, auStack_500, 0xff, rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x82c)) * 0x100 + 0xa90 + rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) }, g->ecx, g->edx, param_1, 0u);
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_104DF770))) + 0x828u))), COW_IMG(COW_ADDR_LIFT_100E837E), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103D3C84), auStack_500 }, g->ecx, g->edx, param_1, 24u);
      }
      else if (-1 < param_1) {
        iVar1 = cow_bridge_100f1a00(g, COW_IMG(COW_ADDR_LIFT_100E83C7), 8u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x5e8)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x804)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x80c)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x82c)), auStack_400, 0x200, auStack_200, 0x200 }, g->ecx, g->edx, param_1, 32u);
        if (-1 < iVar1) {
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_104DF770))) + 0x828u))), COW_IMG(COW_ADDR_LIFT_100E83E9), 2u, (const CowU32[]){ auStack_200, auStack_400 }, g->ecx, g->edx, param_1, 8u);
        }
      }
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x5ec)) == 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x3d4), 2);
      }
      else {
        cow_bridge_100e7ea0(g, COW_IMG(COW_ADDR_LIFT_100E8400), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
      }
      uVar2 = rd32(COW_IMG(COW_ADDR_LIFT_104DF770));
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x808)) == 0) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x5f0), 2);
        g->eax = (CowU32)(uVar2 & 0xffffff00); return;
      }
      uVar2 = cow_bridge_100e8160(g, COW_IMG(COW_ADDR_LIFT_100E8420), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_1, 0u);
      g->eax = (CowU32)(uVar2 & 0xffffff00); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e8330(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x100e8330: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x500u;                      /* 0x100e8334: 1280 bytes of locals */
    cow_lift_100e8330(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
