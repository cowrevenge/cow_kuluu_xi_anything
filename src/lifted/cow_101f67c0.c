/* f_0x101f67c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f67c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f67c0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_10126320(g, COW_IMG(COW_ADDR_LIFT_101F67CC), 0u, (const CowU32[]){ 0u }, g->ecx, param_2, g->eax, 0u);
      wr8((uint32_t)((int)param_1 + 0xc), 1);
      wr8((uint32_t)((int)param_1 + 0x47), 1);
      wr32((uint32_t)((int)param_1 + 8), 0);
      wr16((uint32_t)((int)param_1 + 0x14), 0);
      wr32((uint32_t)((int)param_1 + 0x34), 0);
      wr16((uint32_t)((int)param_1 + 0x18), (short)(char)param_2);
      wr16((uint32_t)((int)param_1 + 0x1e), 0);
      wr16((uint32_t)((int)param_1 + 0x20), 0);
      wr32((uint32_t)((int)param_1 + 0x38), 0);
      wr32((uint32_t)((int)param_1 + 0x3c), 0);
      wr32((uint32_t)((int)param_1 + 0x40), 0);
      wr16((uint32_t)((int)param_1 + 0x16), 0);
      wr32((uint32_t)((int)param_1 + 0x30), 0);
      wr32((uint32_t)((int)param_1 + 0x4c), 0);
      wr8((uint32_t)((int)param_1 + 0x46), 0);
      wr16((uint32_t)((int)param_1 + 0x1a), 0);
      wr16((uint32_t)((int)param_1 + 0x1c), 0);
      wr8((uint32_t)((int)param_1 + 0x2e), 0);
      wr16((uint32_t)((int)param_1 + 0xe), 0xffff);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1033A730));
      wr16((uint32_t)((int)param_1 + 0x26), 0x12);
      wr8((uint32_t)((int)param_1 + 0x48), 0xff);
      wr8((uint32_t)((int)param_1 + 0x2c), 3);
      wr8((uint32_t)((int)param_1 + 0x2d), 4);
      wr8((uint32_t)((int)param_1 + 0x2f), 4);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f67c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101f67c0: push esi */
    g->esi = g->ecx;   /* 0x101f67c1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101f67c3: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x4u)); }   /* 0x101f67c4: register ecx, replayed as the entry ran it */
    cow_lift_101f67c0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->ecx = (CowU32)(4u);   /* the entry left ecx here on its way to the ret */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
