/* f_0x100d9a80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100d9a80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100d9a80(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pcVar3;
    CowU32 pcVar4;
    CowU32 pcVar5;
    CowU32 puVar6;
    pcVar3 = (CowU32)0x0;
      pcVar5 = (CowU32)0x0;
      cVar1 = rd8((uint32_t)param_1);
      pcVar4 = pcVar3;
      if (cVar1 != '\0') {
        do {
          pcVar3 = pcVar4;
          if (cVar1 == '\\') {
            pcVar3 = param_1;
            pcVar5 = pcVar4;
          }
          cVar1 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)));
          param_1 = param_1 + 1;
          pcVar4 = pcVar3;
        } while (cVar1 != '\0');
        if (pcVar5 != (CowU32)0x0) goto L_100d9aa6;
      }
      pcVar5 = pcVar3;
    L_100d9aa6:
      if (rd32(COW_IMG(COW_ADDR_LIFT_103601BC)) != (CowU32)0x0) {
        pcVar3 = pcVar5 + 1;
        puVar6 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_103601BC)) + 0x18);
        for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)puVar6, rd32((uint32_t)pcVar3));
          pcVar3 = pcVar3 + 4;
          puVar6 = puVar6 + 4u * (uint32_t)(1);
        }
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103601BC)) + 0x7c), param_2);
      }
      return;
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
void cow_adapter_100d9a80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_2;   /* 0x100d9a80: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100d9a84: push esi */
    g->edx = 0u;   /* 0x100d9a85: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x100d9a87: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100d9a89: register ecx, replayed as the entry ran it */
    cow_lift_100d9a80(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
