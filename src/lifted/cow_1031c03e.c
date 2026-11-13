/* f_0x1031c03e - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1031c03e (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1031c03e(Guest* g, CowU32 param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    int iVar2;
    CowU32 piVar3;
    int iVar4;
    char cVar5;
    CowU32 uVar6;
    int iVar7;
    CowU32 puVar8;
    CowU32 uVar9;
    CowU32 uVar10;
    CowU32 uVar11;
    CowU32 uVar12;
    CowU32 local_c;
    uVar6 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(4)));
      uVar11 = param_3 + 0x17U & 0xfffffff0;
      uVar9 = param_2 - rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))) >> 0xf;
      iVar4 = uVar9 * 0x204 + 0x144 + uVar6;
      iVar7 = (int32_t)rd32((uint32_t)(param_2 + -4));
      param_3 = iVar7 + -1;
      uVar12 = rd32((uint32_t)(iVar7 + -5 + param_2));
      iVar7 = iVar7 + -5 + param_2;
      if (param_3 < (int)uVar11) {
        if (((uVar12 & 1) != 0) || ((int)(uVar12 + param_3) < (int)uVar11)) {
          g->eax = (CowU32)(0); return;
        }
        local_c = ((int)uVar12 >> 4) - 1;
        if (0x3f < local_c) {
          local_c = 0x3f;
        }
        if ((int32_t)rd32((uint32_t)(iVar7 + 4)) == (int32_t)rd32((uint32_t)(iVar7 + 8))) {
          if (local_c < 0x20) {
            pcVar1 = (CowU32)(local_c + 4 + uVar6);
            uVar10 = ~(0x80000000U >> ((CowU8)local_c & 0x1f));
            puVar8 = (CowU32)(uVar6 + 0x44 + uVar9 * 4);
            wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) & uVar10);
            wr8((uint32_t)pcVar1, rd8((uint32_t)pcVar1) + -1);
            if (rd8((uint32_t)pcVar1) == '\0') {
              wr32((uint32_t)param_1, rd32((uint32_t)param_1) & uVar10);
            }
          }
          else {
            pcVar1 = (CowU32)(local_c + 4 + uVar6);
            uVar10 = ~(0x80000000U >> ((CowU8)local_c - 0x20 & 0x1f));
            puVar8 = (CowU32)(uVar6 + 0xc4 + uVar9 * 4);
            wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) & uVar10);
            wr8((uint32_t)pcVar1, rd8((uint32_t)pcVar1) + -1);
            if (rd8((uint32_t)pcVar1) == '\0') {
              wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) & uVar10);
            }
          }
        }
        wr32((uint32_t)((int32_t)rd32((uint32_t)(iVar7 + 8)) + 4), rd32((uint32_t)(iVar7 + 4)));
        wr32((uint32_t)((int32_t)rd32((uint32_t)(iVar7 + 4)) + 8), rd32((uint32_t)(iVar7 + 8)));
        iVar7 = uVar12 + (param_3 - uVar11);
        if (0 < iVar7) {
          uVar12 = (iVar7 >> 4) - 1;
          iVar2 = param_2 + -4 + uVar11;
          if (0x3f < uVar12) {
            uVar12 = 0x3f;
          }
          iVar4 = iVar4 + uVar12 * 8;
          wr32((uint32_t)(iVar2 + 4), rd32((uint32_t)(iVar4 + 4)));
          wr32((uint32_t)(iVar2 + 8), iVar4);
          wr32((uint32_t)(iVar4 + 4), iVar2);
          wr32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 4)) + 8), iVar2);
          if ((int32_t)rd32((uint32_t)(iVar2 + 4)) == (int32_t)rd32((uint32_t)(iVar2 + 8))) {
            cVar5 = (int8_t)rd8((uint32_t)(uVar12 + 4 + uVar6));
            wr8((uint32_t)(uVar12 + 4 + uVar6), cVar5 + '\x01');
            if (uVar12 < 0x20) {
              if (cVar5 == '\0') {
                wr32((uint32_t)param_1, rd32((uint32_t)param_1) | 0x80000000U >> ((CowU8)uVar12 & 0x1f));
              }
              puVar8 = (CowU32)(uVar6 + 0x44 + uVar9 * 4);
            }
            else {
              if (cVar5 == '\0') {
                wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) | 0x80000000U >> ((CowU8)uVar12 - 0x20 & 0x1f));
              }
              puVar8 = (CowU32)(uVar6 + 0xc4 + uVar9 * 4);
              uVar12 = uVar12 - 0x20;
            }
            wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) | 0x80000000U >> ((CowU8)uVar12 & 0x1f));
          }
          piVar3 = (CowU32)(param_2 + -4 + uVar11);
          wr32((uint32_t)piVar3, iVar7);
          wr32((uint32_t)(iVar7 + -4 + (int)piVar3), iVar7);
        }
        wr32((uint32_t)(param_2 + -4), uVar11 + 1);
        wr32((uint32_t)(param_2 + -8 + uVar11), uVar11 + 1);
      }
      else if ((int)uVar11 < param_3) {
        param_3 = param_3 - uVar11;
        wr32((uint32_t)(param_2 + -4), uVar11 + 1);
        piVar3 = (CowU32)(param_2 + -4 + uVar11);
        uVar10 = (param_3 >> 4) - 1;
        wr32((uint32_t)(piVar3 + 4u * (uint32_t)(-1)), uVar11 + 1);
        if (0x3f < uVar10) {
          uVar10 = 0x3f;
        }
        if ((uVar12 & 1) == 0) {
          uVar11 = ((int)uVar12 >> 4) - 1;
          if (0x3f < uVar11) {
            uVar11 = 0x3f;
          }
          if ((int32_t)rd32((uint32_t)(iVar7 + 4)) == (int32_t)rd32((uint32_t)(iVar7 + 8))) {
            if (uVar11 < 0x20) {
              pcVar1 = (CowU32)(uVar11 + 4 + uVar6);
              uVar11 = ~(0x80000000U >> ((CowU8)uVar11 & 0x1f));
              puVar8 = (CowU32)(uVar6 + 0x44 + uVar9 * 4);
              wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) & uVar11);
              wr8((uint32_t)pcVar1, rd8((uint32_t)pcVar1) + -1);
              if (rd8((uint32_t)pcVar1) == '\0') {
                wr32((uint32_t)param_1, rd32((uint32_t)param_1) & uVar11);
              }
            }
            else {
              pcVar1 = (CowU32)(uVar11 + 4 + uVar6);
              uVar11 = ~(0x80000000U >> ((CowU8)uVar11 - 0x20 & 0x1f));
              puVar8 = (CowU32)(uVar6 + 0xc4 + uVar9 * 4);
              wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) & uVar11);
              wr8((uint32_t)pcVar1, rd8((uint32_t)pcVar1) + -1);
              if (rd8((uint32_t)pcVar1) == '\0') {
                wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) & uVar11);
              }
            }
          }
          wr32((uint32_t)((int32_t)rd32((uint32_t)(iVar7 + 8)) + 4), rd32((uint32_t)(iVar7 + 4)));
          wr32((uint32_t)((int32_t)rd32((uint32_t)(iVar7 + 4)) + 8), rd32((uint32_t)(iVar7 + 8)));
          param_3 = param_3 + uVar12;
          uVar10 = (param_3 >> 4) - 1;
          if (0x3f < uVar10) {
            uVar10 = 0x3f;
          }
        }
        iVar7 = iVar4 + uVar10 * 8;
        wr32((uint32_t)(piVar3 + 4u * (uint32_t)(1)), (int32_t)rd32((uint32_t)(iVar4 + 4 + uVar10 * 8)));
        wr32((uint32_t)(piVar3 + 4u * (uint32_t)(2)), iVar7);
        wr32((uint32_t)(iVar7 + 4), piVar3);
        wr32((uint32_t)(rd32((uint32_t)(piVar3 + 4u * (uint32_t)(1))) + 8), piVar3);
        if (rd32((uint32_t)(piVar3 + 4u * (uint32_t)(1))) == rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2)))) {
          cVar5 = (int8_t)rd8((uint32_t)(uVar10 + 4 + uVar6));
          wr8((uint32_t)(uVar10 + 4 + uVar6), cVar5 + '\x01');
          if (uVar10 < 0x20) {
            if (cVar5 == '\0') {
              wr32((uint32_t)param_1, rd32((uint32_t)param_1) | 0x80000000U >> ((CowU8)uVar10 & 0x1f));
            }
            puVar8 = (CowU32)(uVar6 + 0x44 + uVar9 * 4);
          }
          else {
            if (cVar5 == '\0') {
              wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) | 0x80000000U >> ((CowU8)uVar10 - 0x20 & 0x1f));
            }
            puVar8 = (CowU32)(uVar6 + 0xc4 + uVar9 * 4);
            uVar10 = uVar10 - 0x20;
          }
          wr32((uint32_t)puVar8, rd32((uint32_t)puVar8) | 0x80000000U >> ((CowU8)uVar10 & 0x1f));
        }
        wr32((uint32_t)piVar3, param_3);
        wr32((uint32_t)(param_3 + -4 + (int)piVar3), param_3);
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [eax, edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1031c03e(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1031c03e: push ebp */
    g->ebp = g->esp;                       /* 0x1031c03f: mov ebp, esp */
    g->esp -= 0xcu;                      /* 0x1031c041: 12 bytes of locals */
    g->ecx = param_1;   /* 0x1031c044: the value the entry loaded and the decompiler dropped */
    g->eax = param_3;   /* 0x1031c047: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1031c04a: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1031c04b: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1031c04c: push edi */
    g->edi = param_2;   /* 0x1031c04d: the value the entry loaded and the decompiler dropped */
    g->edx = g->edi;   /* 0x1031c050: the value the entry loaded and the decompiler dropped */
    { g->esi = (uint32_t)((uint32_t)(g->eax + 0x17u)); }   /* 0x1031c052: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0xCu); uint32_t a = g->edx; uint32_t b = (uint32_t)rd32(A); uint32_t r = (uint32_t)(a - b); g->edx = (uint32_t)(r); }   /* 0x1031c055: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x10u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1031c058: register eax, replayed as the entry ran it */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)0xFFFFFFF0u; uint32_t r = (uint32_t)(a & b); g->esi = (uint32_t)(r); }   /* 0x1031c05b: register esi, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0xFu) & 31u; if (c) { uint32_t a = g->edx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->edx = (uint32_t)(r); } }; }   /* 0x1031c05e: register edx, replayed as the entry ran it */
    g->ecx = g->edx;   /* 0x1031c061: the value the entry loaded and the decompiler dropped */
    cow_lift_1031c03e(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->eax = v; } /* pop eax */
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
