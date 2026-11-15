/* f_0x100ebe60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ebe60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ebe60(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) == 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x19890), 0);
      iVar1 = 0;
      iVar3 = 10;
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));
      do {
        if ((int8_t)rd8((uint32_t)(iVar1 + 0x1951c + iVar2)) == '\x02') {
          wr8((uint32_t)(iVar2 + 0x19890), (int8_t)rd8((uint32_t)(iVar2 + 0x19890)) + '\x01');
          iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));
        }
        iVar1 = iVar1 + 0x58;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)(((CowU32)iVar1 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(iVar2 + 0x19890))) & 0xffu))) & 0xffu)); return;
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
void cow_adapter_100ebe60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x100ebe60: the value the entry loaded and the decompiler dropped */
    cow_lift_100ebe60(g);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
