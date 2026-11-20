/* f_0x100f9ba0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Dispatches on a byte selector in the third argument, copying a variable-length payload into one of several fixed fields of the first argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_100f9ba0(Guest* g, uint32_t dest, uint32_t src)
{
    uint32_t selector = (uint32_t)rd8(src + 4u) - 1u;

    if (selector > 3u)
    {
        wr32(dest + 0x3bde8u, 1u);
        return 1u;
    }

    switch (selector)
    {
    case 0u:
    {
        uint32_t edx;
        uint32_t eax;

        wr32(dest + 0x3bde8u, 0u);

        edx = rd32(src + 8u);
        wr32(dest + 0x3bdecu, edx);

        eax = rd32(src + 0xcu);
        wr32(dest + 0x3bdf0u, eax);

        eax = (eax & 0xFFFFFF00u) | 1u;

        g->edx = edx;
        return eax;
    }

    case 1u:
    case 2u:
    {
        uint32_t byte5;
        uint32_t count;
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t n;
        uint32_t i;

        wr32(dest + 0x3bde8u, 0u);

        byte5 = (uint32_t)rd8(src + 5u);
        count = (uint32_t)rd8(src + 6u);

        eax = byte5 * 3u;
        eax = (eax & 0xFFFFFF00u) | 1u;

        esi = src + 8u;
        if (selector == 1u)
        {
            edi = dest + 0x3bdf4u + (byte5 * 3u) * 4u;
        }
        else
        {
            edi = dest + 0x3be54u + (byte5 * 3u) * 4u;
        }

        n = count >> 2u;
        for (i = 0u; i < n; ++i)
        {
            wr32(edi + i * 4u, rd32(esi + i * 4u));
        }

        n = count & 3u;
        for (i = 0u; i < n; ++i)
        {
            wr8(edi + (count >> 2u) * 4u + i, rd8(esi + (count >> 2u) * 4u + i));
        }

        g->edx = count;
        return eax;
    }

    case 3u:
    {
        uint32_t count;
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t n;
        uint32_t i;

        wr32(dest + 0x3bde8u, 0u);

        count = (uint32_t)rd8(src + 6u);
        eax = count;
        eax = (eax & 0xFFFFFF00u) | 1u;

        esi = src + 8u;
        edi = dest + 0x3bfd4u;

        n = count >> 2u;
        for (i = 0u; i < n; ++i)
        {
            wr32(edi + i * 4u, rd32(esi + i * 4u));
        }

        n = count & 3u;
        for (i = 0u; i < n; ++i)
        {
            wr8(edi + (count >> 2u) * 4u + i, rd8(esi + (count >> 2u) * 4u + i));
        }

        g->edx = dest;
        return eax;
    }

    default:
        wr32(dest + 0x3bde8u, 1u);
        return 1u;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t dest = rd32(sp0 + 4u);
    const uint32_t src = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_100f9ba0(g, dest, src);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
