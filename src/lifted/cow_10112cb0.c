/* f_0x10112cb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   appends up to 0x800 bytes from a fixed image buffer to a stream buffer, consulting helper routines and returning 0/1/2/3.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10112cb0(Guest* g, uint32_t self, uint32_t param2, uint32_t sp0)
{
    const uint32_t esi0 = g->esi;
    const uint32_t edi0 = g->edi;

    uint32_t esi = rd32(self + 0x8f8u);
    uint32_t ecx = rd32(self + 0x8fcu);
    esi = esi - ecx;

    if ((int32_t)esi <= 0)
    {
        g->esi = esi0;
        g->edi = edi0;
        return 2u;
    }

    if ((uint32_t)esi > 0x800u)
    {
        esi = 0x800u;
    }

    const uint32_t call_esp = sp0 - 8u;

    uint32_t eax = rd32(self + 0x900u);

    if ((uint8_t)param2 != 0u)
    {
        if (eax != 0u && rd8(eax) != 0u)
        {
            uint32_t this0 = rd32(COW_IMG(0x10662dccu));
            g->esp = call_esp;
            uint32_t r = cow_thiscall(g, COW_IMG(0x101c4a40u), this0, 2u, eax, 0u);
            g->esp = call_esp;

            if ((uint8_t)r != 0u)
            {
                g->esi = esi0;
                g->edi = edi0;
                return 3u;
            }
        }
        else
        {
            uint32_t edx = rd32(self + 0x8f4u);
            uint32_t this0 = rd32(COW_IMG(0x10662dccu));
            g->esp = call_esp;
            uint32_t r = cow_thiscall(g, COW_IMG(0x101c4a10u), this0, 3u, edx, 0u, 0u);
            g->esp = call_esp;

            if ((uint8_t)r != 0u)
            {
                g->esi = esi0;
                g->edi = edi0;
                return 3u;
            }
        }

        uint32_t old_tail = rd32(self + 0x8fcu);
        uint32_t count = esi;

        wr32(self + 0x804u, count);
        wr32(self + 0x8fcu, old_tail + count);

        uint32_t dst = self + 4u;
        uint32_t src = COW_IMG(0x104e0f08u);

        uint32_t n = count >> 2;
        while (n-- != 0u)
        {
            wr32(dst, rd32(src));
            dst += 4u;
            src += 4u;
        }

        n = count & 3u;
        while (n-- != 0u)
        {
            wr8(dst, rd8(src));
            dst += 1u;
            src += 1u;
        }

        g->esi = esi0;
        g->edi = edi0;
        return 1u;
    }

    if (eax != 0u && rd8(eax) != 0u)
    {
        uint32_t this0 = rd32(COW_IMG(0x10662dccu));
        g->esp = call_esp;
        uint32_t r = cow_thiscall(g, COW_IMG(0x101c4a40u), this0, 2u, eax, 0u);
        g->esp = call_esp;

        if ((uint8_t)r != 0u)
        {
            g->esi = esi0;
            g->edi = edi0;
            return 3u;
        }

        uint32_t arg1 = rd32(self + 0x900u);
        uint32_t arg2 = COW_IMG(0x104e0f08u);
        uint32_t arg3 = esi;
        uint32_t arg4 = rd32(self + 0x8fcu);
        uint32_t arg5 = 0u;

        this0 = rd32(COW_IMG(0x10662dccu));
        g->esp = call_esp;
        r = cow_thiscall(g, COW_IMG(0x101c46f0u), this0, 5u, arg1, arg2, arg3, arg4, arg5);
        g->esp = call_esp;

        if ((int32_t)r < 0)
        {
            g->esi = esi0;
            g->edi = edi0;
            return 3u;
        }

        g->esi = esi0;
        g->edi = edi0;
        return 0u;
    }

    {
        uint32_t edx = rd32(self + 0x8f4u);
        uint32_t this0 = rd32(COW_IMG(0x10662dccu));
        g->esp = call_esp;
        uint32_t r = cow_thiscall(g, COW_IMG(0x101c4a10u), this0, 3u, edx, 0u, 0u);
        g->esp = call_esp;

        if ((uint8_t)r != 0u)
        {
            g->esi = esi0;
            g->edi = edi0;
            return 3u;
        }

        uint32_t arg1 = rd32(self + 0x8f4u);
        uint32_t arg2 = COW_IMG(0x104e0f08u);
        uint32_t arg3 = esi;
        uint32_t arg4 = rd32(self + 0x8fcu);

        this0 = rd32(COW_IMG(0x10662dccu));
        g->esp = call_esp;
        r = cow_thiscall(g, COW_IMG(0x101c46d0u), this0, 4u, arg1, arg2, arg3, arg4);
        g->esp = call_esp;

        if ((int32_t)r < 0)
        {
            g->esi = esi0;
            g->edi = edi0;
            return 3u;
        }

        g->esi = esi0;
        g->edi = edi0;
        return 0u;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param2 = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_10112cb0(g, g->ecx, param2, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
