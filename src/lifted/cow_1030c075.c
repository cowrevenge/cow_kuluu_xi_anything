/* f_0x1030c075 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1030c075 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1030c075(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, int32_t param_4, int32_t param_5, int32_t param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    CowU8 uVar2;
    CowU8 uVar3;
    CowU8 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    CowU32 piVar18;
    CowU32 puVar19;
    CowU32 local_48;
    CowU32 local_44;
    CowU32 local_40;
    int local_3c;
    int local_8;
    local_48 = param_1;
      local_44 = param_2;
      local_40 = param_3;
      local_3c = 8;
      do {
        iVar15 = ((int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(0x10))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(0x10))) + (int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(0x30))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(0x30))))
                 * 0x1151;
        iVar8 = (int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(0x30))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(0x30))) * -0x3b21 + iVar15;
        iVar15 = (int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(0x10))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(0x10))) * 0x187e + iVar15;
        iVar9 = ((int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(0x20))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(0x20))) + (int)rd16((uint32_t)local_48) * (int)rd16((uint32_t)local_44)) * 0x2000;
        iVar5 = ((int)rd16((uint32_t)local_48) * (int)rd16((uint32_t)local_44) - (int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(0x20))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(0x20)))) * 0x2000;
        iVar10 = iVar9 + iVar15;
        iVar6 = iVar5 + iVar8;
        iVar9 = iVar9 - iVar15;
        iVar5 = iVar5 - iVar8;
        iVar15 = (int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(0x38))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(0x38)));
        iVar11 = (int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(0x18))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(0x18)));
        iVar16 = (int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(8))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(8)));
        iVar8 = (int)rd16((uint32_t)(local_48 + 2u * (uint32_t)(0x28))) * (int)rd16((uint32_t)(local_44 + 2u * (uint32_t)(0x28)));
        iVar7 = (iVar15 + iVar16) * -0x1ccd;
        iVar13 = (iVar8 + iVar11) * -0x5203;
        iVar17 = (iVar15 + iVar11 + iVar8 + iVar16) * 0x25a1;
        iVar12 = (iVar15 + iVar11) * -0x3ec5 + iVar17;
        iVar17 = (iVar8 + iVar16) * -0xc7c + iVar17;
        iVar15 = iVar7 + iVar12 + iVar15 * 0x98e;
        iVar14 = iVar13 + iVar17 + iVar8 * 0x41b3;
        iVar8 = iVar12 + iVar13 + iVar11 * 0x6254;
        iVar7 = iVar7 + iVar17 + iVar16 * 0x300b;
        wr32((uint32_t)(local_40 + 4u * (uint32_t)(0x20)), (iVar9 - iVar15) + 0x400 >> 0xb);
        wr32((uint32_t)(local_40 + 4u * (uint32_t)(0x18)), iVar15 + iVar9 + 0x400 >> 0xb);
        wr32((uint32_t)(local_40 + 4u * (uint32_t)(0x28)), (iVar5 - iVar14) + 0x400 >> 0xb);
        wr32((uint32_t)(local_40 + 4u * (uint32_t)(0x30)), (iVar6 - iVar8) + 0x400 >> 0xb);
        wr32((uint32_t)(local_40 + 4u * (uint32_t)(0x10)), iVar14 + iVar5 + 0x400 >> 0xb);
        wr32((uint32_t)(local_40 + 4u * (uint32_t)(8)), iVar8 + iVar6 + 0x400 >> 0xb);
        wr32((uint32_t)(local_40 + 4u * (uint32_t)(0x38)), (iVar10 - iVar7) + 0x400 >> 0xb);
        wr32((uint32_t)local_40, iVar10 + iVar7 + 0x400 >> 0xb);
        local_48 = local_48 + 2u * (uint32_t)(1);
        local_40 = local_40 + 4u * (uint32_t)(1);
        local_44 = local_44 + 2u * (uint32_t)(1);
        local_3c = local_3c + -1;
      } while (local_3c != 0);
      local_3c = 8;
      local_8 = 0;
      local_40 = param_3;
      do {
        piVar18 = (CowU32)(param_4 + local_8);
        local_8 = local_8 + 4;
        puVar19 = (CowU32)(rd32((uint32_t)piVar18) + param_5);
        iVar15 = (rd32((uint32_t)(local_40 + 4u * (uint32_t)(2))) + rd32((uint32_t)(local_40 + 4u * (uint32_t)(6)))) * 0x1151;
        iVar5 = rd32((uint32_t)(local_40 + 4u * (uint32_t)(6))) * -0x3b21 + iVar15;
        iVar15 = rd32((uint32_t)(local_40 + 4u * (uint32_t)(2))) * 0x187e + iVar15;
        iVar11 = (rd32((uint32_t)(local_40 + 4u * (uint32_t)(4))) + rd32((uint32_t)local_40)) * 0x2000;
        iVar7 = (rd32((uint32_t)local_40) - rd32((uint32_t)(local_40 + 4u * (uint32_t)(4)))) * 0x2000;
        iVar12 = iVar11 + iVar15;
        iVar9 = iVar7 + iVar5;
        iVar11 = iVar11 - iVar15;
        iVar7 = iVar7 - iVar5;
        iVar15 = rd32((uint32_t)(local_40 + 4u * (uint32_t)(7)));
        iVar5 = rd32((uint32_t)(local_40 + 4u * (uint32_t)(3)));
        iVar6 = rd32((uint32_t)(local_40 + 4u * (uint32_t)(1)));
        iVar8 = rd32((uint32_t)(local_40 + 4u * (uint32_t)(5)));
        iVar10 = (iVar15 + iVar6) * -0x1ccd;
        iVar14 = (iVar8 + iVar5) * -0x5203;
        iVar16 = (iVar15 + iVar5 + iVar8 + iVar6) * 0x25a1;
        iVar13 = (iVar15 + iVar5) * -0x3ec5 + iVar16;
        iVar16 = (iVar8 + iVar6) * -0xc7c + iVar16;
        iVar15 = iVar10 + iVar13 + iVar15 * 0x98e;
        iVar8 = iVar14 + iVar16 + iVar8 * 0x41b3;
        iVar5 = iVar13 + iVar14 + iVar5 * 0x6254;
        iVar6 = iVar10 + iVar16 + iVar6 * 0x300b;
        uVar1 = rd8((uint32_t)(param_6 + ((iVar12 - iVar6) + 0x20000 >> 0x12 & 0x3ffU)));
        uVar2 = rd8((uint32_t)(param_6 + ((iVar9 - iVar5) + 0x20000 >> 0x12 & 0x3ffU)));
        uVar3 = rd8((uint32_t)(param_6 + ((iVar7 - iVar8) + 0x20000 >> 0x12 & 0x3ffU)));
        uVar4 = rd8((uint32_t)(param_6 + ((iVar11 - iVar15) + 0x20000 >> 0x12 & 0x3ffU)));
        wr32((uint32_t)puVar19, (((uint32_t)((((uint32_t)((((uint32_t)(rd8((uint32_t)(param_6 + (iVar11 + iVar15 + 0x20000 >> 0x12 & 0x3ffU)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_6 + (iVar7 + iVar8 + 0x20000 >> 0x12 & 0x3ffU)))) & 0xffu))) & 0xffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_6 + (iVar9 + iVar5 + 0x20000 >> 0x12 & 0x3ffU)))) & 0xffu))) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_6 + (iVar12 + iVar6 + 0x20000 >> 0x12 & 0x3ffU)))) & 0xffu)));
        wr32((uint32_t)(puVar19 + 4u * (uint32_t)(1)), (((uint32_t)((((uint32_t)((((uint32_t)(uVar1) & 0xffu) << 8 | ((uint32_t)(uVar2) & 0xffu))) & 0xffffu) << 8 | ((uint32_t)(uVar3) & 0xffu))) & 0xffffffu) << 8 | ((uint32_t)(uVar4) & 0xffu)));
        local_40 = local_40 + 4u * (uint32_t)(8);
        local_3c = local_3c + -1;
      } while (local_3c != 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1030c075(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1030c075: push ebp */
    g->ebp = g->esp;                       /* 0x1030c076: mov ebp, esp */
    g->esp -= 0x44u;                      /* 0x1030c078: 68 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1030c07b: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1030c07c: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1030c07d: push edi */
    g->esi = param_1;   /* 0x1030c07e: the value the entry loaded and the decompiler dropped */
    g->edi = param_2;   /* 0x1030c081: the value the entry loaded and the decompiler dropped */
    g->eax = param_3;   /* 0x1030c084: the value the entry loaded and the decompiler dropped */
    cow_lift_1030c075(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
