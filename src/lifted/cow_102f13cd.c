/* f_0x102f13cd - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f13cd (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f13cd(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 piVar2;
    CowU8 bVar3;
    int iVar4;
    CowU32 pbVar5;
    CowU16 uVar6;
    CowU32 puVar7;
    CowU32 puVar8;
    int local_10;
    CowU32 local_8;
    piVar2 = param_1;
      iVar1 = rd32((uint32_t)param_1);
      if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) == '\0') {
        uVar6 = 0;
        if (param_3 != 0) {
          uVar6 = rd16((uint32_t)(param_3 + 8));
        }
        bVar3 = rd8((uint32_t)((int)param_1 + 9));
        if (bVar3 < 8) {
          local_10 = iVar1;
          if (bVar3 == 1) {
            uVar6 = uVar6 * 0xff;
            local_8 = (CowU32)(iVar1 + -1 + param_2);
            param_1 = (CowU32)(7 - (iVar1 - 1U & 7));
            pbVar5 = (CowU32)((iVar1 - 1U >> 3) + param_2);
            if (iVar1 != 0) {
              do {
                wr8((uint32_t)local_8, -((rd8((uint32_t)pbVar5) >> ((CowU8)param_1 & 0x1f) & 1) != 0));
                if (param_1 == (CowU32)0x7) {
                  param_1 = (CowU32)0x0;
                  pbVar5 = pbVar5 + -1;
                }
                else {
                  param_1 = (CowU32)((int)param_1 + 1);
                }
                local_8 = local_8 + -1;
                local_10 = local_10 + -1;
              } while (local_10 != 0);
            }
          }
          else if (bVar3 == 2) {
            uVar6 = uVar6 * 0x55;
            local_8 = (CowU32)(iVar1 + -1 + param_2);
            param_1 = (CowU32)((3 - (iVar1 - 1U & 3)) * 2);
            pbVar5 = (CowU32)((iVar1 - 1U >> 2) + param_2);
            if (iVar1 != 0) {
              do {
                bVar3 = rd8((uint32_t)pbVar5) >> ((CowU8)param_1 & 0x1f) & 3;
                wr8((uint32_t)local_8, ((bVar3 << 2 | bVar3) << 2 | bVar3) << 2 | bVar3);
                if (param_1 == (CowU32)0x6) {
                  param_1 = (CowU32)0x0;
                  pbVar5 = pbVar5 + -1;
                }
                else {
                  param_1 = (CowU32)((int)param_1 + 2);
                }
                local_8 = local_8 + -1;
                local_10 = local_10 + -1;
              } while (local_10 != 0);
            }
          }
          else if (bVar3 == 4) {
            uVar6 = uVar6 * 0x11;
            local_8 = (CowU32)(iVar1 + -1 + param_2);
            pbVar5 = (CowU32)((iVar1 - 1U >> 1) + param_2);
            if (iVar1 != 0) {
              param_1 = (CowU32)((iVar1 - 1U & 1) * -4 + 4);
              do {
                bVar3 = rd8((uint32_t)pbVar5) >> ((CowU8)param_1 & 0x1f);
                wr8((uint32_t)local_8, bVar3 << 4 | bVar3 & 0xf);
                iVar4 = 4;
                if (param_1 == (CowU32)0x4) {
                  iVar4 = 0;
                  pbVar5 = pbVar5 + -1;
                }
                local_8 = local_8 + -1;
                local_10 = local_10 + -1;
                param_1 = (CowU32)iVar4;
              } while (local_10 != 0);
            }
          }
          wr8((uint32_t)((int)piVar2 + 9), 8);
          wr8((uint32_t)((int)piVar2 + 0xb), 8);
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), iVar1);
        }
        if (param_3 == 0) {
          return;
        }
        if (rd8((uint32_t)((int)piVar2 + 9)) == '\b') {
          pbVar5 = (CowU32)(iVar1 + -1 + param_2);
          puVar7 = (CowU32)(param_2 + -1 + iVar1 * 2);
          if (iVar1 != 0) {
            iVar4 = iVar1;
            do {
              if (rd8((uint32_t)pbVar5) == uVar6) {
                wr8((uint32_t)puVar7, 0);
              }
              else {
                wr8((uint32_t)puVar7, 0xff);
              }
              wr8((uint32_t)(puVar7 + 1u * (uint32_t)(-1)), rd8((uint32_t)pbVar5));
              puVar7 = puVar7 + -2;
              pbVar5 = pbVar5 + -1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else if (rd8((uint32_t)((int)piVar2 + 9)) == '\x10') {
          puVar7 = (CowU32)(rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) + -1 + param_2);
          puVar8 = (CowU32)(param_2 + -1 + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) * 2);
          if (iVar1 != 0) {
            param_1 = (CowU32)iVar1;
            do {
              if ((((uint32_t)(rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-1)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)puVar7)) & 0xffu)) == uVar6) {
                wr8((uint32_t)puVar8, 0);
                wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), 0);
              }
              else {
                wr8((uint32_t)puVar8, 0xff);
                wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), 0xff);
              }
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar7));
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-1))));
              puVar8 = puVar8 + -4;
              puVar7 = puVar7 + -2;
              param_1 = (CowU32)((int)param_1 + -1);
            } while (param_1 != (CowU32)0x0);
          }
        }
        wr8((uint32_t)(piVar2 + 2), 4);
        wr8((uint32_t)((int)piVar2 + 10), 2);
        bVar3 = rd8((uint32_t)((int)piVar2 + 9)) << 1;
      }
      else {
        if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) != '\x02') {
          return;
        }
        if (param_3 == 0) {
          return;
        }
        if (rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          pbVar5 = (CowU32)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + -1 + param_2);
          puVar7 = (CowU32)(param_2 + -1 + iVar1 * 4);
          if (iVar1 != 0) {
            param_1 = (CowU32)iVar1;
            do {
              if ((((CowU16)rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(-2))) == rd16((uint32_t)(param_3 + 2))) &&
                  ((CowU16)rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(-1))) == rd16((uint32_t)(param_3 + 4)))) &&
                 ((CowU16)rd8((uint32_t)pbVar5) == rd16((uint32_t)(param_3 + 6)))) {
                wr8((uint32_t)puVar7, 0);
              }
              else {
                wr8((uint32_t)puVar7, 0xff);
              }
              wr8((uint32_t)(puVar7 + 1u * (uint32_t)(-1)), rd8((uint32_t)pbVar5));
              wr8((uint32_t)(puVar7 + 1u * (uint32_t)(-2)), rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(-1))));
              wr8((uint32_t)(puVar7 + 1u * (uint32_t)(-3)), rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(-2))));
              puVar7 = puVar7 + -4;
              pbVar5 = pbVar5 + -3;
              param_1 = (CowU32)((int)param_1 + -1);
            } while (param_1 != (CowU32)0x0);
          }
        }
        else if (rd8((uint32_t)((int)param_1 + 9)) == '\x10') {
          puVar7 = (CowU32)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + -1 + param_2);
          puVar8 = (CowU32)(param_2 + -1 + iVar1 * 8);
          if (iVar1 != 0) {
            param_1 = (CowU32)iVar1;
            do {
              if ((((((uint32_t)(rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-5)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-4)))) & 0xffu)) == rd16((uint32_t)(param_3 + 2))) &&
                  ((((uint32_t)(rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-3)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-2)))) & 0xffu)) == rd16((uint32_t)(param_3 + 4)))) &&
                 ((((uint32_t)(rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-1)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)puVar7)) & 0xffu)) == rd16((uint32_t)(param_3 + 6)))) {
                wr8((uint32_t)puVar8, 0);
                wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), 0);
              }
              else {
                wr8((uint32_t)puVar8, 0xff);
                wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), 0xff);
              }
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar7));
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-1))));
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-4)), rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-2))));
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-5)), rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-3))));
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-6)), rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-4))));
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-7)), rd8((uint32_t)(puVar7 + 1u * (uint32_t)(-5))));
              puVar8 = puVar8 + -8;
              puVar7 = puVar7 + -6;
              param_1 = (CowU32)((int)param_1 + -1);
            } while (param_1 != (CowU32)0x0);
          }
        }
        wr8((uint32_t)(piVar2 + 2), 6);
        wr8((uint32_t)((int)piVar2 + 10), 4);
        bVar3 = rd8((uint32_t)((int)piVar2 + 9)) << 2;
      }
      wr8((uint32_t)((int)piVar2 + 0xb), bVar3);
      wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), (CowU32)bVar3 * iVar1 >> 3);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f13cd(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102f13cd: push ebp */
    g->ebp = g->esp;                       /* 0x102f13ce: mov ebp, esp */
    g->esp -= 0xcu;                      /* 0x102f13d0: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102f13d3: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f13d4: push esi */
    g->esi = param_2;   /* 0x102f13d5: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102f13d8: register ecx, replayed as the entry ran it */
    cow_lift_102f13cd(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
