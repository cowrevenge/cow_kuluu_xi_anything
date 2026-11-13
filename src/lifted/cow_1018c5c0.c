/* f_0x1018c5c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1018c570 with the stack argument, then sign-extends the low bits of its result by shifting left and arithmetic-right-shifting by (0x20 - argument) masked to 5 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1018c5c0(Guest* g, uint32_t param)
{
    const uint32_t saved_esi = g->esi;

    /* 1018c5c5: push esi / 1018c5c6: call 0x1018c570
       The callee is cdecl and takes one argument. */
    cow_cdecl(g, COW_IMG(0x1018c570u), 1u, param);

    /* 1018c5cb: mov ecx, 0x20
       1018c5d3: sub ecx, esi */
    uint32_t ecx = 0x20u - param;

    /* 1018c5d5: shl eax, cl
       1018c5d8: sar eax, cl
       x86 uses only the low 5 bits of cl for 32-bit shifts. */
    uint32_t eax = g->eax;
    const unsigned c = (unsigned)(ecx & 31u);

    if (c != 0u)
    {
        eax = (uint32_t)(eax << c);
        eax = (uint32_t)((int32_t)eax >> c);
    }

    /* Restore esi exactly as the original push/pop pair does. */
    g->esi = saved_esi;

    /* ecx is not required by the judge, but keep it faithful. */
    g->ecx = ecx;

    /* edx is whatever the callee left; the original does not modify it after the call. */
    g->eax = eax;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c5c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1018c5c0(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
