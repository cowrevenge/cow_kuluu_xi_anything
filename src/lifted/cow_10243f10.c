/* f_0x10243f10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10243f10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10243f10(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pcVar3;
    CowU32 pcVar4;
    iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10669004));
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669004)) + 0xa5e0), 1);
      wr32((uint32_t)(iVar2 + 0xa5d8), 0);
      wr32((uint32_t)(iVar2 + 0x30), 0);
      wr8((uint32_t)(iVar2 + 0xa5e1), 0);
      wr32((uint32_t)(iVar2 + 0x18), param_1);
      wr8((uint32_t)(iVar2 + 0x20), 0);
      wr32((uint32_t)(iVar2 + 0x14), 1);
      wr32((uint32_t)(iVar2 + 0xa5e4), 0xffffffff);
      wr8((uint32_t)(iVar2 + 0xa5e8), 0);
      wr8((uint32_t)(iVar2 + 0xa600), 0);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669004)) + 0xa5d8), param_2);
      pcVar4 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_10669004)) + 0x20);
      pcVar3 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1066908C)) * 0xb0 + 0x44 + rd32(COW_IMG(COW_ADDR_LIFT_10669080)));
      do {
        cVar1 = rd8((uint32_t)pcVar3);
        pcVar3 = pcVar3 + 1;
        wr8((uint32_t)pcVar4, cVar1);
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10243F95), 0u, (const CowU32[]){ 0u }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10669004)), 0u);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10243FA7), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103883C8), 1, 0 }, 274864184u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10669004)), 0u);
      cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_10243FB6), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10669004)) + 0x30 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10669004)), 4u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10243FC8), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103883C8) }, 274864184u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10669004)), 0u);
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669004)) + 0x14)) == 0) {
        g->eax = (CowU32)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669004)) + 0xa5d8))); return;
      }
      g->eax = (CowU32)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669004)) + 0xa5d8))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10243f10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10669004));   /* 0x10243f10: the value the entry loaded and the decompiler dropped */
    g->ecx = param_1;   /* 0x10243f15: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10243f19: push ebx */
    g->ebx = 0u;   /* 0x10243f1a: the value the entry loaded and the decompiler dropped */
    cow_lift_10243f10(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
