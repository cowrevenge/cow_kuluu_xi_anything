/* f_0x100e4340 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e4340 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e4340(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 puVar3;
    cVar1 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100E434F), 2u, (const CowU32[]){ 140u, 269372576u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\x01') {
        cVar1 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100E4365), 2u, (const CowU32[]){ 141u, 269373392u }, g->ecx, g->edx, g->eax, 8u);
        if (cVar1 == '\x01') {
          cVar1 = cow_bridge_100fc3b0(g, COW_IMG(COW_ADDR_LIFT_100E437B), 2u, (const CowU32[]){ 142u, 269373760u }, g->ecx, g->edx, g->eax, 8u);
          if (cVar1 == '\x01') {
            if (param_1 != 0) {
              wr32((uint32_t)(param_1 + 0x2cffc), 0);
              puVar3 = (CowU32)(param_1 + 0x2d010);
              for (iVar2 = 0x180; iVar2 != 0; iVar2 = iVar2 + -1) {
                wr32((uint32_t)puVar3, 0);
                puVar3 = puVar3 + 4u * (uint32_t)(1);
              }
              wr32((uint32_t)(param_1 + 0x2d610), 0);
              wr8((uint32_t)(param_1 + 0x40db5), rd8((uint32_t)(param_1 + 0x40db5)) & 0xfe);
              puVar3 = (CowU32)(param_1 + 0x2d614);
              for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
                wr32((uint32_t)puVar3, 0);
                puVar3 = puVar3 + 4u * (uint32_t)(1);
              }
              wr32((uint32_t)(param_1 + 0x2d678), 0);
              wr8((uint32_t)(param_1 + 0x40db5), rd8((uint32_t)(param_1 + 0x40db5)) & 0xef);
            }
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
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
void cow_adapter_100e4340(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));

    cow_lift_100e4340(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
