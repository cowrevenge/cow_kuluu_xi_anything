/* f_0x101479d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101479d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = 0x128u;
L_101479e6: ;
        t4 = rd32(ecx + rd32(eax));
        wr32(ecx + self - 0xe8u, t4);
        if ((int32_t)(ecx + 4u) < 308)
        {
            ecx = ecx + 4u;
            goto L_101479e6;
        }
        ecx = 0x8c4u;
L_10147a03: ;
        t5 = rd32(ecx + rd32(eax));
        wr32(ecx + self - 0x870u, t5);
        if ((int32_t)(ecx + 4u) < 2256)
        {
            ecx = ecx + 4u;
            goto L_10147a03;
        }
        ecx = ecx + 4u;
        edx = t5;
    }
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    if (t6 == 0u)
    {
        eax = t6;
    }
    else
    {
        eax = t6;
        t7 = rd32(rd32(eax) + 0x19cu);
        wr32(self + 0x4cu, t7);
        t8 = rd32(rd32(eax) + 0x188u);
        wr32(self + 0x50u, t8);
        t9 = rd32(rd32(eax) + 0x124u);
        wr32(self + 0x20u, t9);
        t10 = rd32(rd32(eax) + 0x12cu);
        wr32(self + 0x24u, t10);
        t11 = rd32(rd32(eax) + 0x128u);
        wr32(self + 0x28u, t11);
        t12 = rd32(rd32(eax) + 0x1a0u);
        wr32(self + 0x2cu, t12);
        t13 = rd32(rd32(eax) + 0x1c8u);
        wr32(self + 0x30u, t13);
        t14 = rd32(rd32(eax) + 0x1ccu);
        wr32(self + 0x34u, t14);
        t15 = rd32(rd32(eax) + 0x1d0u);
        wr32(self + 0x38u, t15);
        t16 = rd32(rd32(eax) + 0x21cu);
        t17 = rd32(eax);
        wr32(self + 0x3cu, t16);
        eax = t17;
    }
    g->edx = self + 0x14u;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(self + 8u), g->edx, 0, 1, self + 0x14u);
    t19 = g->edx;
    wr8(self + 0x1cu, 0u);
    g->edx = t19;
    return t18;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101479d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101479d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
