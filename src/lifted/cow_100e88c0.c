/* f_0x100e88c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100e84c0 once, then if the byte at 0x10361e38 is nonzero walks a 0x68-byte table calling FUN_100e84c0 for each entry until a zero terminator is found, returning 1 in al.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e88c0(Guest* g)
{
    uint32_t eax = cow_cdecl(g, COW_IMG(0x100e84c0u), 1u, COW_IMG(0x10361ff4u));

    if (rd8(COW_IMG(0x10361e38u)) == 0u)
    {
        return (eax & 0xFFFFFF00u) | 1u;
    }

    const uint32_t saved_esi = g->esi;
    uint32_t ptr = COW_IMG(0x10361e38u);

    for (;;)
    {
        g->eax = ptr;
        g->ecx = ptr + 0x14u;
        g->esi = ptr;

        cow_cdecl(g, COW_IMG(0x100e84c0u), 3u,
                  COW_IMG(0x10361fe8u),
                  ptr,
                  ptr + 0x14u);

        const uint8_t next = (uint8_t)rd8(ptr + 0x68u);
        ptr += 0x68u;

        if (next == 0u)
        {
            break;
        }
    }

    g->esi = saved_esi;
    return (ptr & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e88c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100e88c0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
