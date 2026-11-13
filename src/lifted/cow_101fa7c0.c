/* f_0x101fa7c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fa7c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fa7c0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 piVar2;
    CowU32 piVar3;
    CowU32 puVar4;
    puVar1 = COW_IMG(COW_ADDR_LIFT_106637E8);
      wr32(COW_IMG(COW_ADDR_LIFT_106637A9), 0);
      do {
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(-1)), 0);
        wr32((uint32_t)puVar1, 3);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(1)), 0);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)(2)), 0);
        puVar1 = puVar1 + 4u * (uint32_t)(4);
      } while ((int)puVar1 < 0x10663888);
      if (param_1 != (CowU32)0x0) {
        wr32(COW_IMG(COW_ADDR_LIFT_106637A9), 1);
        wr32(COW_IMG(COW_ADDR_LIFT_106637E4), rd32((uint32_t)param_1) & 0xff);
        wr32(COW_IMG(COW_ADDR_LIFT_106637F4), (CowU32)rd8((uint32_t)((int)param_1 + 1)));
        wr32(COW_IMG(COW_ADDR_LIFT_10663804), (CowU32)rd8((uint32_t)((int)param_1 + 2)));
        wr32(COW_IMG(COW_ADDR_LIFT_10663814), (CowU32)rd8((uint32_t)((int)param_1 + 3)));
        wr32(COW_IMG(COW_ADDR_LIFT_10663824), rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) & 0xff);
        wr32(COW_IMG(COW_ADDR_LIFT_10663834), (CowU32)rd8((uint32_t)((int)param_1 + 5)));
        wr32(COW_IMG(COW_ADDR_LIFT_10663844), (CowU32)rd8((uint32_t)((int)param_1 + 6)));
        wr32(COW_IMG(COW_ADDR_LIFT_10663854), (CowU32)rd8((uint32_t)((int)param_1 + 7)));
        wr32(COW_IMG(COW_ADDR_LIFT_10663864), rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) & 0xff);
        wr32(COW_IMG(COW_ADDR_LIFT_10663874), (CowU32)rd8((uint32_t)((int)param_1 + 9)));
        piVar2 = COW_IMG(COW_ADDR_LIFT_106637EC);
        puVar4 = param_1 + 4u * (uint32_t)(3);
        do {
          piVar3 = piVar2 + 4u * (uint32_t)(4);
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(-1)), rd32((uint32_t)puVar4) & 3);
          wr32((uint32_t)piVar2, (int)(rd32((uint32_t)puVar4) << 0xf) >> 0x11);
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), (int)rd32((uint32_t)puVar4) >> 0x11);
          piVar2 = piVar3;
          puVar4 = puVar4 + 4u * (uint32_t)(1);
        } while ((int)piVar3 < 0x1066388c);
      }
      return;
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
void cow_adapter_101fa7c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = 0u;   /* 0x101fa7c0: the value the entry loaded and the decompiler dropped */
    g->eax = COW_IMG(COW_ADDR_LIFT_106637E8);   /* 0x101fa7c2: the value the entry loaded and the decompiler dropped */
    cow_lift_101fa7c0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
