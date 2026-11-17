/* f_0x102ef28c - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   forwards two stack arguments and a caller-allocated local buffer to FUN_102ef17e, then forwards the first argument and that buffer to FUN_102ef252, preserving the original's final eax/edx and ebp.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102ef28c(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1)
{
    const uint32_t buf = cow_frame(g, sp0, 0x54u);   /* ebp - 0x50 == sp0 - 4 - 0x50 */
    const uint32_t ebp_frame = sp0 - 4u;             /* value after push ebp; mov ebp, esp */

    /* Emulate: push ebp; mov ebp, esp */
    wr32(ebp_frame, g->ebp);
    g->ebp = ebp_frame;

    /*
       102ef292: push dword ptr [ebp + 0xc]   -> arg1
       102ef295: lea ecx, [ebp - 0x50]        -> buf
       102ef298: push dword ptr [ebp + 8]     -> arg0
       102ef29b: call 0x102ef17e              -> thiscall-style, caller pops
    */
    g->ecx = buf;
    cow_thiscall_cdecl(g, COW_IMG(0x102ef17eu), buf, 2u, arg0, arg1);

    /*
       102ef2a0: lea eax, [ebp - 0x50]        -> buf
       102ef2a3: push eax                     -> buf
       102ef2a4: push dword ptr [ebp + 8]     -> arg0
       102ef2a7: call 0x102ef252              -> cdecl, caller pops
    */
    g->eax = buf;
    cow_cdecl(g, COW_IMG(0x102ef252u), 2u, arg0, buf);

    /*
       102ef2af: leave
       esp = ebp; ebp = dword ptr [esp]; esp += 4
       The adapter resets esp, so only ebp needs to be reproduced.
       Do not restore the entry ebp here: callees may have changed ebp,
       and the original leave uses the current ebp.
    */
    g->ebp = rd32(g->ebp);

    /* 102ef2b0: ret; eax/edx are whatever the last callee left in them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef28c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102ef28c(g, sp0, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* bare ret */
}
/* COW_ADAPTER END */
