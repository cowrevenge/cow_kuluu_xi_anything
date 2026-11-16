/* f_0x1012cae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012cae0(Guest* g)
{
    double d14;
    double d20;
    double d21;
    double d22;
    double d23;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10664520u));
    g->esp = sp0 - 0x24u;
    t2 = cow_thiscall(g, COW_IMG(0x1011ba40u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        edx = t4;
        if (rd32(COW_IMG(0x10664520u)) == 0u) goto L_1012cb67;
        eax = rd32(COW_IMG(0x10664520u));
        if (rd32(eax + 8u) == 0u) goto L_1012cb67;
        wr16(sp0 - 0x1cu, 0u);
        wr16(sp0 - 0x1au, 0u);
        wr16(sp0 - 0x18u, 0u);
        wr16(sp0 - 0x16u, 0u);
        wr32(sp0 - 0x28u, sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        t5 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(eax + 8u), g->edx, 0, 1, sp0 - 0x1cu);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        t6 = rd32(self + 8u);
        wr16(sp0 - 0xcu, 0u);
        wr16(sp0 - 0xau, 0u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        cow_call_regs(g, COW_IMG(0x10118f70u), t5, t6, g->edx, 0, 1, sp0 - 0xcu);
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x1au) - (uint32_t)(int16_t)(rd32(sp0 - 6u) - rd32(sp0 - 0xau));
        ecx = (uint32_t)(int16_t)rd16(sp0 - 0x1cu);
L_1012cb71: ;
        wr32(sp0 - 0x14u, ecx);
        wr32(sp0 - 0x10u, eax);
        wr32(sp0 - 0x28u, in_edi);
        if ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x52u) != ecx)
        {
            loc_14 = ecx;
            loc_10 = eax;
            goto L_1012cb8e;
        }
        edx = rd32(self + 8u);
        loc_14 = ecx;
        loc_10 = eax;
        if ((uint32_t)(int16_t)rd16(edx + 0x54u) == eax)
        {
            ecx = (uint32_t)(int16_t)rd16(edx + 0x54u);
            goto L_1012cbb1;
        }
L_1012cb8e: ;
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        g->edx = sp0 - 0x14u;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 0x14u, 0u, 0u);
        t7 = g->edx;
        t8 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x28u, t8);
        t9 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x2cu, t9);
        g->edx = t7;
        t10 = rd32(self + 8u);
        t11 = cow_call_regs(g, COW_IMG(0x10119110u), t8, t10, g->edx, 0, 2, t9, t8);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
L_1012cbb1: ;
    if (rd8(self + 0x24u) == 0u) goto L_1012cc17;
    d14 = (double)rdf32(self + 0x1cu);
    if (!(d14 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        if (rd32(self + 0x14u) == 0u)
        {
            eax = rd32(self + 0x14u);
        }
        else
        {
            eax = rd32(self + 0x14u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t15 = cow_thiscall(g, eax, ecx, 0);
            t16 = g->ecx;
            t17 = g->edx;
            eax = t15;
            ecx = t16;
            edx = t17;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t18 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t19 = g->edx;
    d20 = cow_take_float(g);
    d21 = fr(g, (double)rdf32(self + 0x1cu) - d20);
    wrf32(self + 0x1cu, (float)d21);
    if (!(d21 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t18 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t19;
    }
    else
    {
        eax = (t18 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t19;
        wr32(self + 0x1cu, 0u);
    }
    d22 = (double)rdf32(self + 0x18u);
    if ((cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_1012cc10;
    }
    eax = cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    d23 = fr(g, fr(g, (double)rdf32(self + 0x18u) - (double)rdf32(self + 0x1cu)) / (double)rdf32(self + 0x18u));
    wrf32(self + 0x20u, (float)d23);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edx = edx;
    return eax;
L_1012cb67: ;
    eax = 0x2fu;
    ecx = 0x10u;
    goto L_1012cb71;
L_1012cc10: ;
    wr32(self + 0x20u, 0x42c80000u);
L_1012cc17: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012cae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012cae0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
