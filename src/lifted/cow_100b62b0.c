/* f_0x100b62b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b62b0(Guest* g)
{
    double d10;
    double d14;
    double d18;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (self & 0xffff0000u) | rd16(self + 0x256u);
    t2 = rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if (t2 == 0u)
    {
        eax = t2;
        edx = rd32(self + 0x20u);
        goto L_100b62fd;
    }
    eax = t2;
    ecx = t1;
    if (eax != 1u)
    {
        loc_4 = self;
    }
    else
    {
        eax = eax - 1u;
        if (rd8(COW_IMG(0x104855a8u)) != 0u)
        {
            loc_4 = self;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104855a8u));
            if (rd8(COW_IMG(0x1047faafu)) != 0u)
            {
                loc_4 = self;
            }
            else
            {
                wr16(self + 0x256u, (uint16_t)(ecx + 2u));
                loc_4 = self;
            }
        }
    }
L_100b62f2: ;
    wr8(self + 0x25au, 1u);
    return;
L_100b62fd: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 8u);
    t4 = g->ecx;
    t5 = g->edx;
    d6 = (double)(float)fr(g, fr(g, (double)(int32_t)t3 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    g->edx = t5;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 6u);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = (double)(float)fr(g, (double)(int32_t)t7 * (double)rdf32(COW_IMG(0x1032a22cu)));
    g->edx = t9;
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 4u);
    t12 = g->ecx;
    t13 = g->edx;
    d14 = (double)(float)fr(g, (double)(int32_t)t11 * (double)rdf32(COW_IMG(0x1032a22cu)));
    g->edx = t13;
    g->esp = sp0 - 0x18u;
    t15 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t16 = g->ecx;
    t17 = g->edx;
    d18 = (double)(float)fr(g, (double)(int32_t)t15 * (double)rdf32(COW_IMG(0x1032a22cu)));
    g->esp = sp0 - 0xcu;
    t19 = cow_cdecl(g, COW_IMG(0x100a05e0u), 4, cow_f2bits(d18), cow_f2bits(d14), cow_f2bits(d10), cow_f2bits(d6));
    if ((uint8_t)t19 == 0u)
    {
        loc_4 = t15;
        goto L_100b62f2;
    }
    eax = t19;
    loc_4 = t15;
    wr8(COW_IMG(0x104855a8u), 1u);
    wr8(COW_IMG(0x1047faafu), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xau));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b62b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b62b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
