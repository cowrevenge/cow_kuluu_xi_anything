/* f_0x100700a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100700a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100700a0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    CowU32 uVar8;
    uVar1 = rd32((uint32_t)(param_1 + 0x814));
      uVar2 = rd32((uint32_t)(param_1 + 0x818));
      uVar3 = rd32((uint32_t)(param_1 + 0x81c));
      uVar4 = rd32((uint32_t)(param_1 + 0x820));
      uVar5 = rd32((uint32_t)(param_1 + 0x824));
      uVar6 = rd32((uint32_t)(param_1 + 0x828));
      uVar7 = rd32((uint32_t)(param_1 + 0x82c));
      wr32((uint32_t)param_2, rd32((uint32_t)(param_1 + 0x810)));
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(1)), uVar1);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(2)), uVar2);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(3)), uVar3);
      uVar1 = rd32((uint32_t)(param_1 + 0x830));
      uVar2 = rd32((uint32_t)(param_1 + 0x834));
      uVar3 = rd32((uint32_t)(param_1 + 0x838));
      uVar8 = rd32((uint32_t)(param_1 + 0x83c));
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(4)), uVar4);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(5)), uVar5);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(6)), uVar6);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(7)), uVar7);
      uVar4 = rd32((uint32_t)(param_1 + 0x840));
      uVar5 = rd32((uint32_t)(param_1 + 0x844));
      uVar6 = rd32((uint32_t)(param_1 + 0x848));
      uVar7 = rd32((uint32_t)(param_1 + 0x84c));
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(8)), uVar1);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(9)), uVar2);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(10)), uVar3);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xb)), uVar8);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), uVar4);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)), uVar5);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xe)), uVar6);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xf)), uVar7);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100700a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100700a0: push ecx */
    cow_lift_100700a0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
