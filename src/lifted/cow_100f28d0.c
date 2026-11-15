/* f_0x100f28d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f28d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f28d0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 pcVar3;
    CowU32 puVar4;
    uVar2 = 0x32;
      pcVar3 = COW_IMG(COW_ADDR_LIFT_104DF8D4);
      if (0x31 < param_2) {
        do {
          if (((param_1 == (CowU32)0x0) || (cVar1 = rd8((uint32_t)param_1), cVar1 == '\0')) || (uVar2 == 0))
          goto L_100f2978;
          if (cVar1 < '\0') {
            if ((rd8((uint32_t)(param_1 + 1u * (uint32_t)(1))) == '\0') || (uVar2 < 2)) goto L_100f2978;
            wr8((uint32_t)pcVar3, cVar1);
            pcVar3 = pcVar3 + 1;
            param_1 = param_1 + 1;
            uVar2 = uVar2 - 1;
          }
          wr8((uint32_t)pcVar3, rd8((uint32_t)param_1));
          pcVar3 = pcVar3 + 1;
          param_1 = param_1 + 1;
          uVar2 = uVar2 - 1;
        } while( 1 );
      }
      puVar4 = (CowU32)COW_IMG(COW_ADDR_LIFT_104DF8D4);
      for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        wr32((uint32_t)puVar4, 0x20202020);
        puVar4 = puVar4 + 4u * (uint32_t)(1);
      }
      for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        wr8((uint32_t)puVar4, 0x20);
        puVar4 = (CowU32)((int)puVar4 + 1);
      }
      wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_104DF8D4) + 4u * (uint32_t)(param_2)), 0);
      if (param_1 != (CowU32)0x0) {
        do {
          cVar1 = rd8((uint32_t)param_1);
          if ((cVar1 == '\0') || (param_2 == 0)) break;
          if (cVar1 < '\0') {
            if ((rd8((uint32_t)(param_1 + 1u * (uint32_t)(1))) == '\0') || (param_2 < 2)) break;
            wr8((uint32_t)pcVar3, cVar1);
            pcVar3 = pcVar3 + 1;
            param_1 = param_1 + 1;
            param_2 = param_2 - 1;
          }
          wr8((uint32_t)pcVar3, rd8((uint32_t)param_1));
          pcVar3 = pcVar3 + 1;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_1 == (CowU32)0x0) {
            g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_104DF8D4)); return;
          }
        } while( 1 );
      }
    L_100f297b:
      g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_104DF8D4)); return;
    L_100f2978:
      wr8((uint32_t)pcVar3, '\0');
      goto L_100f297b;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f28d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->edx = param_1;   /* 0x100f28d0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f28d4: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100f28d5: register ebx, replayed as the entry ran it */
    g->eax = 50u;   /* 0x100f28d9: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f28de: push esi */
    cow_lift_100f28d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
