/* f_0x1011a250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1011a250(Guest* g)
{
    double d10;
    double d16;
    double d17;
    double d20;
    double d21;
    double d4;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    t1 = (uint32_t)(int16_t)rd16(sp0 + 0x10u);
    wr32(sp0 - 4u, t1);
    t2 = t1 - (uint32_t)(int16_t)rd16(sp0 + 0x14u);
    t3 = rd16(sp0 + 0x14u);
    wr32(sp0 + 0x10u, t2);
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    d4 = fr(g, (double)(int32_t)rd32(sp0 + 0x10u) / (double)(int32_t)t1);
    wrf32(sp0 + 0x10u, (float)d4);
    if (!(d4 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = (uint32_t)(int16_t)t3;
    }
    else
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = (uint32_t)(int16_t)t3;
        wr32(sp0 + 0x10u, 0u);
    }
    d5 = (double)rdf32(sp0 + 0x10u);
    wr32(sp0 - 8u, 0x3f800000u);
    t6 = rd8(self + 0x99u);
    wrf32(sp0 + 0x14u, (float)fr(g, d5 * d5));
    wr32(sp0 - 4u, 0x3f800000u);
    if ((uint8_t)t6 == 0u)
    {
        eax = (eax & 0xffffff00u) | t6;
    }
    else
    {
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->eax = sp0 - 4u;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t7 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 - 8u, sp0 - 4u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x80808080u);
    d9 = (double)(float)fr(g, cow_bits2f(0x3f800000u) * (double)rdf32(sp0 + 0x14u));
    wrf32(sp0 - 0x28u, (float)d9);
    d10 = (double)(float)fr(g, cow_bits2f(0x3f800000u) * (double)rdf32(sp0 + 0x14u));
    wrf32(sp0 - 0x2cu, (float)d10);
    t11 = (uint32_t)(int16_t)rd16(sp0 + 0xcu);
    wr32(sp0 - 0x30u, t11);
    t12 = (uint32_t)(int16_t)rd16(sp0 + 8u);
    wr32(sp0 - 0x34u, t12);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_thiscall(g, COW_IMG(0x10234ab0u), arg1, 7, t12, t11, cow_f2bits(d10), cow_f2bits(d9), 0x80808080u, 0u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 + 0x14u, 1u);
    eax = t13;
    ecx = t14;
    edx = t15;
    ebx = t12;
    esi = 0x80808080u;
    edi = t11;
L_1011a30d: ;
    d16 = fr(g, (double)rdf32(COW_IMG(0x1032d3dcu)) - fr(g, fr(g, (double)rdf32(COW_IMG(0x1032d444u)) * fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x14u) * (double)rdf32(sp0 + 0x10u)) * (double)rdf32(COW_IMG(0x10329a30u))) + (double)rdf32(sp0 + 0x10u))) * (double)rdf32(COW_IMG(0x1032ae60u))));
    d17 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x14u) * (double)rdf32(sp0 + 0x10u)) * (double)rdf32(COW_IMG(0x10329a30u))) + (double)rdf32(sp0 + 0x10u));
    fpush(g, d16);
    g->esp = sp0 - 0x18u;
    t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    if (t18 <= 0x80u)
    {
        eax = t18;
        x0 = d17;
    }
    else
    {
        x0 = d17;
        eax = 0x80u;
    }
    wr32(sp0 - 0x1cu, 0u);
    t19 = rd32(sp0 + 0x14u);
    d20 = fr(g, (double)rdf32(sp0 - 8u) * x0);
    wrf32(sp0 + 8u, (float)d20);
    d21 = fr(g, x0 * (double)rdf32(sp0 - 4u));
    wrf32(sp0 + 0xcu, (float)d21);
    if (t19 == 0u)
    {
        esi = (esi & 0xffffffu) | eax << 0x18u;
        eax = t19;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, esi);
        t24 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x28u, t24);
        t25 = rd32(sp0 + 8u);
        wr32(sp0 - 0x2cu, t25);
        edx = t25;
        loc_20 = 0u;
        loc_24 = esi;
        loc_28 = t24;
        loc_2c = t25;
    }
    else
    {
        esi = (esi & 0xffffffu) | eax << 0x18u;
        wr32(sp0 - 0x20u, 0x44u);
        wr32(sp0 - 0x24u, esi);
        t22 = rd32(sp0 + 0xcu);
        wr32(sp0 - 0x28u, t22);
        t23 = rd32(sp0 + 8u);
        wr32(sp0 - 0x2cu, t23);
        eax = t23;
        edx = t22;
        loc_20 = 0x44u;
        loc_24 = esi;
        loc_28 = t22;
        loc_2c = t23;
    }
    wr32(sp0 - 0x30u, edi);
    wr32(sp0 - 0x34u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10234ab0u), arg1, 7, ebx, edi, loc_2c, loc_28, loc_24, loc_20, 0u);
    t26 = g->ecx;
    t27 = g->edx;
    t28 = rd32(sp0 + 0x14u) + 1u;
    t29 = rd32(sp0 + 0x14u);
    wr32(sp0 + 0x14u, t28);
    if ((int32_t)(t29 + 1u) < 2)
    {
        eax = t28;
        ecx = t26;
        edx = t27;
        goto L_1011a30d;
    }
    eax = t28;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011a250(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
