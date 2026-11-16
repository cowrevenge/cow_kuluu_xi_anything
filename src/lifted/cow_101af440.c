/* f_0x101af440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101af440(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
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
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101af630u), self, 0);
    t2 = g->edx;
    if (rd32(self + 0x14u) == 0u)
    {
        edx = t2;
        edi = t1;
        wr8(rd32(self + 8u) + 0x62u, 1u);
    }
    else
    {
        edx = t2;
        edi = t1;
        wr8(rd32(self + 8u) + 0x62u, 0u);
    }
    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        if (edi != 0u)
        {
            t3 = rd32(edi + 4u);
            g->edx = t3;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x101af750u), self, 3, 8u, 0x53u, t3);
            t4 = g->edx;
            edx = t4;
        }
    }
    if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a28u));
        t5 = rd32(edi + 0xcu);
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall(g, COW_IMG(0x101af7f0u), self, 2, 4u, t5);
        t7 = g->edx;
        if (rd8(edi + 0x10u) != 0u)
        {
            eax = (t6 & 0xffffff00u) | rd8(edi + 0x10u);
            edx = t7;
            g->edi = edi;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t10 = cow_thiscall(g, COW_IMG(0x101af7f0u), self, 2, 1u, 0x11u);
            t11 = g->edx;
            g->edi = edi;
            g->edx = t11;
            t12 = cow_thiscall(g, COW_IMG(0x101af7f0u), self, 2, 2u, 0x11u);
            t13 = g->edx;
            g->edi = edi;
            g->edx = t13;
            t14 = cow_thiscall(g, COW_IMG(0x101af7f0u), self, 2, 3u, 0x11u);
            t15 = g->edx;
            g->edi = edi;
            g->edx = t15;
            t16 = cow_thiscall(g, COW_IMG(0x101af7f0u), self, 2, 0x55u, 0x13u);
            t17 = g->edx;
            eax = t16;
            edx = t17;
            loc_c = 0x13u;
        }
        else
        {
            eax = (t6 & 0xffffff00u) | rd8(edi + 0x10u);
            edx = t7;
            g->edi = edi;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t8 = cow_thiscall(g, COW_IMG(0x101af7f0u), self, 2, 0x55u, 0xcu);
            t9 = g->edx;
            eax = t8;
            edx = t9;
            loc_c = 0x1adu;
        }
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t18 = cow_thiscall(g, COW_IMG(0x101af7f0u), self, 2, 0x56u, loc_c);
        t19 = g->edx;
        g->edi = edi;
        g->edx = t19;
        t20 = cow_thiscall(g, COW_IMG(0x101af7f0u), self, 2, 0x57u, 0x1b1u);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101af440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101af440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
