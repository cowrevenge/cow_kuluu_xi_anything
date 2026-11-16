/* f_0x10145680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10145680(Guest* g)
{
    double d6;
    double d7;
    double d8;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x105782d4u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x105782d4u));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x105782d4u));
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_cdecl(g, COW_IMG(0x101a8030u), 3, 0u, 1u, 0u);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            wr8(COW_IMG(0x105782d4u), 0u);
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    t5 = g->edx;
    if ((uint16_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
        d6 = (double)(float)fr(g, (double)rdf32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 4u) - (double)rdf32(self + 0x1cu));
        d7 = fr(g, (double)rdf32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0xcu) - (double)rdf32(self + 0x24u));
        d8 = fr(g, fr(g, d7 * d7) + fr(g, d6 * d6));
        if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103344b4u)), 1u) & 0x4100u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t9 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103715f8u));
            t10 = g->ecx;
            t11 = g->edx;
            g->edx = t11;
            t12 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 6u);
            t13 = g->edx;
            g->edx = t13;
            t14 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, t12);
            t15 = g->edx;
            g->edx = t15;
            t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10371634u));
            t17 = g->edx;
            g->edx = t17;
            t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10371620u));
            t19 = g->edx;
            g->edx = t19;
            t20 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037160cu));
            t21 = g->edx;
            cow_fastcall(g, COW_IMG(0x101dca30u), rd32(COW_IMG(0x10663468u)), t21, 0);
            t22 = g->edx;
            g->eax = rd32(self);
            g->edx = t22;
            t23 = rd32(self);
            t24 = cow_thiscall(g, rd32(t23 + 0x18u), self, 2, 6u, 0u);
            t25 = g->edx;
            eax = t24;
            edx = t25;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145680(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
