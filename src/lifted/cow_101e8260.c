/* f_0x101e8260 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e8260 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e8260(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    int iVar3;
    CowU8 bVar4;
    int iVar5;
    CowU32 pbVar6;
    CowU32 puVar7;
    iVar5 = 0;
      wr32(COW_IMG(COW_ADDR_LIFT_10663564), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10663560), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10663568), 0);
      puVar2 = COW_IMG(COW_ADDR_LIFT_1066356B);
      do {
        wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), 0);
        wr8((uint32_t)puVar2, 0);
        wr8((uint32_t)(puVar2 + 1u * (uint32_t)(1)), 0);
        puVar2 = puVar2 + 3;
      } while ((int)puVar2 < 0x10663583);
      puVar2 = COW_IMG(COW_ADDR_LIFT_10381B93);
      do {
        wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), 3);
        wr8((uint32_t)puVar2, 3);
        puVar2 = puVar2 + 0x20;
      } while ((int)puVar2 < 0x10381c93);
      if (param_1 != 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_10663560), rd32((uint32_t)(param_1 + 0x30)));
        uVar1 = rd32((uint32_t)(param_1 + 8));
        iVar3 = 0;
        do {
          bVar4 = (CowU8)iVar5;
          iVar5 = iVar5 + 4;
          wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663564) + 4u * (uint32_t)(iVar3)), (CowU8)(uVar1 >> (bVar4 & 0x1f)) & 0xf);
          iVar3 = iVar3 + 1;
        } while (iVar5 < 0x18);
        pbVar6 = COW_IMG(COW_ADDR_LIFT_1066356B);
        puVar7 = (CowU32)(param_1 + 0x10);
        do {
          uVar1 = rd32((uint32_t)puVar7);
          puVar7 = puVar7 + 1;
          wr8((uint32_t)(pbVar6 + 1u * (uint32_t)(-1)), (CowU8)uVar1 & 0x7f);
          wr8((uint32_t)pbVar6, (CowU8)(uVar1 >> 7) & 7);
          wr8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)), (CowU8)(uVar1 >> 10) & 7);
          pbVar6 = pbVar6 + 3;
        } while ((int)pbVar6 < 0x10663583);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx, edi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e8260(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->ecx = 0u;   /* 0x101e8260: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x101e8262: the value the entry loaded and the decompiler dropped */
    cow_lift_101e8260(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
