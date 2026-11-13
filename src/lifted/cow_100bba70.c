/* f_0x100bba70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100bba70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100bba70(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    cVar1 = (int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x20)) + 1 + (CowU32)rd16((uint32_t)(param_1 + 0x256))));
      if (cVar1 == '\0') {
        cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBA9D), 2u, (const CowU32[]){ 2u, 1u }, g->esi, g->edx, ((g->eax - 1u) - 1u), 0u);
        wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 4);
      }
      else {
        if (cVar1 == '\x01') {
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBABC), 2u, (const CowU32[]){ 2, rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) & 1 }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 4);
          return;
        }
        if (cVar1 == '\x02') {
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBADE), 2u, (const CowU32[]){ 2, 1 }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 4);
          return;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100bba70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100bba70: push esi */
    g->esi = g->ecx;   /* 0x100bba71: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x100bba73: the value the entry loaded and the decompiler dropped */
    g->edx = 0u;   /* 0x100bba75: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x256u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100bba77: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100bba7e: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + g->eax + 0x1u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100bba81: register edx, replayed as the entry ran it */
    g->eax = g->edx;   /* 0x100bba85: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x100bba87: register eax, replayed as the entry ran it */
    cow_lift_100bba70(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
