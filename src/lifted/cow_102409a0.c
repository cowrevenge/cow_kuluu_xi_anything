/* f_0x102409a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102409a0(Guest* g)
{
    double d10;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_2c_f;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, COW_IMG(0x1036c19cu));
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
    t2 = g->edx;
    wr32(sp0 - 0x18u, sp0 - 8u);
    t3 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = t2;
    t4 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t3, g->edx, 0, 1, sp0 - 8u);
    t5 = g->edx;
    d6 = (double)rdf32(self + 0x14u);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
        edx = t5;
    }
    else
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329a18u)), 0u) & 0x4100u;
        ecx = rd32(t1);
        edx = t5;
        edi = rd32(rd32(t1) + 0x134u);
        d7 = (double)rdf32(self + 0x14u);
        if (!(d7 < (double)rdf32(COW_IMG(0x1033cb1cu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x1033cb1cu)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x1033cb1cu)), 0u);
            d8 = (double)rdf32(self + 0x14u);
            d9 = (double)rdf32(self + 0x14u);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, 0x80808080u);
            wr32(sp0 - 0x28u, 0x3f7d70a4u);
            wr32(sp0 - 0x2cu, ecx);
            d10 = (double)(float)fr(g, d9 + d9);
            wrf32(sp0 - 0x2cu, (float)d10);
            t11 = (uint32_t)(int16_t)rd16(sp0 - 6u);
            wr32(sp0 - 0x30u, t11);
            if (!(d8 < (double)rdf32(COW_IMG(0x10329a08u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
                edx = t11;
                loc_2c_f = d10;
                loc_30 = t11;
                x0 = fr(g, fr(g, (double)rdf32(self + 0x14u) - (double)rdf32(COW_IMG(0x10329a08u))) * (double)rdf32(COW_IMG(0x1033cb18u)));
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x10329a08u)), 1u);
                edx = t11;
                loc_2c_f = d10;
                loc_30 = t11;
                x0 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10329a08u)) - (double)rdf32(self + 0x14u)) * (double)rdf32(COW_IMG(0x1032ae60u)));
            }
            g->edx = edx;
            fpush(g, x0);
            g->esp = sp0 - 0x30u;
            t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t13 = g->edx;
            t14 = (uint32_t)(int16_t)rd16(sp0 - 8u) - t12;
            wr32(sp0 - 0x34u, t14);
            g->edx = t13;
            g->esp = sp0 - 0x14u;
            t15 = cow_thiscall(g, COW_IMG(0x1011fc80u), edi, 8, t14, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), 0x3f7d70a4u, 0x80808080u, 1u, 0u, 0u);
            t16 = g->edx;
            eax = t15;
            edx = t16;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102409a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102409a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
