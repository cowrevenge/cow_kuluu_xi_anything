/* f_0x1024e000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1024e000(Guest* g)
{
    double d20;
    double d21;
    double d22;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d37;
    double d40;
    double d41;
    double d48;
    double d49;
    double d50;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_50;
    uint32_t loc_80;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 196u);

    wr32(sp0 - 0x88u, in_ebx);
    wr32(sp0 - 0x8cu, in_ebp);
    wr32(sp0 - 0x90u, in_esi);
    if (arg1 + 0xccu == 0u)
    {
        edi = in_edi;
    }
    else
    {
        if ((rd8(arg1 + 0xccu) & 4u) == 0u)
        {
            edi = in_edi;
        }
        else
        {
            wr32(sp0 - 0x94u, sp0 - 0x84u);
            wr32(sp0 - 0x98u, 0u);
            wr32(sp0 - 0x9cu, 3u);
            g->eax = sp0 - 0x84u;
            g->esp = sp0 - 0x90u;
            t1 = cow_cdecl(g, COW_IMG(0x10273390u), 3, 3u, 0u, sp0 - 0x84u);
            t2 = rd32(sp0 - 0x84u) + 0x68u;
            wr32(sp0 - 0xa0u, t2);
            wr32(sp0 - 0xa4u, sp0 - 0x60u);
            g->ecx = t2;
            g->edx = sp0 - 0x60u;
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x60u, t2);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(sp0 - 0xa8u, sp0 - 0x84u);
            wr32(sp0 - 0xacu, 0u);
            wr32(sp0 - 0xb0u, 4u);
            g->ecx = t3;
            g->edx = t4;
            g->esp = sp0 - 0xa4u;
            cow_cdecl(g, COW_IMG(0x10273390u), 3, 4u, 0u, sp0 - 0x84u);
            t5 = g->ecx;
            t6 = g->edx;
            t7 = rd32(arg1 + 0xecu);
            wr32(sp0 - 0x50u, t7);
            wr32(sp0 - 0x80u, 0u);
            if ((int32_t)rd32(t7 + 0x44u) <= 0)
            {
                edi = in_edi;
            }
            else
            {
                eax = rd32(t7 + 0x44u);
                ecx = t5;
                edx = t6;
                ebx = t7;
                loc_50 = t7;
                wr32(sp0 - 0x94u, in_edi);
                ebp = 0u;
                loc_80 = 0u;
L_1024e074: ;
                wr32(sp0 - 0x98u, ebp);
                wr32(sp0 - 0x9cu, ebx);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x94u;
                t8 = cow_cdecl(g, COW_IMG(0x10279890u), 2, ebx, ebp);
                t9 = g->ecx;
                t10 = g->edx;
                if (rd32(t8) != 0xb0001u)
                {
                    ecx = t9;
                    edx = t10;
                }
                else
                {
                    esi = t8;
                    wr32(sp0 - 0x98u, sp0 - 0x7cu);
                    t11 = rd32(esi + 0x1cu);
                    t12 = rd32(rd32(esi + 0x1cu) + 0x68u);
                    wr32(t11 + 0x68u, 0u);
                    t13 = rd32(esi + 0x20u) + 0x1f0u;
                    wr32(sp0 - 0x9cu, t13);
                    wr32(sp0 - 0xa0u, esi);
                    g->ecx = sp0 - 0x7cu;
                    g->edx = t13;
                    g->esp = sp0 - 0x94u;
                    cow_cdecl(g, COW_IMG(0x1027cd10u), 3, esi, t13, sp0 - 0x7cu);
                    t14 = g->ecx;
                    t15 = g->edx;
                    if (t12 == 0u)
                    {
                        ecx = t14;
                        edx = t15;
                        edi = t12;
                        wr32(sp0 - 0x98u, sp0 - 0x70u);
                        g->eax = sp0 - 0x70u;
                        g->edx = edx;
                        g->esp = sp0 - 0x94u;
                        t25 = cow_cdecl(g, COW_IMG(0x1027ae70u), 1, sp0 - 0x70u);
                        t26 = g->edx;
                        eax = t25;
                        edx = t26;
                    }
                    else
                    {
                        edx = t15;
                        edi = t12;
                        wr32(sp0 - 0x98u, sp0 - 0x7cu);
                        t16 = rd32(edi + 0x64u) + 0x68u;
                        wr32(sp0 - 0x9cu, t16);
                        wr32(sp0 - 0xa0u, sp0 - 0x7cu);
                        g->eax = sp0 - 0x7cu;
                        g->ecx = sp0 - 0x7cu;
                        t17 = rd32(edi + 0x64u);
                        g->esp = sp0 - 0x94u;
                        t18 = cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0x7cu, t16, sp0 - 0x7cu);
                        t19 = g->ecx;
                        wr32(sp0 - 0xa4u, t16);
                        wr32(sp0 - 0xa8u, sp0 - 0x70u);
                        d20 = (double)(float)fr(g, (double)rdf32(sp0 - 0x7cu) + (double)rdf32(t17 + 0x5cu));
                        wrf32(sp0 - 0x7cu, (float)d20);
                        d21 = (double)(float)fr(g, (double)rdf32(sp0 - 0x78u) + (double)rdf32(t17 + 0x60u));
                        wrf32(sp0 - 0x78u, (float)d21);
                        d22 = (double)(float)fr(g, (double)rdf32(sp0 - 0x74u) + (double)rdf32(t17 + 0x64u));
                        wrf32(sp0 - 0x74u, (float)d22);
                        g->edx = sp0 - 0x70u;
                        g->esp = sp0 - 0xa0u;
                        t23 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x70u, t16);
                        t24 = g->edx;
                        eax = t23;
                        edx = t24;
                        ebx = rd32(sp0 - 0x50u);
                        ebp = rd32(sp0 - 0x80u);
                    }
                    wr32(sp0 - 0x98u, 0x40490fdbu);
                    wr32(sp0 - 0x9cu, sp0 - 0x20u);
                    g->esp = sp0 - 0x94u;
                    cow_cdecl(g, COW_IMG(0x1027abf0u), 2, sp0 - 0x20u, 0x40490fdbu);
                    wr32(sp0 - 0xa0u, sp0 - 0x70u);
                    wr32(sp0 - 0xa4u, sp0 - 0x20u);
                    wr32(sp0 - 0xa8u, sp0 - 0x10u);
                    g->ecx = sp0 - 0x10u;
                    g->esp = sp0 - 0x9cu;
                    cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x10u, sp0 - 0x20u, sp0 - 0x70u);
                    t27 = g->ecx;
                    wr32(sp0 - 0xacu, sp0 - 0x10u);
                    wr32(sp0 - 0xb0u, sp0 - 0x70u);
                    g->esp = sp0 - 0xa8u;
                    cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x70u, sp0 - 0x10u);
                    wr32(sp0 - 0xb4u, sp0 - 0x4cu);
                    wr32(sp0 - 0xb8u, sp0 - 0x4cu);
                    d28 = (double)(float)fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(sp0 - 0x70u));
                    wrf32(sp0 - 0x4cu, (float)d28);
                    d29 = (double)(float)fr(g, (double)rdf32(sp0 - 0x5cu) - (double)rdf32(sp0 - 0x6cu));
                    wrf32(sp0 - 0x48u, (float)d29);
                    d30 = (double)(float)fr(g, (double)rdf32(sp0 - 0x58u) - (double)rdf32(sp0 - 0x68u));
                    wrf32(sp0 - 0x44u, (float)d30);
                    d31 = (double)(float)fr(g, (double)rdf32(sp0 - 0x54u) - (double)rdf32(sp0 - 0x64u));
                    wrf32(sp0 - 0x40u, (float)d31);
                    d32 = (double)(float)fr(g, (double)rdf32(sp0 - 0x70u) + (double)rdf32(sp0 - 0x60u));
                    wrf32(sp0 - 0x3cu, (float)d32);
                    d33 = (double)(float)fr(g, (double)rdf32(sp0 - 0x6cu) + (double)rdf32(sp0 - 0x5cu));
                    wrf32(sp0 - 0x38u, (float)d33);
                    d34 = (double)(float)fr(g, (double)rdf32(sp0 - 0x68u) + (double)rdf32(sp0 - 0x58u));
                    wrf32(sp0 - 0x34u, (float)d34);
                    d35 = (double)(float)fr(g, (double)rdf32(sp0 - 0x64u) + (double)rdf32(sp0 - 0x54u));
                    wrf32(sp0 - 0x30u, (float)d35);
                    g->edx = sp0 - 0x4cu;
                    g->esp = sp0 - 0xb0u;
                    cow_cdecl(g, COW_IMG(0x1027aee0u), 2, sp0 - 0x4cu, sp0 - 0x4cu);
                    t36 = g->edx;
                    d37 = cow_take_float(g);
                    wrf32(sp0 - 0x80u, (float)(double)(float)d37);
                    wr32(sp0 - 0xbcu, sp0 - 0x3cu);
                    wr32(sp0 - 0xc0u, sp0 - 0x3cu);
                    g->ecx = sp0 - 0x3cu;
                    g->esp = sp0 - 0xb8u;
                    t38 = cow_cdecl(g, COW_IMG(0x1027aee0u), 2, sp0 - 0x3cu, sp0 - 0x3cu);
                    t39 = g->ecx;
                    d40 = cow_take_float(g);
                    d41 = (double)rdf32(sp0 - 0x80u);
                    if (d40 < d41)
                    {
                        eax = (t38 & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, d41, 0u);
                        ecx = t39;
                        wr32(sp0 - 0x98u, sp0 - 0x70u);
                        g->esp = sp0 - 0x94u;
                        cow_cdecl(g, COW_IMG(0x1027af10u), 1, sp0 - 0x70u);
                    }
                    wr32(sp0 - 0x98u, sp0 - 0x70u);
                    t42 = rd32(esi + 0x1cu);
                    wr32(t42 + 0x68u, edi);
                    t43 = rd32(sp0 - 0x84u) + 0x68u;
                    wr32(sp0 - 0x9cu, t43);
                    g->esp = sp0 - 0x94u;
                    cow_cdecl(g, COW_IMG(0x1027a720u), 2, t43, sp0 - 0x70u);
                    wr32(sp0 - 0xa0u, sp0 - 0x2cu);
                    wr32(rd32(sp0 - 0x84u) + 0x78u, 0x41a00000u);
                    wr32(sp0 - 0x2cu, 0u);
                    wr32(sp0 - 0x28u, 0u);
                    t44 = rd32(sp0 - 0x84u) + 0x68u;
                    wr32(sp0 - 0xa4u, t44);
                    t45 = rd32(sp0 - 0x84u) + 0x5cu;
                    wr32(sp0 - 0xa8u, t45);
                    wr32(sp0 - 0x24u, 0xc1a00000u);
                    g->ecx = sp0 - 0x2cu;
                    g->edx = t44;
                    g->esp = sp0 - 0x9cu;
                    cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, t45, t44, sp0 - 0x2cu);
                    t46 = g->ecx;
                    t47 = g->edx;
                    d48 = fr(g, (double)rdf32(sp0 - 0x7cu) + (double)rdf32(rd32(sp0 - 0x84u) + 0x5cu));
                    wrf32(rd32(sp0 - 0x84u) + 0x5cu, (float)d48);
                    d49 = fr(g, (double)rdf32(sp0 - 0x78u) + (double)rdf32(rd32(sp0 - 0x84u) + 0x60u));
                    wrf32(rd32(sp0 - 0x84u) + 0x60u, (float)d49);
                    d50 = fr(g, (double)rdf32(sp0 - 0x74u) + (double)rdf32(rd32(sp0 - 0x84u) + 0x64u));
                    wrf32(rd32(sp0 - 0x84u) + 0x64u, (float)d50);
                    t51 = rd32(sp0 - 0x84u);
                    wr32(sp0 - 0xacu, t51);
                    g->ecx = t46;
                    g->edx = t47;
                    g->esp = sp0 - 0xa8u;
                    cow_cdecl(g, COW_IMG(0x1026e210u), 1, t51);
                    t52 = g->ecx;
                    t53 = g->edx;
                    ecx = t52;
                    edx = t53;
                }
                wr32(sp0 - 0x80u, ebp + 1u);
                if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + 0x44u))
                {
                    eax = rd32(ebx + 0x44u);
                    loc_80 = ebp + 1u;
                    ebp = ebp + 1u;
                    goto L_1024e074;
                }
                edi = rd32(sp0 - 0x94u);
            }
        }
    }
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024e000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024e000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
