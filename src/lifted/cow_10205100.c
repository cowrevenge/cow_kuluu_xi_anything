/* f_0x10205100 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If a global flag is set, dispatches a callback and then posts two fixed messages to a singleton.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10205100(Guest* g, uint32_t param)
{
    const uint32_t flag = rd32(COW_IMG(0x106643A8u));
    if (flag == 0u)
    {
        return;
    }

    const uint32_t saved_esi = g->esi;

    g->eax = flag;
    g->esi = param;

    cow_cdecl(g,
              COW_IMG(0x10202D60u),
              7u,
              COW_IMG(0x10205070u),
              COW_IMG(0x102050C0u),
              param,
              1u,
              0u,
              0u,
              3u);

    g->eax = rd32(g->esi + 8u);

    cow_thiscall(g,
                 COW_IMG(0x1015E6E0u),
                 COW_IMG(0x10621838u),
                 5u,
                 g->eax,
                 1u,
                 1u,
                 0u,
                 0u);

    const uint32_t obj = rd32(COW_IMG(0x1057823Cu));
    g->edx = rd32(obj + 8u);

    cow_thiscall(g,
                 COW_IMG(0x1015E6E0u),
                 COW_IMG(0x10621838u),
                 5u,
                 g->edx,
                 1u,
                 1u,
                 0u,
                 0u);

    g->esi = saved_esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_10205100(g, param);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
