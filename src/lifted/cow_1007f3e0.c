/* f_0x1007f3e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100fc510; if it returns null, returns -arg3, otherwise compares two byte strings and calls FUN_100780a0 with selected parameters, returning arg3.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */

static uint32_t cow_cmpsb_sign(uint32_t esi, uint32_t edi, uint32_t count)
{
    for (uint32_t i = 0; i < count; ++i)
    {
        uint32_t a = rd8(esi + i);
        uint32_t b = rd8(edi + i);
        if (a != b)
            return (a > b) ? 1u : 0xFFFFFFFFu;
    }
    return 0u;
}

uint32_t cow_fn_1007f3e0(Guest* g, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    (void)arg1;
    (void)arg2;

    uint32_t pu = cow_cdecl(g, COW_IMG(0x100fc510u), 0);

    if (pu == 0u)
    {
        /* edx is whatever FUN_100fc510 left in it */
        return (uint32_t)(0u - arg3);
    }

    if (rd32(COW_IMG(0x1047d490u)) == 2u)
    {
        uint32_t base = rd32(COW_IMG(0x103551e0u));
        uint32_t ebx = rd32(base + 4u);

        uint32_t edx = cow_cmpsb_sign(ebx, COW_IMG(0x1034f488u), 4u);

        if (edx == 0u)
        {
            uint32_t a = rd32(pu);
            uint32_t b = rd32(pu + 4u);

            g->edx = b;
            cow_cdecl(g, COW_IMG(0x100780a0u), 5, a, b, 0x18u, 0u, 0u);
            return arg3;
        }

        edx = cow_cmpsb_sign(ebx, COW_IMG(0x10357d7cu), 3u);

        if (edx == 0u)
        {
            uint32_t a = rd32(pu);
            uint32_t b = rd32(pu + 4u);

            g->edx = a;
            cow_cdecl(g, COW_IMG(0x100780a0u), 5, a, b, 0x18u, 1u, 0u);
            return arg3;
        }
    }

    {
        uint32_t a = rd32(pu);
        uint32_t b = rd32(pu + 4u);

        g->edx = a;
        cow_cdecl(g, COW_IMG(0x100780a0u), 5, a, b, 0x18u, 2u, 0u);
        return arg3;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007f3e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t arg3 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_1007f3e0(g, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
