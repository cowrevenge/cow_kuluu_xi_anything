/* f_0x1014b440 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014b440 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014b440(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 pbVar2;
    CowU32 uVar3;
    iVar1 = cow_bridge_10161290(g, COW_IMG(COW_ADDR_LIFT_1014B452), 1u, (const CowU32[]){ g->edi }, rd32(COW_IMG(COW_ADDR_LIFT_10578428)), g->edx, g->eax, 0u);
      if (iVar1 == 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      pbVar2 = (CowU32)cow_bridge_101612d0(g, COW_IMG(COW_ADDR_LIFT_1014B46B), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
      if (pbVar2 == (CowU32)0x0) {
        g->eax = (CowU32)(0); return;
      }
      uVar3 = (((uint32_t)((short)((CowU32)pbVar2 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((CowU16)rd8((uint32_t)pbVar2)) & 0xffffu)) & 0xffff003f;
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)((uVar3 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((CowU16)rd8((uint32_t)(iVar1 + 3)) <= (CowU16)uVar3) & 0xffu))) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014b440(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10578428));   /* 0x1014b440: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014b446: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1014b447: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x1014b448: register edi, replayed as the entry ran it */
    cow_lift_1014b440(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
