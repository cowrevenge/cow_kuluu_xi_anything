/* f_0x101cff60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101cff60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101cff60(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int local_4;
    iVar8 = param_1;
      piVar1 = (CowU32)(param_1 + 8);
      local_4 = 8;
      do {
        iVar7 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(-2))) + rd32((uint32_t)(piVar1 + 4u * (uint32_t)(5)));
        iVar5 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(-2))) - rd32((uint32_t)(piVar1 + 4u * (uint32_t)(5)));
        iVar4 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(-1))) + rd32((uint32_t)(piVar1 + 4u * (uint32_t)(4)));
        iVar2 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(-1))) - rd32((uint32_t)(piVar1 + 4u * (uint32_t)(4)));
        iVar9 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(3))) + rd32((uint32_t)piVar1);
        iVar3 = rd32((uint32_t)piVar1) - rd32((uint32_t)(piVar1 + 4u * (uint32_t)(3)));
        iVar10 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2))) + rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1)));
        iVar11 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(2)));
        iVar6 = iVar10 + iVar7;
        iVar7 = iVar7 - iVar10;
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(-2)), iVar9 + iVar4 + iVar6);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(2)), iVar6 - (iVar9 + iVar4));
        iVar4 = ((iVar7 - iVar9) + iVar4) * 0xb5 >> 8;
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(4)), iVar7 - iVar4);
        wr32((uint32_t)piVar1, iVar4 + iVar7);
        iVar4 = (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1))) - iVar11) + iVar3;
        iVar7 = iVar5 + iVar2;
        iVar6 = (iVar4 - iVar7) * 0x62 >> 8;
        iVar4 = (iVar4 * 0x8b >> 8) + iVar6;
        iVar6 = (iVar7 * 0x14e >> 8) + iVar6;
        iVar11 = (iVar3 + iVar2) * 0xb5 >> 8;
        iVar7 = iVar11 + iVar5;
        iVar5 = iVar5 - iVar11;
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(1)), iVar5 - iVar4);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(3)), iVar5 + iVar4);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(-1)), iVar7 + iVar6);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(5)), iVar7 - iVar6);
        piVar1 = piVar1 + 4u * (uint32_t)(8);
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      param_1 = 8;
      piVar1 = (CowU32)(iVar8 + 0x40);
      do {
        iVar8 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(-0x10))) + rd32((uint32_t)(piVar1 + 4u * (uint32_t)(0x28)));
        iVar3 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(-0x10))) - rd32((uint32_t)(piVar1 + 4u * (uint32_t)(0x28)));
        iVar7 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(-8))) + rd32((uint32_t)(piVar1 + 4u * (uint32_t)(0x20)));
        iVar11 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(-8))) - rd32((uint32_t)(piVar1 + 4u * (uint32_t)(0x20)));
        iVar5 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(0x18))) + rd32((uint32_t)piVar1);
        iVar2 = rd32((uint32_t)piVar1) - rd32((uint32_t)(piVar1 + 4u * (uint32_t)(0x18)));
        iVar9 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(0x10))) + rd32((uint32_t)(piVar1 + 4u * (uint32_t)(8)));
        iVar6 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(0x10)));
        iVar4 = iVar9 + iVar8;
        iVar8 = iVar8 - iVar9;
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(-0x10)), iVar5 + iVar7 + iVar4);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(0x10)), iVar4 - (iVar5 + iVar7));
        iVar7 = ((iVar8 - iVar5) + iVar7) * 0xb5 >> 8;
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(0x20)), iVar8 - iVar7);
        wr32((uint32_t)piVar1, iVar7 + iVar8);
        iVar7 = (rd32((uint32_t)(piVar1 + 4u * (uint32_t)(8))) - iVar6) + iVar2;
        iVar8 = iVar3 + iVar11;
        iVar4 = (iVar7 - iVar8) * 0x62 >> 8;
        iVar7 = (iVar7 * 0x8b >> 8) + iVar4;
        iVar4 = (iVar8 * 0x14e >> 8) + iVar4;
        iVar6 = (iVar2 + iVar11) * 0xb5 >> 8;
        iVar8 = iVar6 + iVar3;
        iVar3 = iVar3 - iVar6;
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(8)), iVar3 - iVar7);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(0x18)), iVar3 + iVar7);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(-8)), iVar8 + iVar4);
        wr32((uint32_t)(piVar1 + 4u * (uint32_t)(0x28)), iVar8 - iVar4);
        piVar1 = piVar1 + 4u * (uint32_t)(1);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 20 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101cff60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x14u;                      /* 0x101cff60: 20 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101cff63: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101cff67: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101cff68: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101cff69: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x8u; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x101cff6a: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_101cff60(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
