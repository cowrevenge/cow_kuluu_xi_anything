/* f_0x10177b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_10177b40(Guest* g)
{
    double d12;
    double d13;
    double d2;
    double d3;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x7cu, in_ebx);
    wrf32(sp0 - 0x18u, (float)(double)(float)(double)rdf32(arg1));
    wrf32(sp0 - 0x78u, (float)(double)(float)(double)rdf32(arg1));
    t1 = rd32(arg1 + 0x10u);
    wr32(sp0 - 0x60u, t1);
    d2 = (double)(float)(double)rdf32(arg1 + 4u);
    wrf32(sp0 - 0x14u, (float)d2);
    d3 = (double)(float)(double)rdf32(arg1 + 4u);
    wrf32(sp0 - 0x74u, (float)d3);
    t4 = rd32(arg1 + 0x14u);
    wr32(sp0 - 0x5cu, t4);
    t5 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0x58u, t5);
    t6 = rd32(arg1 + 0x20u);
    wr32(sp0 - 0x48u, t6);
    t7 = rd32(arg1 + 0x24u);
    wr32(sp0 - 0x44u, t7);
    t8 = rd32(arg1 + 0x28u);
    wr32(sp0 - 0x40u, t8);
    t9 = rd32(arg1 + 0x30u);
    wr32(sp0 - 0x30u, t9);
    t10 = rd32(arg1 + 0x38u);
    wr32(sp0 - 0x28u, t10);
    t11 = rd32(arg1 + 0x34u);
    wr32(sp0 - 0x2cu, t11);
    d12 = (double)(float)(double)rdf32(arg1 + 8u);
    wrf32(sp0 - 0x10u, (float)d12);
    d13 = (double)(float)(double)rdf32(arg1 + 8u);
    wrf32(sp0 - 0x70u, (float)d13);
    t14 = (((uint8_t)arg5 << 8u | (uint8_t)arg2) << 8u | (uint8_t)arg3) << 8u | (uint8_t)arg4;
    wr32(sp0 - 0xcu, t14);
    wr32(sp0 - 0x24u, t14);
    wr32(sp0 - 0x3cu, t14);
    wr32(sp0 - 0x54u, t14);
    wr32(sp0 - 0x6cu, t14);
    if ((uint8_t)arg6 != 0u)
    {
        eax = t14;
    }
    else
    {
        wr32(sp0 - 0x80u, 0u);
        wr32(sp0 - 0x84u, 7u);
        t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x88u, t15);
        g->eax = t15;
        g->esp = sp0 - 0x7cu;
        t16 = cow_thiscall(g, rd32(rd32(t15) + 0xc8u), rd32(t15), 3, t15, 7u, 0u);
        eax = t16;
    }
    wr32(sp0 - 0x80u, 0x18u);
    wr32(sp0 - 0x84u, sp0 - 0x78u);
    wr32(sp0 - 0x88u, 4u);
    wr32(sp0 - 0x8cu, 3u);
    g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg6;
    g->edx = sp0 - 0x78u;
    g->esp = sp0 - 0x7cu;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 3u, 4u, sp0 - 0x78u, 0x18u);
    t17 = g->edx;
    if ((uint8_t)arg6 != 0u)
    {
        edx = t17;
    }
    else
    {
        edx = t17;
        wr32(sp0 - 0x7cu, 1u);
        wr32(sp0 - 0x80u, 7u);
        t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x84u, t18);
        g->edx = edx;
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, rd32(rd32(t18) + 0xc8u), rd32(t18), 3, t18, 7u, 1u);
        t19 = g->edx;
        edx = t19;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10177b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10177b40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
