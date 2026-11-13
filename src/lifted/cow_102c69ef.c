/* f_0x102c69ef - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c69ef (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c69ef(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    int iVar3;
    CowU32 uVar4;
    CowU8 bVar5;
    CowU32 uVar6;
    int iVar7;
    int iVar8;
    CowU32 pbVar9;
    if (param_5 != (CowU32)0x0) {
        if (param_5 == (CowU32)0x1) {
          uVar4 = (int)(rd8((uint32_t)(param_2 + 0xb)) + 7) >> 3;
          param_3 = param_3 + uVar4;
          if (uVar4 < rd32((uint32_t)(param_2 + 4))) {
            pbVar9 = param_3 + -uVar4;
            iVar3 = rd32((uint32_t)(param_2 + 4)) - uVar4;
            do {
              wr8((uint32_t)param_3, rd8((uint32_t)param_3) + rd8((uint32_t)pbVar9));
              param_3 = param_3 + 1;
              pbVar9 = pbVar9 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        else if (param_5 == (CowU32)0x2) {
          uVar6 = 0;
          uVar4 = rd32((uint32_t)(param_2 + 4));
          if (uVar4 != 0) {
            do {
              wr8((uint32_t)param_3, rd8((uint32_t)param_3) + rd8((uint32_t)(param_4 + 1u * (uint32_t)(uVar6))));
              param_3 = param_3 + 1;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar4);
          }
        }
        else if (param_5 == (CowU32)0x3) {
          iVar3 = (int)(rd8((uint32_t)(param_2 + 0xb)) + 7) >> 3;
          iVar7 = (int32_t)rd32((uint32_t)(param_2 + 4)) - iVar3;
          pbVar9 = param_3;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            wr8((uint32_t)pbVar9, rd8((uint32_t)pbVar9) + (rd8((uint32_t)param_4) >> 1));
            param_4 = param_4 + 1;
            pbVar9 = pbVar9 + 1;
          }
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            wr8((uint32_t)pbVar9, rd8((uint32_t)pbVar9) + (char)(((CowU32)rd8((uint32_t)param_3) + (CowU32)rd8((uint32_t)param_4)) / 2));
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
            pbVar9 = pbVar9 + 1;
          }
        }
        else if (param_5 == (CowU32)0x4) {
          param_5 = param_3;
          iVar3 = (int)(rd8((uint32_t)(param_2 + 0xb)) + 7) >> 3;
          param_1 = (int32_t)rd32((uint32_t)(param_2 + 4)) - iVar3;
          pbVar9 = param_4;
          if (iVar3 != 0) {
            do {
              wr8((uint32_t)param_5, rd8((uint32_t)param_5) + rd8((uint32_t)pbVar9));
              pbVar9 = pbVar9 + 1;
              param_5 = param_5 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          if (param_1 != 0) {
            do {
              bVar1 = rd8((uint32_t)pbVar9);
              bVar2 = rd8((uint32_t)param_4);
              pbVar9 = pbVar9 + 1;
              param_4 = param_4 + 1;
              iVar3 = (CowU32)bVar1 - (CowU32)bVar2;
              iVar7 = (CowU32)rd8((uint32_t)param_3) - (CowU32)bVar2;
              if (iVar3 < 0) {
                param_2 = -iVar3;
              }
              else {
                param_2 = iVar3;
              }
              iVar8 = iVar7;
              if (iVar7 < 0) {
                iVar8 = -iVar7;
              }
              iVar3 = iVar3 + iVar7;
              if (iVar3 < 0) {
                iVar3 = -iVar3;
              }
              if (((iVar8 < param_2) || (bVar5 = rd8((uint32_t)param_3), iVar3 < param_2)) &&
                 (bVar5 = bVar1, iVar3 < iVar8)) {
                bVar5 = bVar2;
              }
              wr8((uint32_t)param_5, rd8((uint32_t)param_5) + bVar5);
              param_5 = param_5 + 1;
              param_1 = param_1 + -1;
              param_3 = param_3 + 1;
            } while (param_1 != 0);
          }
        }
        else {
          cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C6A27), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C9498) }, param_1, g->edx, ((((g->eax - 1u) - 1u) - 1u) - 1u), 0u);
          wr8((uint32_t)param_3, 0);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c69ef(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c69ef: push ebp */
    g->ebp = g->esp;                       /* 0x102c69f0: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102c69f2: push ecx */
    g->eax = param_6;   /* 0x102c69f3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c69f6: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c69f7: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x102c69f8: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c69fb: push edi */
    cow_lift_102c69ef(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
