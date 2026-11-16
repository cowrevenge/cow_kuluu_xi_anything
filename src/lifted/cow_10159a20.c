/* f_0x10159a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10159a20(Guest* g)
{
    double d16;
    double d19;
    double d23;
    double d24;
    double d25;
    double d26;
    double d28;
    double d30;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t27;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd8(self + 0x22u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x22u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x22u);
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, self, g->edx, 1, 0);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
        }
        else
        {
            edx = t3;
            edi = t1;
            g->eax = rd32(edi);
            t4 = rd32(edi);
            g->esp = sp0 - 0x14u;
            t5 = cow_thiscall(g, rd32(t4 + 0x1bcu), edi, 0);
            wr32(self + 0x10u, rd32(t5));
            t6 = cow_thiscall(g, rd32(rd32(edi) + 0x1bcu), edi, 0);
            t7 = rd32(t6 + 4u);
            wr32(self + 0x14u, t7);
            g->eax = t7;
            g->edx = rd32(edi);
            t8 = rd32(edi);
            t9 = cow_thiscall(g, rd32(t8 + 0x1bcu), edi, 0);
            t10 = g->ecx;
            t11 = g->edx;
            t12 = rd32(t9 + 8u);
            wr8(self + 0x22u, 1u);
            wr32(self + 0x18u, t12);
            eax = t12;
            ecx = t10;
            edx = t11;
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t14 = g->ecx;
    t15 = g->edx;
    d16 = cow_take_float(g);
    g->edx = t15;
    fpush(g, d16);
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t13, g->ecx, g->edx, 1, 0);
    t18 = g->edx;
    wr32(sp0 - 0xcu, (uint32_t)(int16_t)t17);
    wr32(sp0 - 0x18u, 0xc4u);
    d19 = (double)(float)(double)(int32_t)(uint32_t)(int16_t)t17;
    wrf32(sp0 - 8u, (float)d19);
    g->edx = t18;
    t20 = cow_call_regs(g, COW_IMG(0x10193850u), t17, g->ecx, g->edx, 1, 1, 0xc4u);
    t21 = g->edx;
    wr32(sp0 - 0xcu, t20);
    t22 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t22);
    d23 = fr(g, fr(g, (double)(int32_t)t20 * (double)rdf32(sp0 - 8u)) * (double)rdf32(COW_IMG(0x10329a18u)));
    d24 = fr(g, d23 * (double)rdf32(t22));
    wrf32(t22, (float)d24);
    d25 = fr(g, d23 * (double)rdf32(t22 + 8u));
    wrf32(t22 + 8u, (float)d25);
    cow_stdcall(g, COW_IMG(0x10159b10u), 1, t22);
    wr32(sp0 - 0x18u, sp0 - 4u);
    d26 = fr(g, (double)rdf32(self + 0x10u) + (double)rdf32(t22));
    wrf32(self + 0x10u, (float)d26);
    t27 = rd32(self + 0x10u);
    d28 = fr(g, (double)rdf32(t22 + 4u) + (double)rdf32(self + 0x14u));
    wrf32(self + 0x14u, (float)d28);
    t29 = rd32(self + 0x14u);
    d30 = fr(g, (double)rdf32(t22 + 8u) + (double)rdf32(self + 0x18u));
    wrf32(sp0 + 4u, (float)d30);
    t31 = rd32(sp0 + 4u);
    wrf32(self + 0x18u, (float)d30);
    wr32(sp0 - 0x1cu, t31);
    wr32(sp0 - 0x20u, t29);
    wr32(sp0 - 0x24u, t27);
    g->eax = t31;
    t32 = cow_cdecl(g, COW_IMG(0x10177770u), 4, t27, t29, t31, sp0 - 4u);
    if ((uint8_t)t32 == 1u)
    {
        t33 = rd32(sp0 - 4u);
        wr32(self + 0x14u, t33);
    }
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10159a20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
