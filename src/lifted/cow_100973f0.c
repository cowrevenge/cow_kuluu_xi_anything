/* f_0x100973f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100973f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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

    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
    {
        eax = rd32(self + 0x120u);
        edx = in_edx;
        goto L_100974f0;
    }
    eax = rd32(self + 0x120u);
    if ((int8_t)eax < 0)
    {
        edx = in_edx;
        goto L_100974f0;
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if ((rd32(self + 0x78u) & 0xff000000u) != 0u)
    {
        eax = rd32(self + 0x78u);
        edx = t2;
        goto L_100974f0;
    }
    edx = t2;
    edi = t1;
    if ((rd32(self + 0x128u) & 0x20000000u) != 0u)
    {
        eax = rd32(self + 0x128u);
        t3 = rd32(self + 0xa0u);
        if ((eax & 0x40u) == 0u)
        {
            ecx = t3;
            loc_c = t3;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x100cf060u), ecx, 1, loc_c);
            t7 = g->edx;
            g->edx = t7;
            cow_thiscall(g, COW_IMG(0x100cf100u), rd32(self + 0xa0u), 1, 0u);
            t8 = g->edx;
            edx = t8;
        }
        else
        {
            ecx = t3;
            loc_c = t3;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t4 = cow_thiscall(g, COW_IMG(0x100cf0b0u), ecx, 1, loc_c);
            t5 = g->edx;
            g->edx = t5;
            cow_thiscall(g, COW_IMG(0x100cf160u), rd32(self + 0xa0u), 1, 0u);
            t6 = g->edx;
            edx = t6;
        }
    }
    if ((rd32(self + 0x128u) & 0x40u) == 0u)
    {
        eax = rd32(self + 0x128u);
        goto L_100974a8;
    }
    eax = rd32(self + 0x128u);
    if (rd32(rd32(self + 0xa0u) + 0x84u) != 0u)
    {
        edx = rd32(rd32(self + 0xa0u) + 0x84u);
        goto L_100974a3;
    }
    ecx = rd32(self + 0xa0u);
    t9 = (eax & 0xffffff00u) | (uint8_t)(eax | 0x80u);
    t10 = rd32(self + 0x78u);
    wr32(self + 0x128u, t9);
    if (rd32(edi + 0x78u) != t10)
    {
        edx = t10;
        goto L_10097499;
    }
    eax = rd32(edi + 0x78u);
    g->eax = eax;
    g->edx = rd32(ecx);
    t11 = rd32(ecx);
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, rd32(t11 + 0x30u), ecx, 1, 0x27808080u);
    t13 = g->edx;
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_10097499: ;
    g->eax = rd32(ecx);
    g->edx = edx;
    t14 = rd32(ecx);
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, rd32(t14 + 0x30u), ecx, 1, 0x808080u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_100974a3: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100974a8: ;
    if ((int8_t)eax < 0)
    {
        t17 = (eax & 0xffffff00u) | (eax & 0x7fu);
        t18 = rd32(self + 0xa0u);
        wr32(self + 0x128u, t17);
        g->edx = rd32(t18);
        t19 = rd32(t18);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t19 + 0x30u), t18, 1, 0x80808080u);
        t20 = g->edx;
        edx = t20;
    }
    if (rd32(rd32(self + 0xa0u) + 0x84u) != 0u)
    {
        eax = rd32(rd32(self + 0xa0u) + 0x84u);
    }
    else
    {
        ecx = rd32(self + 0xa0u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t21 = rd32(ecx);
        g->esp = sp0 - 8u;
        t22 = cow_thiscall(g, rd32(t21 + 0x2cu), ecx, 0);
        t23 = g->edx;
        if ((t22 & 0xff000000u) == 0u)
        {
            eax = t22;
            edx = t23;
        }
        else
        {
            eax = t22;
            g->eax = eax;
            g->edx = rd32(rd32(self + 0xa0u));
            t24 = rd32(rd32(self + 0xa0u));
            g->esp = sp0 - 8u;
            t25 = cow_thiscall(g, rd32(t24 + 0x30u), rd32(self + 0xa0u), 1, 0x80808080u);
            t26 = g->edx;
            eax = t25;
            edx = t26;
        }
    }
L_100974f0: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100973f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100973f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
