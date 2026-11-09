/* f_0x102e4abd - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102e4abd (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102e4abd(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 pbVar2;
    CowU32 pbVar3;
    CowU32 puVar4;
    pbVar2 = (CowU32)(rd32((uint32_t)(param_1 + 0x1050)) * param_2 + rd32((uint32_t)(param_1 + 0x1054)) * param_3 +
                       rd32((uint32_t)(param_1 + 0x18)));
      pbVar3 = pbVar2 + rd32((uint32_t)(param_1 + 0x1058));
      for (; pbVar2 < pbVar3; pbVar2 = pbVar2 + 1) {
        puVar4 = (CowU32)((rd8((uint32_t)pbVar2) + 3) * 0x10 + param_1);
        wr32((uint32_t)param_4, rd32((uint32_t)puVar4));
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(1)), rd32((uint32_t)(puVar4 + 4u * (uint32_t)(1))));
        puVar1 = param_4 + 3;
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(2)), rd32((uint32_t)(puVar4 + 4u * (uint32_t)(2))));
        param_4 = param_4 + 4;
        wr32((uint32_t)puVar1, rd32((uint32_t)(puVar4 + 4u * (uint32_t)(3))));
      }
      if (rd32((uint32_t)(param_1 + 0x10)) != 0) {
        cow_bridge_102e23f6(g, COW_IMG(COW_ADDR_LIFT_102E4B1D), 1u, (const CowU32[]){ param_4 + rd32((uint32_t)(param_1 + 0x1058)) * -4 }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102e4abd(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    { uint32_t A = (uint32_t)(g->ecx + 0x1050u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102e4abd: register eax, replayed as the entry ran it */
    cow_lift_102e4abd(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
