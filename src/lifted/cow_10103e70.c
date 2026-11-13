/* f_0x10103e70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10103e70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10103e70(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    puVar4 = (CowU32)(param_3 * 0x32 + param_1);
      if ((param_3 * 5 + 5) * 10 < 0x40) {
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          wr32((uint32_t)puVar4, rd32((uint32_t)param_2));
          param_2 = param_2 + 4u * (uint32_t)(1);
          puVar4 = puVar4 + 4u * (uint32_t)(1);
        }
        wr16((uint32_t)puVar4, rd16((uint32_t)param_2));
        return;
      }
      uVar2 = param_3 * -0x32 + 0x40;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        wr32((uint32_t)puVar4, rd32((uint32_t)param_2));
        param_2 = param_2 + 4u * (uint32_t)(1);
        puVar4 = puVar4 + 4u * (uint32_t)(1);
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        wr8((uint32_t)puVar4, rd8((uint32_t)param_2));
        param_2 = (CowU32)((int)param_2 + 1);
        puVar4 = (CowU32)((int)puVar4 + 1);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10103e70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->ecx = param_3;   /* 0x10103e70: the value the entry loaded and the decompiler dropped */
    g->edx = param_1;   /* 0x10103e74: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10103e78: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x10103e79: register esi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->ecx + g->ecx * 4)); }   /* 0x10103e7d: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->ecx + g->ecx * 4 + 0x5u)); }   /* 0x10103e80: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10103e84: push edi */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x10103e85: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->ecx + g->ecx * 4)); }   /* 0x10103e88: register ecx, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->eax; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10103e8b: register eax, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)g->ecx; uint32_t r = (uint32_t)(a + b); g->ecx = (uint32_t)(r); }   /* 0x10103e8d: register ecx, replayed as the entry ran it */
    cow_lift_10103e70(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->edx = (CowU32)(param_1);   /* what edx holds at every ret of the entry */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
