/* f_0x100aadf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100aadf0(Guest* g)
{
    double d10;
    double d11;
    double d15;
    double d16;
    double d4;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    d5 = (double)(float)fr(g, (double)rdf32(self + 0x118u) - d4);
    d6 = fr(g, (double)rdf32(self + 0x118u) - d4);
    wrf32(self + 0x118u, (float)d6);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
        ecx = t2;
        edx = t3;
        loc_4_f = d5;
        x0 = d4;
        goto L_100aae69;
    }
    eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 1u) & 0x4100u;
    ecx = t2;
    edx = t3;
    x0 = d4;
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_4_f = (double)(float)x0;
        goto L_100aaecf;
    }
    eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    loc_4_f = (double)(float)x0;
L_100aae3c: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, arg1, self + 0x120u);
    t8 = g->ecx;
    t9 = g->edx;
    d10 = (double)(float)fr(g, loc_4_f - (double)rdf32(COW_IMG(0x1032961cu)));
    d11 = fr(g, loc_4_f - (double)rdf32(COW_IMG(0x1032961cu)));
    if ((cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        ecx = t8;
        edx = t9;
        loc_4_f = d10;
        goto L_100aae3c;
    }
    eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    loc_4_f = d10;
    return eax;
L_100aae69: ;
    if (!(loc_4_f < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_4_f;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_4_f, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = loc_4_f;
        x0 = -x0;
    }
    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_4_f = (double)(float)x0;
    }
    else
    {
        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_4_f = (double)(float)x0;
L_100aaea0: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t12 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, arg1, self + 0x120u);
        t13 = g->ecx;
        t14 = g->edx;
        d15 = (double)(float)fr(g, loc_4_f - (double)rdf32(COW_IMG(0x1032961cu)));
        d16 = fr(g, loc_4_f - (double)rdf32(COW_IMG(0x1032961cu)));
        if ((cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
            ecx = t13;
            edx = t14;
            loc_4_f = d15;
            goto L_100aaea0;
        }
        eax = cow_fsw(g, d16, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        loc_4_f = d15;
    }
    wr8(self + 0x101u, 0u);
L_100aaecf: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aadf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100aadf0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
