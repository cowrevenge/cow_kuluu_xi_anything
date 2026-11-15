/* f_0x100f02b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f02b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f02b0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    if (rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) == (CowU32)0x0) {
        g->eax = (CowU32)(0); return;
      }
      switch(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)))) {
      case 0:
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)), 1);
        puVar4 = COW_IMG(COW_ADDR_LIFT_1034FFB8);
        break;
      case 1:
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)), 2);
        puVar4 = COW_IMG(COW_ADDR_LIFT_10357C7C);
        break;
      case 2:
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)), 3);
        puVar4 = COW_IMG(COW_ADDR_LIFT_103514E4);
        break;
      case 3:
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)), 4);
        puVar4 = COW_IMG(COW_ADDR_LIFT_103514E4);
        break;
      case 4:
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)), 5);
        puVar4 = COW_IMG(COW_ADDR_LIFT_10361D24);
        break;
      case 6:
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)), 7);
      case 5:
        puVar4 = COW_IMG(COW_ADDR_LIFT_103514E8);
        break;
      case 7:
        uVar2 = cow_bridge_10103970(g, COW_IMG(COW_ADDR_LIFT_100F0361), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x46))), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104E0AF4)) + 0xc)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)), 0u);
        cVar1 = cow_bridge_100f9a30(g, COW_IMG(COW_ADDR_LIFT_100F038F), 8u, (const CowU32[]){ rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_104DF770))), (((uint32_t)((short)((CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 5) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 3))) & 0xffffu)), (((uint32_t)((short)((CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x19) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x12))) & 0xffffu)), rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 5, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x19, rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x2d))), rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x2e, uVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)), 40u);
        if (cVar1 != '\x01') {
          g->eax = (CowU32)(0); return;
        }
        puVar4 = COW_IMG(COW_ADDR_LIFT_1036205C);
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)), 8);
        break;
      case 8:
        uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_100F03B5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)), 0u);
        if ((uVar3 & 8) != 0) {
          wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)), 9);
        }
        cow_bridge_100f9d50(g, COW_IMG(COW_ADDR_LIFT_100F03CE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)), 0u);
        puVar4 = COW_IMG(COW_ADDR_LIFT_10362058);
        break;
      case 9:
        cow_bridge_100f9db0(g, COW_IMG(COW_ADDR_LIFT_100F03DA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)), 0u);
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)), 0);
        cow_bridge_100f04f0(g, COW_IMG(COW_ADDR_LIFT_100F03F3), 1u, (const CowU32[]){ 271982680u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)), 0u);
        g->eax = (CowU32)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)))); return;
      default:
        puVar4 = COW_IMG(COW_ADDR_LIFT_10362054);
      }
      cow_bridge_100f04f0(g, COW_IMG(COW_ADDR_LIFT_100F040D), 1u, (const CowU32[]){ puVar4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)), 0u);
      g->eax = (CowU32)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 4u * (uint32_t)(0x47)))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f02b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DF770));   /* 0x100f02b0: the value the entry loaded and the decompiler dropped */
    cow_lift_100f02b0(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
