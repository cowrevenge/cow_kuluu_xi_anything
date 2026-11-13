/* f_0x1006bd90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1006bd90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1006bd90(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    puVar2 = COW_IMG(COW_ADDR_LIFT_1047C110);
      do {
        puVar3 = puVar2 + 4u * (uint32_t)(1);
        wr32((uint32_t)puVar2, param_1 & 0xffff0000);
        uVar1 = param_1 * 0x10dcd + 1;
        wr32((uint32_t)puVar2, rd32((uint32_t)puVar2) | uVar1 >> 0x10);
        param_1 = uVar1 * 0x10dcd + 1;
        puVar2 = puVar3;
      } while ((int)puVar3 < 0x1047cad0);
      wr32(COW_IMG(COW_ADDR_LIFT_10354040), 0x270);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1006bd90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->ecx = param_1;   /* 0x1006bd90: the value the entry loaded and the decompiler dropped */
    g->edx = COW_IMG(COW_ADDR_LIFT_1047C110);   /* 0x1006bd94: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1006bd99: push esi */
    g->eax = g->ecx;   /* 0x1006bd9a: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)0x4u; uint32_t r = (uint32_t)(a + b); g->edx = (uint32_t)(r); }   /* 0x1006bd9c: register edx, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFF0000u; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1006bd9f: register eax, replayed as the entry ran it */
    cow_lift_1006bd90(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
