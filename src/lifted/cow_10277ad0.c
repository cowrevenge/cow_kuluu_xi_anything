/* f_0x10277ad0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10277ad0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10277ad0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    cow_bridge_10277b90(g, COW_IMG(COW_ADDR_LIFT_10277ADE), 1u, (const CowU32[]){ g->eax }, g->ecx, g->edx, g->eax, 0u);
      iVar1 = rd32((uint32_t)param_1);
      if ((rd32((uint32_t)(iVar1 + 0xa8)) & 0x200) == 0) {
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_10277B17), 3u, (const CowU32[]){ iVar1, COW_IMG(COW_ADDR_LIFT_103B37EC), 0xb5 }, g->ecx, g->edx, g->eax, 12u);
      }
      else {
        if ((((int8_t)rd8((uint32_t)(iVar1 + -0x10)) != 'D') || ((int8_t)rd8((uint32_t)(iVar1 + -0xf)) != 'M')) ||
           ((int8_t)rd8((uint32_t)(iVar1 + -0xe)) != 'B')) {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10277B55), 1u, (const CowU32[]){ 272316532u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102755e0(g, COW_IMG(COW_ADDR_LIFT_10277B60), 2u, (const CowU32[]){ iVar1 + -0x20, 0x30 }, g->ecx, g->edx, g->eax, 12u);
          wr32((uint32_t)param_1, 0);
          return;
        }
        if ((int32_t)rd32((uint32_t)(iVar1 + -4)) != 0) {
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_10277B38), 3u, (const CowU32[]){ (int32_t)rd32((uint32_t)(iVar1 + -4)), COW_IMG(COW_ADDR_LIFT_103B37EC), 0xa6 }, g->ecx, g->edx, g->eax, 12u);
          wr32((uint32_t)(iVar1 + -4), 0);
        }
        if ((int32_t)rd32((uint32_t)(iVar1 + -8)) != 0) {
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_10277B7C), 3u, (const CowU32[]){ (int32_t)rd32((uint32_t)(iVar1 + -8)), COW_IMG(COW_ADDR_LIFT_103B37EC), 0xae }, g->ecx, g->edx, g->eax, 12u);
          wr32((uint32_t)(iVar1 + -8), 0);
          wr32((uint32_t)param_1, 0);
          return;
        }
      }
      wr32((uint32_t)param_1, 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10277ad0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10277ad0: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10277ad1: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x10277ad2: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi); g->eax = (uint32_t)(rd32(A)); }   /* 0x10277ad6: register eax, replayed as the entry ran it */
    cow_lift_10277ad0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
