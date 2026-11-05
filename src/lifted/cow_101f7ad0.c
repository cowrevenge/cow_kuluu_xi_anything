/* f_0x101f7ad0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f7ad0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f7ad0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
    int iVar1;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_10663888)) != 0) && ((char)param_2 != '\0')) {
        iVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
        if ((((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) & 0x80) == 0) || ((iVar1 != 2 && (iVar1 != 3)))) &&
           (iVar1 == 0)) {
          iVar1 = (param_1 & 0xff) + 0x82e9;
        }
        else {
          iVar1 = (param_1 & 0xff) + 0x83b1;
        }
        cow_bridge_101fb140(g, COW_IMG(COW_ADDR_LIFT_101F7B38), 3u, (const CowU32[]){ iVar1 * 3 + (param_3 & 0xff), param_2, param_3 }, 0u, 0u, g->eax, 0u);
      }
      g->eax = (CowU32)(1); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f7ad0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10663888));   /* 0x101f7ad0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101f7ad6: push ebx */
    cow_lift_101f7ad0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
