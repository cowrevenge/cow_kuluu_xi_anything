/* f_0x100a40a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If a global flag is set, report an event and copy the first argument; otherwise find a free 0x140-byte slot, copy the two arguments into it, mark it used, or report an event if none is free.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100a40a0(Guest* g, uint32_t param1, uint32_t param2)
{
    if (rd8(COW_IMG(0x10487e48u)) != 0)
    {
        uint32_t eax = cow_cdecl(g, COW_IMG(0x10152ef0u), 2u, 9u, 0x82u);
        cow_cdecl(g, COW_IMG(0x100e3570u), 4u, param1, 3u, 0u, eax);
        return;
    }

    uint32_t ecx = 0u;
    uint32_t eax = COW_IMG(0x10485bb4u);

    for (;;)
    {
        if (rd8(eax) == 0)
            break;

        eax += 0x140u;
        ++ecx;

        if ((int32_t)eax >= (int32_t)COW_IMG(0x104860b4u))
        {
            uint32_t eax2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2u, 9u, 0x83u);
            cow_cdecl(g, COW_IMG(0x100e3570u), 4u, param1, 3u, 0u, eax2);
            return;
        }
    }

    uint32_t off = ecx * 5u;
    off <<= 6;

    uint32_t dst = COW_IMG(0x10485a78u) + off;
    for (uint32_t i = 0u; i < 6u; ++i)
    {
        wr32(dst, rd32(param1));
        dst += 4u;
        param1 += 4u;
    }

    dst = COW_IMG(0x10485ab4u) + off;
    for (uint32_t i = 0u; i < 0x40u; ++i)
    {
        wr32(dst, rd32(param2));
        dst += 4u;
        param2 += 4u;
    }

    wr8(COW_IMG(0x10485bb4u) + off, 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a40a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    cow_fn_100a40a0(g, param1, param2);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
