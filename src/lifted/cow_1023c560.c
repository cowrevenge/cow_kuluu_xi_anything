/* f_0x1023c560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023c560(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_204;
    uint32_t loc_214;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 548u);

    wr32(sp0 - 0x208u, in_ebx);
    wr32(sp0 - 0x20cu, in_ebp);
    wr32(sp0 - 0x210u, in_esi);
    if (rd8(self + 0xa5e0u) != 1u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x30u) == 1u)
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
            if (rd32(self + 0xa644u) != 0xffffffffu)
            {
                edx = in_edx;
                ebx = in_ebx & 0xffffff00u;
            }
            else
            {
                if ((int32_t)rd32(self + 0xa640u) >= 0)
                {
                    eax = rd32(self + 0xa640u);
                    wr32(sp0 - 0x214u, eax);
                    g->eax = eax;
                    g->ecx = self;
                    g->edx = in_edx;
                    g->esp = sp0 - 0x210u;
                    t3 = cow_cdecl(g, COW_IMG(0x10310934u), 1, eax);
                    t4 = g->ecx;
                    t5 = g->edx;
                    if ((int32_t)t3 >= 0)
                    {
                        eax = t3;
                        ecx = t4;
                        edx = t5;
                    }
                    else
                    {
                        eax = t3;
                        ecx = t4;
                        edx = t5;
                        wr32(self + 0xa640u, eax);
                    }
                    if ((int32_t)eax >= 100)
                    {
                        zf = eax == 0x64u;
                        if (!zf)
                        {
                            ebx = in_ebx & 0xffffff00u;
                        }
                        else
                        {
                            if (rd32(self + 0xa644u) != 0u)
                            {
                                wr32(sp0 - 0x214u, self + 0xa654u);
                                wr32(sp0 - 0x218u, self + 0xa754u);
                                ecx = self + 0xa654u;
                                edx = self + 0xa754u;
                                loc_214 = self + 0xa654u;
                            }
                            else
                            {
                                wr32(sp0 - 0x214u, COW_IMG(0x1037cb94u));
                                wr32(sp0 - 0x218u, self + 0xa754u);
                                loc_214 = COW_IMG(0x1037cb94u);
                            }
                            g->edx = edx;
                            g->esp = sp0 - 0x204u;
                            cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0xa754u, loc_214, rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
                            t7 = g->edx;
                            edx = t7;
                            ebx = (in_ebx & 0xffffff00u) | 1u;
                        }
                        wr32(self + 0xa640u, 0xffffffffu);
                    }
                    else
                    {
                        eax = COW_IMG(0x10376470u);
L_1023c5d9: ;
                        t6 = rd8(eax);
                        wr8(eax + self - COW_IMG(0x10376470u) + 0xa754u, (uint8_t)t6);
                        if ((uint8_t)t6 != 0u)
                        {
                            eax = eax + 1u;
                            ecx = (ecx & 0xffffff00u) | t6;
                            goto L_1023c5d9;
                        }
                        edx = self + 0xa754u - COW_IMG(0x10376470u);
                        ebx = in_ebx & 0xffffff00u;
                    }
                }
                else
                {
                    eax = rd32(self + 0xa640u);
                    wr32(sp0 - 0x214u, self + 0xa644u);
                    g->eax = eax;
                    g->edx = in_edx;
                    g->esp = sp0 - 0x210u;
                    t1 = cow_cdecl(g, COW_IMG(0x10310929u), 1, self + 0xa644u);
                    t2 = g->edx;
                    wr32(self + 0xa640u, t1);
                    edx = t2;
                    ebx = in_ebx & 0xffffff00u;
                }
            }
            if (rd32(self + 0xa5e4u) != rd32(self + 0xa5d8u))
            {
                eax = rd32(self + 0xa5d8u);
                ecx = rd32(self + 0xa5e4u);
                goto L_1023c63c;
            }
            eax = rd32(self + 0xa5d8u);
            ecx = rd32(self + 0xa5e4u);
            if (eax != 0u) goto L_1023c737;
            if ((uint8_t)ebx == 0u) goto L_1023c737;
L_1023c63c: ;
            wr32(sp0 - 0x204u, 0u);
            if (eax != 0u)
            {
                wr32(sp0 - 0x214u, eax - 1u);
                wr32(sp0 - 0x218u, COW_IMG(0x10388378u));
                wr32(sp0 - 0x21cu, sp0 - 0x100u);
                g->esp = sp0 - 0x208u;
                t9 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10388378u), eax - 1u, in_esi, in_ebp);
                wr32(sp0 - 0x214u, 0u);
                wr32(sp0 - 0x218u, 0u);
                wr32(sp0 - 0x21cu, sp0 - 0x200u);
                wr32(sp0 - 0x220u, sp0 - 0x100u);
                t10 = rd32(COW_IMG(0x10662dccu));
                g->esp = sp0 - 0x210u;
                t11 = cow_thiscall(g, COW_IMG(0x101c4800u), t10, 4, sp0 - 0x100u, sp0 - 0x200u, 0u, 0u);
                t12 = g->ecx;
                eax = t11;
                ecx = t12;
            }
            else
            {
                eax = self + 0xa754u;
L_1023c654: ;
                t8 = rd8(eax);
                wr8(eax + sp0 - self - 0xa954u, (uint8_t)t8);
                if ((uint8_t)t8 != 0u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t8;
                    goto L_1023c654;
                }
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t8;
            }
            if (rd8(sp0 - 0x200u) == 0x2du)
            {
                edx = 0u;
                goto L_1023c6b1;
            }
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x200u);
            edx = 0u;
L_1023c69d: ;
            if ((uint8_t)eax == 0u) goto L_1023c6b1;
            wr8(edx + self + 0xa5e8u, (uint8_t)eax);
            if (rd8(edx + sp0 - 0x1ffu) != 0x2du)
            {
                eax = (eax & 0xffffff00u) | rd8(edx + sp0 - 0x1ffu);
                edx = edx + 1u;
                goto L_1023c69d;
            }
            edx = edx + 1u;
L_1023c6b1: ;
            wr8(edx + self + 0xa5e8u, 0u);
            if (rd8(self + 0xa5e8u) == 0x2au) goto L_1023c6d8;
            wr32(sp0 - 0x214u, in_edi);
            esi = self + 0xa5e8u;
            edi = COW_IMG(0x1038836cu);
            ecx = 9u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (!zf)
            {
                eax = 0u;
                goto L_1023c6eb;
            }
L_1023c6d8: ;
            eax = COW_IMG(0x1038541cu);
L_1023c6e1: ;
            t13 = rd8(eax);
            wr8(eax + self - COW_IMG(0x1038541cu) + 0xa5e8u, (uint8_t)t13);
            if ((uint8_t)t13 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t13;
                goto L_1023c6e1;
            }
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t13;
L_1023c6eb: ;
            if (rd8(edx + sp0 - 0x200u) != 0x2du)
            {
                loc_204 = 0u;
            }
            else
            {
                t14 = edx + sp0 - 0x1ffu;
                wr32(sp0 - 0x214u, t14);
                g->eax = eax;
                g->ecx = t14;
                g->esp = sp0 - 0x210u;
                t15 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, t14);
                t16 = g->ecx;
                wr32(sp0 - 0x204u, t15);
                ecx = t16;
                loc_204 = t15;
            }
            wr32(sp0 - 0x214u, 0x40u);
            wr32(sp0 - 0x218u, 1u);
            wr32(sp0 - 0x21cu, loc_204);
            g->ecx = ecx;
            g->edx = loc_204;
            g->esp = sp0 - 0x214u;
            t17 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, loc_204, 1u);
            t18 = g->ecx;
            t19 = g->edx;
            wr32(sp0 - 0x218u, t17);
            wr32(sp0 - 0x21cu, self + 0xa600u);
            g->edx = t19;
            g->esp = sp0 - 0x210u;
            t20 = cow_call_regs(g, COW_IMG(0x10312090u), self + 0xa600u, g->ecx, g->edx, 1, 3, self + 0xa600u, t17, 0x40u);
            t21 = g->edx;
            t22 = rd32(self + 0xa5d8u);
            wr8(self + 0xa63fu, 0u);
            wr32(self + 0xa5e4u, t22);
            eax = t20;
            edx = t21;
        }
    }
L_1023c737: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023c560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023c560(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
