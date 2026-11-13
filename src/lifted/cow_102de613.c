/* f_0x102de613 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102de613 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102de613(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 puVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    CowU32 puVar8;
    CowU32 puVar9;
    CowU32 uVar10;
    CowU32 puVar11;
    CowU32 uVar12;
    puVar1 = rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x18));
      iVar2 = rd32((uint32_t)param_1);
      puVar3 = rd16((uint32_t)(iVar2 + 0x18));
      iVar4 = (int32_t)rd32((uint32_t)(iVar2 + 0x1050));
      puVar9 = (CowU32)((int32_t)rd32((uint32_t)(iVar2 + 0x105c)) * iVar4 + (int)puVar3);
      for (; puVar3 < puVar9; puVar3 = puVar3 + 2u * (uint32_t)(iVar4)) {
        iVar2 = (int32_t)rd32((uint32_t)(iVar2 + 0x1058));
        puVar11 = (CowU32)(iVar4 + (int)puVar3);
        puVar5 = puVar1;
        for (puVar8 = puVar3; puVar8 < puVar3 + 2u * (uint32_t)(iVar2); puVar8 = puVar8 + 2u * (uint32_t)(2)) {
          uVar6 = (CowU32)rd16((uint32_t)puVar8);
          uVar10 = (CowU32)rd16((uint32_t)(puVar8 + 2u * (uint32_t)(1)));
          uVar7 = (CowU32)rd16((uint32_t)(puVar11 + 2u * (uint32_t)(1)));
          uVar12 = (CowU32)rd16((uint32_t)puVar11);
          wr16((uint32_t)puVar5, (CowU16)(((uVar7 & 0x83e0) + (uVar6 & 0x83e0) + (uVar12 & 0x83e0) + 0x10040 +
                              (uVar10 & 0x83e0) ^
                             (uVar10 & 0x7c1f) + 0x802 +
                             (uVar7 & 0x7c1f) + (uVar6 & 0x7c1f) + (uVar12 & 0x7c1f)) >> 2) & 0x7c1f ^
                    (CowU16)((uVar7 & 0x83e0) + (uVar6 & 0x83e0) + (uVar12 & 0x83e0) + 0x10040 +
                             (uVar10 & 0x83e0) >> 2));
          puVar11 = puVar11 + 2u * (uint32_t)(2);
          puVar5 = puVar5 + 2u * (uint32_t)(1);
        }
        puVar1 = (CowU32)((int)puVar1 + (int32_t)rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x1050)));
        iVar2 = rd32((uint32_t)param_1);
        iVar4 = (int32_t)rd32((uint32_t)(iVar2 + 0x1050));
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 36 locals, pops [ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102de613(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x24u;                      /* 0x102de613: 36 bytes of locals */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102de616: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102de619: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102de61c: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102de61d: push esi */
    { uint32_t A = (uint32_t)(g->ecx); g->esi = (uint32_t)(rd32(A)); }   /* 0x102de61e: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x105Cu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102de620: register ebp, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x18u); g->edx = (uint32_t)(rd32(A)); }   /* 0x102de626: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102de629: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x1050u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102de62a: register edi, replayed as the entry ran it */
    cow_lift_102de613(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
