/* f_0x102ba520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102ba520(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d22;
    double d23;
    double d25;
    double d26;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t24;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 1u, 0x38u, COW_IMG(0x103c24e0u), 0x78u, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(t1 + 8u, arg1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg1, 0xcu, COW_IMG(0x103c24e0u), 0x7bu, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(t1 + 4u, t4);
    g->esp = sp0 - 0x20u;
    t7 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 0xd2fu, 4u, COW_IMG(0x103c24e0u), 0x7du, arg1);
    wr32(t1, t7);
    eax = 0u;
    esi = t1;
L_102ba566: ;
    wr32(eax + rd32(esi), 0u);
    if ((int32_t)(eax + 4u) < 13500)
    {
        eax = eax + 4u;
        goto L_102ba566;
    }
    eax = eax + 4u;
    d8 = fr(g, (double)rdf32(arg2 + 0xcu) - (double)rdf32(arg2));
    wrf32(esi + 0x1cu, (float)d8);
    d9 = fr(g, (double)rdf32(arg2 + 0x10u) - (double)rdf32(arg2 + 4u));
    wrf32(esi + 0x20u, (float)d9);
    d10 = fr(g, (double)rdf32(arg2 + 0x14u) - (double)rdf32(arg2 + 8u));
    wrf32(esi + 0x24u, (float)d10);
    d11 = (double)rdf32(esi + 0x1cu);
    if (!(d11 < (double)rdf32(COW_IMG(0x1032a42cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
        wr32(esi + 0x1cu, 0x358637bdu);
    }
    d12 = (double)rdf32(esi + 0x20u);
    if (!(d12 < (double)rdf32(COW_IMG(0x1032a42cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
        wr32(esi + 0x20u, 0x358637bdu);
    }
    d13 = (double)rdf32(esi + 0x24u);
    if (d13 < (double)rdf32(COW_IMG(0x1032a42cu)))
    {
        wr32(esi + 0x24u, 0x358637bdu);
    }
    d14 = fr(g, (double)rdf32(esi + 0x1cu) * (double)rdf32(COW_IMG(0x1033976cu)));
    wrf32(esi + 0x10u, (float)d14);
    d15 = fr(g, (double)rdf32(esi + 0x20u) * (double)rdf32(COW_IMG(0x1033976cu)));
    wrf32(esi + 0x14u, (float)d15);
    d16 = fr(g, (double)rdf32(esi + 0x24u) * (double)rdf32(COW_IMG(0x1033976cu)));
    wrf32(esi + 0x18u, (float)d16);
    d17 = (double)rdf32(esi + 0x1cu);
    d18 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(esi + 0x28u, rd32(arg2));
    t19 = rd32(arg2 + 4u);
    wr32(esi + 0x2cu, t19);
    t20 = rd32(arg2 + 8u);
    wr32(esi + 0x30u, t20);
    wr32(esi + 0x34u, 0u);
    if ((cow_fsw(g, d17, d18, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d17, d18, 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d17, d18, 0u) & 0x4100u;
        t21 = rd32(esi + 0x1cu);
        wr32(esi + 0x34u, t21);
    }
    d22 = (double)rdf32(esi + 0x20u);
    d23 = (double)rdf32(esi + 0x34u);
    if ((cow_fsw(g, d22, d23, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d22, d23, 0u) & 0x4100u;
    }
    else
    {
        t24 = rd32(esi + 0x20u);
        wr32(esi + 0x34u, t24);
        eax = t24;
    }
    d25 = (double)rdf32(esi + 0x24u);
    d26 = (double)rdf32(esi + 0x34u);
    if ((cow_fsw(g, d25, d26, 0u) & 0x4100u) != 0u)
    {
        eax = esi;
    }
    else
    {
        eax = esi;
        t27 = rd32(esi + 0x24u);
        wr32(esi + 0x34u, t27);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ba520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ba520(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
