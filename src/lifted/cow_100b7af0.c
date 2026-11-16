/* f_0x100b7af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7af0(Guest* g)
{
    double d16;
    double d24;
    double d32;
    double d8;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    t2 = g->edx;
    if (!(t1 & 1u))
    {
        eax = t1;
        edx = t2;
        ebx = t1;
        loc_4 = self;
    }
    else
    {
        eax = t1;
        edx = t2;
        ebx = t1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
        t4 = g->edx;
        g->edx = t4;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t6 = g->ecx;
        t7 = g->edx;
        d8 = (double)(float)fr(g, (double)(int32_t)t5 * (double)rdf32(COW_IMG(0x1032a22cu)));
        g->edx = t7;
        g->esp = sp0 - 0xcu;
        t9 = cow_cdecl(g, COW_IMG(0x10035d40u), 2, cow_f2bits(d8), t3);
        t10 = g->edx;
        eax = t9;
        edx = t10;
        loc_4 = t5;
    }
    if ((ebx & 2u) != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
        t12 = g->edx;
        g->edx = t12;
        g->esp = sp0 - 0x10u;
        t13 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t14 = g->ecx;
        t15 = g->edx;
        d16 = (double)(float)fr(g, (double)(int32_t)t13 * (double)rdf32(COW_IMG(0x1032a22cu)));
        g->edx = t15;
        g->esp = sp0 - 0xcu;
        t17 = cow_cdecl(g, COW_IMG(0x10035d90u), 2, cow_f2bits(d16), t11);
        t18 = g->edx;
        eax = t17;
        edx = t18;
        loc_4 = t13;
    }
    if ((ebx & 4u) != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t19 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
        t20 = g->edx;
        g->edx = t20;
        g->esp = sp0 - 0x10u;
        t21 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t22 = g->ecx;
        t23 = g->edx;
        d24 = (double)(float)fr(g, (double)(int32_t)t21 * (double)rdf32(COW_IMG(0x1032a22cu)));
        g->edx = t23;
        g->esp = sp0 - 0xcu;
        t25 = cow_cdecl(g, COW_IMG(0x10035de0u), 2, cow_f2bits(d24), t19);
        t26 = g->edx;
        eax = t25;
        edx = t26;
        loc_4 = t21;
    }
    if ((ebx & 8u) != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t27 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 3u);
        t28 = g->edx;
        g->edx = t28;
        g->esp = sp0 - 0x10u;
        t29 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t30 = g->ecx;
        t31 = g->edx;
        d32 = (double)(float)fr(g, (double)(int32_t)t29 * (double)rdf32(COW_IMG(0x1032a22cu)));
        cow_thiscall_cdecl(g, COW_IMG(0x10035bc0u), t30, 1, cow_f2bits(d32));
        loc_4 = t29;
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7af0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
