/* f_0x102de762 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102de762 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102de762(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU16 uVar2;
    CowU16 uVar3;
    CowU16 uVar4;
    CowU32 puVar5;
    int iVar6;
    int iVar7;
    CowU32 puVar8;
    CowU32 puVar9;
    CowU32 puVar10;
    CowU32 puVar11;
    CowU32 puVar12;
    puVar5 = rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x18));
      iVar6 = rd32((uint32_t)param_1);
      iVar7 = rd32((uint32_t)(iVar6 + 0x1050));
      puVar8 = rd16((uint32_t)(iVar6 + 0x18));
      puVar11 = (CowU32)(rd32((uint32_t)(iVar6 + 0x105c)) * iVar7 + (int)puVar8);
      for (; puVar8 < puVar11; puVar8 = puVar8 + iVar7) {
        iVar6 = rd32((uint32_t)(iVar6 + 0x1058));
        puVar12 = (CowU32)(iVar7 + (int)puVar8);
        puVar9 = puVar5;
        for (puVar10 = puVar8; puVar10 < puVar8 + iVar6; puVar10 = puVar10 + 2) {
          uVar1 = rd16((uint32_t)puVar10);
          uVar2 = rd16((uint32_t)(puVar10 + 2u * (uint32_t)(1)));
          uVar3 = rd16((uint32_t)(puVar12 + 2u * (uint32_t)(1)));
          uVar4 = rd16((uint32_t)puVar12);
          wr16((uint32_t)puVar9, (CowU16)(((CowU32)(uVar3 & 0xf0f0) + (CowU32)(uVar1 & 0xf0f0) + (CowU32)(uVar4 & 0xf0f0) +
                              0x2020 + (CowU32)(uVar2 & 0xf0f0) ^
                             (uVar2 & 0xffff0f0f) + 0x202 +
                             (uVar3 & 0xffff0f0f) + (uVar1 & 0xffff0f0f) + (uVar4 & 0xffff0f0f)) >> 2) &
                    0xf0f ^ (CowU16)((uVar3 & 0xf0f0) + (uVar1 & 0xf0f0) + (uVar4 & 0xf0f0) + 0x2020 +
                                     (uVar2 & 0xf0f0) >> 2));
          puVar12 = puVar12 + 2;
          puVar9 = puVar9 + 1;
        }
        puVar5 = (CowU32)((int)puVar5 + rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x1050)));
        iVar6 = rd32((uint32_t)param_1);
        iVar7 = rd32((uint32_t)(iVar6 + 0x1050));
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 36 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102de762(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x24u;                      /* 0x102de762: 36 bytes of locals */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102de765: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102de768: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102de76b: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102de76c: push esi */
    { uint32_t A = (uint32_t)(g->ecx); g->esi = (uint32_t)(rd32(A)); }   /* 0x102de76d: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x105Cu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102de76f: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102de775: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x1050u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102de776: register edi, replayed as the entry ran it */
    cow_lift_102de762(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
