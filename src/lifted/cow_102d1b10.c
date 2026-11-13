/* f_0x102d1b10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102d1b10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102d1b10(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 piVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    int iVar6;
    CowU32 puVar7;
    CowU32 piVar8;
    int iVar9;
    iVar9 = param_2;
      iVar2 = param_1;
      puVar7 = (CowU32)(param_1 + 0x110);
      puVar4 = (CowU32)(param_1 + 0x328);
      for (iVar6 = 0x86; iVar6 != 0; iVar6 = iVar6 + -1) {
        wr32((uint32_t)puVar4, rd32((uint32_t)puVar7));
        puVar7 = puVar7 + 4u * (uint32_t)(1);
        puVar4 = puVar4 + 4u * (uint32_t)(1);
      }
      param_1 = 0;
      if (0 < param_2) {
        piVar8 = (CowU32)(iVar2 + 0x550);
        do {
          if (rd32((uint32_t)(piVar8 + 4u * (uint32_t)(-1))) != 0) {
            iVar6 = rd32((uint32_t)piVar8) + 2;
            if ((int32_t)rd32((uint32_t)(iVar2 + 0x328 + (iVar6 >> 8) * 4)) == 0) {
              g->eax = (CowU32)(0); return;
            }
            piVar3 = (CowU32)(((iVar6 >> 6) + 0x1a) * 0x20 + iVar2);
            iVar1 = rd32((uint32_t)piVar3);
            if (6 < iVar1) {
              g->eax = (CowU32)(0); return;
            }
            if (param_2 == 0x40) {
              g->eax = (CowU32)(0); return;
            }
            if (0x3fd < iVar6) {
              g->eax = (CowU32)(0); return;
            }
            wr32((uint32_t)piVar3, iVar1 + 1);
            param_2 = param_2 + 1;
          }
          piVar8 = piVar8 + 4u * (uint32_t)(6);
          param_1 = param_1 + 1;
        } while (param_1 < iVar9);
      }
      param_2 = iVar9;
      if (0 < iVar9) {
        puVar7 = (CowU32)(iVar2 + 0x548);
        param_1 = iVar9;
        puVar4 = (CowU32)(iVar2 + (iVar9 * 3 + 0xa8) * 8);
        do {
          puVar5 = puVar4;
          if (rd32((uint32_t)(puVar7 + 4u * (uint32_t)(1))) != 0) {
            wr32((uint32_t)(puVar4 + 4u * (uint32_t)(4)), rd32((uint32_t)(puVar7 + 4u * (uint32_t)(2))) + 2);
            wr32((uint32_t)(puVar4 + 4u * (uint32_t)(5)), rd32((uint32_t)(puVar7 + 4u * (uint32_t)(3))));
            wr32((uint32_t)puVar4, rd32((uint32_t)puVar7));
            wr32((uint32_t)(puVar4 + 4u * (uint32_t)(1)), rd32((uint32_t)(puVar7 + 4u * (uint32_t)(1))));
            wr32((uint32_t)puVar7, 0);
            wr32((uint32_t)(puVar4 + 4u * (uint32_t)(2)), 0);
            wr32((uint32_t)(puVar7 + 4u * (uint32_t)(1)), 0);
            wr32((uint32_t)(puVar4 + 4u * (uint32_t)(3)), 0);
            param_2 = param_2 + 1;
            iVar9 = ((int)rd32((uint32_t)(puVar4 + 4u * (uint32_t)(4))) >> 6) * 0x20;
            puVar5 = puVar4 + 4u * (uint32_t)(6);
            piVar8 = (CowU32)(iVar9 + 0x128 + iVar2);
            wr32((uint32_t)(iVar2 + 300 + ((int32_t)rd32((uint32_t)(iVar9 + 0x128 + iVar2)) + ((int)rd32((uint32_t)(puVar4 + 4u * (uint32_t)(4))) >> 6) * 8) * 4), puVar4);
            wr32((uint32_t)piVar8, rd32((uint32_t)piVar8) + 1);
          }
          puVar7 = puVar7 + 4u * (uint32_t)(6);
          param_1 = param_1 + -1;
          puVar4 = puVar5;
        } while (param_1 != 0);
      }
      g->eax = (CowU32)(param_2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102d1b10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102d1b10: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102d1b11: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102d1b15: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102d1b16: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102d1b1a: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102d1b1b: push edi */
    { g->esi = (uint32_t)((uint32_t)(g->ebx + 0x110u)); }   /* 0x102d1b1c: register esi, replayed as the entry ran it */
    { g->edi = (uint32_t)((uint32_t)(g->ebx + 0x328u)); }   /* 0x102d1b22: register edi, replayed as the entry ran it */
    g->ecx = 134u;   /* 0x102d1b28: the value the entry loaded and the decompiler dropped */
    cow_lift_102d1b10(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
