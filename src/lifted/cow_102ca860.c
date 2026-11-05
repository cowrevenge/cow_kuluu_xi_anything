/* f_0x102ca860 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102ca860 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102ca860(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
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
    CowU32 uVar9;
    CowU32 uVar10;
    CowU32 uVar11;
    CowU32 uVar12;
    CowU32 uVar13;
    CowU32 uVar14;
    CowU32 uVar15;
    CowU32 puVar16;
    puVar16 = (CowU32)(param_2 + 0x20);
      do {
        uVar1 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(-4)));
        uVar2 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(-3)));
        uVar3 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(-2)));
        uVar4 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(-1)));
        uVar5 = rd32((uint32_t)puVar16);
        uVar6 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(1)));
        uVar7 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(2)));
        uVar8 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(3)));
        uVar9 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(4)));
        uVar10 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(5)));
        uVar11 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(6)));
        uVar12 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(7)));
        uVar13 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(-7)));
        uVar14 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(-6)));
        uVar15 = rd32((uint32_t)(puVar16 + 4u * (uint32_t)(-5)));
        wr32((uint32_t)param_1, rd32((uint32_t)(puVar16 + 4u * (uint32_t)(-8))));
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), uVar13);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), uVar14);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), uVar15);
        puVar16 = puVar16 + 0x10;
        param_3 = param_3 + -0x40;
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), uVar1);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), uVar2);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), uVar3);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), uVar4);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), uVar5);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), uVar6);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(10)), uVar7);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), uVar8);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xc)), uVar9);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xd)), uVar10);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), uVar11);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), uVar12);
        param_1 = param_1 + 0x10;
      } while (param_3 != 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer yes, 0 locals, pops [ebp], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102ca860(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102ca860: push ebp */
    g->ebp = g->esp;                       /* 0x102ca861: mov ebp, esp */
    g->eax = param_2;   /* 0x102ca863: the value the entry loaded and the decompiler dropped */
    g->edx = param_3;   /* 0x102ca866: the value the entry loaded and the decompiler dropped */
    cow_lift_102ca860(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
