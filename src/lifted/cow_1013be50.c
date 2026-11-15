/* f_0x1013be50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013be50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013be50(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    cow_bridge_10126320(g, COW_IMG(COW_ADDR_LIFT_1013BE5C), 0u, (const CowU32[]){ 0u }, g->ecx, param_2, g->eax, 0u);
      wr16((uint32_t)((int)param_1 + 0xe), 0xffff);
      wr32((uint32_t)((int)param_1 + 8), 0);
      wr8((uint32_t)((int)param_1 + 0xc), 1);
      wr32((uint32_t)((int)param_1 + 0x14), 0);
      wr32((uint32_t)((int)param_1 + 0x18), 0);
      wr16((uint32_t)((int)param_1 + 0x34e), 0);
      wr16((uint32_t)((int)param_1 + 0x350), 0);
      wr16((uint32_t)((int)param_1 + 0x352), 0);
      wr16((uint32_t)((int)param_1 + 0x354), 0);
      wr32((uint32_t)((int)param_1 + 0x374), 0);
      wr8((uint32_t)((int)param_1 + 0x380), 0);
      wr8((uint32_t)((int)param_1 + 0x381), 0);
      wr8((uint32_t)((int)param_1 + 0x382), 0);
      wr8((uint32_t)((int)param_1 + 0x3a7), 0);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10333EC0));
      cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_1013BEB8), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x36c), 0);
      iVar1 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if ((((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) < '\0') && ((iVar1 == 2 || (iVar1 == 3)))) || (iVar1 < 2)) {
        wr8((uint32_t)((int)param_1 + 0x344), 3);
        wr32((uint32_t)((int)param_1 + 0x378), 0);
        wr32((uint32_t)((int)param_1 + 0x37c), 0);
        g->eax = (CowU32)(param_1); return;
      }
      wr8((uint32_t)((int)param_1 + 0x344), 4);
      wr32((uint32_t)((int)param_1 + 0x378), 0);
      wr32((uint32_t)((int)param_1 + 0x37c), 0);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1013be50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1013be50: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1013be51: push esi */
    g->esi = g->ecx;   /* 0x1013be52: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x4u)); }   /* 0x1013be54: register ecx, replayed as the entry ran it */
    cow_lift_1013be50(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
