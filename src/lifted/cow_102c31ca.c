/* f_0x102c31ca - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c31ca (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c31ca(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    int iVar2;
    CowU32 pbVar3;
    if (rd8((uint32_t)(param_1 + 8)) == '\0') {
        iVar2 = rd32((uint32_t)(param_1 + 4));
        if (iVar2 != 0) {
          do {
            wr8((uint32_t)param_2, ~rd8((uint32_t)param_2));
            param_2 = param_2 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return;
        }
      }
      else if (rd8((uint32_t)(param_1 + 8)) == '\x04') {
        if (rd8((uint32_t)(param_1 + 9)) == '\b') {
          if (rd32((uint32_t)(param_1 + 4)) != 0) {
            iVar2 = (rd32((uint32_t)(param_1 + 4)) - 1U >> 1) + 1;
            do {
              wr8((uint32_t)param_2, ~rd8((uint32_t)param_2));
              param_2 = param_2 + 2;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            return;
          }
        }
        else if ((rd8((uint32_t)(param_1 + 9)) == '\x10') &&
                (pbVar1 = rd8((uint32_t)(param_1 + 4)), pbVar1 != (CowU32)0x0)) {
          pbVar3 = param_2 + 1;
          do {
            wr8((uint32_t)(pbVar3 + 1u * (uint32_t)(-1)), ~rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(-1))));
            wr8((uint32_t)pbVar3, ~rd8((uint32_t)pbVar3));
            pbVar3 = pbVar3 + 4;
          } while (pbVar3 + (-1 - (int)param_2) < pbVar1);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c31ca(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_2;   /* 0x102c31ca: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x8u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102c31ce: register ecx, replayed as the entry ran it */
    cow_lift_102c31ca(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
