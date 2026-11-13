/* f_0x10202b80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10202b80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10202b80(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    char cVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 puVar6;
    if ((int8_t)rd8((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_106643A0) + param_1)) == '\x0f') {
        wr8((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_106643A0) + param_1), rd8((uint32_t)(param_2 + 4u * (uint32_t)(0xd))) & 3);
      }
      cVar3 = (int8_t)rd8((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_106643A0) + param_1 + 3));
      iVar1 = (int)cVar3 + param_1 * 6;
      iVar2 = iVar1 * 0x7c;
      wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663AD8) + iVar2), COW_IMG(COW_ADDR_LIFT_10664390));
      puVar5 = param_2;
      puVar6 = (CowU32)(COW_IMG(COW_ADDR_LIFT_10663ADC) + iVar2);
      for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
        wr32((uint32_t)puVar6, rd32((uint32_t)puVar5));
        puVar5 = puVar5 + 4u * (uint32_t)(1);
        puVar6 = puVar6 + 4u * (uint32_t)(1);
      }
      iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663AF0) + 4u * (uint32_t)(iVar1 * 0x1f)));
      wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663B52) + 4u * (uint32_t)(iVar2)), 1);
      if (iVar1 != (int32_t)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663B4C) + iVar2))) {
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663B4C) + iVar2), iVar1);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663B50) + 4u * (uint32_t)(iVar2)), 0);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663B51) + 4u * (uint32_t)(iVar2)), 0);
      }
      wr8((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_106643A0) + param_1 + 3), cVar3 + '\x01');
      if ((rd8((uint32_t)(param_2 + 4u * (uint32_t)(0xd))) & 8) != 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_10664390), rd32((uint32_t)(param_2 + 4u * (uint32_t)(5))));
      }
      if ((rd8((uint32_t)(param_2 + 4u * (uint32_t)(0xd))) & 4) != 0) {
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10664394) + 4u * (uint32_t)(param_1)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(5))));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10202b80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->edx = param_1;   /* 0x10202b80: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10202b84: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10202b85: register ebp, replayed as the entry ran it */
    cow_lift_10202b80(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->edx = (CowU32)(param_1);   /* what edx holds at every ret of the entry */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
