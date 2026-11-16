/* f_0x100a9e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a9e00(Guest* g)
{
    uint32_t eax;
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
    uint32_t t20;
    uint32_t t21;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10071060u), self + 0x78u, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        edx = t2;
        goto L_100a9e8a;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, COW_IMG(0x1003b700u), self + 0x34u, 0);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
        }
        else
        {
            edx = t6;
            if (rd32(self + 0x7cu) == 0u)
            {
                eax = rd32(self + 0x7cu);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t12 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                t13 = g->edx;
                t14 = rd32(t12);
                t15 = cow_thiscall_cdecl(g, COW_IMG(0x1003b700u), self + 0x34u, 3, 0x6e69616du, 0u, 0u);
                t16 = rd32(self + 0x74u);
                g->edx = t16;
                t17 = cow_thiscall(g, rd32(t14 + 0x2c4u), t12, 5, t16, t15, 0x6e69616du, 0u, 0u);
                t18 = g->edx;
                eax = t17;
                edx = t18;
            }
            else
            {
                eax = rd32(self + 0x7cu);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t7 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                t8 = rd32(self + 0x7cu);
                g->edx = rd32(t7);
                t9 = rd32(t7);
                t10 = cow_thiscall(g, rd32(t9 + 0x2c0u), t7, 1, t8);
                t11 = g->edx;
                wr32(self + 0x7cu, 0u);
                eax = t10;
                edx = t11;
            }
        }
    }
    if (self != 0u)
    {
        g->eax = rd32(self);
        g->edx = edx;
        t19 = rd32(self);
        g->esp = sp0 - 4u;
        t20 = cow_thiscall(g, rd32(t19 + 0x18u), self, 1, 1u);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100a9e8a: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a9e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a9e00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
