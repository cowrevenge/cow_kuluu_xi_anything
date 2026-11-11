/* f_0x10305bf2 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10305bf2 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10305bf2(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    int iVar5;
    int local_8;
    iVar1 = rd32((uint32_t)(param_1 + 0x20));
      iVar2 = rd32((uint32_t)(param_1 + 0x5c));
      if (-1 < param_5 + -1) {
        param_3 = param_3 << 2;
        local_8 = param_5;
        do {
          iVar5 = 0;
          if (0 < iVar1) {
            do {
              puVar4 = rd8((uint32_t)(param_3 + rd32((uint32_t)(param_2 + iVar5 * 4))));
              puVar3 = (CowU32)(rd32((uint32_t)param_4) + iVar5);
              if (iVar2 != 0) {
                param_5 = iVar2;
                do {
                  wr8((uint32_t)puVar3, rd8((uint32_t)puVar4));
                  puVar3 = puVar3 + iVar1;
                  puVar4 = puVar4 + 1;
                  param_5 = param_5 + -1;
                } while (param_5 != 0);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar1);
          }
          param_3 = param_3 + 4;
          param_4 = param_4 + 1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
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
void cow_adapter_10305bf2(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10305bf2: push ebp */
    g->ebp = g->esp;                       /* 0x10305bf3: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10305bf5: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10305bf6: push ecx */
    g->eax = param_2;   /* 0x10305bf7: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x20u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10305bfa: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10305bfd: push ebx */
    { uint32_t A = (uint32_t)(g->eax + 0x5Cu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10305bfe: register ebx, replayed as the entry ran it */
    g->eax = param_6;   /* 0x10305c01: the value the entry loaded and the decompiler dropped */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x10305c04: register eax, replayed as the entry ran it */
    cow_lift_10305bf2(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
