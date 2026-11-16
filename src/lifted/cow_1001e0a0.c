/* f_0x1001e0a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1001e0a0(Guest* g)
{
    double d14;
    double d15;
    double d19;
    double d23;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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

    t1 = (uint32_t)(int16_t)rd16(self + 0x34u);
    t2 = (uint32_t)(int16_t)rd16(self + 0x36u);
    t3 = rd32(rd32(sp0 + 4u) + 0x20u);
    t4 = rd32(rd32(sp0 + 8u) + 4u);
    t5 = t2 * t1 - 1u;
    if (t2 == 0u)
    {
        edx = t5;
    }
    else
    {
        eax = t1;
        edx = t5;
        ebp = t3;
        edi = t2;
        loc_14 = t1;
        loc_c = t3;
        loc_44 = t4;
        loc_10 = t5;
        ecx = eax - ebp;
        ebx = ebp;
        esi = -eax;
        loc_34 = ebp;
        loc_38 = -eax;
        loc_2c = eax - ebp;
        loc_30 = edi;
L_1001e0fb: ;
        if (eax != 0u)
        {
            ecx = ebx + ecx & edx;
            edi = esi & edx;
            edx = ebp + ecx;
            ebx = ebp + edi;
            esi = 0xffffffffu;
            loc_28 = ebp + edi;
            loc_24 = ebp + ecx;
            loc_3c = ebp + ecx;
            ebp = ebp + ecx;
            loc_40 = 0xffffffffu;
            loc_20 = edi - ecx;
L_1001e135: ;
            t6 = rd8(ebp + (esi & eax - 1u));
            t7 = rd8(ebp + (esi + 2u & eax - 1u));
            t8 = rd8(ebx + (esi & eax - 1u));
            wr32(sp0 + 8u, t8);
            t9 = rd8(ebx + (esi + 2u & eax - 1u));
            wr32(sp0 + 4u, t9);
            t10 = rd8(edx + loc_20) * 2u - rd8(edx) * 2u - t7 - t6 + rd32(sp0 + 4u) + rd32(sp0 + 8u);
            t11 = rd8(loc_34 + (esi + 2u & eax - 1u));
            t12 = rd8(loc_34 + (esi & eax - 1u)) * 2u - t11 * 2u;
            t13 = t12 + rd32(sp0 + 8u) - t7 - rd32(sp0 + 4u) + t6;
            wr32(sp0 + 4u, t13);
            if (t10 * t10 + t13 * t13 + 0xfe01u == 0u)
            {
                ebx = loc_34;
                ecx = 0x80u;
                esi = 0u;
                edi = 0u;
            }
            else
            {
                eax = t10 * t10 + t13 * t13 + 0xfe01u;
                ecx = t10 * t10;
                edx = t13 * t13;
                ebx = loc_34;
                loc_18 = t10;
                g->ecx = ecx;
                g->edx = edx;
                d14 = fr(g, (double)(int32_t)loc_18 * fr(g, (double)rdf32(COW_IMG(0x1032a34cu)) / fr(g, sqrt((double)(int64_t)cow_i64(eax, 0u)))));
                d15 = fr(g, (double)rdf32(COW_IMG(0x1032a34cu)) / fr(g, sqrt((double)(int64_t)cow_i64(eax, 0u))));
                fpush(g, d14);
                g->esp = sp0 - 0x54u;
                t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t17 = g->ecx;
                t18 = g->edx;
                g->ecx = t17;
                g->edx = t18;
                d19 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * d15);
                fpush(g, d19);
                t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
                t21 = g->ecx;
                t22 = g->edx;
                d23 = fr(g, d15 * (double)rdf32(COW_IMG(0x1032a348u)));
                fpush(g, d23);
                t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t20, g->ecx, g->edx, 1, 0);
                ecx = 0x80u - t24;
                esi = t16 + 0x80u;
                edi = t20 + 0x80u;
            }
            t25 = (esi << 8u | edi) << 8u | ecx;
            wr32(loc_44, t25);
            if (loc_40 + 2u < loc_14)
            {
                eax = loc_14;
                edx = loc_3c + 1u;
                esi = loc_40 + 1u;
                loc_44 = loc_44 + 4u;
                loc_3c = loc_3c + 1u;
                loc_40 = loc_40 + 1u;
                goto L_1001e12d;
            }
            eax = loc_14;
            loc_44 = loc_44 + 4u;
            edx = loc_10;
            ebp = loc_c;
            esi = loc_38;
        }
        if (loc_30 != 1u)
        {
            loc_34 = eax + ebx;
            ebx = eax + ebx;
            loc_38 = eax + esi;
            esi = eax + esi;
            loc_30 = loc_30 - 1u;
            goto L_1001e0f7;
        }
    }
    g->edx = edx;
    return;
L_1001e0f7: ;
    ecx = loc_2c;
    goto L_1001e0fb;
L_1001e12d: ;
    ebx = loc_28;
    ebp = loc_24;
    goto L_1001e135;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001e0a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001e0a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
