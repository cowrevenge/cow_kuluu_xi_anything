/* f_0x100034b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100034b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self + 4u);
    g->eax = t1;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(rd32(t1) + 0x34u), rd32(t1), 4, t1, 0u, 1u, arg8);
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        goto L_10003591;
    }
    edi = self + 0xcu;
    eax = 0u;
    ecx = 0xdu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(self + 0x20u, 1u);
    if ((uint8_t)arg6 == 0u)
    {
        wr32(self + 0x28u, 1u);
        wr32(self + 0x3cu, 0u);
    }
    else
    {
        wr32(self + 0x28u, 0u);
        if (rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x68u) == 0u)
        {
            if ((rd32(arg8 + 0x14u) & 0x80000000u) == 0u)
            {
                wr32(self + 0x3cu, 0u);
            }
            else
            {
                wr32(self + 0x3cu, 0x80000000u);
            }
        }
        else
        {
            if (rd8(arg8 + 0x14u) & 1u)
            {
                wr32(self + 0x3cu, 1u);
                wr32(self + 0x20u, 2u);
            }
        }
    }
    wr32(self + 0xcu, arg4);
    wr32(self + 0x10u, arg5);
    wr32(self + 0x14u, arg2);
    wr32(self + 0x30u, arg3);
    t3 = rd32(self + 4u);
    wr32(self + 0x18u, 1u);
    wr32(self + 0x2cu, 1u);
    wr32(self + 0x24u, arg1);
    if ((uint8_t)arg7 == 0u)
    {
        eax = t3;
        edi = rd32(t3);
        goto L_1000357e;
    }
    eax = t3;
    edi = rd32(t3);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, rd32(edi + 0x3cu), arg1, 7, eax, 0u, 1u, arg1, 0x20u, self + 0xcu, self + 8u);
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        goto L_10003591;
    }
    eax = t4;
L_10003575: ;
    return (eax & 0xffffff00u) | 1u;
L_1000357e: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, rd32(edi + 0x3cu), arg1, 7, eax, 0u, 1u, arg1, 0x40u, self + 0xcu, self + 8u);
    if ((int32_t)t5 >= 0)
    {
        eax = t5;
        goto L_10003575;
    }
    eax = t5;
L_10003591: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100034b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100034b0(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
