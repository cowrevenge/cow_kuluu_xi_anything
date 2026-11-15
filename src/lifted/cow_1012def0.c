/* f_0x1012def0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1012def0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1012def0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU16 extraout_var;
    CowU8 local_10[16];
    iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 0x20)) / 0x3c;
      cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_1012DF27), 4u, (const CowU32[]){ local_10, COW_IMG(COW_ADDR_LIFT_1036F6D0), iVar1 / 0x3c, iVar1 % 0x3c }, g->ecx, g->edx, 2290649225u, 0u);
      if (((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) < '\0') || ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8)) != 3)) {
        cow_bridge_101c9780(g, COW_IMG(COW_ADDR_LIFT_1012DF94), 4u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x14)) + 0x4b) & 0xffffu)), (((uint32_t)((short)((CowU32)(int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8)) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x16)) + 6) & 0xffffu)), local_10, 0x80808080 }, g->ecx, g->edx, 2290649225u, 16u);
        return;
      }
      cow_bridge_101c9b50(g, COW_IMG(COW_ADDR_LIFT_1012DF6B), 7u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x18)) + -4) & 0xffffu)), (CowU32)(CowU16)((int16_t)rd16((uint32_t)((int)param_1 + 0x16)) + 6), local_10, 0x80808080, 1, 0x3f800000, 0x3f800000 }, g->ecx, g->edx, 2290649225u, 28u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 16 locals, pops [esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1012def0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 0x10u;                      /* 0x1012def0: 16 bytes of locals */
    g->eax = 2290649225u;   /* 0x1012def3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1012def8: push esi */
    g->esi = g->ecx;   /* 0x1012def9: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1012defb: register ecx, replayed as the entry ran it */
    cow_lift_1012def0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
