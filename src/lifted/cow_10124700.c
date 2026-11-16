/* f_0x10124700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10124700(Guest* g)
{
    double d1;
    double d11;
    double d13;
    double d30;
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t t10;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x24u, in_ebx);
    if (self == 0u)
    {
        eax = in_eax;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        if (rd8(self + 0x4du) < 3u) goto L_1012471b;
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x4du);
        if ((uint8_t)eax <= 6u)
        {
            esi = in_esi;
            edi = in_edi;
            goto L_1012488f;
        }
L_1012471b: ;
        d1 = (double)rdf32(sp0 + 8u);
        t2 = rd32(rd32(sp0 + 4u));
        t3 = rd32(sp0 + 4u);
        d4 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(self + 4u, t2);
        t5 = rd32(t3 + 4u);
        wr32(self + 8u, t5);
        if (d1 == d4)
        {
            eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d4, 0u);
        }
        else
        {
            eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d4, 0u);
            t6 = rd32(sp0 + 8u);
            wr32(self + 0x48u, t6);
        }
        if (rd32(COW_IMG(0x10456a7cu)) == 0u)
        {
            edx = rd32(COW_IMG(0x10456a7cu));
            goto L_10124755;
        }
        edx = rd32(COW_IMG(0x10456a7cu));
        if (edx != 3u)
        {
            esi = in_esi;
            edi = in_edi;
            goto L_1012488f;
        }
L_10124755: ;
        if (rd32(COW_IMG(0x1045666cu)) == 0u)
        {
            eax = rd32(COW_IMG(0x1045666cu));
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            if (rd32(COW_IMG(0x10456bf8u)) == 0u)
            {
                eax = rd32(COW_IMG(0x10456bf8u));
                esi = in_esi;
                edi = in_edi;
            }
            else
            {
                if (rd32(COW_IMG(0x103d3c64u)) == 0u)
                {
                    eax = rd32(COW_IMG(0x103d3c64u));
                    esi = in_esi;
                    edi = in_edi;
                }
                else
                {
                    eax = rd32(COW_IMG(0x103d3c64u));
                    if (rd8(eax + 0x1cu) != 1u)
                    {
                        esi = in_esi;
                        edi = in_edi;
                    }
                    else
                    {
                        t7 = rd32(self + 8u);
                        t8 = rd32(self + 4u);
                        wrf32(sp0 + 4u, (float)(double)(int32_t)t7);
                        if (edx == 0u)
                        {
                            ecx = self;
                            esi = in_esi;
                            edi = in_edi;
                            x1 = (double)(int32_t)t7;
                            x0 = (double)(int32_t)t8;
                        }
                        else
                        {
                            x1 = (double)(int32_t)t7;
                            x0 = (double)(int32_t)t8;
                            wr32(sp0 - 0x28u, in_esi);
                            t9 = (uint32_t)(int16_t)rd16(COW_IMG(0x106218b8u)) - (uint32_t)(int16_t)rd16(COW_IMG(0x106218b4u));
                            wr32(sp0 + 8u, t9);
                            wr32(sp0 - 0x2cu, in_edi);
                            t10 = (uint32_t)(int16_t)rd16(COW_IMG(0x106218bau)) - (uint32_t)(int16_t)rd16(COW_IMG(0x106218b6u));
                            d11 = fr(g, x0 / (double)(int32_t)rd32(sp0 + 8u));
                            wr32(sp0 + 8u, t10);
                            wr32(sp0 - 0x30u, sp0 - 0x10u);
                            t12 = rd32(eax + 0x18u);
                            wr32(sp0 - 0x34u, t12);
                            wrf32(sp0 - 0x18u, (float)(double)(float)d11);
                            d13 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) / (double)(int32_t)rd32(sp0 + 8u));
                            wrf32(sp0 - 0x14u, (float)d13);
                            g->eax = eax;
                            g->ecx = sp0 - 0x10u;
                            g->edx = t12;
                            g->esp = sp0 - 0x2cu;
                            t14 = cow_stdcall(g, rd32(COW_IMG(0x103293e4u)), 2, t12, sp0 - 0x10u);   /* user32.dll!GetWindowRect */
                            t15 = g->ecx;
                            t16 = g->edx;
                            wr32(sp0 - 0x30u, 0x20u);
                            g->ecx = t15;
                            g->edx = t16;
                            t17 = rd32(COW_IMG(0x103293a0u));
                            t18 = cow_stdcall(g, t17, 1, 0x20u);   /* user32.dll!GetSystemMetrics */
                            t19 = g->ecx;
                            t20 = g->edx;
                            wr32(sp0 - 0x30u, 0x21u);
                            wr32(sp0 + 8u, t18);
                            g->edx = t20;
                            t21 = cow_thiscall(g, t17, t19, 1, 0x21u);
                            t22 = g->ecx;
                            t23 = g->edx;
                            wr32(sp0 - 0x30u, 4u);
                            wr32(sp0 - 0x20u, t21);
                            t24 = cow_thiscall(g, t17, t22, 1, 4u);
                            t25 = rd32(COW_IMG(0x10456a7cu));
                            wr32(sp0 + 4u, t24);
                            if (t25 != 3u)
                            {
                                eax = t24;
                                ebx = t21;
                                edi = t18;
                            }
                            else
                            {
                                wr32(sp0 + 8u, 0u);
                                wr32(sp0 - 0x20u, 0u);
                                wr32(sp0 + 4u, 0u);
                                eax = 0u;
                                ebx = 0u;
                                edi = 0u;
                                loc_20 = 0u;
                            }
                            t26 = rd32(sp0 - 8u) - edi * 2u - rd32(sp0 - 0x10u);
                            wr32(sp0 - 0x1cu, t26);
                            t27 = rd32(sp0 - 4u) - ebx * 2u - rd32(sp0 - 0xcu) - eax;
                            t28 = rd32(sp0 - 0x28u);
                            t29 = rd32(sp0 - 0x2cu);
                            d30 = fr(g, fr(g, fr(g, (double)(int32_t)t26 * (double)rdf32(sp0 - 0x18u)) + (double)(int32_t)rd32(sp0 - 0x10u)) + (double)(int32_t)rd32(sp0 + 8u));
                            wr32(sp0 + 8u, t27);
                            ecx = ebx * 2u;
                            edx = t27;
                            esi = t28;
                            edi = t29;
                            x1 = fr(g, fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 - 0x14u)) + (double)(int32_t)rd32(sp0 - 0xcu)) + (double)(int32_t)rd32(sp0 + 4u)) + (double)(int32_t)loc_20);
                            x0 = d30;
                        }
                        g->ecx = ecx;
                        g->edx = edx;
                        fpush(g, x1);
                        g->esp = sp0 - 0x24u;
                        t31 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t32 = g->ecx;
                        t33 = g->edx;
                        wr32(sp0 - 0x28u, t31);
                        g->edx = t33;
                        fpush(g, x0);
                        g->esp = sp0 - 0x28u;
                        t34 = cow_call_regs(g, COW_IMG(0x10311c6cu), t31, g->ecx, g->edx, 1, 0);
                        t35 = g->edx;
                        wr32(sp0 - 0x2cu, t34);
                        g->esp = sp0 - 0x24u;
                        t36 = cow_stdcall(g, COW_IMG(0x10009770u), 2, t34, rd32(sp0 - 0x28u));
                        eax = t36;
                    }
                }
            }
        }
    }
L_1012488f: ;
    g->esi = esi;
    g->edi = edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10124700(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
