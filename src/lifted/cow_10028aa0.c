/* f_0x10028aa0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10028aa0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10028aa0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    iVar3 = cow_bridge_10028730(g, COW_IMG(COW_ADDR_LIFT_10028AAA), 1u, (const CowU32[]){ g->eax }, g->ecx, g->edx, param_1, 4u);
      if (rd32((uint32_t)(iVar3 + 4)) != 0) {
        iVar4 = rd32((uint32_t)(iVar3 + 0xc));
        wr32((uint32_t)(iVar3 + 4), 0);
        if ((iVar4 != 0) && (rd32((uint32_t)(iVar4 + 4)) == 0)) {
          wr32((uint32_t)(iVar4 + 8), rd32((uint32_t)(iVar3 + 8)));
          wr32((uint32_t)(rd32((uint32_t)(iVar3 + 8)) + 0xc), iVar4);
          iVar3 = iVar4;
        }
        iVar4 = rd32((uint32_t)(iVar3 + 8));
        if (rd32((uint32_t)(iVar4 + 4)) == 0) {
          wr32((uint32_t)(iVar3 + 8), rd32((uint32_t)(iVar4 + 8)));
          wr32((uint32_t)(rd32((uint32_t)(iVar4 + 8)) + 0xc), iVar3);
        }
        iVar2 = rd32((uint32_t)(iVar3 + 0xc));
        iVar4 = iVar3;
        while (iVar1 = iVar2, iVar1 != 0) {
          if (rd32((uint32_t)(iVar1 + 4)) == 0) {
            iVar4 = rd32((uint32_t)(iVar4 + 0xc));
            break;
          }
          iVar4 = iVar1;
          iVar2 = rd32((uint32_t)(iVar1 + 0xc));
        }
        if ((rd32((uint32_t)(iVar4 + 0xc)) != 0) || (rd32((uint32_t)(iVar3 + 0xc)) != 0)) {
          wr32((uint32_t)(iVar4 + 0x10), iVar3);
          wr32((uint32_t)(iVar3 + 0x14), iVar4);
        }
        iVar2 = rd32((uint32_t)(iVar3 + 8));
        iVar4 = iVar3;
        while (iVar1 = iVar2, iVar1 != 0) {
          if (rd32((uint32_t)(iVar1 + 4)) == 0) {
            iVar4 = rd32((uint32_t)(iVar4 + 8));
            break;
          }
          iVar4 = iVar1;
          iVar2 = rd32((uint32_t)(iVar1 + 8));
        }
        if ((rd32((uint32_t)(iVar4 + 8)) != 0) || (rd32((uint32_t)(iVar3 + 8)) != 0)) {
          wr32((uint32_t)(iVar4 + 0x14), iVar3);
          wr32((uint32_t)(iVar3 + 0x10), iVar4);
        }
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
void cow_adapter_10028aa0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_1;   /* 0x10028aa0: the value the entry loaded and the decompiler dropped */
    cow_lift_10028aa0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
