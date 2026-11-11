/* f_0x102bff09 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102bff09 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102bff09(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    CowU8 uVar3;
    CowU8 bVar4;
    CowU32 uVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    uVar1 = rd32((uint32_t)param_1);
      bVar4 = (CowU8)(param_3 >> 8);
      uVar3 = (CowU8)param_3;
      if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) == '\0') {
        if (rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          puVar2 = (CowU32)((int)param_2 + uVar1);
          puVar6 = puVar2 + uVar1;
          if ((param_4 & 0x80) == 0) {
            if (uVar1 != 0) {
              param_2 = (CowU32)uVar1;
              do {
                puVar2 = puVar2 + -1;
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-1)), rd8((uint32_t)puVar2));
                puVar6 = puVar6 + -2;
                param_2 = (CowU32)((int)param_2 - 1);
                wr8((uint32_t)puVar6, uVar3);
              } while (param_2 != (CowU32)0x0);
            }
          }
          else {
            if (1 < uVar1) {
              param_2 = (CowU32)(uVar1 - 1);
              do {
                puVar2 = puVar2 + -1;
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-1)), uVar3);
                puVar6 = puVar6 + -2;
                param_2 = (CowU32)((int)param_2 + -1);
                wr8((uint32_t)puVar6, rd8((uint32_t)puVar2));
              } while (param_2 != (CowU32)0x0);
            }
            wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-1)), uVar3);
          }
          wr8((uint32_t)((int)param_1 + 10), 2);
          wr8((uint32_t)((int)param_1 + 0xb), 0x10);
          uVar1 = uVar1 * 2;
        }
        else {
          if (rd8((uint32_t)((int)param_1 + 9)) != '\x10') {
            return;
          }
          if ((param_4 & 0x80) == 0) {
            param_2 = (CowU32)(uVar1 + (int)param_2);
            puVar6 = param_2 + uVar1;
            if (uVar1 != 0) {
              param_4 = uVar1;
              do {
                puVar2 = param_2 + -1;
                param_2 = param_2 + -2;
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-1)), rd8((uint32_t)puVar2));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-2)), rd8((uint32_t)param_2));
                wr8((uint32_t)(puVar6 + 1u * (uint32_t)(-3)), bVar4);
                puVar6 = puVar6 + -4;
                param_4 = param_4 - 1;
                wr8((uint32_t)puVar6, uVar3);
              } while (param_4 != 0);
            }
          }
          else {
            puVar6 = (CowU32)((int)param_2 + uVar1);
            puVar2 = puVar6 + uVar1;
            if (1 < uVar1) {
              param_2 = (CowU32)(uVar1 - 1);
              uVar5 = param_3 >> 8;
              do {
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), (char)uVar5);
                puVar7 = puVar6 + -1;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-2)), uVar3);
                puVar6 = puVar6 + -2;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-3)), rd8((uint32_t)puVar7));
                puVar2 = puVar2 + -4;
                param_2 = (CowU32)((int)param_2 + -1);
                wr8((uint32_t)puVar2, rd8((uint32_t)puVar6));
                uVar5 = (CowU32)bVar4;
              } while (param_2 != (CowU32)0x0);
            }
            wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), bVar4);
            wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-2)), uVar3);
          }
          wr8((uint32_t)((int)param_1 + 10), 2);
          wr8((uint32_t)((int)param_1 + 0xb), 0x20);
          uVar1 = uVar1 << 2;
        }
      }
      else {
        if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) != '\x02') {
          return;
        }
        if (rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          if ((param_4 & 0x80) == 0) {
            puVar6 = (CowU32)((int)param_2 + uVar1 * 3);
            puVar2 = puVar6 + uVar1;
            if (uVar1 != 0) {
              param_2 = (CowU32)uVar1;
              do {
                puVar7 = puVar6 + -2;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-1))));
                puVar6 = puVar6 + -3;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar7));
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-3)), rd8((uint32_t)puVar6));
                puVar2 = puVar2 + -4;
                param_2 = (CowU32)((int)param_2 - 1);
                wr8((uint32_t)puVar2, uVar3);
              } while (param_2 != (CowU32)0x0);
            }
          }
          else {
            puVar6 = (CowU32)((int)param_2 + uVar1 * 3);
            puVar2 = puVar6 + uVar1;
            if (1 < uVar1) {
              param_2 = (CowU32)(uVar1 - 1);
              do {
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), uVar3);
                puVar7 = puVar6 + -2;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-2)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-1))));
                puVar6 = puVar6 + -3;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-3)), rd8((uint32_t)puVar7));
                puVar2 = puVar2 + -4;
                param_2 = (CowU32)((int)param_2 + -1);
                wr8((uint32_t)puVar2, rd8((uint32_t)puVar6));
              } while (param_2 != (CowU32)0x0);
            }
            wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), uVar3);
          }
          wr8((uint32_t)((int)param_1 + 0xb), 0x20);
          uVar1 = uVar1 << 2;
        }
        else {
          if (rd8((uint32_t)((int)param_1 + 9)) != '\x10') {
            return;
          }
          puVar6 = (CowU32)((int)param_2 + uVar1 * 3);
          puVar2 = puVar6 + uVar1;
          if ((param_4 & 0x80) == 0) {
            if (uVar1 != 0) {
              param_2 = (CowU32)uVar1;
              do {
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-1))));
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-2)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-2))));
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-3))));
                puVar7 = puVar6 + -5;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-4)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-4))));
                puVar6 = puVar6 + -6;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-5)), rd8((uint32_t)puVar7));
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-6)), rd8((uint32_t)puVar6));
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-7)), bVar4);
                puVar2 = puVar2 + -8;
                param_2 = (CowU32)((int)param_2 - 1);
                wr8((uint32_t)puVar2, uVar3);
              } while (param_2 != (CowU32)0x0);
            }
          }
          else {
            if (1 < uVar1) {
              param_2 = (CowU32)(uVar1 - 1);
              do {
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), bVar4);
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-2)), uVar3);
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-1))));
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-4)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-2))));
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-5)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-3))));
                puVar7 = puVar6 + -5;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-6)), rd8((uint32_t)(puVar6 + 1u * (uint32_t)(-4))));
                puVar6 = puVar6 + -6;
                wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-7)), rd8((uint32_t)puVar7));
                puVar2 = puVar2 + -8;
                param_2 = (CowU32)((int)param_2 + -1);
                wr8((uint32_t)puVar2, rd8((uint32_t)puVar6));
              } while (param_2 != (CowU32)0x0);
            }
            wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-1)), bVar4);
            wr8((uint32_t)(puVar2 + 1u * (uint32_t)(-2)), uVar3);
          }
          wr8((uint32_t)((int)param_1 + 0xb), 0x40);
          uVar1 = uVar1 << 3;
        }
        wr8((uint32_t)((int)param_1 + 10), 4);
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), uVar1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebp, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102bff09(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102bff09: push ebp */
    g->ebp = g->esp;                       /* 0x102bff0a: mov ebp, esp */
    g->edx = param_4;   /* 0x102bff0c: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102bff0f: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102bff10: push esi */
    g->esi = param_2;   /* 0x102bff11: the value the entry loaded and the decompiler dropped */
    g->ebx = g->edx;   /* 0x102bff14: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102bff16: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102bff17: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x102bff1a: register eax, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x8u) & 31u; if (c) { uint32_t a = g->ebx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ebx = (uint32_t)(r); } }; }   /* 0x102bff1c: register ebx, replayed as the entry ran it */
    cow_lift_102bff09(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
