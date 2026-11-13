/* f_0x100f80f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f80f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f80f0(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    CowU32 piVar4;
    CowU32 piVar5;
    if ((((param_1 == 0) || (param_4 == (CowU32)0x0)) || (param_5 == (CowU32)0x0)) ||
         ((param_3 < 0 || (7 < param_3)))) {
        g->eax = (CowU32)(0); return;
      }
      iVar3 = rd32((uint32_t)param_5);
      iVar1 = rd32((uint32_t)param_4);
      iVar2 = 7;
      wr32((uint32_t)param_4, iVar3);
      piVar4 = param_5;
      piVar5 = param_4;
      while( 1 ) {
        piVar5 = piVar5 + 4u * (uint32_t)(1);
        piVar4 = piVar4 + 4u * (uint32_t)(1);
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        wr32((uint32_t)piVar5, rd32((uint32_t)piVar4));
      }
      if (rd32((uint32_t)param_5) == 0) {
        wr16((uint32_t)(param_4 + 4u * (uint32_t)(8)), 0);
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(9)), 0);
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(10)), 0);
        piVar4 = param_4 + 4u * (uint32_t)(0xb);
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)piVar4, 0);
          piVar4 = piVar4 + 4u * (uint32_t)(1);
        }
      }
      else {
        wr16((uint32_t)(param_4 + 4u * (uint32_t)(8)), (short)rd32((uint32_t)(param_5 + 4u * (uint32_t)(8))));
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(9)), rd32((uint32_t)(param_5 + 4u * (uint32_t)(9))));
        wr32((uint32_t)(param_4 + 4u * (uint32_t)(10)), rd32((uint32_t)(param_5 + 4u * (uint32_t)(10))));
        piVar4 = param_4 + 4u * (uint32_t)(0xb);
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)piVar4, 0);
          piVar4 = piVar4 + 4u * (uint32_t)(1);
        }
        piVar4 = param_5 + 4u * (uint32_t)(0xb);
        piVar5 = param_4 + 4u * (uint32_t)(0xb);
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)piVar5, rd32((uint32_t)piVar4));
          piVar4 = piVar4 + 4u * (uint32_t)(1);
          piVar5 = piVar5 + 4u * (uint32_t)(1);
        }
      }
      if (iVar1 != iVar3) {
        if (param_2 == 1) {
          iVar3 = 0x1000;
        }
        else {
          if (param_2 != 2) {
            g->eax = (CowU32)(1); return;
          }
          iVar3 = 1;
        }
        wr32((uint32_t)(param_1 + 0x2c7d0), rd32((uint32_t)(param_1 + 0x2c7d0)) | iVar3 << ((CowU8)param_3 & 0x1f) | 0x10000000U);
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f80f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->eax = param_1;   /* 0x100f80f0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f80f4: push ebx */
    cow_lift_100f80f0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
