/* f_0x102dee54 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102dee54 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102dee54(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    CowU8 bVar3;
    CowU8 bVar4;
    int iVar5;
    CowU32 pbVar6;
    int iVar7;
    CowU32 pbVar8;
    CowU32 pbVar9;
    CowU32 pbVar10;
    CowU32 pbVar11;
    CowU32 pbVar12;
    iVar5 = rd32((uint32_t)param_1);
      pbVar10 = rd8((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x18));
      pbVar6 = rd8((uint32_t)(iVar5 + 0x18));
      iVar7 = rd32((uint32_t)(iVar5 + 0x1050));
      pbVar11 = pbVar6 + rd32((uint32_t)(iVar5 + 0x105c)) * iVar7;
      for (; pbVar6 < pbVar11; pbVar6 = pbVar6 + iVar7 * 2) {
        iVar5 = rd32((uint32_t)(iVar5 + 0x1058));
        pbVar12 = pbVar6 + iVar7;
        pbVar8 = pbVar10;
        for (pbVar9 = pbVar6; pbVar9 < pbVar6 + iVar5; pbVar9 = pbVar9 + 2) {
          bVar1 = rd8((uint32_t)pbVar9);
          bVar2 = rd8((uint32_t)(pbVar9 + 1u * (uint32_t)(1)));
          bVar3 = rd8((uint32_t)(pbVar12 + 1u * (uint32_t)(1)));
          bVar4 = rd8((uint32_t)pbVar12);
          pbVar12 = pbVar12 + 2;
          wr8((uint32_t)pbVar8, ((CowU8)((bVar3 & 0xf) + (bVar1 & 0xf) + (bVar4 & 0xf) + 2 + (bVar2 & 0xf) >> 2) ^
                    (CowU8)((bVar3 & 0xffff00f0) + (bVar1 & 0xffff00f0) + (bVar4 & 0xffff00f0) + 0x20 +
                           (bVar2 & 0xffff00f0) >> 2)) & 0xf ^
                    (CowU8)((CowU32)(bVar3 & 0xf0) + (CowU32)(bVar1 & 0xf0) + (CowU32)(bVar4 & 0xf0) + 0x20 +
                           (CowU32)(bVar2 & 0xf0) >> 2));
          pbVar8 = pbVar8 + 1;
        }
        pbVar10 = pbVar10 + rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x1050));
        iVar5 = rd32((uint32_t)param_1);
        iVar7 = rd32((uint32_t)(iVar5 + 0x1050));
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 32 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102dee54(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x20u;                      /* 0x102dee54: 32 bytes of locals */
    { uint32_t A = (uint32_t)(g->ecx); g->edx = (uint32_t)(rd32(A)); }   /* 0x102dee57: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102dee59: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102dee5c: push ebp */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102dee5d: register ebp, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edx + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102dee60: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102dee63: push esi */
    { uint32_t A = (uint32_t)(g->edx + 0x105Cu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102dee64: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102dee6a: push edi */
    { uint32_t A = (uint32_t)(g->edx + 0x1050u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102dee6b: register edi, replayed as the entry ran it */
    cow_lift_102dee54(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
