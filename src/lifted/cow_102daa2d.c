/* f_0x102daa2d - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   initializes a local 0x3e8-byte context, zeroes three optional output pointers, calls the main worker, and returns its negative result or 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102daa2d(Guest* g, uint32_t sp0,
                         uint32_t a0, uint32_t a1, uint32_t a2,
                         uint32_t a3, uint32_t a4, uint32_t a5)
{
    const uint32_t buf = cow_frame(g, sp0, 0x3ecu);

    cow_thiscall_cdecl(g, COW_IMG(0x102ea7f9u), buf, 0);

    if (a3 != 0u) wr32(a3, 0u);
    if (a4 != 0u) wr32(a4, 0u);
    if (a5 != 0u) wr32(a5, 0u);

    const uint32_t r = cow_thiscall(g, COW_IMG(0x102ecc67u), buf, 8,
                                    a0, a1, 0u, 1u, a2, a3, a4, a5);

    cow_thiscall_cdecl(g, COW_IMG(0x102ea8a2u), buf, 0);

    if ((int32_t)r < 0)
        return r;

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102daa2d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);
    const uint32_t a3 = rd32(sp0 + 16u);
    const uint32_t a4 = rd32(sp0 + 20u);
    const uint32_t a5 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_102daa2d(g, sp0, a0, a1, a2, a3, a4, a5);

    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
