/* f_0x100de010 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100de010 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100de010(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
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
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    CowU32 uVar18;
    CowU32 uVar19;
    CowU32 uVar20;
    CowU32 uVar21;
    CowU32 uVar22;
    CowU32 uVar23;
    iVar2 = rd32((uint32_t)param_2);
      uVar19 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
      uVar22 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)));
      uVar1 = (~uVar19 & rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))) | uVar22 & uVar19) + iVar2 + -0x28955b88 + rd32((uint32_t)param_1);
      iVar3 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
      uVar18 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar19;
      uVar1 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))) + -0x173848aa + (~uVar18 & uVar22 | uVar19 & uVar18) + iVar3;
      iVar4 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(2)));
      uVar20 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar18;
      uVar22 = (~uVar20 & uVar19 | uVar20 & uVar18) + iVar4 + 0x242070db + uVar22;
      iVar5 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(3)));
      uVar21 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar20;
      uVar1 = (~uVar21 & uVar18 | uVar20 & uVar21) + iVar5 + -0x3e423112 + rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
      iVar6 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(4)));
      uVar22 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar21;
      iVar7 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(5)));
      uVar1 = uVar18 + 0xf57c0faf + (~uVar22 & uVar20 | uVar21 & uVar22) + iVar6;
      uVar23 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar22;
      uVar1 = uVar20 + 0x4787c62a + (~uVar23 & uVar21 | uVar22 & uVar23) + iVar7;
      iVar8 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(6)));
      uVar19 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar23;
      uVar1 = uVar21 + 0xa8304613 + (~uVar19 & uVar22 | uVar19 & uVar23) + iVar8;
      iVar9 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(7)));
      uVar18 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar19;
      uVar22 = (~uVar18 & uVar23 | uVar19 & uVar18) + iVar9 + -0x2b96aff + uVar22;
      iVar10 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(8)));
      uVar22 = (uVar22 * 0x400000 | uVar22 >> 10) + uVar18;
      iVar11 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(9)));
      uVar1 = uVar23 + 0x698098d8 + (~uVar22 & uVar19 | uVar18 & uVar22) + iVar10;
      uVar20 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar22;
      uVar1 = uVar19 + 0x8b44f7af + (~uVar20 & uVar18 | uVar22 & uVar20) + iVar11;
      iVar12 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(10)));
      uVar21 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar20;
      uVar1 = (uVar18 - 0xa44f) + (~uVar21 & uVar22 | uVar21 & uVar20) + iVar12;
      iVar13 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xb)));
      uVar19 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar21;
      uVar22 = (~uVar19 & uVar20 | uVar21 & uVar19) + iVar13 + -0x76a32842 + uVar22;
      iVar14 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)));
      uVar22 = (uVar22 * 0x400000 | uVar22 >> 10) + uVar19;
      iVar15 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)));
      uVar1 = uVar20 + 0x6b901122 + (~uVar22 & uVar21 | uVar19 & uVar22) + iVar14;
      uVar18 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar22;
      uVar1 = uVar21 + 0xfd987193 + (~uVar18 & uVar19 | uVar22 & uVar18) + iVar15;
      uVar20 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar18;
      iVar16 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xe)));
      iVar17 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(0xf)));
      uVar1 = uVar19 + 0xa679438e + (~uVar20 & uVar22 | uVar20 & uVar18) + iVar16;
      uVar21 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar20;
      uVar1 = uVar22 + 0x49b40821 + (~uVar21 & uVar18 | uVar20 & uVar21) + iVar17;
      uVar22 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar21;
      uVar1 = uVar18 + 0xf61e2562 + (~uVar20 & uVar21 | uVar20 & uVar22) + iVar3;
      uVar19 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar22;
      uVar1 = uVar20 + 0xc040b340 + (~uVar21 & uVar22 | uVar21 & uVar19) + iVar8;
      uVar18 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar19;
      uVar1 = uVar21 + 0x265e5a51 + (~uVar22 & uVar19 | uVar18 & uVar22) + iVar13;
      uVar20 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar18;
      uVar1 = uVar22 + 0xe9b6c7aa + (~uVar19 & uVar18 | uVar20 & uVar19) + iVar2;
      uVar22 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar20;
      uVar1 = uVar19 + 0xd62f105d + (~uVar18 & uVar20 | uVar18 & uVar22) + iVar7;
      uVar19 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar22;
      uVar1 = uVar18 + 0x2441453 + (~uVar20 & uVar22 | uVar20 & uVar19) + iVar12;
      uVar18 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar19;
      uVar1 = uVar20 + 0xd8a1e681 + (~uVar22 & uVar19 | uVar18 & uVar22) + iVar17;
      uVar20 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar18;
      uVar1 = uVar22 + 0xe7d3fbc8 + (~uVar19 & uVar18 | uVar20 & uVar19) + iVar6;
      uVar22 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar20;
      uVar1 = uVar19 + 0x21e1cde6 + (~uVar18 & uVar20 | uVar18 & uVar22) + iVar11;
      uVar19 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar22;
      uVar1 = uVar18 + 0xc33707d6 + (~uVar20 & uVar22 | uVar20 & uVar19) + iVar16;
      uVar18 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar19;
      uVar1 = uVar20 + 0xf4d50d87 + (~uVar22 & uVar19 | uVar18 & uVar22) + iVar5;
      uVar20 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar18;
      uVar1 = uVar22 + 0x455a14ed + (~uVar19 & uVar18 | uVar20 & uVar19) + iVar10;
      uVar22 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar20;
      uVar1 = uVar19 + 0xa9e3e905 + (~uVar18 & uVar20 | uVar18 & uVar22) + iVar15;
      uVar19 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar22;
      uVar1 = uVar18 + 0xfcefa3f8 + (~uVar20 & uVar22 | uVar20 & uVar19) + iVar4;
      uVar18 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar19;
      uVar1 = uVar20 + 0x676f02d9 + (~uVar22 & uVar19 | uVar18 & uVar22) + iVar9;
      uVar20 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar18;
      uVar1 = uVar22 + 0x8d2a4c8a + (~uVar19 & uVar18 | uVar20 & uVar19) + iVar14;
      uVar22 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar20;
      uVar1 = (uVar19 - 0x5c6be) + (uVar18 ^ uVar20 ^ uVar22) + iVar7;
      uVar19 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar22;
      uVar1 = uVar18 + 0x8771f681 + (uVar20 ^ uVar22 ^ uVar19) + iVar10;
      uVar18 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar19;
      uVar1 = uVar20 + 0x6d9d6122 + (uVar18 ^ uVar22 ^ uVar19) + iVar13;
      uVar20 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar18;
      uVar1 = uVar22 + 0xfde5380c + (uVar18 ^ uVar20 ^ uVar19) + iVar16;
      uVar22 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar20;
      uVar1 = uVar19 + 0xa4beea44 + (uVar18 ^ uVar20 ^ uVar22) + iVar3;
      uVar19 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar22;
      uVar1 = uVar18 + 0x4bdecfa9 + (uVar20 ^ uVar22 ^ uVar19) + iVar6;
      uVar18 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar19;
      uVar1 = uVar20 + 0xf6bb4b60 + (uVar18 ^ uVar22 ^ uVar19) + iVar9;
      uVar20 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar18;
      uVar1 = uVar22 + 0xbebfbc70 + (uVar18 ^ uVar20 ^ uVar19) + iVar12;
      uVar22 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar20;
      uVar1 = uVar19 + 0x289b7ec6 + (uVar18 ^ uVar20 ^ uVar22) + iVar15;
      uVar19 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar22;
      uVar1 = uVar18 + 0xeaa127fa + (uVar20 ^ uVar22 ^ uVar19) + iVar2;
      uVar18 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar19;
      uVar1 = uVar20 + 0xd4ef3085 + (uVar18 ^ uVar22 ^ uVar19) + iVar5;
      uVar20 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar18;
      uVar1 = uVar22 + 0x4881d05 + (uVar18 ^ uVar20 ^ uVar19) + iVar8;
      uVar22 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar20;
      uVar1 = uVar19 + 0xd9d4d039 + (uVar18 ^ uVar20 ^ uVar22) + iVar11;
      uVar19 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar22;
      uVar1 = uVar18 + 0xe6db99e5 + (uVar20 ^ uVar22 ^ uVar19) + iVar14;
      uVar18 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar19;
      uVar1 = uVar20 + 0x1fa27cf8 + (uVar18 ^ uVar22 ^ uVar19) + iVar17;
      uVar21 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar18;
      uVar1 = uVar22 + 0xc4ac5665 + (uVar18 ^ uVar21 ^ uVar19) + iVar4;
      uVar22 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar21;
      uVar1 = uVar19 + 0xf4292244 + ((~uVar18 | uVar22) ^ uVar21) + iVar2;
      uVar19 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar22;
      uVar1 = uVar18 + 0x432aff97 + ((~uVar21 | uVar19) ^ uVar22) + iVar9;
      uVar20 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar19;
      uVar1 = uVar21 + 0xab9423a7 + ((~uVar22 | uVar20) ^ uVar19) + iVar16;
      uVar21 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar20;
      uVar1 = uVar22 + 0xfc93a039 + ((~uVar19 | uVar21) ^ uVar20) + iVar7;
      uVar22 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar21;
      uVar1 = uVar19 + 0x655b59c3 + ((~uVar20 | uVar22) ^ uVar21) + iVar14;
      uVar18 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar22;
      uVar1 = uVar20 + 0x8f0ccc92 + ((~uVar21 | uVar18) ^ uVar22) + iVar5;
      uVar20 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar18;
      uVar1 = (uVar21 - 0x100b83) + ((~uVar22 | uVar20) ^ uVar18) + iVar12;
      uVar21 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar20;
      uVar1 = uVar22 + 0x85845dd1 + ((~uVar18 | uVar21) ^ uVar20) + iVar3;
      uVar19 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar21;
      uVar1 = uVar18 + 0x6fa87e4f + ((~uVar20 | uVar19) ^ uVar21) + iVar10;
      uVar18 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar19;
      uVar1 = uVar20 + 0xfe2ce6e0 + ((~uVar21 | uVar18) ^ uVar19) + iVar17;
      uVar22 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar18;
      uVar1 = uVar21 + 0xa3014314 + ((~uVar19 | uVar22) ^ uVar18) + iVar8;
      uVar20 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar22;
      uVar1 = uVar19 + 0x4e0811a1 + ((~uVar18 | uVar20) ^ uVar22) + iVar15;
      uVar19 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar20;
      uVar1 = uVar18 + 0xf7537e82 + ((~uVar22 | uVar19) ^ uVar20) + iVar6;
      uVar18 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar19;
      uVar1 = uVar22 + 0xbd3af235 + ((~uVar20 | uVar18) ^ uVar19) + iVar13;
      uVar22 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar18;
      uVar1 = uVar20 + 0x2ad7d2bb + ((~uVar19 | uVar22) ^ uVar18) + iVar4;
      uVar20 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar22;
      uVar1 = uVar19 + 0xeb86d391 + ((~uVar18 | uVar20) ^ uVar22) + iVar11;
      wr32((uint32_t)param_1, rd32((uint32_t)param_1) + uVar18);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + uVar20);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), (uVar1 * 0x200000 | uVar1 >> 0xb) + rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + uVar20);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))) + uVar22);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 68 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100de010(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x44u;                      /* 0x100de010: 68 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x4Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x100de013: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100de017: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x4Cu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100de018: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100de01c: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100de01d: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100de01e: push edi */
    { uint32_t A = (uint32_t)(g->eax); g->edi = (uint32_t)(rd32(A)); }   /* 0x100de01f: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebx + 0x4u); g->esi = (uint32_t)(rd32(A)); }   /* 0x100de021: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebx + 0xCu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100de024: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebx + 0x8u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x100de027: register ebp, replayed as the entry ran it */
    cow_lift_100de010(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
