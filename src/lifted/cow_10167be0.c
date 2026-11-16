/* f_0x10167be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10167be0(Guest* g)
{
    double d14;
    double d20;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 0xcu);
    if (rd32(arg1 + 0xcu) != 0u)
    {
        ecx = t1;
        loc_8 = t1;
        t2 = rd32(arg1 + 8u);
        if ((int32_t)rd32(ecx) <= 0)
        {
            ebx = t2;
            loc_c = t2;
            goto L_10167cef;
        }
        edx = rd32(arg1 + 8u) + rd32(ecx + 4u);
        ebx = t2;
        loc_c = t2;
        loc_1c = 0u;
L_10167c1c: ;
        t3 = ebx + rd32(edx + 4u);
        t4 = rd32(edx + 8u);
        t5 = rd32(edx);
        wr32(edx + 4u, t3);
        wr32(edx + 8u, ebx + t4);
        t6 = rd16(edx + 0xcu);
        wr32(edx, ebx + t5);
        if ((int16_t)t6 > 0)
        {
            eax = ebx + t4;
            ebp = 0u;
            esi = eax + 6u;
L_10167c43: ;
            if (rd32((rd16(esi) & 0x7fffu) * 0xcu + rd32(edx + 4u)) != 0xffc00000u)
            {
                ecx = (rd16(esi) & 0x7fffu) * 0xcu + rd32(edx + 4u);
            }
            else
            {
                ecx = (rd16(esi) & 0x7fffu) * 0xcu + rd32(edx + 4u);
                wr32(ecx, 0u);
            }
            if (rd32(ecx + 4u) == 0xffc00000u)
            {
                wr32(ecx + 4u, 0u);
            }
            if (rd32(ecx + 8u) == 0xffc00000u)
            {
                wr32(ecx + 8u, 0u);
            }
            if ((double)rdf32(ecx) == (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (uint16_t)cow_fsw(g, (double)rdf32(ecx), (double)rdf32(COW_IMG(0x103295d8u)), 0u) | 0xffc00000u;
                d7 = (double)rdf32(ecx + 4u);
                if (d7 == (double)rdf32(COW_IMG(0x103295d8u)))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
                    d8 = (double)rdf32(ecx + 8u);
                    if (d8 == (double)rdf32(COW_IMG(0x103295d8u)))
                    {
                        wr32(ecx, 0u);
                        wr32(ecx + 4u, 0x358637bdu);
                        wr32(ecx + 8u, 0u);
                    }
                }
            }
            if ((int32_t)(ebp + 1u) < (int16_t)rd16(edx + 0xcu))
            {
                eax = (uint32_t)(int16_t)rd16(edx + 0xcu);
                ebp = ebp + 1u;
                esi = esi + 8u;
                goto L_10167c43;
            }
            ecx = loc_8;
        }
        if ((int32_t)(loc_1c + 1u) < (int32_t)rd32(ecx))
        {
            edx = rd32(edx + 8u) + (uint32_t)(int16_t)rd16(edx + 0xcu) * 8u;
            loc_1c = loc_1c + 1u;
            goto L_10167c1c;
        }
L_10167cef: ;
        if ((int32_t)rd32(ecx + 8u) > 0)
        {
            ebp = ebx + rd32(ecx + 0xcu);
            loc_1c = 0u;
            loc_10 = 0u;
L_10167d13: ;
            t9 = rd32(ebp) & 0x7ffu;
            t10 = rd32(ebp) | 0x1000u;
            wr32(ebp, t10);
            t11 = ((uint32_t)((int32_t)t10 >> 0x17u) & 0x1ffu) << 2u;
            t12 = rd32(arg1 + 0x1cu);
            t13 = rd32(arg1 + 0x14u);
            d14 = (double)rdf32(self + 0x44u);
            fpush(g, d14);
            g->esp = sp0 - 0x2cu;
            t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)((int32_t)(t12 * t13 - (uint32_t)((int32_t)(t12 * t13) >> 0x1fu)) >> 1u), g->ecx, g->edx, 1, 0);
            t16 = t11 + t15 + ((uint32_t)((int32_t)(t11 + t15 - (uint32_t)((int32_t)(t12 * t13 - (uint32_t)((int32_t)(t12 * t13) >> 0x1fu)) >> 1u)) >> 0x1fu) & 3u) - (uint32_t)((int32_t)(t12 * t13 - (uint32_t)((int32_t)(t12 * t13) >> 0x1fu)) >> 1u);
            t17 = rd32(arg1 + 0x18u);
            t18 = rd32(arg1 + 0x10u);
            t19 = rd32(self + 0x48u);
            d20 = (double)rdf32(self + 0x40u);
            fpush(g, d20);
            t21 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)((int32_t)(t17 * t18 - (uint32_t)((int32_t)(t17 * t18) >> 0x1fu)) >> 1u), g->ecx, g->edx, 1, 0);
            t22 = (uint32_t)((int32_t)(t21 + ((uint32_t)((int32_t)t10 >> 0xeu) & 0x1ffu) * 4u + ((uint32_t)((int32_t)(t21 + ((uint32_t)((int32_t)t10 >> 0xeu) & 0x1ffu) * 4u - (uint32_t)((int32_t)(t17 * t18 - (uint32_t)((int32_t)(t17 * t18) >> 0x1fu)) >> 1u)) >> 0x1fu) & 3u) - (uint32_t)((int32_t)(t17 * t18 - (uint32_t)((int32_t)(t17 * t18) >> 0x1fu)) >> 1u)) >> 2u);
            if (rd32(t22 * 4u + rd32(self + 0x60u) + (uint32_t)((int32_t)t16 >> 2u) * t19 * 4u) == 0u)
            {
                edx = (uint32_t)((int32_t)(t21 + ((uint32_t)((int32_t)t10 >> 0xeu) & 0x1ffu) * 4u - (uint32_t)((int32_t)(t17 * t18 - (uint32_t)((int32_t)(t17 * t18) >> 0x1fu)) >> 1u)) >> 0x1fu) & 3u;
                edi = t22 * 4u + rd32(self + 0x60u) + (uint32_t)((int32_t)t16 >> 2u) * t19 * 4u;
                loc_18 = ebp + 4u;
                loc_4 = t9;
                goto L_10167dcc;
            }
            eax = rd32(t22 * 4u + rd32(self + 0x60u) + (uint32_t)((int32_t)t16 >> 2u) * t19 * 4u);
            loc_18 = ebp + 4u;
            loc_4 = t9;
L_10167db4: ;
            if (rd32(eax + (rd32(eax) & 0x7ffu) * 8u + 4u) != 0u)
            {
                eax = rd32(eax + (rd32(eax) & 0x7ffu) * 8u + 4u);
                goto L_10167db4;
            }
            ecx = eax + (rd32(eax) & 0x7ffu) * 8u + 4u;
            edx = rd32(eax) & 0x7ffu;
            wr32(ecx, ebp);
L_10167dce: ;
            if ((int32_t)loc_4 > 0)
            {
                eax = loc_4;
                esi = eax;
L_10167ddc: ;
                if (rd32(loc_18) == 0u)
                {
                    ecx = loc_18;
                    loc_10 = 1u;
                }
                else
                {
                    eax = rd32(loc_18);
                    ecx = loc_18;
                    wr32(ecx, eax + loc_c);
                    edx = loc_c;
                }
                if (rd32(ecx + 4u) == 0u)
                {
                    loc_10 = 1u;
                }
                else
                {
                    eax = rd32(ecx + 4u);
                    wr32(ecx + 4u, eax + loc_c);
                    edx = loc_c;
                }
                t23 = rd32(ecx);
                wr32(t23 + 0xa8u, arg3);
                if (rd8(t23 + 0xacu) == 0u)
                {
                    eax = t23;
                }
                else
                {
                    eax = t23;
                    ecx = (arg3 & 0xffffff00u) | rd8(t23 + 0xacu);
                    if ((rd32(eax + 0xa4u) & 0x10000000u) != 0u)
                    {
                        edx = rd32(eax + 0xa4u);
                    }
                    else
                    {
                        edx = rd32(eax + 0xa4u);
                        wr8(eax + 0xacu, (uint8_t)(rd8(arg2 + (uint8_t)ecx - 1u) + 1u));
                        wr32(eax + 0xa4u, edx | 0x10000000u);
                        edx = edx | 0x10000000u;
                    }
                }
                if (rd8(eax + 0xadu) == 0u)
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + 0xadu);
                }
                else
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + 0xadu);
                    if ((rd32(eax + 0xa4u) & 0x20000000u) == 0u)
                    {
                        ecx = rd32(eax + 0xa4u);
                        t24 = rd8(arg2 + (uint8_t)edx - 1u);
                        wr8(eax + 0xadu, (uint8_t)(t24 + 1u));
                        wr32(eax + 0xa4u, ecx | 0x20000000u);
                        edx = (t24 & 0xffffff00u) | (uint8_t)(t24 + 1u);
                    }
                }
                if (rd8(eax + 0xaeu) == 0u)
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + 0xaeu);
                }
                else
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + 0xaeu);
                    if ((rd32(eax + 0xa4u) & 0x40000000u) == 0u)
                    {
                        ecx = rd32(eax + 0xa4u);
                        t25 = rd8(arg2 + (uint8_t)edx - 1u);
                        wr8(eax + 0xaeu, (uint8_t)(t25 + 1u));
                        wr32(eax + 0xa4u, ecx | 0x40000000u);
                        edx = (t25 & 0xffffff00u) | (uint8_t)(t25 + 1u);
                    }
                }
                if (rd8(eax + 0xafu) == 0u)
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + 0xafu);
                }
                else
                {
                    edx = (edx & 0xffffff00u) | rd8(eax + 0xafu);
                    if ((int32_t)rd32(eax + 0xa4u) >= 0)
                    {
                        ecx = rd32(eax + 0xa4u);
                        t26 = rd8(arg2 + (uint8_t)edx - 1u);
                        wr8(eax + 0xafu, (uint8_t)(t26 + 1u));
                        wr32(eax + 0xa4u, ecx | 0x80000000u);
                        edx = (t26 & 0xffffff00u) | (uint8_t)(t26 + 1u);
                    }
                }
                if (esi != 1u)
                {
                    esi = esi - 1u;
                    loc_18 = loc_18 + 8u;
                    goto L_10167ddc;
                }
                loc_18 = loc_18 + 8u;
            }
            if ((int32_t)(loc_1c + 1u) < (int32_t)rd32(loc_8 + 8u))
            {
                ebp = loc_18 + 4u;
                loc_1c = loc_1c + 1u;
                goto L_10167d0f;
            }
            ecx = loc_8;
            edx = rd32(loc_8 + 8u);
            if (loc_10 != 0u)
            {
                eax = loc_10;
                g->esp = sp0 - 0x30u;
                cow_stdcall(g, COW_IMG(0x10017d20u), 0);
            }
        }
    }
    return;
L_10167d0f: ;
    goto L_10167d13;
L_10167dcc: ;
    wr32(edi, ebp);
    goto L_10167dce;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10167be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10167be0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
