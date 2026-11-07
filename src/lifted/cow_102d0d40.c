/* f_0x102d0d40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102d0d40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102d0d40(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    iVar4 = 0;
      iVar2 = rd32((uint32_t)(COW_ADDR_LIFT_10344DC8 + 4u * (uint32_t)(rd32((uint32_t)(param_2 + 0x100))))) + 0xff >> 8;
      wr32((uint32_t)(param_2 + 0x104), iVar2);
      iVar3 = param_1 + 0x2af0 + iVar2 * 0xcc;
      do {
        piVar1 = (CowU32)(iVar3 + -0xcc);
        iVar3 = iVar3 + -0xcc;
        iVar2 = iVar2 + -1;
        iVar4 = iVar4 + rd32((uint32_t)piVar1);
      } while (iVar2 != 0);
      g->eax = (CowU32)((iVar4 * 3 + rd32((uint32_t)(param_2 + 0x104))) * 3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102d0d40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102d0d40: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102d0d41: register esi, replayed as the entry ran it */
    g->edx = 0u;   /* 0x102d0d45: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102d0d47: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x100u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102d0d48: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x102d0d4e: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax * 4 + COW_IMG(COW_ADDR_LIFT_10344DC8) + RD); g->eax = (uint32_t)(rd32(A)); }   /* 0x102d0d52: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x102d0d59: register eax, replayed as the entry ran it */
    cow_lift_102d0d40(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
