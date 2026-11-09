/* f_0x1029a130 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1029a130 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1029a130(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    if (param_1 != 0) {
        uVar1 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x24)) + 0x28)) * 0xc;
        puVar4 = rd32((uint32_t)(param_1 + 0x28));
        puVar5 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x24)) + 0x18));
        for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          wr8((uint32_t)puVar5, rd8((uint32_t)puVar4));
          puVar4 = (CowU32)((int)puVar4 + 1);
          puVar5 = (CowU32)((int)puVar5 + 1);
        }
        if (rd32((uint32_t)(param_1 + 0x2c)) != (CowU32)0x0) {
          puVar4 = rd32((uint32_t)(param_1 + 0x2c));
          puVar5 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x24)) + 0x20));
          for (uVar1 = uVar1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            wr8((uint32_t)puVar5, rd8((uint32_t)puVar4));
            puVar4 = (CowU32)((int)puVar4 + 1);
            puVar5 = (CowU32)((int)puVar5 + 1);
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1029a130(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = param_1;   /* 0x1029a130: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1029a134: push esi */
    cow_lift_1029a130(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
