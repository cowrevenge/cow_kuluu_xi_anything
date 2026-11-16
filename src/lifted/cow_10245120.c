/* f_0x10245120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10245120(Guest* g)
{
    double d3;
    double d4;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_10_f;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    t1 = (uint32_t)(int16_t)rd32(COW_IMG(0x106218b8u)) - (uint32_t)(int16_t)rd32(COW_IMG(0x106218b4u));
    t2 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) >> 0x10u) - (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b4u)) >> 0x10u);
    d3 = (double)(float)fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x10337eb0u)));
    d4 = (double)(float)fr(g, (double)(int32_t)t2 * (double)rdf32(COW_IMG(0x1033cae8u)));
    g->edx = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b4u)) >> 0x10u);
    t5 = rd32(COW_IMG(0x106218b4u));
    g->esp = sp0 - 0x20u;
    t6 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        ebx = t2;
        ebp = cow_f2bits(d3);
        esi = t6;
        edi = t1;
        loc_10_f = d4;
    }
    else
    {
        eax = t8;
        edx = t9;
        ebx = t2;
        ebp = cow_f2bits(d3);
        esi = t6;
        edi = t1;
        loc_10_f = d4;
        if (rd32(rd32(eax) + 0x2e8u) == 0u)
        {
            eax = rd32(eax);
        }
        else
        {
            ecx = rd32(rd32(eax) + 0x2e8u);
            t10 = (uint32_t)(int16_t)rd16(esi + 0x1cu);
            t11 = (uint32_t)(int16_t)rd16(esi + 0x1au);
            g->eax = t10;
            g->edx = t11;
            g->esp = sp0 - 0x20u;
            t12 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t11, t10, ebp, cow_f2bits(loc_10_f), 0xf0808080u, 0u, 0u, 0u);
            t13 = g->edx;
            eax = t12;
            edx = t13;
        }
    }
    if (esi != 0u)
    {
        if (rd32(esi + 8u) != 0u)
        {
            ecx = rd32(esi + 8u);
            t14 = (uint32_t)((int32_t)(ebx - (uint32_t)((int32_t)ebx >> 0x1fu)) >> 1u) + 0xfu;
            t15 = (uint32_t)((int32_t)(edi - (uint32_t)((int32_t)edi >> 0x1fu)) >> 1u) + 0xfu;
            g->ebx = ebx;
            g->eax = t15;
            g->edx = (uint32_t)((int32_t)edi >> 0x1fu);
            g->esp = sp0 - 0x20u;
            t16 = cow_thiscall(g, COW_IMG(0x10120000u), ecx, 11, 0xfffffff1u, 0xfffffff1u, 0u, 0u, t15, t14, 0x40000000u, 0x40000000u, 0x40808080u, 0u, 0u);
            t17 = g->edx;
            eax = t16;
            edx = t17;
        }
        if (rd32(esi + 8u) != 0u)
        {
            ecx = rd32(esi + 8u);
            t18 = (uint32_t)(int16_t)rd16(esi + 0x1cu);
            t19 = (uint32_t)(int16_t)rd16(esi + 0x1au);
            g->eax = t19;
            g->edx = t18;
            g->esp = sp0 - 0x20u;
            t20 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t19, t18, ebp, cow_f2bits(loc_10_f), 0xf0808080u, 0u, 0u, 1u);
            t21 = g->edx;
            eax = t20;
            edx = t21;
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10245120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10245120(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
