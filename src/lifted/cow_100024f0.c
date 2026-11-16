/* f_0x100024f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100024f0(Guest* g)
{
    uint32_t cf;
    double d12;
    double d13;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t14;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 296u);

    wr32(sp0 - 0x104u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t1 = cow_stdcall(g, COW_IMG(0x100026c0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        if (arg1 != 0u)
        {
            wr32(sp0 - 0x108u, in_ebp);
            if (rd8(COW_IMG(0x103d3c9cu)) != 0u)
            {
                wr32(sp0 - 0x10cu, in_ebx);
                wr32(sp0 - 0x110u, in_esi);
                if (rd16(arg1 + 0x210u) != 0u)
                {
                    ebp = (in_ebp & 0xffff0000u) | rd16(arg1 + 0x210u);
                    esi = arg1 + 0x214u;
                }
                else
                {
                    ebp = (in_ebp & 0xffff0000u) | rd16(arg1 + 0x210u);
                    esi = arg1 + 0x7cu;
                }
                eax = COW_IMG(0x103d3c9cu);
                ebx = in_ebx;
L_10002539: ;
                if (rd8(eax) != rd8(esi))
                {
                    ecx = (ecx & 0xffffff00u) | rd8(eax);
                    edx = (edx & 0xffffff00u) | rd8(eax);
                    cf = rd8(eax) < rd8(esi);
                    goto L_10002561;
                }
                ecx = (ecx & 0xffffff00u) | rd8(eax);
                edx = (edx & 0xffffff00u) | rd8(eax);
                ebx = (ebx & 0xffffff00u) | rd8(esi);
                if ((uint8_t)ecx == 0u) goto L_1000255d;
                if (rd8(eax + 1u) != rd8(esi + 1u))
                {
                    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                    cf = rd8(eax + 1u) < rd8(esi + 1u);
                    goto L_10002561;
                }
                ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
                edx = (edx & 0xffffff00u) | rd8(eax + 1u);
                ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
                if ((uint8_t)ecx != 0u)
                {
                    eax = eax + 2u;
                    esi = esi + 2u;
                    goto L_10002539;
                }
L_1000255d: ;
                eax = 0u;
L_10002566: ;
                if (eax != 0u)
                {
                    if ((uint16_t)ebp != 0u)
                    {
                        eax = arg1 + 0x214u;
                    }
                    else
                    {
                        eax = arg1 + 0x7cu;
                    }
                    wr32(sp0 - 0x10cu, eax);
                    g->edx = edx;
                    t4 = rd32(COW_IMG(0x10578158u));
                    g->esp = sp0 - 0x108u;
                    cow_thiscall(g, COW_IMG(0x10129e80u), t4, 1, eax);
                    t5 = g->ecx;
                    t6 = g->edx;
                    ecx = t5;
                    edx = t6;
                }
            }
            if (rd16(arg1 + 0x210u) != 0u)
            {
                eax = arg1 + 0x214u;
            }
            else
            {
                eax = arg1 + 0x7cu;
            }
            wr32(sp0 - 0x108u, 0x18u);
            wr32(sp0 - 0x10cu, eax);
            wr32(sp0 - 0x110u, COW_IMG(0x103d3c9cu));
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x104u;
            cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, COW_IMG(0x103d3c9cu), eax, 0x18u);
            t7 = g->ecx;
            t8 = g->edx;
            if (rd8(COW_IMG(0x103d3cb5u)) == (rd32(arg1 + 0x128u) >> 0xbu & 7u))
            {
                eax = rd32(arg1 + 0x128u) >> 0xbu;
                edx = (t8 & 0xffffff00u) | rd8(COW_IMG(0x103d3cb5u));
            }
            else
            {
                eax = rd32(arg1 + 0x128u) >> 0xbu;
                ecx = (t7 & 0xffffff00u) | (rd32(arg1 + 0x128u) >> 0xbu & 7u);
                wr32(sp0 - 0x108u, eax & 7u);
                wr32(sp0 - 0x10cu, COW_IMG(0x1034f2e4u));
                wr32(sp0 - 0x110u, sp0 - 0x100u);
                g->edx = sp0 - 0x100u;
                g->esp = sp0 - 0xfcu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1034f2e4u), eax & 7u, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
                t9 = g->edx;
                wr32(sp0 - 0x108u, sp0 - 0x100u);
                g->eax = sp0 - 0x100u;
                g->edx = t9;
                g->esp = sp0 - 0x104u;
                t10 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x100u);
                t11 = g->edx;
                eax = t10;
                edx = t11;
            }
            d12 = (double)rdf32(COW_IMG(0x103d3c90u));
            d13 = (double)rdf32(COW_IMG(0x103295d8u));
            t14 = rd32(arg1 + 0x128u);
            wr8(COW_IMG(0x103d3cb5u), t14 >> 0xbu & 7u);
            if (d12 != d13)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, d13, 0u);
                ecx = (t14 >> 0xbu & 0xffffff00u) | (t14 >> 0xbu & 7u);
                goto L_10002633;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, d13, 0u);
            ecx = (t14 >> 0xbu & 0xffffff00u) | (t14 >> 0xbu & 7u);
            if ((double)rdf32(COW_IMG(0x103d3c94u)) != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103d3c94u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                goto L_10002633;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103d3c94u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            if ((double)rdf32(COW_IMG(0x103d3c98u)) == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103d3c98u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                goto L_1000269c;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103d3c98u)), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_10002633: ;
            d15 = (double)rdf32(arg1 + 4u);
            if ((double)rdf32(COW_IMG(0x103d3c90u)) != d15) goto L_10002663;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103d3c90u)), d15, 0u);
            d16 = (double)rdf32(arg1 + 8u);
            if ((double)rdf32(COW_IMG(0x103d3c94u)) != d16) goto L_10002663;
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103d3c94u)), d16, 0u);
            d17 = (double)rdf32(arg1 + 0xcu);
            if ((double)rdf32(COW_IMG(0x103d3c98u)) == d17)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x103d3c98u)), d17, 0u);
                goto L_1000269c;
            }
L_10002663: ;
            d18 = (double)rdf32(arg1 + 0xcu);
            wrf64(sp0 - 0x10cu, d18);
            d19 = (double)rdf32(arg1 + 8u);
            wrf64(sp0 - 0x114u, d19);
            d20 = (double)rdf32(arg1 + 4u);
            wrf64(sp0 - 0x11cu, d20);
            wr32(sp0 - 0x120u, COW_IMG(0x1034f2d4u));
            wr32(sp0 - 0x124u, sp0 - 0x100u);
            g->edx = sp0 - 0x100u;
            g->esp = sp0 - 0x110u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1034f2d4u), cow_dlo(d20), cow_dhi(d20), cow_dlo(d19));
            t21 = g->edx;
            wr32(sp0 - 0x108u, sp0 - 0x100u);
            g->eax = sp0 - 0x100u;
            g->edx = t21;
            t22 = rd32(COW_IMG(0x10578158u));
            g->esp = sp0 - 0x104u;
            t23 = cow_thiscall(g, COW_IMG(0x10129e80u), t22, 1, sp0 - 0x100u);
            t24 = g->ecx;
            t25 = g->edx;
            eax = t23;
            ecx = t24;
            edx = t25;
L_1000269c: ;
            wr32(sp0 - 0x108u, arg1 + 4u);
            wr32(sp0 - 0x10cu, COW_IMG(0x103d3c90u));
            g->eax = eax;
            g->esp = sp0 - 0x104u;
            t26 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x103d3c90u), arg1 + 4u);
            eax = t26;
        }
    }
    return eax;
L_10002561: ;
    eax = -cf + 1u - cf;
    goto L_10002566;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100024f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100024f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
