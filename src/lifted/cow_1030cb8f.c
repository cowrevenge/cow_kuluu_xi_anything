/* f_0x1030cb8f - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1030cb8f (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1030cb8f(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, int32_t param_4, int32_t param_5, int32_t param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU8 uVar2;
    short sVar3;
    short sVar4;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    short sVar10;
    short sVar11;
    CowU32 puVar12;
    CowU32 local_30;
    CowU32 local_2c;
    CowU32 local_28;
    int local_24;
    short local_20;
    local_30 = param_1;
      local_2c = param_3;
      local_28 = param_2;
      local_20 = 8;
      do {
        sVar3 = rd16((uint32_t)local_30) * rd16((uint32_t)local_2c) + rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x20))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x20)));
        sVar1 = rd16((uint32_t)local_30) * rd16((uint32_t)local_2c) - rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x20))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x20)));
        sVar8 = rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x10))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x10))) + rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x30))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x30)));
        sVar4 = sVar3 + sVar8;
        sVar3 = sVar3 - sVar8;
        sVar8 = (short)((CowU32)((short)(rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x10))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x10))) - rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x30))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x30)))
                                      ) * 0x16a) >> 8) - sVar8;
        sVar5 = sVar1 + sVar8;
        sVar1 = sVar1 - sVar8;
        sVar6 = rd16((uint32_t)(local_30 + 2u * (uint32_t)(8))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(8))) + rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x38))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x38)));
        sVar8 = rd16((uint32_t)(local_30 + 2u * (uint32_t)(8))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(8))) - rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x38))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x38)));
        sVar9 = rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x28))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x28))) + rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x18))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x18)));
        sVar10 = rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x28))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x28))) - rd16((uint32_t)(local_30 + 2u * (uint32_t)(0x18))) * rd16((uint32_t)(local_2c + 2u * (uint32_t)(0x18)));
        sVar7 = sVar6 + sVar9;
        sVar11 = (short)((CowU32)((short)(sVar10 + sVar8) * 0x1d9) >> 8);
        sVar10 = ((short)((CowU32)(sVar10 * -0x29d) >> 8) + sVar11) - sVar7;
        sVar6 = (short)((CowU32)((short)(sVar6 - sVar9) * 0x16a) >> 8) - sVar10;
        sVar8 = ((short)((CowU32)(sVar8 * 0x115) >> 8) - sVar11) + sVar6;
        wr16((uint32_t)local_28, sVar7 + sVar4);
        wr16((uint32_t)(local_28 + 2u * (uint32_t)(0x38)), sVar4 - sVar7);
        wr16((uint32_t)(local_28 + 2u * (uint32_t)(8)), sVar10 + sVar5);
        wr16((uint32_t)(local_28 + 2u * (uint32_t)(0x30)), sVar5 - sVar10);
        wr16((uint32_t)(local_28 + 2u * (uint32_t)(0x10)), sVar6 + sVar1);
        wr16((uint32_t)(local_28 + 2u * (uint32_t)(0x28)), sVar1 - sVar6);
        wr16((uint32_t)(local_28 + 2u * (uint32_t)(0x20)), sVar8 + sVar3);
        wr16((uint32_t)(local_28 + 2u * (uint32_t)(0x18)), sVar3 - sVar8);
        local_30 = local_30 + 2u * (uint32_t)(1);
        local_2c = local_2c + 2u * (uint32_t)(1);
        local_28 = local_28 + 2u * (uint32_t)(1);
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      local_24 = 0;
      local_20 = 8;
      local_28 = param_2;
      do {
        puVar12 = (CowU32)((int32_t)rd32((uint32_t)(param_4 + local_24)) + param_5);
        local_24 = local_24 + 4;
        sVar3 = rd16((uint32_t)local_28) + rd16((uint32_t)(local_28 + 2u * (uint32_t)(4)));
        sVar1 = rd16((uint32_t)local_28) - rd16((uint32_t)(local_28 + 2u * (uint32_t)(4)));
        sVar8 = rd16((uint32_t)(local_28 + 2u * (uint32_t)(2))) + rd16((uint32_t)(local_28 + 2u * (uint32_t)(6)));
        sVar4 = sVar3 + sVar8;
        sVar3 = sVar3 - sVar8;
        sVar8 = (short)((CowU32)((short)(rd16((uint32_t)(local_28 + 2u * (uint32_t)(2))) - rd16((uint32_t)(local_28 + 2u * (uint32_t)(6)))) * 0x16a) >> 8) - sVar8;
        sVar5 = sVar1 + sVar8;
        sVar1 = sVar1 - sVar8;
        sVar6 = rd16((uint32_t)(local_28 + 2u * (uint32_t)(1))) + rd16((uint32_t)(local_28 + 2u * (uint32_t)(7)));
        sVar8 = rd16((uint32_t)(local_28 + 2u * (uint32_t)(1))) - rd16((uint32_t)(local_28 + 2u * (uint32_t)(7)));
        sVar9 = rd16((uint32_t)(local_28 + 2u * (uint32_t)(5))) + rd16((uint32_t)(local_28 + 2u * (uint32_t)(3)));
        sVar10 = rd16((uint32_t)(local_28 + 2u * (uint32_t)(5))) - rd16((uint32_t)(local_28 + 2u * (uint32_t)(3)));
        sVar7 = sVar6 + sVar9;
        sVar11 = (short)((CowU32)((short)(sVar10 + sVar8) * 0x1d9) >> 8);
        sVar10 = ((short)((CowU32)(sVar10 * -0x29d) >> 8) + sVar11) - sVar7;
        sVar6 = (short)((CowU32)((short)(sVar6 - sVar9) * 0x16a) >> 8) - sVar10;
        sVar8 = ((short)((CowU32)(sVar8 * 0x115) >> 8) - sVar11) + sVar6;
        uVar2 = rd8((uint32_t)(param_6 + ((CowU16)((short)(sVar4 - sVar7) >> 5) & 0x3ff)));
        wr8((uint32_t)puVar12, rd8((uint32_t)(param_6 + ((CowU16)((short)(sVar7 + sVar4) >> 5) & 0x3ff))));
        wr8((uint32_t)(puVar12 + 1u * (uint32_t)(7)), uVar2);
        uVar2 = rd8((uint32_t)(param_6 + ((CowU16)((short)(sVar5 - sVar10) >> 5) & 0x3ff)));
        wr8((uint32_t)(puVar12 + 1u * (uint32_t)(1)), rd8((uint32_t)(param_6 + ((CowU16)((short)(sVar10 + sVar5) >> 5) & 0x3ff))));
        wr8((uint32_t)(puVar12 + 1u * (uint32_t)(6)), uVar2);
        uVar2 = rd8((uint32_t)(param_6 + ((CowU16)((short)(sVar1 - sVar6) >> 5) & 0x3ff)));
        wr8((uint32_t)(puVar12 + 1u * (uint32_t)(2)), rd8((uint32_t)(param_6 + ((CowU16)((short)(sVar6 + sVar1) >> 5) & 0x3ff))));
        wr8((uint32_t)(puVar12 + 1u * (uint32_t)(5)), uVar2);
        uVar2 = rd8((uint32_t)(param_6 + ((CowU16)((short)(sVar3 - sVar8) >> 5) & 0x3ff)));
        wr8((uint32_t)(puVar12 + 1u * (uint32_t)(4)), rd8((uint32_t)(param_6 + ((CowU16)((short)(sVar8 + sVar3) >> 5) & 0x3ff))));
        wr8((uint32_t)(puVar12 + 1u * (uint32_t)(3)), uVar2);
        local_28 = local_28 + 2u * (uint32_t)(8);
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1030cb8f(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1030cb8f: push ebp */
    g->ebp = g->esp;                       /* 0x1030cb90: mov ebp, esp */
    g->esp -= 0x2cu;                      /* 0x1030cb92: 44 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1030cb95: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1030cb96: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1030cb97: push edi */
    g->esi = param_3;   /* 0x1030cb98: the value the entry loaded and the decompiler dropped */
    g->edi = param_5;   /* 0x1030cb9b: the value the entry loaded and the decompiler dropped */
    cow_lift_1030cb8f(g, param_1, param_2, param_3, param_4, param_5, param_6);

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
