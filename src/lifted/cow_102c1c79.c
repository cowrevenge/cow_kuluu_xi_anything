/* f_0x102c1c79 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c1c79 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c1c79(Guest* g, CowU32 param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 piVar2;
    int iVar3;
    CowU32 pbVar4;
    int iVar5;
    CowU8 bVar6;
    CowU16 uVar7;
    CowU32 puVar8;
    CowU32 puVar9;
    int local_c;
    iVar3 = param_3;
      iVar5 = param_2;
      piVar2 = (CowU32)param_1;
      iVar1 = (int32_t)rd32((uint32_t)param_1);
      if ((char)(int32_t)rd32((uint32_t)((int)param_1 + 8)) == '\0') {
        if (param_3 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = rd16((uint32_t)(param_3 + 8));
        }
        bVar6 = rd8((uint32_t)((int)param_1 + 9));
        if (bVar6 < 8) {
          local_c = iVar1;
          if (bVar6 == 1) {
            uVar7 = uVar7 * 0xff;
            param_1 = (CowU32)(iVar1 + -1 + param_2);
            pbVar4 = (CowU32)((iVar1 - 1U >> 3) + param_2);
            param_2 = 7 - (iVar1 - 1U & 7);
            if (iVar1 != 0) {
              do {
                wr8((uint32_t)param_1, -((rd8((uint32_t)pbVar4) >> ((CowU8)param_2 & 0x1f) & 1) != 0));
                if (param_2 == 7) {
                  param_2 = 0;
                  pbVar4 = pbVar4 + -1;
                }
                else {
                  param_2 = param_2 + 1;
                }
                param_1 = param_1 + -1;
                local_c = local_c + -1;
              } while (local_c != 0);
            }
          }
          else if (bVar6 == 2) {
            uVar7 = uVar7 * 0x55;
            param_1 = (CowU32)(iVar1 + -1 + param_2);
            pbVar4 = (CowU32)((iVar1 - 1U >> 2) + param_2);
            param_2 = (3 - (iVar1 - 1U & 3)) * 2;
            if (iVar1 != 0) {
              do {
                bVar6 = rd8((uint32_t)pbVar4) >> ((CowU8)param_2 & 0x1f) & 3;
                wr8((uint32_t)param_1, ((bVar6 << 2 | bVar6) << 2 | bVar6) << 2 | bVar6);
                if (param_2 == 6) {
                  param_2 = 0;
                  pbVar4 = pbVar4 + -1;
                }
                else {
                  param_2 = param_2 + 2;
                }
                param_1 = param_1 + -1;
                local_c = local_c + -1;
              } while (local_c != 0);
            }
          }
          else if (bVar6 == 4) {
            uVar7 = uVar7 * 0x11;
            param_1 = (CowU32)(iVar1 + -1 + param_2);
            pbVar4 = (CowU32)((iVar1 - 1U >> 1) + param_2);
            if (iVar1 != 0) {
              param_2 = (iVar1 - 1U & 1) * -4 + 4;
              do {
                bVar6 = rd8((uint32_t)pbVar4) >> ((CowU8)param_2 & 0x1f);
                wr8((uint32_t)param_1, bVar6 << 4 | bVar6 & 0xf);
                iVar3 = 4;
                if (param_2 == 4) {
                  iVar3 = 0;
                  pbVar4 = pbVar4 + -1;
                }
                param_1 = param_1 + -1;
                local_c = local_c + -1;
                param_2 = iVar3;
              } while (local_c != 0);
            }
          }
          wr8((uint32_t)((int)piVar2 + 9), 8);
          wr8((uint32_t)((int)piVar2 + 0xb), 8);
          wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), iVar1);
        }
        if (param_3 == 0) {
          return;
        }
        if ((int8_t)rd8((uint32_t)((int)piVar2 + 9)) == '\b') {
          pbVar4 = (CowU32)(iVar1 + -1 + iVar5);
          puVar8 = (CowU32)(iVar5 + -1 + iVar1 * 2);
          if (iVar1 != 0) {
            iVar5 = iVar1;
            do {
              if (rd8((uint32_t)pbVar4) == uVar7) {
                wr8((uint32_t)puVar8, 0);
              }
              else {
                wr8((uint32_t)puVar8, 0xff);
              }
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), rd8((uint32_t)pbVar4));
              puVar8 = puVar8 + -2;
              pbVar4 = pbVar4 + -1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else if ((int8_t)rd8((uint32_t)((int)piVar2 + 9)) == '\x10') {
          puVar8 = (CowU32)(rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) + -1 + iVar5);
          puVar9 = (CowU32)(iVar5 + -1 + rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) * 2);
          if (iVar1 != 0) {
            param_3 = iVar1;
            do {
              if ((((uint32_t)(rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)puVar8)) & 0xffu)) == uVar7) {
                wr8((uint32_t)puVar9, 0);
                wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-1)), 0);
              }
              else {
                wr8((uint32_t)puVar9, 0xff);
                wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-1)), 0xff);
              }
              wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar8));
              wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-1))));
              puVar9 = puVar9 + -4;
              puVar8 = puVar8 + -2;
              param_3 = param_3 + -1;
            } while (param_3 != 0);
          }
        }
        wr8((uint32_t)(piVar2 + 4u * (uint32_t)(2)), 4);
        wr8((uint32_t)((int)piVar2 + 10), 2);
        bVar6 = (int8_t)rd8((uint32_t)((int)piVar2 + 9)) * '\x02';
      }
      else {
        if ((char)(int32_t)rd32((uint32_t)((int)param_1 + 8)) != '\x02') {
          return;
        }
        if (param_3 == 0) {
          return;
        }
        if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          pbVar4 = (CowU32)((int32_t)rd32((uint32_t)((int)param_1 + 4)) + -1 + param_2);
          puVar8 = (CowU32)(param_2 + -1 + iVar1 * 4);
          if (iVar1 != 0) {
            param_3 = iVar1;
            do {
              if ((((CowU16)rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(-2))) == rd16((uint32_t)(iVar3 + 2))) &&
                  ((CowU16)rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(-1))) == rd16((uint32_t)(iVar3 + 4)))) &&
                 ((CowU16)rd8((uint32_t)pbVar4) == rd16((uint32_t)(iVar3 + 6)))) {
                wr8((uint32_t)puVar8, 0);
              }
              else {
                wr8((uint32_t)puVar8, 0xff);
              }
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), rd8((uint32_t)pbVar4));
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-2)), rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(-1))));
              wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-3)), rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(-2))));
              puVar8 = puVar8 + -4;
              pbVar4 = pbVar4 + -3;
              param_3 = param_3 + -1;
            } while (param_3 != 0);
          }
        }
        else if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) == '\x10') {
          puVar8 = (CowU32)((int32_t)rd32((uint32_t)((int)param_1 + 4)) + -1 + param_2);
          puVar9 = (CowU32)(param_2 + -1 + iVar1 * 8);
          if (iVar1 != 0) {
            param_2 = iVar1;
            do {
              if ((((((uint32_t)(rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-5)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-4)))) & 0xffu)) == (int16_t)rd16((uint32_t)(param_3 + 2))) &&
                  ((((uint32_t)(rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-3)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-2)))) & 0xffu)) == (int16_t)rd16((uint32_t)(param_3 + 4)))) &&
                 ((((uint32_t)(rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)puVar8)) & 0xffu)) == (int16_t)rd16((uint32_t)(param_3 + 6)))) {
                wr8((uint32_t)puVar9, 0);
                wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-1)), 0);
              }
              else {
                wr8((uint32_t)puVar9, 0xff);
                wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-1)), 0xff);
              }
              wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar8));
              wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-1))));
              wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-4)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-2))));
              wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-5)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-3))));
              wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-6)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-4))));
              wr8((uint32_t)(puVar9 + 1u * (uint32_t)(-7)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-5))));
              puVar9 = puVar9 + -8;
              puVar8 = puVar8 + -6;
              param_2 = param_2 + -1;
            } while (param_2 != 0);
          }
        }
        wr8((uint32_t)((int)param_1 + 8), 6);
        wr8((uint32_t)((int)param_1 + 10), 4);
        bVar6 = (int8_t)rd8((uint32_t)((int)param_1 + 9)) << 2;
      }
      wr8((uint32_t)((int)piVar2 + 0xb), bVar6);
      wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), (CowU32)bVar6 * iVar1 >> 3);
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
void cow_adapter_102c1c79(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c1c79: push ebp */
    g->ebp = g->esp;                       /* 0x102c1c7a: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102c1c7c: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102c1c7d: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c1c7e: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c1c7f: push esi */
    g->esi = param_2;   /* 0x102c1c80: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c1c83: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102c1c84: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x102c1c87: register eax, replayed as the entry ran it */
    cow_lift_102c1c79(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
