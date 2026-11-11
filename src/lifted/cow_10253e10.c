/* f_0x10253e10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10253e10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10253e10(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 piVar2;
    CowU32 pbVar3;
    CowU32 pbVar4;
    CowU32 pbVar5;
    CowU32 uVar6;
    piVar2 = param_2;
      uVar6 = rd32((uint32_t)param_2) + 1U >> 1;
      pbVar3 = param_3 + (rd32((uint32_t)param_2) + 1U >> 2);
      pbVar4 = param_3 + uVar6;
      if (((CowU8)uVar6 & 1) == 1) {
        pbVar4 = pbVar4 + -1;
        wr8((uint32_t)pbVar4, rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1033CE44) + 4u * (uint32_t)(rd8((uint32_t)pbVar3) >> 4))));
      }
      for (; param_3 < pbVar3; pbVar3 = pbVar3 + -1) {
        bVar1 = rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(-1)));
        param_2 = (CowU32)(CowU32)bVar1;
        pbVar5 = pbVar4 + -1;
        pbVar4 = pbVar4 + -2;
        wr8((uint32_t)pbVar5, rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1033CE44) + 4u * (uint32_t)((CowU32)param_2 & 0xf))));
        wr8((uint32_t)pbVar4, rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1033CE44) + 4u * (uint32_t)(bVar1 >> 4))));
      }
      wr32((uint32_t)(piVar2 + 4u * (uint32_t)(1)), uVar6);
      wr8((uint32_t)((int)piVar2 + 9), 4);
      wr8((uint32_t)((int)piVar2 + 0xb), 4);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10253e10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->edx = param_2;   /* 0x10253e10: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10253e14: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10253e15: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10253e16: push edi */
    { uint32_t A = (uint32_t)(g->edx); g->edi = (uint32_t)(rd32(A)); }   /* 0x10253e17: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10253e19: register ebp, replayed as the entry ran it */
    { { uint32_t a = g->edi; uint32_t r = (uint32_t)(a + 1u); g->edi = (uint32_t)(r); }; }   /* 0x10253e1d: register edi, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = g->edi; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->edi = (uint32_t)(r); } }; }   /* 0x10253e1e: register edi, replayed as the entry ran it */
    g->ecx = g->edi;   /* 0x10253e20: the value the entry loaded and the decompiler dropped */
    g->eax = g->edi;   /* 0x10253e22: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = g->ecx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ecx = (uint32_t)(r); } }; }   /* 0x10253e24: register ecx, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x1u; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x10253e26: register eax, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)g->ebp; uint32_t r = (uint32_t)(a + b); g->ecx = (uint32_t)(r); }   /* 0x10253e29: register ecx, replayed as the entry ran it */
    cow_lift_10253e10(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
