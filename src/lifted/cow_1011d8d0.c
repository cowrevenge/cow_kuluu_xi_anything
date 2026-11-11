/* f_0x1011d8d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1011d8d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1011d8d0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 pcVar5;
    cVar2 = rd8((uint32_t)param_2);
      while (cVar2 == ' ') {
        pcVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        cVar2 = rd8((uint32_t)pcVar1);
      }
      cVar2 = rd8((uint32_t)param_2);
      pcVar1 = param_2;
      if (cVar2 != '\0') {
        while (((cVar2 != ' ' && (cVar2 != ',')) && (cVar2 != '\0'))) {
          cVar2 = rd8((uint32_t)(pcVar1 + 1u * (uint32_t)(1)));
          pcVar1 = pcVar1 + 1;
        }
        uVar4 = (int)pcVar1 - (int)param_2;
        if ((0 < (int)uVar4) && ((int)uVar4 < 0x40)) {
          pcVar5 = param_1;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            wr32((uint32_t)pcVar5, rd32((uint32_t)param_2));
            param_2 = param_2 + 4;
            pcVar5 = pcVar5 + 4;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            wr8((uint32_t)pcVar5, rd8((uint32_t)param_2));
            param_2 = param_2 + 1;
            pcVar5 = pcVar5 + 1;
          }
          wr8((uint32_t)(param_1 + 1u * (uint32_t)(uVar4)), '\0');
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(pcVar1) & 0xffu)); return;
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)0x0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1011d8d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1011d8d0: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x1011d8d1: register esi, replayed as the entry ran it */
    cow_lift_1011d8d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
