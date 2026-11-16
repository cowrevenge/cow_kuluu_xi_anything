/* f_0x10021520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10021520(Guest* g)
{
    double d1;
    double d13;
    double d14;
    double d15;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 52u);

    d1 = (double)rdf32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (d1 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x1cu, arg1);
        g->eax = arg1;
        g->edx = in_edx;
        g->esp = sp0 - 0x18u;
        t2 = cow_thiscall(g, COW_IMG(0x1001e780u), self, 1, arg1);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(sp0 - 0x1cu, self + 0x44u);
        wr32(sp0 - 0x20u, self + 0x50u);
        g->edx = t4;
        t5 = cow_cdecl(g, COW_IMG(0x10027620u), 2, self + 0x50u, self + 0x44u);
        t6 = g->edx;
        d7 = cow_take_float(g);
        d8 = (double)rdf32(sp0 + 8u);
        if (d7 < d8)
        {
            eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, d8, 0u);
            edx = t6;
        }
        else
        {
            eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, d8, 0u);
            edx = t6;
            wr32(sp0 - 0x1cu, self + 0x44u);
            wr32(sp0 - 0x20u, self + 0x50u);
            wr32(sp0 - 0x24u, sp0 - 0x10u);
            g->eax = eax;
            g->ecx = sp0 - 0x10u;
            g->esp = sp0 - 0x18u;
            t9 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x10u, self + 0x50u, self + 0x44u);
            t10 = g->ecx;
            wr32(sp0 - 4u, 0x3f800000u);
            wr32(sp0 - 0x28u, sp0 - 0x10u);
            g->ecx = t10;
            g->edx = sp0 - 0x10u;
            g->esp = sp0 - 0x24u;
            cow_call_regs(g, COW_IMG(0x100274b0u), t9, g->ecx, g->edx, 1, 1, sp0 - 0x10u);
            t11 = g->ecx;
            t12 = g->edx;
            wr32(sp0 - 0x2cu, sp0 - 0x10u);
            wr32(sp0 - 0x30u, self + 0x44u);
            d13 = (double)(float)fr(g, (double)rdf32(sp0 - 0x10u) * (double)rdf32(sp0 + 0xcu));
            wrf32(sp0 - 0x10u, (float)d13);
            d14 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) * (double)rdf32(sp0 + 0xcu));
            wrf32(sp0 - 0xcu, (float)d14);
            d15 = (double)(float)fr(g, (double)rdf32(sp0 - 8u) * (double)rdf32(sp0 + 0xcu));
            wrf32(sp0 - 8u, (float)d15);
            g->eax = sp0 - 0x10u;
            g->edx = t12;
            g->esp = sp0 - 0x28u;
            t16 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, self + 0x44u, sp0 - 0x10u);
            t17 = g->edx;
            eax = t16;
            edx = t17;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10021520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10021520(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
