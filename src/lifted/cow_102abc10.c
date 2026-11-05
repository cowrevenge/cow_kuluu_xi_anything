/* f_0x102abc10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102abc10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102abc10(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    wr32((uint32_t)param_5, 0xffffffff);
      wr32((uint32_t)(param_5 + 4u * (uint32_t)(1)), 0xffffffff);
      wr32((uint32_t)(param_5 + 4u * (uint32_t)(2)), 0xffffffff);
      iVar3 = 0;
      iVar4 = param_1 - (int)param_5;
      do {
        iVar1 = rd32((uint32_t)(iVar4 + (int)param_5));
        iVar3 = iVar3 + 1;
        iVar2 = rd32((uint32_t)(param_1 + (iVar3 % 3) * 4));
        if ((((iVar1 == rd32((uint32_t)param_2)) || (iVar1 == rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))))) || (iVar1 == rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))))) &&
           (((iVar2 == rd32((uint32_t)param_2) || (iVar2 == rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))))) || (iVar2 == rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))))))) {
          wr32((uint32_t)param_5, 0);
        }
        else if ((((iVar1 == rd32((uint32_t)param_3)) || (iVar1 == rd32((uint32_t)(param_3 + 4u * (uint32_t)(1))))) || (iVar1 == rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))))) &&
                (((iVar2 == rd32((uint32_t)param_3) || (iVar2 == rd32((uint32_t)(param_3 + 4u * (uint32_t)(1))))) || (iVar2 == rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))))))) {
          wr32((uint32_t)param_5, 1);
        }
        else if ((((iVar1 == rd32((uint32_t)param_4)) || (iVar1 == rd32((uint32_t)(param_4 + 4u * (uint32_t)(1))))) || (iVar1 == rd32((uint32_t)(param_4 + 4u * (uint32_t)(2))))) &&
                (((iVar2 == rd32((uint32_t)param_4) || (iVar2 == rd32((uint32_t)(param_4 + 4u * (uint32_t)(1))))) || (iVar2 == rd32((uint32_t)(param_4 + 4u * (uint32_t)(2))))))) {
          wr32((uint32_t)param_5, 2);
        }
        param_5 = param_5 + 1;
      } while (iVar3 < 3);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102abc10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->ecx = param_5;   /* 0x102abc10: the value the entry loaded and the decompiler dropped */
    cow_lift_102abc10(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
