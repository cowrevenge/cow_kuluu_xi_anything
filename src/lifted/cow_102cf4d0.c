/* f_0x102cf4d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102cf4d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102cf4d0(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, float param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU8 bVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    CowU32 uVar6;
    CowU32 pfVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    CowU32 uVar12;
    iVar4 = (int32_t)rd32((uint32_t)(param_2 + param_3 * 4));
      iVar5 = (int32_t)rd32((uint32_t)(param_2 + 0x1c + param_3 * 4));
      bVar2 = rd8((uint32_t)(param_2 + 0x38 + param_3));
      iVar10 = (int)(char)bVar2;
      uVar12 = rd32((uint32_t)(param_1 + 0x40));
      if (param_3 == 0) {
        uVar6 = 0xffffffff >> (bVar2 & 0x1f);
        while( 1 ) {
          puVar1 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x3c)) + ((int)uVar12 >> 3));
          iVar9 = (((uint32_t)((((uint32_t)((((uint32_t)(rd8((uint32_t)puVar1)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar1 + 1u * (uint32_t)(1)))) & 0xffu))) & 0xffffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar1 + 1u * (uint32_t)(2)))) & 0xffu))) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar1 + 1u * (uint32_t)(3)))) & 0xffu));
          iVar8 = iVar10 - (uVar12 & 7);
          iVar11 = (int)(int8_t)rd8((uint32_t)((iVar9 >> ((CowU8)iVar8 & 0x1f) & uVar6) + iVar5));
          if (iVar11 < 0) break;
          cVar3 = (int8_t)rd8((uint32_t)(iVar11 + iVar4));
          wrf32((uint32_t)param_5, param_4 * rdf32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344120) + iVar11 * 4)) + rdf32((uint32_t)param_5));
          iVar8 = iVar8 - cVar3;
          wrf32((uint32_t)(param_5 + 4u * (uint32_t)(1)), param_4 * rdf32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344124) + iVar11 * 4)) + rdf32((uint32_t)(param_5 + 4u * (uint32_t)(1))));
          iVar11 = (int)(int8_t)rd8((uint32_t)((iVar9 >> ((CowU8)iVar8 & 0x1f) & uVar6) + iVar5));
          if (iVar11 < 0) break;
          cVar3 = (int8_t)rd8((uint32_t)(iVar11 + iVar4));
          wrf32((uint32_t)(param_5 + 4u * (uint32_t)(2)), param_4 * rdf32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344120) + iVar11 * 4)) + rdf32((uint32_t)(param_5 + 4u * (uint32_t)(2))));
          iVar8 = iVar8 - cVar3;
          wrf32((uint32_t)(param_5 + 4u * (uint32_t)(3)), param_4 * rdf32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344124) + iVar11 * 4)) + rdf32((uint32_t)(param_5 + 4u * (uint32_t)(3))));
          iVar11 = (int)(int8_t)rd8((uint32_t)((iVar9 >> ((CowU8)iVar8 & 0x1f) & uVar6) + iVar5));
          if (iVar11 < 0) break;
          cVar3 = (int8_t)rd8((uint32_t)(iVar11 + iVar4));
          wrf32((uint32_t)(param_5 + 4u * (uint32_t)(4)), param_4 * rdf32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344120) + iVar11 * 4)) + rdf32((uint32_t)(param_5 + 4u * (uint32_t)(4))));
          iVar8 = iVar8 - cVar3;
          wrf32((uint32_t)(param_5 + 4u * (uint32_t)(5)), param_4 * rdf32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344124) + iVar11 * 4)) + rdf32((uint32_t)(param_5 + 4u * (uint32_t)(5))));
          iVar9 = (int)(int8_t)rd8((uint32_t)((iVar9 >> ((CowU8)iVar8 & 0x1f) & uVar6) + iVar5));
          if (iVar9 < 0) break;
          cVar3 = (int8_t)rd8((uint32_t)(iVar9 + iVar4));
          wrf32((uint32_t)(param_5 + 4u * (uint32_t)(6)), param_4 * rdf32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344120) + iVar9 * 4)) + rdf32((uint32_t)(param_5 + 4u * (uint32_t)(6))));
          pfVar7 = param_5 + 4u * (uint32_t)(8);
          uVar12 = ((uVar12 & 0xfffffff8) - (iVar8 - cVar3)) + iVar10;
          wrf32((uint32_t)(param_5 + 4u * (uint32_t)(7)), param_4 * rdf32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344124) + iVar9 * 4)) + rdf32((uint32_t)(param_5 + 4u * (uint32_t)(7))));
          param_5 = pfVar7;
          if (param_6 <= pfVar7) {
            wr32((uint32_t)(param_1 + 0x40), uVar12);
            return;
          }
        }
      }
      else {
        iVar8 = (int32_t)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344350) + param_3 * 4));
        while( 1 ) {
          iVar9 = cow_bridge_102cf280(g, COW_IMG(COW_ADDR_LIFT_102CF69F), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x3c)), uVar12, iVar10 }, g->ecx, g->edx, g->eax, 0u);
          iVar9 = (int)(int8_t)rd8((uint32_t)(iVar9 + iVar5));
          if (iVar9 < 0) break;
          pfVar7 = param_5 + 4u * (uint32_t)(1);
          uVar12 = uVar12 + (int)(int8_t)rd8((uint32_t)(iVar9 + iVar4));
          wrf32((uint32_t)param_5, param_4 * rdf32((uint32_t)(iVar8 + iVar9 * 4)) + rdf32((uint32_t)param_5));
          param_5 = pfVar7;
          if (param_6 <= pfVar7) {
            wr32((uint32_t)(param_1 + 0x40), uVar12);
            return;
          }
        }
      }
      wr32((uint32_t)(param_1 + 0x44), rd32((uint32_t)(param_1 + 0x44)) | 2);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ecx], frame pointer no, 0 locals, pops [ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102cf4d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    float param_4 = rdf32((uint32_t)(sp0 + 4u + 0x8u));   /* float argument */
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102cf4d0: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102cf4d1: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102cf4d5: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102cf4d9: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102cf4da: push ebp */
    { uint32_t A = (uint32_t)(g->ecx + g->eax * 4); g->edx = (uint32_t)(rd32(A)); }   /* 0x102cf4db: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + g->eax * 4 + 0x1Cu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102cf4de: register ebp, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + g->eax + 0x38u); g->ebx = (uint32_t)((uint32_t)(int32_t)((int8_t)rd8(A))); }   /* 0x102cf4e2: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102cf4e7: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102cf4eb: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102cf4ec: push edi */
    cow_lift_102cf4d0(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->eax = (CowU32)(param_2);   /* what eax holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
