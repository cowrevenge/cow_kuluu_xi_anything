/* f_0x10290860 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10290860 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10290860(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    iVar2 = param_2 * 0x30 + (int32_t)rd32((uint32_t)(param_1 + 0x40));
      if (0 < param_3) {
        if ((int32_t)rd32((uint32_t)(iVar2 + 8)) == 0) {
          uVar1 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1029089C), 4u, (const CowU32[]){ 1, param_3 * 4, COW_IMG(COW_ADDR_LIFT_103BA694), 0x84e }, g->ecx, g->edx, g->eax, 16u);
          wr32((uint32_t)(iVar2 + 8), uVar1);
          return;
        }
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102908AE), 1u, (const CowU32[]){ 272345968u }, g->ecx, g->edx, g->eax, 4u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10290860(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_2;   /* 0x10290860: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10290864: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x10290865: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10290868: register eax, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x4u) & 31u; if (c) { uint32_t a = g->esi; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->esi = (uint32_t)(r); } }; }   /* 0x1029086c: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x40u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1029086f: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10290872: register eax, replayed as the entry ran it */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)g->edx; uint32_t r = (uint32_t)(a + b); g->esi = (uint32_t)(r); }   /* 0x10290876: register esi, replayed as the entry ran it */
    cow_lift_10290860(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
