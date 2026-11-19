/* f_0x10323570 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Clears bit `param_2` in a 3-dword bitset at `param_1`, conditionally calls helpers when the bit was set, and zeroes any unused dwords beyond the dword containing that bit.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10323570(Guest* g, uint32_t sp0, uint32_t param_1, uint32_t param_2)
{
    const int32_t a2 = (int32_t)param_2;

    const int32_t q = a2 / 32;
    const int32_t r = a2 % 32;

    const uint32_t edi = param_2 - 1u;
    uint32_t ebx = param_2;

    const uint32_t ptr = param_1 + (uint32_t)q * 4u;

    /* Store the computed pointer where the original stored it: [ebp + 0xc] == [sp0 + 8]. */
    wr32(sp0 + 8u, ptr);

    const uint32_t shift = (uint32_t)(0x1fu - r) & 0x1fu;

    uint32_t mask = 1u;
    mask <<= shift;

    uint32_t local_8 = 0u;

    if ((rd32(ptr) & mask) != 0u)
    {
        ebx = ebx + 1u;

        const uint32_t first = cow_cdecl(g, COW_IMG(0x103234d1u), 2u, param_1, ebx);

        if (first == 0u)
        {
            local_8 = cow_cdecl(g, COW_IMG(0x1032351au), 2u, param_1, edi);
        }
    }

    /* Reload exactly as the original did: mov eax, dword ptr [ebp + 0xc]. */
    const uint32_t ptr2 = rd32(sp0 + 8u);

    uint32_t clear_mask = 0xFFFFFFFFu;
    clear_mask <<= shift;

    wr32(ptr2, rd32(ptr2) & clear_mask);

    const int32_t q_plus_1 = q + 1;

    if (q_plus_1 < 3)
    {
        uint32_t count = (uint32_t)(3 - q_plus_1);
        uint32_t dst = param_1 + (uint32_t)q_plus_1 * 4u;

        while (count != 0u)
        {
            wr32(dst, 0u);
            dst += 4u;
            --count;
        }
    }

    return local_8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10323570(g, sp0, param_1, param_2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
