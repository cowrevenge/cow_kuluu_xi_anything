/* f_0x102f0e77 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f0e77 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f0e77(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    char cVar2;
    CowU16 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    int iVar8;
    int local_c;
    CowU32 local_8;
    bVar1 = rd8((uint32_t)((int)param_1 + 9));
      iVar8 = rd32((uint32_t)param_1);
      if (((bVar1 < 9) && (param_3 != 0)) || ((bVar1 == 0x10 && (param_4 != 0)))) {
        cVar2 = (char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)));
        if (cVar2 == '\0') {
          if ((bVar1 == 2) && (local_8 = param_2, iVar8 != 0)) {
            local_c = (iVar8 - 1U >> 2) + 1;
            do {
              uVar4 = (CowU32)rd8((uint32_t)local_8);
              uVar6 = uVar4 & 0xc0;
              uVar5 = uVar4 & 3;
              uVar7 = uVar4 & 0xc;
              uVar4 = uVar4 & 0x30;
              local_c = local_c + -1;
              wr8((uint32_t)local_8, (CowU8)((CowU8)(rd8((uint32_t)(((uVar7 << 2 | uVar7) << 2 | (int)uVar7 >> 2 | uVar7) +
                                                param_3)) & 0xcf |
                                      rd8((uint32_t)((((uVar5 << 2 | uVar5) << 2 | uVar5) << 2 | uVar5) +
                                               param_3)) >> 2) >> 2 |
                               rd8((uint32_t)(((int)((int)uVar4 >> 2 | uVar4) >> 2 | uVar4 << 2 | uVar4) +
                                        param_3)) & 0xc3) >> 2 |
                         rd8((uint32_t)(((int)((int)((int)uVar6 >> 2 | uVar6) >> 2 | uVar6) >> 2 | uVar6) +
                                  param_3)) & 0xc0);
              local_8 = local_8 + 1;
            } while (local_c != 0);
          }
          cVar2 = rd8((uint32_t)((int)param_1 + 9));
          if (cVar2 == '\x04') {
            if (iVar8 != 0) {
              iVar8 = (iVar8 - 1U >> 1) + 1;
              do {
                uVar5 = rd8((uint32_t)param_2) & 0xf0;
                uVar4 = rd8((uint32_t)param_2) & 0xf;
                wr8((uint32_t)param_2, rd8((uint32_t)(((int)uVar5 >> 4 | uVar5) + param_3)) & 0xf0 |
                           rd8((uint32_t)((uVar4 << 4 | uVar4) + param_3)) >> 4);
                param_2 = param_2 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
          else if (cVar2 == '\b') {
            if (iVar8 != 0) {
              do {
                wr8((uint32_t)param_2, rd8((uint32_t)((CowU32)rd8((uint32_t)param_2) + param_3)));
                param_2 = param_2 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
          else if (cVar2 == '\x10') {
            for (; iVar8 != 0; iVar8 = iVar8 + -1) {
              uVar3 = rd16((uint32_t)(rd32((uint32_t)(param_4 + (CowU32)(rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))) >> (param_5 & 0x1f)) * 4)) +
                       (CowU32)rd8((uint32_t)param_2) * 2));
              wr8((uint32_t)param_2, (CowU8)((CowU16)uVar3 >> 8));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), (CowU8)uVar3);
              param_2 = param_2 + 2;
            }
          }
        }
        else {
          param_1 = (CowU32)iVar8;
          if (cVar2 == '\x02') {
            if (bVar1 == 8) {
              if (iVar8 != 0) {
                do {
                  wr8((uint32_t)param_2, rd8((uint32_t)((CowU32)rd8((uint32_t)param_2) + param_3)));
                  wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), rd8((uint32_t)((CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))) + param_3)));
                  wr8((uint32_t)(param_2 + 1u * (uint32_t)(2)), rd8((uint32_t)((CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))) + param_3)));
                  param_2 = param_2 + 3;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
            else if (iVar8 != 0) {
              do {
                uVar3 = rd16((uint32_t)(rd32((uint32_t)(param_4 + (CowU32)(rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))) >> (param_5 & 0x1f)) * 4)) +
                         (CowU32)rd8((uint32_t)param_2) * 2));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), (CowU8)uVar3);
                wr8((uint32_t)param_2, (CowU8)((CowU16)uVar3 >> 8));
                uVar3 = rd16((uint32_t)(rd32((uint32_t)(param_4 + (CowU32)(rd8((uint32_t)(param_2 + 1u * (uint32_t)(3))) >> (param_5 & 0x1f)) * 4)) +
                         (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))) * 2));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(3)), (CowU8)uVar3);
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(2)), (CowU8)((CowU16)uVar3 >> 8));
                uVar3 = rd16((uint32_t)(rd32((uint32_t)(param_4 + (CowU32)(rd8((uint32_t)(param_2 + 1u * (uint32_t)(5))) >> (param_5 & 0x1f)) * 4)) +
                         (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(4))) * 2));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(4)), (CowU8)((CowU16)uVar3 >> 8));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(5)), (CowU8)uVar3);
                param_2 = param_2 + 6;
                param_1 = (CowU32)((int)param_1 + -1);
              } while (param_1 != (CowU32)0x0);
            }
          }
          else if (cVar2 == '\x04') {
            if (bVar1 == 8) {
              if (iVar8 != 0) {
                do {
                  wr8((uint32_t)param_2, rd8((uint32_t)((CowU32)rd8((uint32_t)param_2) + param_3)));
                  param_2 = param_2 + 2;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
            else {
              for (; iVar8 != 0; iVar8 = iVar8 + -1) {
                uVar3 = rd16((uint32_t)(rd32((uint32_t)(param_4 + (CowU32)(rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))) >> (param_5 & 0x1f)) * 4)) +
                         (CowU32)rd8((uint32_t)param_2) * 2));
                wr8((uint32_t)param_2, (CowU8)((CowU16)uVar3 >> 8));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), (CowU8)uVar3);
                param_2 = param_2 + 4;
              }
            }
          }
          else if (cVar2 == '\x06') {
            if (bVar1 == 8) {
              if (iVar8 != 0) {
                do {
                  wr8((uint32_t)param_2, rd8((uint32_t)((CowU32)rd8((uint32_t)param_2) + param_3)));
                  wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), rd8((uint32_t)((CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))) + param_3)));
                  wr8((uint32_t)(param_2 + 1u * (uint32_t)(2)), rd8((uint32_t)((CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))) + param_3)));
                  param_2 = param_2 + 4;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
            else if (iVar8 != 0) {
              do {
                uVar3 = rd16((uint32_t)(rd32((uint32_t)(param_4 + (CowU32)(rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))) >> (param_5 & 0x1f)) * 4)) +
                         (CowU32)rd8((uint32_t)param_2) * 2));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), (CowU8)uVar3);
                wr8((uint32_t)param_2, (CowU8)((CowU16)uVar3 >> 8));
                uVar3 = rd16((uint32_t)(rd32((uint32_t)(param_4 + (CowU32)(rd8((uint32_t)(param_2 + 1u * (uint32_t)(3))) >> (param_5 & 0x1f)) * 4)) +
                         (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))) * 2));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(3)), (CowU8)uVar3);
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(2)), (CowU8)((CowU16)uVar3 >> 8));
                uVar3 = rd16((uint32_t)(rd32((uint32_t)(param_4 + (CowU32)(rd8((uint32_t)(param_2 + 1u * (uint32_t)(5))) >> (param_5 & 0x1f)) * 4)) +
                         (CowU32)rd8((uint32_t)(param_2 + 1u * (uint32_t)(4))) * 2));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(4)), (CowU8)((CowU16)uVar3 >> 8));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(5)), (CowU8)uVar3);
                param_2 = param_2 + 8;
                param_1 = (CowU32)((int)param_1 + -1);
              } while (param_1 != (CowU32)0x0);
            }
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f0e77(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102f0e77: push ebp */
    g->ebp = g->esp;                       /* 0x102f0e78: mov ebp, esp */
    g->esp -= 0x14u;                      /* 0x102f0e7a: 20 bytes of locals */
    g->eax = param_4;   /* 0x102f0e7d: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f0e80: push esi */
    g->esi = param_5;   /* 0x102f0e81: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102f0e84: push edi */
    g->edi = param_2;   /* 0x102f0e85: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x9u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102f0e88: register ecx, replayed as the entry ran it */
    cow_lift_102f0e77(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
