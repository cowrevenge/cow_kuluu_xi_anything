/* f_0x102c1fcc - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c1fcc (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c1fcc(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 bVar2;
    CowU32 piVar3;
    int iVar4;
    CowU32 pbVar5;
    CowU32 pbVar6;
    CowU32 pbVar7;
    piVar3 = param_1;
      cVar1 = (char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)));
      iVar4 = rd32((uint32_t)param_1);
      if (((cVar1 == '\x02') && (param_3 != 0)) && ((int8_t)rd8((uint32_t)((int)param_1 + 9)) == '\b')) {
        if (iVar4 != 0) {
          pbVar7 = param_2;
          param_1 = (CowU32)iVar4;
          do {
            bVar2 = rd8((uint32_t)pbVar7);
            pbVar5 = pbVar7 + 1;
            pbVar6 = pbVar7 + 2;
            pbVar7 = pbVar7 + 3;
            param_1 = (CowU32)((int)param_1 + -1);
            wr8((uint32_t)param_2, rd8((uint32_t)((((bVar2 & 0xf8) << 5 | rd8((uint32_t)pbVar5) & 0xf8) << 2 | (int)(CowU32)rd8((uint32_t)pbVar6) >> 3)
                                + param_3)));
            param_2 = param_2 + 1;
          } while (param_1 != (CowU32)0x0);
        }
      }
      else {
        if (((cVar1 != '\x06') || (param_3 == 0)) || ((int8_t)rd8((uint32_t)((int)param_1 + 9)) != '\b')) {
          if (cVar1 != '\x03') {
            return;
          }
          if (param_4 == 0) {
            return;
          }
          if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) != '\b') {
            return;
          }
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            wr8((uint32_t)param_2, rd8((uint32_t)((CowU32)rd8((uint32_t)param_2) + param_4)));
            param_2 = param_2 + 1;
          }
          return;
        }
        if (iVar4 != 0) {
          pbVar7 = param_2;
          param_1 = (CowU32)iVar4;
          do {
            bVar2 = rd8((uint32_t)pbVar7);
            pbVar5 = pbVar7 + 1;
            pbVar6 = pbVar7 + 2;
            pbVar7 = pbVar7 + 4;
            param_1 = (CowU32)((int)param_1 + -1);
            wr8((uint32_t)param_2, rd8((uint32_t)((((bVar2 & 0xf8) << 5 | rd8((uint32_t)pbVar5) & 0xf8) << 2 | (int)(CowU32)rd8((uint32_t)pbVar6) >> 3)
                                + param_3)));
            param_2 = param_2 + 1;
          } while (param_1 != (CowU32)0x0);
        }
      }
      wr8((uint32_t)(piVar3 + 4u * (uint32_t)(2)), 3);
      wr8((uint32_t)((int)piVar3 + 0xb), rd8((uint32_t)((int)piVar3 + 9)));
      wr8((uint32_t)((int)piVar3 + 10), 1);
      wr32((uint32_t)(piVar3 + 4u * (uint32_t)(1)), (CowU32)rd8((uint32_t)((int)piVar3 + 9)) * iVar4 + 7 >> 3);
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
void cow_adapter_102c1fcc(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c1fcc: push ebp */
    g->ebp = g->esp;                       /* 0x102c1fcd: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102c1fcf: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c1fd0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c1fd1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c1fd2: push edi */
    g->edi = param_2;   /* 0x102c1fd3: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x8u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102c1fd6: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi); g->eax = (uint32_t)(rd32(A)); }   /* 0x102c1fd9: register eax, replayed as the entry ran it */
    cow_lift_102c1fcc(g, param_1, param_2, param_3, param_4);

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

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
