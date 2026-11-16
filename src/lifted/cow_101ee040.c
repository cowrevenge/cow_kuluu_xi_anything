/* f_0x101ee040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ee040(Guest* g)
{
    double d10;
    double d11;
    double d14;
    double d15;
    double d16;
    double d20;
    double d22;
    double d26;
    double d30;
    double d31;
    double d32;
    uint32_t eax;
    uint32_t ebx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x8cu) != 0u)
    {
        ebx = rd32(self + 0x8cu);
        t1 = -((uint32_t)(int16_t)rd16(self + 0x7cu) + (uint32_t)(int16_t)rd16(self + 0x80u));
        t2 = rd16(self + 0x80u);
        t3 = rd16(self + 0x7cu);
        t4 = rd16(self + 0x82u);
        t5 = rd16(self + 0x7eu);
        wrf32(self + 0x34u, (float)(double)(int32_t)t1);
        t6 = -((uint32_t)(int16_t)t4 + (uint32_t)(int16_t)t5);
        wrf32(self + 0x38u, (float)(double)(int32_t)t6);
        t7 = (uint32_t)(int16_t)t2 + (uint32_t)(int16_t)t3 + (uint32_t)(int16_t)rd16(rd32(ebx) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(ebx) + 0x20u);
        t8 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        t9 = rd32(self + 0x8cu);
        d10 = fr(g, fr(g, fr(g, (double)(int32_t)t7 * (double)rdf32(self + 0x58u)) - (double)(int32_t)t8) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u)));
        d11 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(self + 0x58u));
        wrf32(self + 0x3cu, (float)d10);
        t12 = (uint32_t)(int16_t)t4 + (uint32_t)(int16_t)t5 + (uint32_t)(int16_t)rd16(rd32(t9) + 0x26u) - (uint32_t)(int16_t)rd16(rd32(t9) + 0x24u);
        t13 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        d14 = fr(g, fr(g, fr(g, (double)(int32_t)t12 * (double)rdf32(self + 0x58u)) - (double)(int32_t)t13) * d11);
        wrf32(self + 0x40u, (float)d14);
        d15 = (double)rdf32(self + 0x3cu);
        if (!(d15 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            loc_4_f = (double)(float)(double)(int32_t)t1;
            x0 = (double)(int32_t)t6;
        }
        else
        {
            eax = (t13 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            loc_4_f = (double)(float)(double)(int32_t)t1;
            x0 = (double)(int32_t)t6;
            wr32(self + 0x3cu, 0u);
        }
        d16 = (double)rdf32(self + 0x40u);
        if (d16 < (double)rdf32(COW_IMG(0x103295d8u)))
        {
            wr32(self + 0x40u, 0u);
        }
        t17 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        t18 = rd32(COW_IMG(0x106218b8u));
        t19 = rd32(COW_IMG(0x106218b4u));
        d20 = fr(g, fr(g, (double)(int32_t)t17 * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x10331380u)));
        wrf32(self + 0x44u, (float)d20);
        t21 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        d22 = fr(g, fr(g, (double)(int32_t)t21 * (double)rdf32(COW_IMG(0x10335310u))) * (double)rdf32(COW_IMG(0x10339c18u)));
        wrf32(self + 0x48u, (float)d22);
        t23 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        t24 = rd32(COW_IMG(0x106218b8u));
        t25 = rd32(COW_IMG(0x106218b4u));
        d26 = fr(g, (double)(int32_t)t23 - fr(g, fr(g, (double)rdf32(COW_IMG(0x1032ac88u)) * (double)(int32_t)t23) * (double)rdf32(COW_IMG(0x1032ae48u))));
        wrf32(self + 0x4cu, (float)d26);
        t27 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
        t28 = (uint32_t)(int16_t)rd16(self + 0x54u);
        t29 = rd16(self + 0x56u);
        d30 = fr(g, (double)(int32_t)t27 - fr(g, fr(g, (double)rdf32(COW_IMG(0x10335310u)) * (double)(int32_t)t27) * (double)rdf32(COW_IMG(0x1032dfb8u))));
        wrf32(self + 0x50u, (float)d30);
        wrf32(self + 0x34u, (float)fr(g, loc_4_f + (double)(int32_t)t28));
        wrf32(self + 0x38u, (float)fr(g, (double)(int32_t)(uint32_t)(int16_t)t29 + x0));
        d31 = fr(g, (double)(int32_t)t28 + (double)rdf32(self + 0x3cu));
        wrf32(self + 0x3cu, (float)d31);
        d32 = fr(g, (double)(int32_t)(uint32_t)(int16_t)t29 + (double)rdf32(self + 0x40u));
        wrf32(self + 0x40u, (float)d32);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ee040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ee040(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
