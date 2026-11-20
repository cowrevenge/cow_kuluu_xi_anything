/* f_0x101bccb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   reads a configured path, launches the configured program, and returns 0 on success or 1 on failure.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bccb0(Guest* g, uint32_t sp0)
{
    const uint32_t addr_hkey = sp0 - 0x2a4u;
    const uint32_t addr_cb   = sp0 - 0x2a0u;
    const uint32_t addr_type = sp0 - 0x29cu;
    const uint32_t addr_data = sp0 - 0x244u;
    const uint32_t addr_pi   = sp0 - 0x298u;
    const uint32_t addr_si   = sp0 - 0x288u;
    const uint32_t addr_cmd  = sp0 - 0x140u;

    cow_frame(g, sp0, 0x2d8u);

    for (uint32_t i = 0u; i < 0x41u; ++i)
        wr32(addr_data + i * 4u, 0u);

    wr32(addr_cb, 0x104u);
    wr32(addr_hkey, 0u);

    const uint32_t table_base = rd32(COW_IMG(0x10456a28u));
    const uint32_t index = rd32(table_base + 4u);
    const uint32_t subkey = rd32(COW_IMG(0x1037ca08u) + index * 4u);

    const uint32_t r1 = cow_stdcall(
        g,
        rd32(COW_IMG(0x1032901cu)),
        5u,
        0x80000002u,
        subkey,
        0u,
        0xf003fu,
        addr_hkey
    );

    if (r1 != 0u)
        return 1u;

    const uint32_t ebx = rd32(addr_hkey);

    wr32(addr_type, 0u);

    const uint32_t r2 = cow_stdcall(
        g,
        rd32(COW_IMG(0x1032900cu)),
        6u,
        ebx,
        COW_IMG(0x1034f498u),
        0u,
        addr_type,
        addr_data,
        addr_cb
    );

    if (r2 != 0u)
    {
        if (ebx != 0u)
        {
            cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1u, ebx);
        }
        return 1u;
    }

    const uint32_t table2 = rd32(COW_IMG(0x1037ca14u) + index * 4u);

    cow_cdecl(
        g,
        COW_IMG(0x10312031u),
        4u,
        addr_cmd,
        COW_IMG(0x1037ca90u),
        addr_data,
        table2
    );

    wr32(addr_pi + 0x00u, 0u);
    for (uint32_t i = 0u; i < 0x11u; ++i)
        wr32(addr_si + i * 4u, 0u);
    wr32(addr_pi + 0x04u, 0u);
    wr32(addr_pi + 0x08u, 0u);
    wr32(addr_pi + 0x0cu, 0u);
    wr32(addr_si, 0x44u);

    cow_stdcall(g, rd32(COW_IMG(0x10329204u)), 1u, addr_si);

    const uint32_t r3 = cow_stdcall(
        g,
        rd32(COW_IMG(0x10329200u)),
        10u,
        0u,
        addr_cmd,
        0u,
        0u,
        0u,
        0u,
        0u,
        0u,
        addr_si,
        addr_pi
    );

    if (r3 == 0u)
    {
        if (ebx != 0u)
        {
            cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1u, ebx);
        }
        return 1u;
    }

    const uint32_t close_target = rd32(COW_IMG(0x10329104u));

    const uint32_t hThread = rd32(addr_pi + 0x04u);
    cow_stdcall(g, close_target, 1u, hThread);

    const uint32_t hProcess = rd32(addr_pi + 0x00u);
    cow_stdcall(g, close_target, 1u, hProcess);

    const uint32_t obj = rd32(COW_IMG(0x10455c20u));
    if (obj != 0u)
    {
        cow_thiscall(g, COW_IMG(0x10005600u), obj, 1u, 1u);
    }

    if (ebx != 0u)
    {
        cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1u, ebx);
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bccb0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    const uint32_t result = cow_fn_101bccb0(g, sp0);

    g->esp = sp0;
    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
