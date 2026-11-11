/* f_0x10201f00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10201f00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10201f00(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 puVar2;
    short sVar3;
    short sVar4;
    sVar4 = 0;
      sVar3 = 0;
      puVar2 = COW_IMG(COW_ADDR_LIFT_10663AD8);
      do {
        if (rd32((uint32_t)(puVar2 + 4u * (uint32_t)(0x7a))) != '\0') {
          cVar1 = cow_bridge_10201eb0(g, COW_IMG(COW_ADDR_LIFT_10201F18), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, g->eax, 4u);
          puVar2 = g->edx;
          if (cVar1 == '\0') {
            sVar3 = sVar3 + 1;
          }
          else {
            sVar4 = sVar4 + 1;
          }
        }
        puVar2 = puVar2 + 0x7c;
      } while ((int)puVar2 < 0x10664390);
      if ((sVar3 == 1) && (sVar4 != 0)) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10201f00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10201f00: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10201f01: push edi */
    g->edi = 0u;   /* 0x10201f02: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x10201f04: the value the entry loaded and the decompiler dropped */
    cow_lift_10201f00(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
