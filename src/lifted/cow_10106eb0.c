/* f_0x10106eb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10106eb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10106eb0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    wr8((uint32_t)(uint32_t)(param_3 + 4u * (uint32_t)(1)), 0);
      puVar3 = param_1;
      if (param_1 < param_2) {
        puVar1 = (CowU32)(param_1 + 1);
        wr32((uint32_t)param_3, rd32((uint32_t)param_1));
        puVar3 = (CowU32)((int)param_1 + 6);
        param_1 = (CowU32)(CowU32)rd16((uint32_t)puVar1);
        if (0x80 < rd16((uint32_t)puVar1)) {
          param_1 = (CowU32)0x80;
        }
        if ((CowU32)((int)param_1 + (int)puVar3) <= param_2) {
          puVar4 = puVar3;
          puVar5 = param_3 + 1;
          for (uVar2 = (CowU32)param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          for (uVar2 = (CowU32)param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            wr8((uint32_t)puVar5, rd8((uint32_t)puVar4));
            puVar4 = (CowU32)((int)puVar4 + 1);
            puVar5 = (CowU32)((int)puVar5 + 1);
          }
          wr8((uint32_t)((int)param_3 + 0x83), 0);
          g->eax = (CowU32)((CowU32)((int)param_1 + (int)puVar3)); return;
        }
      }
      g->eax = (CowU32)(puVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10106eb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->edx = param_3;   /* 0x10106eb0: the value the entry loaded and the decompiler dropped */
    g->eax = param_1;   /* 0x10106eb4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10106eb8: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10106eb9: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10106ebd: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10106ebe: push edi */
    { g->edi = (uint32_t)((uint32_t)(g->edx + 0x4u)); }   /* 0x10106ebf: register edi, replayed as the entry ran it */
    cow_lift_10106eb0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
