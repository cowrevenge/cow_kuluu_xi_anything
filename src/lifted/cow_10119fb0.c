/* f_0x10119fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_10119fb0(Guest* g)
{
    double d13;
    double d14;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d36;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    double loc_4_f;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t2;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);

    t1 = (uint32_t)(int16_t)rd16(sp0 + 0x18u);
    wr32(sp0 - 8u, t1);
    t2 = t1 - (uint32_t)(int16_t)rd16(sp0 + 0x1cu);
    t3 = rd32(sp0 + 0x14u);
    wr32(sp0 + 0x18u, t2);
    t4 = rd32(sp0 + 0x10u);
    wr32(sp0 + 0x14u, t3);
    wr32(sp0 + 0x10u, t4);
    if (rd8(self + 0x99u) == 0u)
    {
        loc_8 = t1;
    }
    else
    {
        edx = t3;
        loc_8 = t1;
        wr32(sp0 - 0xcu, sp0 + 0x14u);
        wr32(sp0 - 0x10u, sp0 + 0x10u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 + 0x10u, sp0 + 0x14u);
    }
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80805020u);
    t5 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x2cu, t5);
    t6 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x30u, t6);
    t7 = (uint32_t)(int16_t)rd16(sp0 + 0xcu);
    wr32(sp0 - 0x34u, t7);
    t8 = (uint32_t)(int16_t)rd16(sp0 + 8u);
    wr32(sp0 - 0x38u, t8);
    t9 = rd32(sp0 + 4u);
    g->eax = t6;
    g->edx = t5;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x1011fc80u), t9, 8, t8, t7, t6, t5, 0x80805020u, 0u, 0u, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    d13 = (double)(float)(double)(int32_t)rd32(sp0 + 0x18u);
    wrf32(sp0 - 4u, (float)d13);
    d14 = fr(g, (double)rdf32(COW_IMG(0x1032d444u)) * (double)(int32_t)rd32(sp0 - 8u));
    t15 = rd32(sp0 - 8u);
    wrf32(sp0 + 0x1cu, (float)d14);
    d16 = fr(g, fr(g, (double)(int32_t)t15 - (double)rdf32(sp0 + 0x1cu)) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(sp0 + 4u, (float)d16);
    eax = t10;
    ecx = t11;
    edx = t12;
    ebx = t9;
    ebp = 0u;
    esi = t7;
    edi = t8;
    loc_4_f = d13;
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_1011a053: ;
    d17 = fr(g, loc_4_f - fr(g, (double)rdf32(sp0 + 4u) * x0));
    wrf32(sp0 + 0x18u, (float)d17);
    d18 = (double)rdf32(sp0 + 0x18u);
    if (d18 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d19 = (double)rdf32(sp0 + 0x18u);
        d20 = (double)rdf32(sp0 + 0x1cu);
        if ((cow_fsw(g, d19, d20, 0u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, d19, d20, 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d19, d20, 0u) & 0x4100u;
            d21 = fr(g, (double)rdf32(sp0 + 0x10u) * fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x18u) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x1cu))) * (double)rdf32(COW_IMG(0x1032b15cu))) + (double)rdf32(COW_IMG(0x1032961cu))));
            d22 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x18u) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x1cu))) * (double)rdf32(COW_IMG(0x1032b15cu))) + (double)rdf32(COW_IMG(0x1032961cu)));
            d23 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x1cu));
            wrf32(sp0 + 8u, (float)d21);
            d24 = fr(g, d22 * (double)rdf32(sp0 + 0x14u));
            wrf32(sp0 + 0xcu, (float)d24);
            d25 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d23 * (double)rdf32(sp0 + 0x18u)));
            if (!(d25 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = d25;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = d25;
                x0 = (double)rdf32(COW_IMG(0x103295d8u));
            }
            g->edx = edx;
            d26 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032ae60u)));
            fpush(g, d26);
            g->esp = sp0 - 0x18u;
            t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t28 = g->edx;
            wr32(sp0 - 0x1cu, 0u);
            if (ebp == 0u)
            {
                eax = t27 << 0x18u | 0x805020u;
                edx = t28;
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, eax);
                t31 = rd32(sp0 + 0xcu);
                wr32(sp0 - 0x2cu, t31);
                t32 = rd32(sp0 + 8u);
                wr32(sp0 - 0x30u, t32);
                loc_20 = 0u;
                loc_28 = eax;
                eax = t31;
                loc_2c = t31;
                loc_30 = t32;
            }
            else
            {
                eax = t27 << 0x18u | 0x805020u;
                wr32(sp0 - 0x20u, 0x44u);
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, eax);
                t29 = rd32(sp0 + 0xcu);
                wr32(sp0 - 0x2cu, t29);
                t30 = rd32(sp0 + 8u);
                wr32(sp0 - 0x30u, t30);
                edx = t30;
                loc_20 = 0x44u;
                loc_28 = eax;
                loc_2c = t29;
                loc_30 = t30;
            }
            wr32(sp0 - 0x34u, esi);
            wr32(sp0 - 0x38u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t33 = cow_thiscall(g, COW_IMG(0x1011fc80u), ebx, 8, edi, esi, loc_30, loc_2c, loc_28, 1u, loc_20, 0u);
            t34 = g->ecx;
            t35 = g->edx;
            eax = t33;
            ecx = t34;
            edx = t35;
        }
    }
    wr32(sp0 + 0x18u, ebp + 1u);
    d36 = (double)(int32_t)rd32(sp0 + 0x18u);
    if (d36 < (double)rdf32(COW_IMG(0x10329990u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x10329990u)), 1u);
        ebp = ebp + 1u;
        x0 = d36;
        goto L_1011a053;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x10329990u)), 1u);
    x0 = d36;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10119fb0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
