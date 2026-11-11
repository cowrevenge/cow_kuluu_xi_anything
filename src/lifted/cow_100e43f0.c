/* f_0x100e43f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e43f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e43f0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    if (param_1 != 0) {
        if (rd32((uint32_t)(param_1 + 0x2d000)) != 0) {
          cow_bridge_10312eed(g, COW_IMG(COW_ADDR_LIFT_100E440C), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x2d000)) }, g->ecx, g->edx, g->eax, 4u);
          wr32((uint32_t)(param_1 + 0x2d000), 0);
          wr16((uint32_t)(param_1 + 0x2cffe), 0);
          wr16((uint32_t)(param_1 + 0x2cffc), 0);
        }
        wr32((uint32_t)(param_1 + 0x2cffc), 0);
        puVar2 = (CowU32)(param_1 + 0x2d010);
        for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
          wr32((uint32_t)puVar2, 0);
          puVar2 = puVar2 + 1;
        }
        wr32((uint32_t)(param_1 + 0x2d610), 0);
        wr8((uint32_t)(param_1 + 0x40db5), rd8((uint32_t)(param_1 + 0x40db5)) & 0xfe);
        puVar2 = (CowU32)(param_1 + 0x2d614);
        for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
          wr32((uint32_t)puVar2, 0);
          puVar2 = puVar2 + 1;
        }
        wr32((uint32_t)(param_1 + 0x2d678), 0);
        wr8((uint32_t)(param_1 + 0x40db5), rd8((uint32_t)(param_1 + 0x40db5)) & 0xef);
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e43f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100e43f0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100e43f1: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x100e43f2: register esi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x100e43f6: the value the entry loaded and the decompiler dropped */
    cow_lift_100e43f0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
