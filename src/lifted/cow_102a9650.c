/* f_0x102a9650 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a9650 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a9650(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 piVar3;
    int iVar4;
    if (rd32((uint32_t)(param_2 + 4u * (uint32_t)(5))) != 0) {
        iVar4 = 0;
        wr32((uint32_t)param_1, rd32((uint32_t)param_2));
        iVar2 = (int)param_2 - (int)param_1;
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), rd32((uint32_t)(param_2 + 4u * (uint32_t)(5))));
        piVar3 = param_1 + 6;
        param_2 = param_2 + 0x15;
        do {
          iVar1 = rd32((uint32_t)(iVar2 + (int)piVar3));
          if (iVar1 == 0) {
            cow_bridge_102a9a10(g, COW_IMG(COW_ADDR_LIFT_102A9693), 2u, (const CowU32[]){ param_1, iVar4 }, g->ecx, g->edx, param_2, 8u);
          }
          else {
            if (rd32((uint32_t)piVar3) != iVar1) {
              cow_bridge_102a9a10(g, COW_IMG(COW_ADDR_LIFT_102A96A4), 2u, (const CowU32[]){ param_1, iVar4 }, g->ecx, g->edx, param_2, 8u);
            }
            cow_bridge_102a9910(g, COW_IMG(COW_ADDR_LIFT_102A96B6), 4u, (const CowU32[]){ param_1, iVar4, rd32((uint32_t)param_2), iVar1 }, g->ecx, g->edx, param_2, 16u);
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
          param_2 = param_2 + 1;
        } while (iVar4 < 0xc);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a9650(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_2;   /* 0x102a9650: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x14u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102a9654: register ecx, replayed as the entry ran it */
    cow_lift_102a9650(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
