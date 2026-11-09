/* f_0x10212160 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10212160 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10212160(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    uVar1 = rd32((uint32_t)(param_1 + 0xc)) - 1;
      puVar3 = (CowU32)(param_2 + 0x118);
      puVar4 = rd32((uint32_t)(param_1 + 8));
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        wr32((uint32_t)puVar4, rd32((uint32_t)puVar3));
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr8((uint32_t)puVar4, rd8((uint32_t)puVar3));
        puVar3 = (CowU32)((int)puVar3 + 1);
        puVar4 = (CowU32)((int)puVar4 + 1);
      }
      wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + -1 + rd32((uint32_t)(param_1 + 0xc))), 0);
      wr32((uint32_t)(param_1 + 0x20), rd32((uint32_t)(param_2 + 4)));
      wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_2 + 8)));
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10212160(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = param_2;   /* 0x10212160: the value the entry loaded and the decompiler dropped */
    g->eax = g->ecx;   /* 0x10212164: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10212166: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10212167: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0xCu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10212168: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1021216b: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x8u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1021216c: register edi, replayed as the entry ran it */
    { { uint32_t a = g->ecx; uint32_t r = (uint32_t)(a - 1u); g->ecx = (uint32_t)(r); }; }   /* 0x1021216f: register ecx, replayed as the entry ran it */
    g->ebx = g->ecx;   /* 0x10212170: the value the entry loaded and the decompiler dropped */
    { g->esi = (uint32_t)((uint32_t)(g->edx + 0x118u)); }   /* 0x10212172: register esi, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x2u) & 31u; if (c) { uint32_t a = g->ecx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ecx = (uint32_t)(r); } }; }   /* 0x10212178: register ecx, replayed as the entry ran it */
    cow_lift_10212160(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
