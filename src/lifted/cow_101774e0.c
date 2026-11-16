/* f_0x101774e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101774e0(Guest* g)
{
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    double loc_30_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(COW_IMG(0x1065ca20u), 0u);
    wr32(sp0 - 0x30u, 0x49f42400u);
    if (rd32(self + 0x15cu) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x3cu, in_edi);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
        }
        else
        {
            eax = t1;
            g->eax = eax;
            g->esp = sp0 - 0x3cu;
            t3 = cow_thiscall(g, rd32(rd32(eax) + 0x1bcu), eax, 0);
            wr32(sp0 - 0x2cu, rd32(t3));
            t4 = rd32(t3 + 8u);
            wr32(sp0 - 0x24u, t4);
            t5 = rd32(t3 + 4u);
            wr32(sp0 - 0x28u, t5);
            if ((int32_t)rd32(self + 0x84u) <= 0)
            {
                edx = t5;
            }
            else
            {
                eax = rd32(self + 0x88u);
                edx = t5;
                loc_2c = rd32(t3);
                loc_24 = t4;
                loc_28 = t5;
                ecx = eax + 0x18u;
                edi = 0u;
L_1017754d: ;
                if (rd32(ecx + 0xa8u) != 0u)
                {
                    if (rd32(ecx) == rd32(COW_IMG(0x1065ca24u)))
                    {
                        edx = rd32(ecx);
                        x2 = fr(g, (double)rdf32(ecx + 0xcu) - cow_bits2f(loc_24));
                        x1 = fr(g, (double)rdf32(ecx + 8u) - cow_bits2f(loc_28));
                        x0 = fr(g, (double)rdf32(ecx + 4u) - cow_bits2f(loc_2c));
                        goto L_101775c1;
                    }
                    eax = rd32(COW_IMG(0x1065ca24u));
                    edx = rd32(ecx);
                    x2 = fr(g, (double)rdf32(ecx + 0xcu) - cow_bits2f(loc_24));
                    x1 = fr(g, (double)rdf32(ecx + 8u) - cow_bits2f(loc_28));
                    x0 = fr(g, (double)rdf32(ecx + 4u) - cow_bits2f(loc_2c));
                    d6 = fr(g, fr(g, fr(g, x2 * x2) + fr(g, x1 * x1)) + fr(g, x0 * x0));
                    if ((cow_fsw(g, loc_30_f, d6, 1u) & 0x4100u) != 0u)
                    {
                        x0 = fr(g, fr(g, fr(g, x2 * x2) + fr(g, x1 * x1)) + fr(g, x0 * x0));
                        goto L_101775c5;
                    }
                    x0 = fr(g, fr(g, fr(g, x2 * x2) + fr(g, x1 * x1)) + fr(g, x0 * x0));
                    wr32(COW_IMG(0x1065ca20u), edx);
                    wrf32(sp0 - 0x30u, (float)(double)(float)x0);
                    t7 = rd32(ecx + 4u);
                    wr32(self + 0x38d68u, t7);
                    t8 = rd32(ecx + 8u);
                    wr32(self + 0x38d6cu, t8);
                    t9 = rd32(ecx + 0xcu);
                    wr32(self + 0x38d70u, t9);
                    edx = t9;
                    loc_30_f = (double)(float)x0;
                }
L_101775c7: ;
                if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x84u))
                {
                    ecx = ecx + 0x16cu;
                    edi = edi + 1u;
                    goto L_1017754d;
                }
            }
        }
        if (rd32(COW_IMG(0x1065ca20u)) == 0u)
        {
            eax = rd32(COW_IMG(0x1065ca20u));
            edi = rd32(sp0 - 0x3cu);
        }
        else
        {
            eax = rd32(COW_IMG(0x1065ca20u));
            edi = rd32(sp0 - 0x3cu);
            wr32(COW_IMG(0x1065ca24u), eax);
            t10 = rd32(self + 0x38d68u);
            wr32(self + 0x38d5cu, t10);
            t11 = rd32(self + 0x38d6cu);
            wr32(self + 0x38d60u, t11);
            t12 = rd32(self + 0x38d70u);
            wr32(self + 0x38d64u, t12);
            eax = 0xfu;
            ecx = rd32(COW_IMG(0x1065ca24u));
            edx = (t11 & 0xffffff00u) | 0x20u;
L_10177614: ;
            if (rd8(eax + ecx + 8u) > (uint8_t)edx) goto L_1017761d;
            if ((int32_t)(eax - 1u) >= 0)
            {
                eax = eax - 1u;
                goto L_10177614;
            }
            eax = eax - 1u;
L_1017761d: ;
            wr8(eax + sp0 - 0x1fu, 0u);
            wr32(self + 0x38d74u, 0u);
            wr32(self + 0x38d78u, 0u);
            wr32(self + 0x38d7cu, 0u);
            wr32(self + 0x38d80u, 0x3f800000u);
            wr32(self + 0x38d84u, 0x3f800000u);
            wr32(self + 0x38d88u, 0x3f800000u);
            eax = 0x3f800000u;
        }
    }
    g->edi = edi;
    g->edx = edx;
    return eax;
L_101775c1: ;
L_101775c5: ;
    goto L_101775c7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101774e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101774e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
