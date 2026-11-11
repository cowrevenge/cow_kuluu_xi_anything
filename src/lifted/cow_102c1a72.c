/* f_0x102c1a72 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c1a72 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c1a72(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 pbVar6;
    CowU32 uVar7;
    CowU32 local_8;
    iVar4 = (int)param_2;
      puVar3 = param_1;
      uVar2 = rd32((uint32_t)param_1);
      if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) == '\x03') {
        bVar1 = rd8((uint32_t)((int)param_1 + 9));
        if (bVar1 < 8) {
          local_8 = uVar2;
          if (bVar1 == 1) {
            pbVar6 = (CowU32)((uVar2 - 1 >> 3) + (int)param_2);
            param_1 = (CowU32)(7 - (uVar2 - 1 & 7));
            if (uVar2 != 0) {
              param_2 = (CowU32)((uVar2 - 1) + (int)param_2);
              do {
                wr8((uint32_t)param_2, rd8((uint32_t)pbVar6) >> ((CowU8)param_1 & 0x1f) & 1);
                if (param_1 == (CowU32)0x7) {
                  param_1 = (CowU32)0x0;
                  pbVar6 = pbVar6 + -1;
                }
                else {
                  param_1 = (CowU32)((int)param_1 + 1);
                }
                param_2 = param_2 + -1;
                local_8 = local_8 - 1;
              } while (local_8 != 0);
            }
          }
          else if (bVar1 == 2) {
            pbVar6 = (CowU32)((uVar2 - 1 >> 2) + (int)param_2);
            param_1 = (CowU32)((3 - (uVar2 - 1 & 3)) * 2);
            if (uVar2 != 0) {
              param_2 = (CowU32)((uVar2 - 1) + (int)param_2);
              do {
                wr8((uint32_t)param_2, rd8((uint32_t)pbVar6) >> ((CowU8)param_1 & 0x1f) & 3);
                if (param_1 == (CowU32)0x6) {
                  param_1 = (CowU32)0x0;
                  pbVar6 = pbVar6 + -1;
                }
                else {
                  param_1 = (CowU32)((int)param_1 + 2);
                }
                param_2 = param_2 + -1;
                local_8 = local_8 - 1;
              } while (local_8 != 0);
            }
          }
          else if (bVar1 == 4) {
            pbVar6 = (CowU32)((uVar2 - 1 >> 1) + (int)param_2);
            param_1 = (CowU32)((uVar2 & 1) << 2);
            if (uVar2 != 0) {
              param_2 = (CowU32)((uVar2 - 1) + (int)param_2);
              do {
                wr8((uint32_t)param_2, rd8((uint32_t)pbVar6) >> ((CowU8)param_1 & 0x1f) & 0xf);
                if (param_1 == (CowU32)0x4) {
                  param_1 = (CowU32)0x0;
                  pbVar6 = pbVar6 + -1;
                }
                else {
                  param_1 = (CowU32)((int)param_1 + 4);
                }
                param_2 = param_2 + -1;
                local_8 = local_8 - 1;
              } while (local_8 != 0);
            }
          }
          wr8((uint32_t)((int)puVar3 + 9), 8);
          wr8((uint32_t)((int)puVar3 + 0xb), 8);
          wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), uVar2);
        }
        if (rd8((uint32_t)((int)puVar3 + 9)) == '\b') {
          pbVar6 = (CowU32)((uVar2 - 1) + iVar4);
          if (param_4 == 0) {
            uVar7 = uVar2 * 3;
            puVar5 = (CowU32)((uVar7 - 1) + iVar4);
            if (uVar2 != 0) {
              param_4 = uVar2;
              do {
                wr8((uint32_t)puVar5, rd8((uint32_t)((CowU32)rd8((uint32_t)pbVar6) * 3 + 2 + param_3)));
                wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-1)), rd8((uint32_t)((CowU32)rd8((uint32_t)pbVar6) * 3 + 1 + param_3)));
                wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-2)), rd8((uint32_t)(param_3 + (CowU32)rd8((uint32_t)pbVar6) * 3)));
                puVar5 = puVar5 + -3;
                pbVar6 = pbVar6 + -1;
                param_4 = param_4 - 1;
              } while (param_4 != 0);
            }
            wr8((uint32_t)((int)puVar3 + 0xb), 0x18);
            wr8((uint32_t)(puVar3 + 2), 2);
            wr8((uint32_t)((int)puVar3 + 10), 3);
          }
          else {
            uVar7 = uVar2 * 4;
            puVar5 = (CowU32)((uVar7 - 1) + iVar4);
            if (uVar2 != 0) {
              param_1 = (CowU32)uVar2;
              do {
                if ((int)(CowU32)rd8((uint32_t)pbVar6) < param_5) {
                  wr8((uint32_t)puVar5, rd8((uint32_t)(rd8((uint32_t)pbVar6) + param_4)));
                }
                else {
                  wr8((uint32_t)puVar5, 0xff);
                }
                wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-1)), rd8((uint32_t)((CowU32)rd8((uint32_t)pbVar6) * 3 + 2 + param_3)));
                wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-2)), rd8((uint32_t)((CowU32)rd8((uint32_t)pbVar6) * 3 + 1 + param_3)));
                wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-3)), rd8((uint32_t)(param_3 + (CowU32)rd8((uint32_t)pbVar6) * 3)));
                puVar5 = puVar5 + -4;
                pbVar6 = pbVar6 + -1;
                param_1 = (CowU32)((int)param_1 - 1);
              } while (param_1 != (CowU32)0x0);
            }
            wr8((uint32_t)((int)puVar3 + 0xb), 0x20);
            wr8((uint32_t)(puVar3 + 2), 6);
            wr8((uint32_t)((int)puVar3 + 10), 4);
          }
          wr8((uint32_t)((int)puVar3 + 9), 8);
          wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), uVar7);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c1a72(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c1a72: push ebp */
    g->ebp = g->esp;                       /* 0x102c1a73: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102c1a75: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c1a76: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c1a77: push esi */
    g->esi = param_2;   /* 0x102c1a78: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c1a7b: push edi */
    cow_lift_102c1a72(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
