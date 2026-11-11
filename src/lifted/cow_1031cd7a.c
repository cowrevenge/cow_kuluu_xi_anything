/* f_0x1031cd7a - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1031cd7a (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1031cd7a(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    CowU32 piVar2;
    CowU8 bVar3;
    CowU32 pbVar4;
    int iVar5;
    CowU32 uVar6;
    uVar6 = (CowU32)rd8((uint32_t)param_3);
      piVar2 = (CowU32)(param_1 + 0x18 + ((int)param_2 - rd32((uint32_t)(param_1 + 0x10)) >> 0xc) * 8);
      if (param_4 < uVar6) {
        wr8((uint32_t)param_3, (CowU8)param_4);
        wr32((uint32_t)piVar2, rd32((uint32_t)piVar2) + (uVar6 - param_4));
        wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), 0xf1);
      }
      else {
        if (param_4 <= uVar6) {
          g->eax = (CowU32)(0); return;
        }
        pbVar1 = param_3 + param_4;
        if (param_2 + 0x3e < pbVar1) {
          g->eax = (CowU32)(0); return;
        }
        for (pbVar4 = param_3 + uVar6; (pbVar4 < pbVar1 && (rd8((uint32_t)pbVar4) == 0)); pbVar4 = pbVar4 + 1) {
        }
        if (pbVar4 != pbVar1) {
          g->eax = (CowU32)(0); return;
        }
        wr8((uint32_t)param_3, (CowU8)param_4);
        if ((param_3 <= (CowU32)rd32((uint32_t)param_2)) && ((CowU32)rd32((uint32_t)param_2) < pbVar1)) {
          if (pbVar1 < param_2 + 0x3e) {
            iVar5 = 0;
            wr32((uint32_t)param_2, (int)pbVar1);
            bVar3 = rd8((uint32_t)pbVar1);
            while (bVar3 == 0) {
              iVar5 = iVar5 + 1;
              bVar3 = rd8((uint32_t)(pbVar1 + 1u * (uint32_t)(iVar5)));
            }
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(1)), iVar5);
          }
          else {
            wr32((uint32_t)(param_2 + 4u * (uint32_t)(1)), 0);
            wr32((uint32_t)param_2, (int)(param_2 + 2));
          }
        }
        wr32((uint32_t)piVar2, rd32((uint32_t)piVar2) + (uVar6 - param_4));
      }
      g->eax = (CowU32)(1); return;
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
void cow_adapter_1031cd7a(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1031cd7a: push ebp */
    g->ebp = g->esp;                       /* 0x1031cd7b: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1031cd7d: push ecx */
    g->edx = param_4;   /* 0x1031cd7e: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1031cd81: push ebx */
    g->ebx = param_3;   /* 0x1031cd82: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1031cd85: push esi */
    { uint32_t A = (uint32_t)(g->edx); g->ecx = (uint32_t)(rd8(A)); }   /* 0x1031cd86: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1031cd89: push edi */
    g->edi = param_2;   /* 0x1031cd8a: the value the entry loaded and the decompiler dropped */
    cow_lift_1031cd7a(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
