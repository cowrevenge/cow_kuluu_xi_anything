/* f_0x10308da1 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10308da1 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10308da1(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 puVar3;
    puVar3 = rd32((uint32_t)(param_1 + 0x28));
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr32((uint32_t)puVar3, rd32((uint32_t)param_2));
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr8((uint32_t)puVar3, rd8((uint32_t)param_2));
        param_2 = (CowU32)((int)param_2 + 1);
        puVar3 = (CowU32)((int)puVar3 + 1);
      }
      iVar2 = rd32((uint32_t)(param_1 + 0x28)) + param_3;
      wr32((uint32_t)(param_1 + 0x34), iVar2);
      wr32((uint32_t)(param_1 + 0x30), iVar2);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10308da1(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->edx = param_3;   /* 0x10308da1: the value the entry loaded and the decompiler dropped */
    g->eax = param_1;   /* 0x10308da5: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10308da9: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10308daa: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10308dab: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10308daf: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x28u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10308db0: register edi, replayed as the entry ran it */
    g->ecx = g->edx;   /* 0x10308db3: the value the entry loaded and the decompiler dropped */
    g->ebx = g->ecx;   /* 0x10308db5: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x2u) & 31u; if (c) { uint32_t a = g->ecx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ecx = (uint32_t)(r); } }; }   /* 0x10308db7: register ecx, replayed as the entry ran it */
    cow_lift_10308da1(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
