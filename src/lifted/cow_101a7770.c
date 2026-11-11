/* f_0x101a7770 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a7770 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a7770(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    CowU32 psVar3;
    psVar3 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9894 + param_1 * 0xdec);
      bVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101A7795), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
      bVar2 = 1;
      if (1 < bVar1) {
        do {
          if (rd16((uint32_t)psVar3) == param_2) {
            g->eax = (CowU32)((char)rd16((uint32_t)(psVar3 + 2u * (uint32_t)(1)))); return;
          }
          bVar2 = bVar2 + 1;
          psVar3 = psVar3 + 0x16;
        } while (bVar2 < bVar1);
      }
      g->eax = (CowU32)(0xff); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a7770(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->ecx = param_1;   /* 0x101a7770: the value the entry loaded and the decompiler dropped */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x101a7774: the value the entry loaded and the decompiler dropped */
    g->eax = g->ecx;   /* 0x101a777a: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101a777c: push esi */
    { { unsigned c = (unsigned)(0x5u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->eax = (uint32_t)(r); } }; }   /* 0x101a777d: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->ecx; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x101a7780: register eax, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x101a7783: register eax, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 8)); }   /* 0x101a7786: register eax, replayed as the entry ran it */
    { g->esi = (uint32_t)((uint32_t)(g->edx + g->eax * 4 + 0x9894u)); }   /* 0x101a7789: register esi, replayed as the entry ran it */
    cow_lift_101a7770(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
