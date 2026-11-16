/* f_0x102e5838 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102e5838(Guest* g)
{
    double d16;
    double d18;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_10_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t45;
    uint32_t t46;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    double x3;
    double x4;
    double x5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x1090u) != 0u)
    {
        if (rd32(sp0 + 4u) < rd32(self + 0x1074u))
        {
            ebx = rd32(sp0 + 8u);
            edi = rd32(sp0 + 4u);
            goto L_102e5880;
        }
        ebx = rd32(sp0 + 8u);
        edi = rd32(sp0 + 4u);
        if (edi >= rd32(self + 0x107cu)) goto L_102e5880;
        if (ebx < rd32(self + 0x1080u)) goto L_102e5880;
        if (ebx < rd32(self + 0x1084u)) goto L_102e5b00;
L_102e5880: ;
        g->eax = in_eax;
        g->esp = sp0 - 0x1cu;
        t1 = cow_thiscall(g, COW_IMG(0x102e55b1u), self, 0);
        if ((int32_t)t1 < 0)
        {
            eax = t1;
            goto L_102e5b02;
        }
        t2 = rd32(sp0 + 0xcu);
        wr32(self + 0x107cu, edi + 1u);
        wr32(self + 0x1074u, edi);
        wr32(self + 0x1080u, ebx);
        wr32(self + 0x1084u, ebx + 1u);
        if (t2 != 0u)
        {
            t3 = rd32(self + 0x18u) + rd32(self + 0x1070u) * 2u + rd32(self + 0x1050u) * edi + rd32(self + 0x1054u) * ebx;
            t4 = rd32(self + 0x1070u);
            t5 = rd32(self + 0x1050u);
            t6 = rd32(self + 0x1054u);
            t7 = rd32(self + 0x106cu);
            t8 = rd32(self + 0x1078u);
            wr32(sp0 + 4u, t3);
            wr32(sp0 + 0xcu, t4);
            if (t4 < t8)
            {
                ecx = t5 * edi + t6 * ebx;
                edx = t7;
                ebx = t3;
                x2 = (double)rdf32(COW_IMG(0x1032a1acu));
                x1 = (double)rdf32(COW_IMG(0x1032961cu));
                x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_102e5906: ;
                t9 = (uint8_t)((rd16(self + 0x1094u) & 0x1fu) != 0u ? rd16(ebx) >> (rd16(self + 0x1094u) & 0x1fu) : rd16(ebx));
                t10 = rd16(ebx);
                t11 = rd16(self + 0x1098u);
                t12 = rd16(self + 0x1094u);
                wr32(sp0 + 8u, t9);
                t13 = (uint8_t)((t11 & 0x1fu) != 0u ? t10 >> (t11 & 0x1fu) : t10);
                t14 = rd32(sp0 + 4u);
                t15 = rd32(sp0 + 8u);
                wr32(sp0 + 8u, t13);
                d16 = (double)(float)fr(g, (double)(int32_t)t15 - x2);
                t17 = rd16(t14 + 2u);
                d18 = fr(g, (double)(int32_t)rd32(sp0 + 8u) - (double)rdf32(COW_IMG(0x1032ae60u)));
                wr32(sp0 + 8u, t17);
                t19 = (uint8_t)((t12 & 0x1fu) != 0u ? (uint16_t)t17 >> (t12 & 0x1fu) : (uint16_t)t17);
                t20 = rd16(self + 0x1098u);
                wr32(sp0 + 4u, t19);
                t21 = (uint8_t)((t20 & 0x1fu) != 0u ? (uint16_t)rd32(sp0 + 8u) >> (t20 & 0x1fu) : (uint16_t)rd32(sp0 + 8u));
                d22 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - x2);
                wr32(sp0 + 4u, t21);
                d23 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(COW_IMG(0x1032ae60u)));
                wrf32(sp0 + 8u, (float)d23);
                d24 = fr(g, d16 * (double)rdf32(COW_IMG(0x10346228u)));
                d25 = fr(g, d23 * (double)rdf32(COW_IMG(0x1034622cu)));
                wrf32(sp0 + 4u, (float)d24);
                wrf32(edx, (float)fr(g, d24 + d25));
                d26 = (double)(float)fr(g, (double)(float)d18 * (double)rdf32(COW_IMG(0x10346224u)));
                d27 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10346220u)));
                d28 = fr(g, fr(g, (double)rdf32(sp0 + 4u) - d26) - fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10346220u))));
                d29 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10346220u)));
                wrf32(sp0 + 8u, (float)d28);
                wrf32(edx + 4u, (float)d28);
                d30 = (double)(float)fr(g, (double)(float)d18 * (double)rdf32(COW_IMG(0x1034621cu)));
                d31 = fr(g, fr(g, (double)(float)d18 * (double)rdf32(COW_IMG(0x1034621cu))) + (double)rdf32(sp0 + 4u));
                wrf32(sp0 + 4u, (float)d31);
                wrf32(edx + 8u, (float)d31);
                wrf32(edx + 0xcu, (float)1.0);
                d32 = fr(g, d24 + d25);
                if (!(d32 < x0))
                {
                    eax = (t21 & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, x0, 6u);
                    ecx = ((ecx | t12) & 0xffff0000u) | t20;
                    ebx = t14;
                    loc_c_f = d26;
                    loc_8_f = d30;
                    loc_10_f = d27;
                    x5 = d32;
                    x4 = d25;
                    x3 = d22;
                    if ((cow_fsw(g, x5, x1, 6u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x5, x1, 6u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x5, x1, 6u);
                        x5 = 1.0;
                    }
                }
                else
                {
                    eax = (t21 & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, x0, 6u);
                    ecx = ((ecx | t12) & 0xffff0000u) | t20;
                    ebx = t14;
                    loc_c_f = d26;
                    loc_8_f = d30;
                    loc_10_f = d27;
                    x5 = d32;
                    x4 = d25;
                    x3 = d22;
                    x5 = 0.0;
                }
                wrf32(edx, (float)x5);
                d33 = (double)rdf32(sp0 + 8u);
                if (!(d33 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, x0, 5u);
                    d34 = (double)rdf32(sp0 + 8u);
                    if ((cow_fsw(g, d34, x1, 5u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, x1, 5u);
                        x5 = (double)rdf32(sp0 + 8u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, x1, 5u);
                        x5 = 1.0;
                    }
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, x0, 5u);
                    x5 = 0.0;
                }
                wrf32(edx + 4u, (float)x5);
                d35 = (double)rdf32(sp0 + 4u);
                if (!(d35 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, x0, 5u);
                    d36 = (double)rdf32(sp0 + 4u);
                    if ((cow_fsw(g, d36, x1, 5u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, x1, 5u);
                        x5 = (double)rdf32(sp0 + 4u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, x1, 5u);
                        x5 = 1.0;
                    }
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, x0, 5u);
                    x5 = 0.0;
                }
                wrf32(edx + 8u, (float)x5);
                d37 = fr(g, x3 * (double)rdf32(COW_IMG(0x10346228u)));
                wrf32(sp0 + 4u, (float)d37);
                wrf32(edx + 0x10u, (float)fr(g, d37 + x4));
                d38 = fr(g, fr(g, (double)rdf32(sp0 + 4u) - loc_c_f) - loc_10_f);
                wrf32(sp0 + 8u, (float)d38);
                wrf32(edx + 0x14u, (float)d38);
                d39 = fr(g, (double)rdf32(sp0 + 4u) + loc_8_f);
                wrf32(sp0 + 4u, (float)d39);
                wrf32(edx + 0x18u, (float)d39);
                wrf32(edx + 0x1cu, (float)1.0);
                d40 = fr(g, d37 + x4);
                if (!(d40 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, x0, 4u);
                    x3 = d40;
                    if ((cow_fsw(g, x3, x1, 4u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, x1, 4u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, x1, 4u);
                        x3 = 1.0;
                    }
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, x0, 4u);
                    x3 = d40;
                    x3 = 0.0;
                }
                wrf32(edx + 0x10u, (float)x3);
                d41 = (double)rdf32(sp0 + 8u);
                if (!(d41 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, x0, 3u);
                    d42 = (double)rdf32(sp0 + 8u);
                    if ((cow_fsw(g, d42, x1, 3u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, x1, 3u);
                        x3 = (double)rdf32(sp0 + 8u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, x1, 3u);
                        x3 = 1.0;
                    }
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, x0, 3u);
                    x3 = 0.0;
                }
                wrf32(edx + 0x14u, (float)x3);
                d43 = (double)rdf32(sp0 + 4u);
                if (!(d43 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, x0, 3u);
                    d44 = (double)rdf32(sp0 + 4u);
                    if ((cow_fsw(g, d44, x1, 3u) >> 8u & 0x41u) != 0u)
                    {
                        x3 = (double)rdf32(sp0 + 4u);
                    }
                    else
                    {
                        x3 = 1.0;
                    }
                }
                else
                {
                    x3 = 0.0;
                }
                wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 2u);
                wrf32(edx + 0x18u, (float)x3);
                t45 = rd32(sp0 + 0xcu);
                t46 = rd32(self + 0x1078u);
                wr32(sp0 + 4u, ebx + 4u);
                if (t45 < t46)
                {
                    edx = edx + 0x20u;
                    ebx = ebx + 4u;
                    goto L_102e5906;
                }
            }
        }
L_102e5b00: ;
        eax = 0u;
L_102e5b02: ;
    }
    else
    {
        eax = 0x8007000eu;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5838(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e5838(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
