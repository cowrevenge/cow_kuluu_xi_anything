/* f_0x101cdf50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101cdf50(Guest* g)
{
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
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if ((int32_t)arg1 < 0)
    {
        ebx = in_ebx;
    }
    else
    {
        if ((int32_t)arg1 >= 4)
        {
            ebx = in_ebx;
        }
        else
        {
            wr32(sp0 - 0x20u, in_ebx);
            g->edx = in_edx;
            g->esp = sp0 - 0x20u;
            t1 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
            t2 = g->edx;
            if ((uint8_t)t1 == 0u)
            {
                eax = t1;
                edx = t2;
            }
            else
            {
                edx = t2;
                if ((int32_t)rd32(self + 0x6cu) <= 0)
                {
                    eax = rd32(self + 0x6cu);
                }
                else
                {
                    eax = rd32(self + 0x6cu);
                    ebx = 0u;
                    edi = self + 0x70u;
L_101cdf83: ;
                    if (rd32(edi) != 0u)
                    {
                        ecx = rd32(edi);
                        wr32(sp0 - 0x24u, arg1);
                        wr32(sp0 - 0x28u, self);
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        cow_thiscall(g, COW_IMG(0x101cd2d0u), ecx, 2, self, arg1);
                        t3 = g->edx;
                        edx = t3;
                    }
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 0x6cu))
                    {
                        eax = rd32(self + 0x6cu);
                        ebx = ebx + 1u;
                        edi = edi + 4u;
                        goto L_101cdf83;
                    }
                    eax = rd32(self + 0x6cu);
                }
            }
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0x3f800000u);
            d4 = (double)(float)fr(g, (double)(int32_t)arg1 * (double)rdf32(COW_IMG(0x1032ab98u)));
            wrf32(sp0 - 0xcu, (float)d4);
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t5 = cow_call_regs(g, COW_IMG(0x101cda30u), eax, self, g->edx, 1, 0);
            t6 = g->ecx;
            t7 = g->edx;
            if (t5 == 0u)
            {
                eax = t5;
                ecx = t6;
                edx = t7;
                ebx = rd32(sp0 - 0x20u);
                goto L_101cdfd9;
            }
            ecx = t6;
            edx = t7;
            ebx = rd32(sp0 - 0x20u);
            wr32(sp0 - 0x20u, sp0 - 0x10u);
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t8 = cow_call_regs(g, COW_IMG(0x101cda30u), sp0 - 0x10u, ecx, g->edx, 1, 0);
            t9 = g->edx;
            eax = t8;
            edx = t9;
L_101ce00c: ;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x100ab880u), eax, 1, sp0 - 0x10u);
            t21 = g->ecx;
            t22 = g->edx;
            ecx = t21;
            edx = t22;
L_101ce013: ;
            if (rd32(self + 0x64u) != 0u)
            {
                esi = rd32(self + 0x64u);
                wr32(sp0 - 0x20u, sp0 - 0x10u);
                wr32(sp0 - 0x24u, esi + 0x44u);
                g->eax = sp0 - 0x10u;
                g->esp = sp0 - 0x1cu;
                t23 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x44u, sp0 - 0x10u);
                d24 = (double)rdf32(esi + 0x44u);
                if ((cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    edi = esi + 0x44u;
                }
                else
                {
                    eax = cow_fsw(g, d24, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    edi = esi + 0x44u;
                    d25 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi, (float)d25);
                }
                if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10337e20u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                    d26 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(edi, (float)d26);
                }
                d27 = (double)rdf32(esi + 0x48u);
                if ((cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    d28 = fr(g, (double)rdf32(esi + 0x48u) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(esi + 0x48u, (float)d28);
                }
                d29 = (double)rdf32(esi + 0x48u);
                if (!(d29 < (double)rdf32(COW_IMG(0x10337e20u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x10337e20u)), 0u);
                    d30 = fr(g, (double)rdf32(esi + 0x48u) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(esi + 0x48u, (float)d30);
                }
                d31 = (double)rdf32(esi + 0x4cu);
                if ((cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10337e24u)), 0u) & 0x4100u;
                    d32 = fr(g, (double)rdf32(esi + 0x4cu) - (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(esi + 0x4cu, (float)d32);
                }
                d33 = (double)rdf32(esi + 0x4cu);
                if (d33 < (double)rdf32(COW_IMG(0x10337e20u)))
                {
                    d34 = fr(g, (double)rdf32(esi + 0x4cu) + (double)rdf32(COW_IMG(0x10331818u)));
                    wrf32(esi + 0x4cu, (float)d34);
                }
            }
        }
    }
    g->ebx = ebx;
    return;
L_101cdfd9: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_call_regs(g, COW_IMG(0x101cd9d0u), eax, ecx, g->edx, 1, 0);
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        edx = t11;
        goto L_101cdff7;
    }
    eax = t10;
    edx = t11;
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t12 = cow_call_regs(g, COW_IMG(0x101cd9d0u), eax, self, g->edx, 1, 0);
    t13 = g->edx;
    g->edx = t13;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x100c4050u), t12, 1, sp0 - 0x10u);
    t14 = g->ecx;
    t15 = g->edx;
    ecx = t14;
    edx = t15;
    goto L_101ce013;
L_101cdff7: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t16 = cow_call_regs(g, COW_IMG(0x101cda00u), eax, self, g->edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 0u)
    {
        ecx = t17;
        edx = t18;
        goto L_101ce013;
    }
    eax = t16;
    ecx = t17;
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    t19 = cow_call_regs(g, COW_IMG(0x101cda00u), eax, ecx, g->edx, 1, 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    goto L_101ce00c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cdf50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cdf50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
