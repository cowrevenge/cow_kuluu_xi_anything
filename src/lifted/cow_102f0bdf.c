/* f_0x102f0bdf - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f0bdf (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f0bdf(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    CowU8 uVar5;
    CowU8 bVar6;
    CowU32 uVar7;
    CowU32 puVar8;
    puVar1 = param_1;
      uVar2 = rd32((uint32_t)param_1);
      uVar7 = param_3 >> 8;
      bVar6 = (CowU8)(param_3 >> 8);
      uVar5 = (CowU8)param_3;
      param_3 = uVar2;
      if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) == '\0') {
        if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          puVar3 = (CowU32)(param_2 + uVar2);
          puVar8 = puVar3 + uVar2;
          if ((param_4 & 0x80) == 0) {
            if (uVar2 != 0) {
              param_1 = (CowU32)uVar2;
              do {
                puVar3 = puVar3 + -1;
                wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), rd8((uint32_t)puVar3));
                puVar8 = puVar8 + -2;
                param_1 = (CowU32)((int)param_1 - 1);
                wr8((uint32_t)puVar8, uVar5);
              } while (param_1 != (CowU32)0x0);
            }
          }
          else {
            if (1 < uVar2) {
              param_1 = (CowU32)(uVar2 - 1);
              do {
                puVar3 = puVar3 + -1;
                wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), uVar5);
                puVar8 = puVar8 + -2;
                param_1 = (CowU32)((int)param_1 + -1);
                wr8((uint32_t)puVar8, rd8((uint32_t)puVar3));
              } while (param_1 != (CowU32)0x0);
            }
            wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), uVar5);
          }
          wr8((uint32_t)((int)puVar1 + 10), 2);
          wr8((uint32_t)((int)puVar1 + 0xb), 0x10);
          uVar2 = uVar2 * 2;
        }
        else {
          if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) != '\x10') {
            return;
          }
          if ((param_4 & 0x80) == 0) {
            param_1 = (CowU32)(uVar2 + param_2);
            puVar8 = (CowU32)((int)param_1 + uVar2);
            if (uVar2 != 0) {
              do {
                puVar3 = (CowU32)((int)param_1 + -1);
                param_1 = (CowU32)((int)param_1 + -2);
                wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-1)), rd8((uint32_t)puVar3));
                wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-2)), rd8((uint32_t)param_1));
                wr8((uint32_t)(puVar8 + 1u * (uint32_t)(-3)), bVar6);
                puVar8 = puVar8 + -4;
                param_3 = param_3 - 1;
                wr8((uint32_t)puVar8, uVar5);
              } while (param_3 != 0);
            }
          }
          else {
            puVar8 = (CowU32)(param_2 + uVar2);
            puVar3 = puVar8 + uVar2;
            if (1 < uVar2) {
              param_3 = uVar2 - 1;
              do {
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)), (char)uVar7);
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-2)), uVar5);
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-1))));
                puVar8 = puVar8 + -2;
                puVar3 = puVar3 + -4;
                param_3 = param_3 + -1;
                wr8((uint32_t)puVar3, rd8((uint32_t)puVar8));
                uVar7 = (CowU32)bVar6;
              } while (param_3 != 0);
            }
            wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)), bVar6);
            wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-2)), uVar5);
          }
          wr8((uint32_t)((int)puVar1 + 10), 2);
          wr8((uint32_t)((int)puVar1 + 0xb), 0x20);
          uVar2 = uVar2 << 2;
        }
      }
      else {
        if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) != '\x02') {
          return;
        }
        if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          if ((param_4 & 0x80) == 0) {
            puVar8 = (CowU32)(param_2 + uVar2 * 3);
            puVar3 = puVar8 + uVar2;
            if (uVar2 != 0) {
              param_1 = (CowU32)uVar2;
              do {
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-1))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-2)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-2))));
                puVar8 = puVar8 + -3;
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-3)), rd8((uint32_t)puVar8));
                puVar3 = puVar3 + -4;
                param_1 = (CowU32)((int)param_1 - 1);
                wr8((uint32_t)puVar3, uVar5);
              } while (param_1 != (CowU32)0x0);
            }
          }
          else {
            puVar8 = (CowU32)(param_2 + uVar2 * 3);
            puVar3 = puVar8 + uVar2;
            if (1 < uVar2) {
              param_1 = (CowU32)(uVar2 - 1);
              do {
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)), uVar5);
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-2)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-1))));
                puVar4 = puVar8 + -2;
                puVar8 = puVar8 + -3;
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-3)), rd8((uint32_t)puVar4));
                puVar3 = puVar3 + -4;
                param_1 = (CowU32)((int)param_1 + -1);
                wr8((uint32_t)puVar3, rd8((uint32_t)puVar8));
              } while (param_1 != (CowU32)0x0);
            }
            wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)), uVar5);
          }
          wr8((uint32_t)((int)puVar1 + 0xb), 0x20);
          uVar2 = uVar2 << 2;
        }
        else {
          if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) != '\x10') {
            return;
          }
          puVar8 = (CowU32)(param_2 + uVar2 * 3);
          puVar3 = puVar8 + uVar2;
          if ((param_4 & 0x80) == 0) {
            if (uVar2 != 0) {
              do {
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-1))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-2)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-2))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-3))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-4)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-4))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-5)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-5))));
                puVar8 = puVar8 + -6;
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-6)), rd8((uint32_t)puVar8));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-7)), bVar6);
                puVar3 = puVar3 + -8;
                param_3 = param_3 - 1;
                wr8((uint32_t)puVar3, uVar5);
              } while (param_3 != 0);
            }
          }
          else {
            if (1 < uVar2) {
              param_3 = uVar2 - 1;
              do {
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)), bVar6);
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-2)), uVar5);
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-1))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-4)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-2))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-5)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-3))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-6)), rd8((uint32_t)(puVar8 + 1u * (uint32_t)(-4))));
                puVar4 = puVar8 + -5;
                puVar8 = puVar8 + -6;
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-7)), rd8((uint32_t)puVar4));
                puVar3 = puVar3 + -8;
                param_3 = param_3 + -1;
                wr8((uint32_t)puVar3, rd8((uint32_t)puVar8));
              } while (param_3 != 0);
            }
            wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)), bVar6);
            wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-2)), uVar5);
          }
          wr8((uint32_t)((int)param_1 + 0xb), 0x40);
          uVar2 = uVar2 << 3;
        }
        wr8((uint32_t)((int)puVar1 + 10), 4);
      }
      wr32((uint32_t)(puVar1 + 4u * (uint32_t)(1)), uVar2);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f0bdf(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102f0bdf: push ebp */
    g->ebp = g->esp;                       /* 0x102f0be0: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102f0be2: push ecx */
    g->edx = param_4;   /* 0x102f0be3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102f0be6: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102f0be7: push esi */
    g->esi = param_2;   /* 0x102f0be8: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102f0beb: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x102f0bee: register eax, replayed as the entry ran it */
    g->ebx = g->edx;   /* 0x102f0bf0: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x8u) & 31u; if (c) { uint32_t a = g->ebx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ebx = (uint32_t)(r); } }; }   /* 0x102f0bf2: register ebx, replayed as the entry ran it */
    cow_lift_102f0bdf(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->edx = (CowU32)(param_4);   /* what edx holds at every ret of the entry */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
