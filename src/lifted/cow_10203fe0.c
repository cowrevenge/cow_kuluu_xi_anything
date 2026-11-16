/* f_0x10203fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10203fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q14;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    wr32(sp0 - 0x24u, self);
    g->edx = self;
    g->esp = sp0 - 0x34u;
    t1 = cow_stdcall(g, COW_IMG(0x10202c20u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        wr32(sp0 - 0x10u, rd32(COW_IMG(0x106643acu)));
        wr32(sp0 - 0x18u, edx);
        t3 = rd32(COW_IMG(0x106643fcu));
        t4 = rd32(COW_IMG(0x106643b0u));
        wr8(sp0 - 0x14u, 0u);
        wr8(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, t4);
        wr8(sp0 - 4u, 0u);
        wr8(sp0 - 0x25u, 0u);
        if (t3 == 0u)
        {
            eax = t3;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t5 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t6 = g->edx;
            if ((uint8_t)t5 == 0u)
            {
                edx = t6;
                goto L_10204098;
            }
            edx = t6;
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x1cu, 0u);
            if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
            }
            else
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
                t7 = rd32(eax + 4u);
                wr32(sp0 - 0x20u, t7);
                t8 = rd32(eax + 8u);
                wr32(sp0 - 0x1cu, t8);
                eax = t8;
                edx = t7;
            }
            edi = 0u;
L_1020405f: ;
            if (rd32(edi * 8u + sp0 - 0x18u) == 0u) goto L_10204092;
            esi = rd32(edi * 8u + sp0 - 0x18u);
            if (rd32(esi + 8u) == 0u) goto L_10204092;
            ecx = rd32(esi + 8u);
            wr32(sp0 - 0x38u, sp0 - 0x20u);
            g->eax = eax;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x34u;
            t9 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 0x20u);
            t10 = g->edx;
            if ((uint8_t)t9 == 0u)
            {
                eax = t9;
                edx = t10;
                goto L_10204092;
            }
            edx = t10;
            t11 = rd32(esi + 8u);
            wr32(sp0 - 0x38u, t11);
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t12 = cow_call_regs(g, COW_IMG(0x1015edd0u), t11, COW_IMG(0x10621838u), g->edx, 0, 1, t11);
            t13 = g->edx;
            if ((uint8_t)t12 == 0u)
            {
                edx = t13;
                goto L_10204116;
            }
            eax = t12;
            edx = t13;
L_10204092: ;
            if ((int32_t)(edi + 1u) < 3)
            {
                edi = edi + 1u;
                goto L_1020405f;
            }
L_10204098: ;
            q14 = (int64_t)cow_muls(0x2aaaaaabu, rd32(COW_IMG(0x106643e0u)));
            t15 = cow_qhi(q14) + (cow_qhi(q14) >> 0x1fu);
            if (rd32(rd32(sp0 + t15 * 8u - 0x18u) + 8u) == 0u) goto L_10204130;
            eax = rd32(rd32(sp0 + t15 * 8u - 0x18u) + 8u);
            edx = t15;
            esi = t15;
            wr32(sp0 - 0x38u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t16 = cow_call_regs(g, COW_IMG(0x1015edd0u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, eax);
            t17 = g->edx;
            if ((uint8_t)t16 != 0u) goto L_10204130;
            edx = t17;
            wr8(esi * 8u + sp0 - 0x14u, 1u);
L_102040cd: ;
            edi = 0u;
L_102040cf: ;
            if (rd32(edi * 8u + sp0 - 0x18u) != 0u)
            {
                eax = rd32(edi * 8u + sp0 - 0x18u);
                if (rd32(eax + 8u) != 0u)
                {
                    esi = rd32(eax + 8u);
                    if (rd8(edi * 8u + sp0 - 0x14u) == 0u)
                    {
                        t25 = (rd32(esi + 0x34u) & 0xffffff00u) | (uint8_t)(rd32(esi + 0x34u) | 1u);
                        wr32(esi + 0x34u, t25);
                    }
                    else
                    {
                        wr32(sp0 - 0x38u, 0u);
                        wr32(sp0 - 0x3cu, esi);
                        g->eax = eax;
                        g->esp = sp0 - 0x34u;
                        t18 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, esi, 0u);
                        t19 = g->edx;
                        t20 = rd32(esi + 0x34u) & 0xfffffffeu;
                        t21 = rd8(sp0 - 0x25u);
                        wr32(esi + 0x34u, t20);
                        if ((uint8_t)t21 == 0u)
                        {
                            edx = t19;
                        }
                        else
                        {
                            t22 = edi * 6u + 1u;
                            wr32(sp0 - 0x38u, t22);
                            wr32(sp0 - 0x3cu, 9u);
                            g->edx = rd32(rd32(sp0 - 0x24u));
                            t23 = rd32(rd32(sp0 - 0x24u));
                            g->esp = sp0 - 0x34u;
                            cow_thiscall(g, rd32(t23 + 0x18u), rd32(sp0 - 0x24u), 2, 9u, t22);
                            t24 = g->edx;
                            edx = t24;
                        }
                    }
                }
            }
            if ((int32_t)(edi + 1u) < 3)
            {
                edi = edi + 1u;
                goto L_102040cf;
            }
        }
    }
L_10204130: ;
    return;
L_10204116: ;
    wr8(edi * 8u + sp0 - 0x14u, 1u);
    wr8(sp0 - 0x25u, 1u);
    goto L_102040cd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10203fe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
