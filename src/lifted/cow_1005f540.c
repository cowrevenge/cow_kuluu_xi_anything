/* f_0x1005f540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1005f540(Guest* g)
{
    double d20;
    double d30;
    double d7;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        edx = t2;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        g->edx = rd32(t3);
        t4 = rd32(t3);
        t5 = cow_thiscall(g, rd32(t4 + 0x1bcu), t3, 0);
        t6 = g->edx;
        d7 = fr(g, (double)rdf32(self + 0x78u) - (double)rdf32(t5));
        if (!(d7 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            edx = t6;
            g->esp = sp0 - 0xcu;
            t12 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            g->edx = rd32(t12);
            t13 = rd32(t12);
            t14 = cow_thiscall(g, rd32(t13 + 0x1bcu), t12, 0);
            t15 = g->edx;
            eax = t14;
            edx = t15;
            x0 = fr(g, (double)rdf32(self + 0x78u) - (double)rdf32(t14));
        }
        else
        {
            edx = t6;
            g->esp = sp0 - 0xcu;
            t8 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            g->edx = rd32(t8);
            t9 = rd32(t8);
            t10 = cow_thiscall(g, rd32(t9 + 0x1bcu), t8, 0);
            t11 = g->edx;
            eax = t10;
            edx = t11;
            x0 = -fr(g, (double)rdf32(self + 0x78u) - (double)rdf32(t10));
        }
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) != 0u)
        {
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
        g->esp = sp0 - 0xcu;
        t16 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        g->edx = rd32(t16);
        t17 = rd32(t16);
        t18 = cow_thiscall(g, rd32(t17 + 0x1bcu), t16, 0);
        t19 = g->edx;
        d20 = fr(g, (double)rdf32(self + 0x7cu) - (double)rdf32(t18 + 8u));
        if (!(d20 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            edx = t19;
            g->esp = sp0 - 0xcu;
            t25 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            g->edx = rd32(t25);
            t26 = rd32(t25);
            t27 = cow_thiscall(g, rd32(t26 + 0x1bcu), t25, 0);
            t28 = g->edx;
            eax = t27;
            edx = t28;
            x0 = fr(g, (double)rdf32(self + 0x7cu) - (double)rdf32(t27 + 8u));
        }
        else
        {
            edx = t19;
            g->esp = sp0 - 0xcu;
            t21 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
            g->edx = rd32(t21);
            t22 = rd32(t21);
            t23 = cow_thiscall(g, rd32(t22 + 0x1bcu), t21, 0);
            t24 = g->edx;
            eax = t23;
            edx = t24;
            x0 = -fr(g, (double)rdf32(self + 0x7cu) - (double)rdf32(t23 + 8u));
        }
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) == 0u)
        {
            ebx = (ebx & 0xffffff00u) | 1u;
        }
    }
    t29 = rd32(COW_IMG(0x1047bfa8u));
    d30 = fr(g, (double)rdf32(self + 0x74u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    wrf32(self + 0x74u, (float)d30);
    if (d30 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (t29 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1005f649;
    }
    eax = (t29 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    if ((uint8_t)ebx == 1u) goto L_1005f649;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1005f649: ;
    g->eax = eax;
    g->edx = rd32(self);
    t31 = rd32(self);
    g->esp = sp0 - 0xcu;
    t32 = cow_thiscall(g, rd32(t31 + 0x18u), self, 1, 1u);
    t33 = g->edx;
    g->edx = t33;
    return (t32 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1005f540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1005f540(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
