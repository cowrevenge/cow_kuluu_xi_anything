/* f_0x1010c720 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object's first dword is nonzero, scans the supplied NUL-terminated string and calls FUN_103122d6 with the string, 1, its length, and that dword.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1010c720(Guest* g, uint32_t self, uint32_t first, uint32_t str)
{
    uint32_t edi;
    uint32_t ecx;
    uint32_t length;
    uint32_t saved_edi;

    (void)self;

    if (first == 0u)
    {
        return;
    }

    edi = str;
    ecx = 0xFFFFFFFFu;

    while (ecx != 0u)
    {
        uint8_t b = rd8(edi);
        uint8_t r = (uint8_t)(0u - b);
        uint32_t zf = (uint32_t)r == 0u;

        edi += 1u;
        ecx -= 1u;

        if (zf)
        {
            break;
        }
    }

    length = (uint32_t)(~ecx - 1u);

    saved_edi = g->edi;
    cow_cdecl(g, COW_IMG(0x103122d6u), 4u, str, 1u, length, first);
    g->edi = saved_edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010c720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t first = rd32(self);
    const uint32_t str = (first != 0u) ? rd32(sp0 + 4u) : 0u;

    cow_fn_1010c720(g, self, first, str);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
