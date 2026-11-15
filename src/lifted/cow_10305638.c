/* f_0x10305638 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10305638 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10305638(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 uVar2;
    int iVar3;
    CowU32 puVar4;
    int iVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    CowU32 puVar8;
    CowU32 uVar9;
    CowU32 puVar10;
    CowU32 puVar11;
    int local_c;
    iVar3 = rd32((uint32_t)param_4);
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x19c)) + (int32_t)rd32((uint32_t)((int)param_2 + 4));
      bVar1 = rd8((uint32_t)(iVar5 + 0x8c));
      uVar7 = (CowU32)bVar1;
      uVar6 = (CowU32)rd8((uint32_t)(iVar5 + 0x96));
      local_c = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x110))))) {
        param_2 = param_3;
        do {
          puVar10 = (CowU32)rd32((uint32_t)param_2);
          puVar4 = rd32((uint32_t)(iVar3 + local_c * 4));
          puVar8 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x5c)) + (int)puVar4);
          while (puVar4 < puVar8) {
            uVar2 = rd8((uint32_t)puVar10);
            puVar10 = puVar10 + 1;
            if (uVar7 != 0) {
              puVar11 = puVar4;
              for (uVar9 = (CowU32)(bVar1 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
                wr32((uint32_t)puVar11, (((uint32_t)((((uint32_t)(uVar2) & 0xffu) << 8 | ((uint32_t)(uVar2) & 0xffu))) & 0xffffu) << 16 | ((uint32_t)((((uint32_t)(uVar2) & 0xffu) << 8 | ((uint32_t)(uVar2) & 0xffu))) & 0xffffu)));
                puVar11 = puVar11 + 4u * (uint32_t)(1);
              }
              for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                wr8((uint32_t)puVar11, uVar2);
                puVar11 = (CowU32)((int)puVar11 + 1);
              }
              puVar4 = (CowU32)((int)puVar4 + uVar7);
            }
          }
          if (1 < uVar6) {
            cow_bridge_102f58f5(g, COW_IMG(COW_ADDR_LIFT_103056F7), 6u, (const CowU32[]){ iVar3, local_c, iVar3, local_c + 1, uVar6 - 1, rd32((uint32_t)(param_1 + 0x5c)) }, g->ecx, g->edx, g->eax, 24u);
          }
          local_c = local_c + uVar6;
          param_2 = param_2 + 4u * (uint32_t)(1);
        } while (((int32_t)(local_c) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x110)))));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10305638(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10305638: push ebp */
    g->ebp = g->esp;                       /* 0x10305639: mov ebp, esp */
    g->esp -= 0x14u;                      /* 0x1030563b: 20 bytes of locals */
    g->ecx = param_4;   /* 0x1030563e: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10305641: push ebx */
    { uint32_t A = (uint32_t)(g->ecx); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10305642: register ebx, replayed as the entry ran it */
    g->ecx = param_2;   /* 0x10305644: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10305647: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1030564a: push esi */
    g->esi = param_1;   /* 0x1030564b: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x19Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x1030564e: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->ecx; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10305654: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x8Cu); g->ecx = (uint32_t)(rd8(A)); }   /* 0x10305656: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x96u); g->eax = (uint32_t)(rd8(A)); }   /* 0x1030565d: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10305664: push edi */
    g->edi = 0u;   /* 0x10305665: the value the entry loaded and the decompiler dropped */
    cow_lift_10305638(g, param_1, param_2, param_3, param_4);

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
