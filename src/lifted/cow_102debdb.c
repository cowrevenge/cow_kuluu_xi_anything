/* f_0x102debdb - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102debdb (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102debdb(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU16 uVar2;
    int iVar3;
    CowU32 puVar4;
    int iVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    CowU32 puVar8;
    CowU32 puVar9;
    CowU32 puVar10;
    puVar9 = rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x18));
      iVar3 = rd32((uint32_t)param_1);
      puVar4 = rd16((uint32_t)(iVar3 + 0x18));
      iVar5 = (int32_t)rd32((uint32_t)(iVar3 + 0x1050));
      puVar7 = (CowU32)((int32_t)rd32((uint32_t)(iVar3 + 0x105c)) * iVar5 + (int)puVar4);
      for (; puVar4 < puVar7; puVar4 = puVar4 + 2u * (uint32_t)(iVar5)) {
        iVar3 = (int32_t)rd32((uint32_t)(iVar3 + 0x1058));
        puVar10 = (CowU32)(iVar5 + (int)puVar4);
        puVar6 = puVar9;
        for (puVar8 = puVar4; puVar8 < puVar4 + 2u * (uint32_t)(iVar3); puVar8 = puVar8 + 2u * (uint32_t)(2)) {
          puVar1 = puVar10 + 2u * (uint32_t)(1);
          uVar2 = rd16((uint32_t)puVar10);
          puVar10 = puVar10 + 2u * (uint32_t)(2);
          wr16((uint32_t)puVar6, (CowU16)((rd16((uint32_t)puVar1) & 0xffff00f0) + (rd16((uint32_t)puVar8) & 0xffff00f0) + (uVar2 & 0xffff00f0) +
                             0x20 + (rd16((uint32_t)(puVar8 + 2u * (uint32_t)(1))) & 0xffff00f0) >> 2) & 0xf0 |
                    (CowU16)((CowU32)(rd16((uint32_t)puVar1) & 0xf0f) + (CowU32)(rd16((uint32_t)puVar8) & 0xf0f) + (CowU32)(uVar2 & 0xf0f) +
                             0x202 + (CowU32)(rd16((uint32_t)(puVar8 + 2u * (uint32_t)(1))) & 0xf0f) >> 2) & 0xf0f);
          puVar6 = puVar6 + 2u * (uint32_t)(1);
        }
        puVar9 = (CowU32)((int)puVar9 + (int32_t)rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x1050)));
        iVar3 = rd32((uint32_t)param_1);
        iVar5 = (int32_t)rd32((uint32_t)(iVar3 + 0x1050));
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 28 locals, pops [ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102debdb(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x1cu;                      /* 0x102debdb: 28 bytes of locals */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102debde: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102debe1: push ebp */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102debe2: register ebp, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx); g->eax = (uint32_t)(rd32(A)); }   /* 0x102debe5: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x105Cu); g->edx = (uint32_t)(rd32(A)); }   /* 0x102debe7: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102debed: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102debee: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102debf1: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x1050u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102debf2: register edi, replayed as the entry ran it */
    cow_lift_102debdb(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
