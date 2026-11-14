/* f_0x101b7870 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 0x67, 0x66, or 0x68 for sign-extended byte arguments 1, 2, or 3, otherwise returns 0x66 in al while preserving the upper bits of eax after subtracting 3.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b7870(Guest* g, uint32_t arg)
{
    (void)g;

    const uint32_t b = arg & 0xFFu;
    uint32_t eax = (b & 0x80u) ? (b | 0xFFFFFF00u) : b;

    /* 101b7875: dec eax */
    eax = eax - 1u;
    /* 101b7876: je 0x101b7888 */
    if (eax == 0u)
    {
        /* 101b7888: mov al, 0x67 */
        return (eax & 0xFFFFFF00u) | 0x67u;
    }

    /* 101b7878: dec eax */
    eax = eax - 1u;
    /* 101b7879: je 0x101b787e */
    if (eax == 0u)
    {
        /* 101b787e: mov al, 0x66 */
        return (eax & 0xFFFFFF00u) | 0x66u;
    }

    /* 101b787b: dec eax */
    eax = eax - 1u;
    /* 101b787c: je 0x101b7883 */
    if (eax == 0u)
    {
        /* 101b7883: mov al, 0x68 */
        return (eax & 0xFFFFFF00u) | 0x68u;
    }

    /* 101b787e: mov al, 0x66 */
    return (eax & 0xFFFFFF00u) | 0x66u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b7870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_101b7870(g, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
