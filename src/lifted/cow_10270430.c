/* f_0x10270430 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10270430 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10270430(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_1099AED0)) + param_1 * 0xac;
      if (param_2 != -1) {
        if (param_2 == 0) {
          cow_bridge_10273830(g, COW_IMG(COW_ADDR_LIFT_1027046D), 2u, (const CowU32[]){ rd32((uint32_t)(iVar1 + 0xa8)), 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102703e0(g, COW_IMG(COW_ADDR_LIFT_10270477), 3u, (const CowU32[]){ g->esi, 4u, 0u }, g->ecx, g->edx, g->eax, 20u);
          return;
        }
        cow_bridge_10273830(g, COW_IMG(COW_ADDR_LIFT_10270484), 2u, (const CowU32[]){ rd32((uint32_t)(iVar1 + 0xa8)), 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102703e0(g, COW_IMG(COW_ADDR_LIFT_1027048E), 3u, (const CowU32[]){ param_1, 4, 1 }, g->ecx, g->edx, g->eax, 20u);
        return;
      }
      iVar1 = (int32_t)rd32((uint32_t)(iVar1 + 0xa8));
      if ((rd8((uint32_t)(iVar1 + 0xa8)) & 4) == 0) {
        cow_bridge_10273830(g, COW_IMG(COW_ADDR_LIFT_102704A5), 2u, (const CowU32[]){ iVar1, 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102703e0(g, COW_IMG(COW_ADDR_LIFT_102704AF), 3u, (const CowU32[]){ param_1, 4, 1 }, g->ecx, g->edx, g->eax, 20u);
        return;
      }
      cow_bridge_10273830(g, COW_IMG(COW_ADDR_LIFT_102704C2), 2u, (const CowU32[]){ iVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102703e0(g, COW_IMG(COW_ADDR_LIFT_102704CC), 3u, (const CowU32[]){ param_1, 4, 0 }, g->ecx, g->edx, g->eax, 20u);
      return;
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
void cow_adapter_10270430(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10270430: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10270431: register esi, replayed as the entry ran it */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_1099AED0));   /* 0x10270435: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->esi * 8)); }   /* 0x1027043b: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->esi; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10270442: register eax, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x10270444: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + g->eax * 2)); }   /* 0x10270447: register ecx, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->edx + g->ecx * 4)); }   /* 0x1027044a: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1027044d: register ecx, replayed as the entry ran it */
    cow_lift_10270430(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
