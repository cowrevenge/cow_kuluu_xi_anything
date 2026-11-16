/* f_0x10289a30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   looks up an object for arg1, returns -1 if not found, otherwise updates arg0's fields and item list.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10289a30(Guest* g, uint32_t arg0, uint32_t arg1)
{
    const uint32_t sp0 = g->esp;

    /* Original before call 0x10291220:
       push edi
       push 0x10361d24
       push eax
       call ...
       add esp, 8
       leaving esp = sp0 - 4
     */
    g->esp = sp0 - 4u;

    const uint32_t edi0 = g->edi;
    uint32_t edx = g->edx;

    const uint32_t r = cow_cdecl(g, COW_IMG(0x10291220u), 2u, arg1, COW_IMG(0x10361d24u));
    edx = g->edx;

    if (r == 0u)
    {
        g->edi = edi0;
        g->edx = edx;
        g->esp = sp0;
        return 0xFFFFFFFFu;
    }

    g->edi = r;

    cow_cdecl(g, COW_IMG(0x103122d6u), 4u,
              COW_IMG(0x103b95b4u),
              8u,
              1u,
              r);
    edx = g->edx;

    cow_cdecl(g, COW_IMG(0x102895d0u), 2u, rd32(arg0 + 0x14u), r);
    edx = g->edx;

    cow_cdecl(g, COW_IMG(0x102895d0u), 2u, rd32(arg0 + 0x18u), r);
    edx = g->edx;

    cow_cdecl(g, COW_IMG(0x102895d0u), 2u, rd32(arg0 + 0x1cu), r);
    edx = g->edx;

    cow_cdecl(g, COW_IMG(0x102895d0u), 2u, rd32(arg0 + 0x20u), r);
    edx = g->edx;

    uint32_t node = rd32(arg0 + 0x24u);
    if (node != 0u)
    {
        int32_t count = (int32_t)rd32(arg0 + 0x1cu);
        if (count > 0)
        {
            uint32_t i = 0u;
            do
            {
                cow_cdecl(g, COW_IMG(0x10289d80u), 2u, node, r);
                edx = g->edx;

                node += 0x10u;
                i += 1u;
            } while ((int32_t)i < count);
        }
    }

    cow_cdecl(g, COW_IMG(0x10311f70u), 1u, r);
    edx = g->edx;

    g->edi = edi0;
    g->edx = edx;
    g->esp = sp0;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10289a30(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
