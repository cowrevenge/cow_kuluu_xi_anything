/* f_0x101bca40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101bca40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101bca40(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    uVar1 = param_3 & 0x8000001f;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xffffffe0) + 1;
      }
      uVar3 = param_3;
      if (uVar1 != 0) {
        uVar3 = (param_3 - uVar1) + 0x20;
      }
      if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) <= (int)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + uVar3)) {
        g->eax = (CowU32)((CowU32)0x0); return;
      }
      puVar2 = (CowU32)(rd32((uint32_t)param_1) + rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))));
      puVar4 = puVar2;
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr32((uint32_t)puVar4, rd32((uint32_t)param_2));
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr8((uint32_t)puVar4, rd8((uint32_t)param_2));
        param_2 = (CowU32)((int)param_2 + 1);
        puVar4 = (CowU32)((int)puVar4 + 1);
      }
      puVar4 = (CowU32)((int)puVar2 + param_3);
      for (uVar1 = uVar3 - param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr32((uint32_t)puVar4, 0);
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = uVar3 - param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        wr8((uint32_t)puVar4, 0);
        puVar4 = (CowU32)((int)puVar4 + 1);
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) + uVar3);
      g->eax = (CowU32)(puVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101bca40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101bca40: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101bca41: push ebp */
    g->ebp = g->ecx;   /* 0x101bca42: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101bca44: register ecx, replayed as the entry ran it */
    g->eax = g->ecx;   /* 0x101bca48: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101bca4a: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x8000001Fu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x101bca4b: register eax, replayed as the entry ran it */
    cow_lift_101bca40(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
