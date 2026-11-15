/* f_0x100f7790 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f7790 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f7790(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 puVar4;
    puVar4 = COW_IMG(COW_ADDR_LIFT_109F7640);
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        wr32((uint32_t)puVar4, 0);
        puVar4 = puVar4 + 4u * (uint32_t)(1);
      }
      wr32(COW_IMG(COW_ADDR_LIFT_104DF90C), COW_IMG(COW_ADDR_LIFT_109F7640));
      uVar1 = cow_bridge_100f1300(g, COW_IMG(COW_ADDR_LIFT_100F77BB), 5u, (const CowU32[]){ 3u, g->eax, 269424848u, 269424896u, 278885952u }, 18u, g->edx, 0u, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0xc)), uVar1);
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0xc))) == 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      uVar1 = cow_bridge_100f1300(g, COW_IMG(COW_ADDR_LIFT_100F77EB), 4u, (const CowU32[]){ 1u, 0u, 269424304u, 269424320u }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0x10)), uVar1);
      if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0x10))) == 0) {
        uVar2 = cow_bridge_100f10c0(g, COW_IMG(COW_ADDR_LIFT_100F780C), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0xc))) }, g->ecx, g->edx, 0u, 4u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar2 & 0xffffff00) & 0xffu)); return;
      }
      uVar1 = cow_bridge_100f1920(g, COW_IMG(COW_ADDR_LIFT_100F7817), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(6)), uVar1);
      wr32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(6))));
      uVar1 = cow_bridge_100f1910(g, COW_IMG(COW_ADDR_LIFT_100F782F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(7)), uVar1);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(1)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(7))));
      uVar1 = cow_bridge_100f1940(g, COW_IMG(COW_ADDR_LIFT_100F7848), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(8)), uVar1);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(2)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(8))));
      uVar1 = cow_bridge_100f1930(g, COW_IMG(COW_ADDR_LIFT_100F7861), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(9)), uVar1);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(3)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(9))));
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(10)), 0xffffffff);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(4)), 0xffffffff);
      uVar1 = cow_bridge_100f1950(g, COW_IMG(COW_ADDR_LIFT_100F788F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0xb)), uVar1);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(5)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0xb))));
      uVar1 = cow_bridge_100f1670(g, COW_IMG(COW_ADDR_LIFT_100F78A8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0xf)), uVar1);
      puVar4 = rd32(COW_IMG(COW_ADDR_LIFT_104DF90C));
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0xe)), rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF90C)) + 4u * (uint32_t)(0xf))));
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)(((CowU32)puVar4 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffu)); return;
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
void cow_adapter_100f7790(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = 0u;   /* 0x100f7791: the value the entry loaded and the decompiler dropped */
    cow_lift_100f7790(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
