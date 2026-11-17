/* f_0x10251390 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores 0 at *out, then if `obj` is non-null and has bit 0x10 set, calls FUN_1026f510(&out, 0) and stores a table entry selected by obj[0xc] and the possibly updated out value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10251390(Guest* g, uint32_t sp0, uint32_t obj, uint32_t out)
{
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;

    wr32(out, 0u);

    if (obj == 0u)
    {
        g->esi = saved_esi;
        g->edi = saved_edi;
        return 0xFFFFFFFFu;
    }

    if ((rd8(obj) & 0x10u) == 0u)
    {
        g->esi = saved_esi;
        g->edi = saved_edi;
        return 0xFFFFFFFFu;
    }

    /*
       Original stack before the call:
         [sp0 + 8] is the second stack argument, whose address is passed as param_1.
         The original had already pushed esi and edi, so emulate that caller frame
         below sp0 before invoking the callee.
    */
    g->esp = sp0;
    wr32(sp0 - 4u, saved_esi);
    wr32(sp0 - 8u, saved_edi);
    g->esp = sp0 - 8u;

    cow_cdecl(g, COW_IMG(0x1026f510u), 2u, sp0 + 8u, 0u);

    const uint32_t eax = rd32(obj + 0xCu);
    const uint32_t edx = rd32(sp0 + 8u);

    uint32_t ecx = (uint32_t)(eax + eax * 2u);
    ecx = (uint32_t)(ecx << 6u);

    const uint32_t value = rd32(ecx + edx + 0xACu);
    wr32(out, value);

    g->esi = saved_esi;
    g->edi = saved_edi;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10251390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t obj = rd32(sp0 + 4u);
    const uint32_t out = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10251390(g, sp0, obj, out);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
