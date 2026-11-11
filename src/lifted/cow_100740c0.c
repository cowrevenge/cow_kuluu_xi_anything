/* f_0x100740c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100740c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100740c0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    uint64_t uVar3;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1047CF84)) == (CowU32)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_1047CF84)));
      }
      while( 1 ) {
        if (iVar2 == 0) {
          g->eax = (CowU32)(0); return;
        }
        uVar3 = cow_bridge_10072240(g, COW_IMG(COW_ADDR_LIFT_100740DD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1047CF84)), 0u);
        piVar1 = rd32((uint32_t)((int)uVar3 + 0x14));
        if (rd16((uint32_t)(rd32((uint32_t)piVar1) + 0x18)) == 0) break;
        piVar1 = rd32((uint32_t)((int)((uint64_t)uVar3 >> 0x20) + 0x10));
        if (piVar1 == (CowU32)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = rd32((uint32_t)piVar1);
        }
      }
      cow_bridge_10073b20(g, COW_IMG(COW_ADDR_LIFT_10074106), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1047CF84)), 0u);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100740c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1047CF84));   /* 0x100740c0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100740c5: push esi */
    cow_lift_100740c0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
