/* f_0x10322bf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Builds a 256-bit set from the bytes of the second string, then returns a pointer to the first byte of the first string that is present in that set, or 0 if none is found.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10322bf0(Guest* g, uint32_t param1, uint32_t param2)
{
    uint8_t bits[32];
    uint32_t p2 = param2;
    uint32_t p1 = param1;
    uint32_t i;
    uint32_t b;

    for (i = 0; i < 32u; ++i)
    {
        bits[i] = 0;
    }

    /* First loop: set bits for every non-zero byte in param2.
       edx is left pointing at the terminating zero byte. */
    for (;;)
    {
        b = rd8(p2);
        if (b == 0u)
        {
            break;
        }
        ++p2;
        bits[b >> 3] = (uint8_t)(bits[b >> 3] | (uint8_t)(1u << (b & 7u)));
    }

    g->edx = p2;

    /* Second loop: scan param1 until a byte whose bit is set is found.
       If found, eax = address of that byte. If the string ends first, eax = 0. */
    for (;;)
    {
        b = rd8(p1);
        if (b == 0u)
        {
            g->eax = 0u;
            return 0u;
        }

        ++p1;

        if ((bits[b >> 3] & (uint8_t)(1u << (b & 7u))) != 0u)
        {
            uint32_t result = p1 - 1u;
            g->eax = result;
            return result;
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10322bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10322bf0(g, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
