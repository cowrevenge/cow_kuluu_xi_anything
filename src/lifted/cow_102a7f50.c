/* f_0x102a7f50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a7f50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a7f50(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    const CowU32 cow_eax_base = (CowU32)(param_4);   /* what the guest left in the rest of eax when it wrote only the low part */
    CowU8 bVar1;
    CowU8 bVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 pbVar5;
    CowU32 pbVar6;
    CowU32 pbVar7;
    pbVar7 = param_2;
    joined_r0x102a7f63:
      pbVar5 = param_1;
      if (param_3 < 1) {
        g->eax = (CowU32)((cow_eax_base & 0xffffff00u) | ((CowU32)(0xff) & 0xffu)); return;
      }
      bVar1 = rd8((uint32_t)pbVar5);
      param_1 = pbVar5 + 1;
      if (((char)bVar1 < '\0') || (0x7f < bVar1)) goto L_102a7fa1;
      uVar3 = (int)(char)bVar1 + 1;
      param_3 = param_3 - uVar3;
      pbVar5 = param_1;
      pbVar6 = pbVar7;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        wr32((uint32_t)pbVar6, rd32((uint32_t)pbVar5));
        pbVar5 = pbVar5 + 4;
        pbVar6 = pbVar6 + 4;
      }
      param_2 = pbVar7 + uVar3;
      param_1 = param_1 + uVar3;
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        wr8((uint32_t)pbVar6, rd8((uint32_t)pbVar5));
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      }
      goto L_102a7feb;
    L_102a7fa1:
      if ((-0x80 < (char)bVar1) && (0x7f < bVar1)) {
        bVar2 = rd8((uint32_t)param_1);
        param_1 = pbVar5 + 2;
        uVar3 = 1 - (int)(char)bVar1;
        param_3 = param_3 - uVar3;
        if (uVar3 != 0) {
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            wr32((uint32_t)pbVar7, (((uint32_t)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(bVar2) & 0xffu))) & 0xffffu) << 16 | ((uint32_t)((((uint32_t)(bVar2) & 0xffu) << 8 | ((uint32_t)(bVar2) & 0xffu))) & 0xffffu)));
            pbVar7 = pbVar7 + 4;
          }
          param_2 = param_2 + uVar3;
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            wr8((uint32_t)pbVar7, bVar2);
            pbVar7 = pbVar7 + 1;
          }
    L_102a7feb:
          pbVar7 = param_2;
        }
      }
      goto joined_r0x102a7f63;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a7f50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_4;   /* 0x102a7f50: the value the entry loaded and the decompiler dropped */
    g->edx = param_3;   /* 0x102a7f54: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102a7f58: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102a7f59: register ebp, replayed as the entry ran it */
    cow_lift_102a7f50(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
