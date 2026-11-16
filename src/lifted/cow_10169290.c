/* f_0x10169290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=6 */
uint32_t cow_fn_10169290(Guest* g)
{
    double d1;
    double d10;
    double d15;
    double d2;
    double d3;
    double d4;
    double d9;
    uint32_t eax;
    uint32_t edx;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wrf32(sp0 - 0xcu, (float)(double)(float)(double)rdf32(arg1));
    wrf32(sp0 - 0x24u, (float)(double)(float)(double)rdf32(arg1));
    d1 = (double)(float)(double)rdf32(arg1 + 8u);
    wrf32(sp0 - 4u, (float)d1);
    d2 = (double)(float)(double)rdf32(arg1 + 8u);
    wrf32(sp0 - 0x1cu, (float)d2);
    d3 = (double)(float)fr(g, (double)rdf32(sp0 + 0x14u) + (double)rdf32(arg1 + 4u));
    wrf32(sp0 - 8u, (float)d3);
    if ((uint8_t)arg3 == 0u)
    {
        x0 = (double)rdf32(arg1 + 4u);
        goto L_10169328;
    }
    x0 = (double)rdf32(arg1 + 4u);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    wr32(sp0 - 0x34u, sp0 - 0xcu);
    wr32(sp0 - 0x38u, sp0 - 0x24u);
    d4 = (double)(float)fr(g, x0 - (double)rdf32(sp0 + 0x10u));
    wrf32(sp0 - 0x20u, (float)d4);
    g->edx = sp0 - 0x24u;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x1016a990u), self, 3, sp0 - 0x24u, sp0 - 0xcu, sp0 - 0x18u);
    t6 = g->edx;
    wr32(arg2, rd32(arg1));
    t7 = rd32(arg1 + 4u);
    wr32(arg2 + 4u, t7);
    t8 = rd32(arg1 + 8u);
    wr32(arg2 + 8u, t8);
    if ((uint8_t)t5 == 0u)
    {
        eax = t8;
        edx = (t6 & 0xffffff00u) | (uint8_t)t5;
        goto L_101693a6;
    }
    eax = t8;
    edx = (t6 & 0xffffff00u) | (uint8_t)t5;
    d9 = fr(g, (double)rdf32(sp0 - 0x14u) - fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(sp0 + 0x10u)));
    if (!(d9 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d9;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d9;
        x0 = -x0;
    }
    x1 = fr(g, (double)rdf32(sp0 + 0x18u) + (double)rdf32(COW_IMG(0x10329990u)));
L_10169388: ;
    if ((cow_fsw(g, x0, x1, 0u) & 0x4100u) == 0u)
    {
        wr32(self + 0x34148u, 0u);
    }
    t16 = rd32(sp0 - 0x14u);
    wr32(arg2 + 4u, t16);
    eax = t16;
L_101693a6: ;
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return (eax & 0xffffff00u) | (uint8_t)edx;
L_10169328: ;
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    wr32(sp0 - 0x34u, sp0 - 0xcu);
    wr32(sp0 - 0x38u, sp0 - 0x24u);
    d10 = (double)(float)fr(g, x0 - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 - 0x20u, (float)d10);
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x2cu;
    t11 = cow_thiscall(g, COW_IMG(0x10169b40u), self, 3, sp0 - 0x24u, sp0 - 0xcu, sp0 - 0x18u);
    t12 = g->edx;
    wr32(arg2, rd32(arg1));
    t13 = rd32(arg1 + 4u);
    wr32(arg2 + 4u, t13);
    t14 = rd32(arg1 + 8u);
    wr32(arg2 + 8u, t14);
    if ((uint8_t)t11 == 0u)
    {
        eax = t14;
        edx = (t12 & 0xffffff00u) | (uint8_t)t11;
        goto L_101693a6;
    }
    eax = t14;
    edx = (t12 & 0xffffff00u) | (uint8_t)t11;
    d15 = fr(g, (double)rdf32(sp0 - 0x14u) - fr(g, (double)rdf32(arg1 + 4u) - (double)rdf32(COW_IMG(0x10329a08u))));
    if (!(d15 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d15;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = d15;
        x0 = -x0;
    }
    x1 = fr(g, (double)rdf32(sp0 + 0x18u) + (double)rdf32(COW_IMG(0x10329a08u)));
    goto L_10169388;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10169290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10169290(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
