/* f_0x101de120 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101de120 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101de120(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    if ((((int8_t)rd8((uint32_t)(param_1 + 0x10)) != '\0') && (param_2 != (CowU32)0x0)) &&
         ((int8_t)rd8((uint32_t)(param_1 + 0x11)) == (int8_t)rd8((uint32_t)(param_2 + 2u * (uint32_t)(1))))) {
        g->eax = (CowU32)(-0x7f7fbfe0); return;
      }
      if ((rd16((uint32_t)(param_3 + 0x14d0)) == (CowU32)0x0) || (rd16((uint32_t)rd32((uint32_t)((param_3 + 0x14d0)))) == 0)) {
        g->eax = (CowU32)(-0x7f7f7f80); return;
      }
      if (param_2 != (CowU32)0x0) {
        cVar1 = cow_bridge_10131fa0(g, COW_IMG(COW_ADDR_LIFT_101DE16A), 1u, (const CowU32[]){ rd16((uint32_t)param_2) }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          g->eax = (CowU32)(-0x7faf6fb0); return;
        }
      }
      cVar1 = cow_bridge_10132050(g, COW_IMG(COW_ADDR_LIFT_101DE183), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((-(CowU32)(cVar1 != '\0') & 0x100fc0) + 0x80808080); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101de120(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    { uint32_t A = (uint32_t)(g->ecx + 0x10u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101de120: register eax, replayed as the entry ran it */
    g->edx = param_2;   /* 0x101de123: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    cow_lift_101de120(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
