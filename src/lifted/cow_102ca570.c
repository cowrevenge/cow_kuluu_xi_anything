/* f_0x102ca570 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102ca570 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102ca570(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    int iVar3;
    CowU32 puVar4;
    puVar4 = COW_IMG(COW_ADDR_LIFT_103CB4A0);
      puVar2 = COW_IMG(COW_ADDR_LIFT_109AFA48);
      iVar3 = 0;
      do {
        uVar1 = rd32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_103CACA0) + iVar3));
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(1)), uVar1);
        wr32((uint32_t)puVar2, uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(-1)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(-2)), uVar1);
        uVar1 = rd32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_103CACAC) + iVar3));
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(0xd)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(0xc)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(0xb)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(10)), uVar1);
        uVar1 = rd32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_103CACA8) + iVar3));
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(9)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(8)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(7)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(6)), uVar1);
        uVar1 = rd32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_103CACA4) + iVar3));
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(5)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(4)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(3)), uVar1);
        wr32((uint32_t)(puVar2 + 4u * (uint32_t)(2)), uVar1);
        if (puVar2 != (CowU32)COW_IMG(COW_ADDR_LIFT_109B1A08)) {
          uVar1 = rd32((uint32_t)puVar4);
          wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_109AF25C) + iVar3), uVar1);
          wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_109AF258) + iVar3), uVar1);
          wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_109AF254) + iVar3), uVar1);
          wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_109AF250) + iVar3), uVar1);
        }
        puVar2 = puVar2 + 0x10;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while ((int)puVar2 < 0x109b1a48);
      g->eax = (CowU32)(0); return;
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
void cow_adapter_102ca570(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->edx = COW_IMG(COW_ADDR_LIFT_103CB4A0);   /* 0x102ca570: the value the entry loaded and the decompiler dropped */
    g->eax = COW_IMG(COW_ADDR_LIFT_109AFA48);   /* 0x102ca575: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x102ca57a: the value the entry loaded and the decompiler dropped */
    cow_lift_102ca570(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
