/* f_0x1026f1d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1026f1d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1026f1d0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    iVar2 = 0;
      iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_1099AED8)) * 0xc0 + -0xc0 + rd32(COW_IMG(COW_ADDR_LIFT_1099AEDC));
      if (0 < rd32(COW_IMG(COW_ADDR_LIFT_1099AED8))) {
        do {
          cow_bridge_1027dba0(g, COW_IMG(COW_ADDR_LIFT_1026F1F6), 1u, (const CowU32[]){ iVar1 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_1099AED8)), 0u);
          iVar1 = iVar1 + -0xc0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < rd32(COW_IMG(COW_ADDR_LIFT_1099AED8)));
      }
      wr32(COW_IMG(COW_ADDR_LIFT_1099AED8), 0);
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1026f1d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099AED8));   /* 0x1026f1d0: the value the entry loaded and the decompiler dropped */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_1099AEDC));   /* 0x1026f1d5: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1026f1db: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1026f1dc: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x1026f1dd: register ecx, replayed as the entry ran it */
    g->edi = 0u;   /* 0x1026f1e0: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x6u) & 31u; if (c) { uint32_t a = g->ecx; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->ecx = (uint32_t)(r); } }; }   /* 0x1026f1e2: register ecx, replayed as the entry ran it */
    cow_lift_1026f1d0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
