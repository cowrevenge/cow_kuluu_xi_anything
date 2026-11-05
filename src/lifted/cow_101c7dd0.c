/* f_0x101c7dd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c7dd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c7dd0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 piVar3;
    int iVar4;
    int iVar5;
    iVar1 = rd32((uint32_t)(param_1 + 8));
      iVar4 = 0x3fffffff;
      if (0 < iVar1) {
        piVar3 = rd32((uint32_t)(param_1 + 0x10));
        iVar5 = iVar1;
        do {
          iVar2 = rd32((uint32_t)piVar3);
          if ((-1 < iVar2) && (iVar2 < iVar4)) {
            iVar4 = iVar2;
          }
          piVar3 = piVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar1 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x10)) + iVar5 * 4));
          if (-1 < iVar1) {
            wr32((uint32_t)(rd32((uint32_t)(param_1 + 0x10)) + iVar5 * 4), iVar1 - iVar4);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < rd32((uint32_t)(param_1 + 8)));
      }
      wr32((uint32_t)(param_1 + 0x14), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c7dd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101c7dd0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101c7dd1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101c7dd2: push edi */
    cow_lift_101c7dd0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
