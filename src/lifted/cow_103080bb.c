/* f_0x103080bb - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_103080bb (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_103080bb(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    CowU32 pbVar11;
    int iVar12;
    int local_14;
    int local_10;
    CowU32 local_c;
    CowU32 local_8;
    iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x1a4));
      piVar2 = rd32((uint32_t)(iVar1 + 0x18));
      iVar3 = rd32((uint32_t)piVar2);
      iVar4 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1)));
      iVar5 = rd32((uint32_t)(piVar2 + 4u * (uint32_t)(2)));
      iVar6 = (int32_t)rd32((uint32_t)(param_1 + 0x5c));
      if (0 < param_4) {
        local_c = param_3;
        local_14 = param_4;
        do {
          pbVar11 = rd8((uint32_t)((param_2 - (int)param_3) + (int)local_c));
          local_8 = (CowU32)rd32((uint32_t)local_c);
          iVar7 = (int32_t)rd32((uint32_t)(iVar1 + 0x30));
          iVar8 = (int32_t)rd32((uint32_t)(iVar1 + 0x34));
          iVar9 = (int32_t)rd32((uint32_t)(iVar1 + 0x3c));
          param_1 = 0;
          iVar12 = iVar7 * 0x40;
          iVar10 = (int32_t)rd32((uint32_t)(iVar1 + 0x38));
          if (iVar6 != 0) {
            local_10 = iVar6;
            do {
              wr8((uint32_t)local_8, (int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(iVar8 + iVar12 + param_1 * 4)) + (CowU32)rd8((uint32_t)pbVar11) + iVar3)) +
                         (int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(iVar10 + iVar12 + param_1 * 4)) + (CowU32)rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(1))) + iVar4)) +
                         (int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(iVar9 + iVar12 + param_1 * 4)) + (CowU32)rd8((uint32_t)(pbVar11 + 1u * (uint32_t)(2))) + iVar5)));
              pbVar11 = pbVar11 + 3;
              local_8 = local_8 + 1;
              param_1 = param_1 + 1 & 0xf;
              local_10 = local_10 + -1;
            } while (local_10 != 0);
          }
          local_c = local_c + 4u * (uint32_t)(1);
          local_14 = local_14 + -1;
          wr32((uint32_t)(iVar1 + 0x30), iVar7 + 1U & 0xf);
        } while (local_14 != 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx, esi], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_103080bb(Guest* g)
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
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x103080bb: push ebp */
    g->ebp = g->esp;                       /* 0x103080bc: mov ebp, esp */
    g->esp -= 0x30u;                      /* 0x103080be: 48 bytes of locals */
    g->edx = param_1;   /* 0x103080c1: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edx + 0x1A4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x103080c4: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x103080ca: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x103080cd: push esi */
    { uint32_t A = (uint32_t)(g->ecx); g->esi = (uint32_t)(rd32(A)); }   /* 0x103080ce: register esi, replayed as the entry ran it */
    cow_lift_103080bb(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
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
