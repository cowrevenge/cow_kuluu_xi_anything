/* f_0x100f8030 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f8030 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f8030(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 uVar3;
    uVar3 = rd32((uint32_t)(param_1 + 0x2c7d0)) & 0x3ff000;
      iVar2 = -1;
      if (uVar3 != 0) {
        uVar1 = 0x1000;
        iVar2 = 0;
        while ((uVar3 & uVar1) == 0) {
          uVar1 = uVar1 * 2;
          iVar2 = iVar2 + 1;
          if (7 < iVar2) {
            g->eax = (CowU32)(-1); return;
          }
        }
        wr32((uint32_t)(param_1 + 0x2c7d0), ~uVar1 & rd32((uint32_t)(param_1 + 0x2c7d0)));
      }
      g->eax = (CowU32)(iVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f8030(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f8030: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100f8031: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f8035: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100f8036: push edi */
    { uint32_t A = (uint32_t)(g->ebx + 0x2C7D0u); g->edi = (uint32_t)(rd32(A)); }   /* 0x100f8037: register edi, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->eax = (uint32_t)(r); }   /* 0x100f803d: register eax, replayed as the entry ran it */
    g->esi = g->edi;   /* 0x100f8040: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)0x3FF000u; uint32_t r = (uint32_t)(a & b); g->esi = (uint32_t)(r); }   /* 0x100f8042: register esi, replayed as the entry ran it */
    cow_lift_100f8030(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
