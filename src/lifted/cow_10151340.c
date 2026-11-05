/* f_0x10151340 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10151340 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10151340(Guest* g, CowU32 param_1)
{
    char cVar1;
    if ((rd32((uint32_t)(param_1 + 0x70)) != 0) || (rd32((uint32_t)(param_1 + 0x78)) != 0)) {
        cVar1 = cow_bridge_100eba10(g, COW_IMG(COW_ADDR_LIFT_10151355), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        if (cVar1 != '\0') {
          wr32((uint32_t)(param_1 + 0x6c), 0);
          wr32((uint32_t)(param_1 + 0x70), 0);
          wr8((uint32_t)(param_1 + 0x7c), 0);
          wr32((uint32_t)(param_1 + 0xc0), 0);
          wr32((uint32_t)(param_1 + 0x20), 0);
          wr32((uint32_t)(param_1 + 0x24), 0);
          g->eax = (CowU32)(1); return;
        }
      }
      g->eax = (CowU32)(1); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10151340(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10151340: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10151341: push esi */
    cow_lift_10151340(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
