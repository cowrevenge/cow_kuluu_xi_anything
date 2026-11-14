/* f_0x101278b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   scans a null-terminated byte string for a byte value, returning the matching pointer or 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101278b0(Guest* g, uint32_t sp0, uint32_t p, uint32_t first_byte, uint32_t target_byte)
{
    uint32_t eax = p;
    uint32_t edx = g->edx;
    uint32_t ecx = g->ecx;

    uint8_t cl = (uint8_t)first_byte;
    ecx = (ecx & 0xFFFFFF00u) | (uint32_t)cl;

    if (cl == 0u)
    {
        g->edx = edx;
        g->ecx = ecx;
        return 0u;
    }

    uint8_t dl = (uint8_t)target_byte;
    edx = (edx & 0xFFFFFF00u) | (uint32_t)dl;

    for (;;)
    {
        if (dl == cl)
        {
            g->edx = edx;
            g->ecx = ecx;
            return eax;
        }

        cl = (uint8_t)rd8(eax + 1u);
        ecx = (ecx & 0xFFFFFF00u) | (uint32_t)cl;
        eax = eax + 1u;

        if (cl == 0u)
        {
            g->edx = edx;
            g->ecx = ecx;
            return 0u;
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101278b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t p = rd32(sp0 + 4u);
    const uint32_t first_byte = rd8(p);

    uint32_t target_byte = 0u;
    if (first_byte != 0u)
    {
        target_byte = rd8(sp0 + 8u);
    }

    const uint32_t result = cow_fn_101278b0(g, sp0, p, first_byte, target_byte);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
