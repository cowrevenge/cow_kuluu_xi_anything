/* f_0x10262470 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Initializes a this-object from six stack arguments, copies a string-like buffer when provided, and returns the this-pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10262470(Guest* g, uint32_t self,
                         uint32_t arg0, uint32_t arg1, uint32_t arg2,
                         uint32_t arg3, uint32_t arg4, uint32_t arg5)
{
    (void)arg3;

    cow_thiscall(g, COW_IMG(0x102659d0u), self, 2u, arg0, 0u);

    wr32(self + 0x1cu, arg5);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x20u, arg2);
    wr8(self + 0x24u, 0u);
    wr8(self + 0x25u, 0u);
    wr8(self + 0x26u, 0u);
    wr32(self + 0x28u, arg1);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x30u, 1u);

    cow_thiscall_cdecl(g, COW_IMG(0x1026a150u), self + 0x34u, 0u);

    wr32(self + 0x80u, 0u);
    wr32(self + 0x84u, 0u);
    wr32(self + 0x88u, 0xFFFFFFFFu);
    wr32(self + 0x8cu, 0x7FFFFFFFu);
    wr32(self + 0x90u, 0u);
    wr32(self + 0x94u, 0x3FF00000u);

    if (arg4 != 0u)
    {
        uint32_t n = cow_stdcall(g, COW_IMG(0x102661a0u), 1u, arg4);
        n = n + 1u;

        uint32_t size = n + n;
        uint32_t dst = cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, size);

        wr32(self + 0x14u, dst);

        if (dst != 0u)
        {
            uint32_t src = arg4;
            uint32_t cnt = size >> 2u;

            while (cnt != 0u)
            {
                wr32(dst, rd32(src));
                dst += 4u;
                src += 4u;
                --cnt;
            }

            cnt = size & 3u;
            while (cnt != 0u)
            {
                wr8(dst, rd8(src));
                dst += 1u;
                src += 1u;
                --cnt;
            }
        }
    }

    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);
    const uint32_t arg3 = rd32(sp0 + 16u);
    const uint32_t arg4 = rd32(sp0 + 20u);
    const uint32_t arg5 = rd32(sp0 + 24u);

    const uint32_t result = cow_fn_10262470(g, self, arg0, arg1, arg2, arg3, arg4, arg5);

    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
