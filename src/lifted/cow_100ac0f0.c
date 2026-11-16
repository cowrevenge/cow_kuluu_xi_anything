/* f_0x100ac0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100ac0f0(Guest* g)
{
    double d21;
    double d34;
    double d40;
    double d41;
    double d42;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    double loc_8_f;
    double loc_c_f;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd8(self + 0x425u) | rd8(self + 0x424u) | rd8(self + 0x426u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x424u);
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x426u);
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x424u);
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x426u);
        if ((uint8_t)eax == 0u)
        {
            loc_c_f = (double)rdf32(sp0 - 0xcu);
        }
        else
        {
            g->esp = sp0 - 0x18u;
            t1 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0xc4u, 0);
            g->edx = rd32(t1);
            t2 = rd32(t1);
            t3 = cow_thiscall(g, rd32(t2 + 0x1bcu), t1, 0);
            t4 = g->edx;
            g->eax = rd32(self);
            g->edx = t4;
            t5 = rd32(self);
            t6 = cow_thiscall(g, rd32(t5 + 0x1bcu), self, 0);
            t7 = g->edx;
            d8 = (double)(float)fr(g, (double)rdf32(t3) - (double)rdf32(t6));
            t9 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0xc4u, 0);
            g->edx = rd32(t9);
            t10 = rd32(t9);
            t11 = cow_thiscall(g, rd32(t10 + 0x1bcu), t9, 0);
            t12 = g->edx;
            t13 = rd32(t11);
            wr32(self + 0x404u, t13);
            eax = t13;
            edx = t12;
            loc_c_f = d8;
        }
        if (rd8(self + 0x425u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x425u);
            loc_8_f = (double)rdf32(sp0 - 8u);
        }
        else
        {
            g->esp = sp0 - 0x18u;
            t14 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0xc4u, 0);
            g->edx = rd32(t14);
            t15 = rd32(t14);
            t16 = cow_thiscall(g, rd32(t15 + 0x1bcu), t14, 0);
            t17 = g->edx;
            g->eax = rd32(self);
            g->edx = t17;
            t18 = rd32(self);
            t19 = cow_thiscall(g, rd32(t18 + 0x1bcu), self, 0);
            t20 = g->edx;
            d21 = (double)(float)fr(g, (double)rdf32(t16 + 4u) - (double)rdf32(t19 + 4u));
            t22 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0xc4u, 0);
            g->edx = rd32(t22);
            t23 = rd32(t22);
            t24 = cow_thiscall(g, rd32(t23 + 0x1bcu), t22, 0);
            t25 = g->edx;
            t26 = rd32(t24 + 4u);
            wr32(self + 0x408u, t26);
            eax = t26;
            edx = t25;
            loc_8_f = d21;
        }
        if (rd8(self + 0x426u) == 0u)
        {
            loc_4_f = (double)rdf32(sp0 - 4u);
        }
        else
        {
            g->esp = sp0 - 0x18u;
            t27 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0xc4u, 0);
            g->edx = rd32(t27);
            t28 = rd32(t27);
            t29 = cow_thiscall(g, rd32(t28 + 0x1bcu), t27, 0);
            t30 = g->edx;
            g->eax = rd32(self);
            g->edx = t30;
            t31 = rd32(self);
            t32 = cow_thiscall(g, rd32(t31 + 0x1bcu), self, 0);
            t33 = g->edx;
            d34 = (double)(float)fr(g, (double)rdf32(t29 + 8u) - (double)rdf32(t32 + 8u));
            t35 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0xc4u, 0);
            g->edx = rd32(t35);
            t36 = rd32(t35);
            t37 = cow_thiscall(g, rd32(t36 + 0x1bcu), t35, 0);
            t38 = g->edx;
            t39 = rd32(t37 + 8u);
            wr32(self + 0x40cu, t39);
            edx = t38;
            loc_4_f = d34;
        }
        eax = self + 0x108u;
        ecx = 0x30u;
L_100ac20b: ;
        if (rd8(self + 0x424u) == 0u)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x424u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x424u);
            d40 = fr(g, loc_c_f + (double)rdf32(eax - 4u));
            wrf32(eax - 4u, (float)d40);
        }
        if (rd8(self + 0x425u) == 0u)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x425u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x425u);
            d41 = fr(g, loc_8_f + (double)rdf32(eax));
            wrf32(eax, (float)d41);
        }
        if (rd8(self + 0x426u) == 0u)
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x426u);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(self + 0x426u);
            d42 = fr(g, loc_4_f + (double)rdf32(eax + 4u));
            wrf32(eax + 4u, (float)d42);
        }
        if (ecx != 1u)
        {
            eax = eax + 0x10u;
            ecx = ecx - 1u;
            goto L_100ac20b;
        }
        eax = eax + 0x10u;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ac0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ac0f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
