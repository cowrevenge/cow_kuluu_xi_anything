/* f_0x10170e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10170e80(Guest* g)
{
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((rd32(sp0 + 4u) & 0xffff0000u) == 0xffff0000u)
    {
        t1 = rd8(COW_IMG(0x10376de8u) + (uint8_t)arg3);
        if ((int32_t)(uint32_t)((int32_t)(((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) - (uint32_t)((int32_t)((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) >> 0x1fu)) >> 1u) > 0)
        {
            edi = t1;
            edx = 0u;
            ebx = arg3;
L_10170ec2: ;
            t2 = ebx + edi + 9u;
            wr32(sp0 + 4u, t2);
            if (!(edi & 1u))
            {
                ebx = ebx + 9u;
                edi = t2;
            }
            else
            {
                ebx = ebx + 9u;
                t3 = rd32(arg4 + edx + (uint32_t)((int32_t)(((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) - (uint32_t)((int32_t)((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) >> 0x1fu)) >> 1u));
                t4 = rd32(arg4 + edx);
                wr32(arg4 + edx, t3);
                t5 = rd32(arg4 + edx + (uint32_t)((int32_t)(((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) - (uint32_t)((int32_t)((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) >> 0x1fu)) >> 1u) + 4u);
                wr32(arg4 + edx + (uint32_t)((int32_t)(((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) - (uint32_t)((int32_t)((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) >> 0x1fu)) >> 1u), t4);
                t6 = rd32(arg4 + edx + 4u);
                wr32(arg4 + edx + 4u, t5);
                wr32(arg4 + edx + (uint32_t)((int32_t)(((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) - (uint32_t)((int32_t)((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) >> 0x1fu)) >> 1u) + 4u, t6);
                edi = rd32(sp0 + 4u);
            }
            if ((int32_t)(edx + 8u) < (int32_t)(uint32_t)((int32_t)(((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) - (uint32_t)((int32_t)((arg2 - 8u & 0xffffff00u) | (arg2 - 8u & 0xf0u)) >> 0x1fu)) >> 1u))
            {
                edx = edx + 8u;
                goto L_10170ec2;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10170e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10170e80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
