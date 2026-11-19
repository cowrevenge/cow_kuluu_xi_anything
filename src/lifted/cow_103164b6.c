/* f_0x103164b6 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Dispatches an exception/context record, optionally invoking a continuation, and returns the final eax/edx state.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_103164b6(Guest* g, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t saved_esp;
    uint32_t target;

    if ((rd32(arg0 + 4u) & 0x66u) != 0u)
    {
        wr32(arg1 + 0x24u, 1u);
        eax = 1u;
        g->edx = g->edx;
        return eax;
    }

    cow_cdecl(g,
              COW_IMG(0x10320fb3u),
              8u,
              arg0,
              rd32(arg1 + 0xcu),
              arg2,
              0u,
              rd32(arg1 + 8u),
              rd32(arg1 + 0x10u),
              rd32(arg1 + 0x14u),
              1u);

    if (rd32(arg1 + 0x24u) == 0u)
    {
        cow_stdcall(g, COW_IMG(0x103162e8u), 2u, arg1, arg0);
    }

    ebx = arg1;
    saved_esp = rd32(ebx + 0x1cu);
    g->esp = saved_esp;
    g->ebp = rd32(ebx + 0x20u);
    g->ebx = ebx;

    target = rd32(ebx + 0x18u);
    cow_cdecl(g, target, 0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103164b6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_103164b6(g, arg0, arg1, arg2);

    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
