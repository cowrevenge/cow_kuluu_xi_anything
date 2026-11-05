/* f_0x1013d4d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013d4d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013d4d0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
    short sVar1;
    CowU16 extraout_var;
    if (rd8((uint32_t)(param_1 + 0xac)) != '\0') {
        sVar1 = rd16((uint32_t)(param_1 + 0x34e)) + 0x168;
        if (param_3 != '\0') {
          sVar1 = rd16((uint32_t)(param_1 + 0x34e)) + 0x154;
        }
        cow_bridge_101ca3c0(g, COW_IMG(COW_ADDR_LIFT_1013D51E), 4u, (const CowU32[]){ sVar1, (((uint32_t)((short)((CowU32)(param_1 + 0xac) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x350)) + (CowU16)param_2 * 0x10) & 0xffffu)) + 4, param_1 + 0xac, 0x80808080 }, 0u, 0u, g->eax, 16u);
        if (param_3 != '\0') {
          cow_bridge_101ca3c0(g, COW_IMG(COW_ADDR_LIFT_1013D54F), 4u, (const CowU32[]){ rd16((uint32_t)(param_1 + 0x34e)) + 0x168, (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x350)) + (CowU16)param_2 * 0x10) & 0xffffu)) + 4, COW_IMG(COW_ADDR_LIFT_1036FD94), 0x80808080 }, 0u, 0u, g->eax, 16u);
        }
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1013d4d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1013d4d0: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1013d4d1: push edi */
    cow_lift_1013d4d0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
