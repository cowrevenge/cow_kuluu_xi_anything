/* f_0x101679a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101679a0(Guest* g)
{
    double d16;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    t1 = rd32(rd32(sp0 + 4u) + 0xcu);
    if (rd32(rd32(sp0 + 4u) + 0xcu) == 0u)
    {
        eax = in_eax;
    }
    else
    {
        ecx = t1;
        ebx = rd32(sp0 + 4u);
        loc_4 = t1;
        t2 = rd32(ebx + 8u) + rd32(ecx + 0xcu);
        t3 = rd32(ecx + 8u);
        wr32(sp0 + 4u, t2);
        if ((int32_t)t3 <= 0)
        {
            eax = t2;
        }
        else
        {
            eax = t2;
            loc_c = 0u;
L_101679e1: ;
            t4 = rd32(eax) & 0x7ffu;
            t5 = ((uint32_t)((int32_t)rd32(eax) >> 0x17u) & 0x1ffu) << 2u;
            g->ecx = t5;
            t6 = rd32(ebx + 0x1cu);
            t7 = rd32(ebx + 0x14u);
            t8 = rd32(eax);
            d9 = (double)rdf32(self + 0x44u);
            fpush(g, d9);
            g->esp = sp0 - 0x1cu;
            t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)((int32_t)(t6 * t7 - (uint32_t)((int32_t)(t6 * t7) >> 0x1fu)) >> 1u), g->ecx, g->edx, 1, 0);
            t11 = g->ecx;
            t12 = t10 + t5 + ((uint32_t)((int32_t)(t10 + t5 - (uint32_t)((int32_t)(t6 * t7 - (uint32_t)((int32_t)(t6 * t7) >> 0x1fu)) >> 1u)) >> 0x1fu) & 3u) - (uint32_t)((int32_t)(t6 * t7 - (uint32_t)((int32_t)(t6 * t7) >> 0x1fu)) >> 1u);
            t13 = rd32(ebx + 0x18u);
            t14 = rd32(ebx + 0x10u);
            t15 = rd32(self + 0x48u);
            d16 = (double)rdf32(self + 0x40u);
            fpush(g, d16);
            t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)((int32_t)(t13 * t14 - (uint32_t)((int32_t)(t13 * t14) >> 0x1fu)) >> 1u), g->ecx, g->edx, 1, 0);
            t18 = (uint32_t)((int32_t)(t17 + ((uint32_t)((int32_t)t8 >> 0xeu) & 0x1ffu) * 4u + ((uint32_t)((int32_t)(t17 + ((uint32_t)((int32_t)t8 >> 0xeu) & 0x1ffu) * 4u - (uint32_t)((int32_t)(t13 * t14 - (uint32_t)((int32_t)(t13 * t14) >> 0x1fu)) >> 1u)) >> 0x1fu) & 3u) - (uint32_t)((int32_t)(t13 * t14 - (uint32_t)((int32_t)(t13 * t14) >> 0x1fu)) >> 1u)) >> 2u);
            if (rd32(t18 * 4u + rd32(self + 0x60u) + (uint32_t)((int32_t)t12 >> 2u) * t15 * 4u) == 0u)
            {
                loc_8 = t4;
            }
            else
            {
                eax = rd32(t18 * 4u + rd32(self + 0x60u) + (uint32_t)((int32_t)t12 >> 2u) * t15 * 4u);
                edi = t18 * 4u + rd32(self + 0x60u) + (uint32_t)((int32_t)t12 >> 2u) * t15 * 4u;
                loc_8 = t4;
                if ((rd32(eax) >> 8u & 0x10u) == 0u)
                {
                    esi = 0u;
L_10167a72: ;
                    if (rd32(eax + (rd32(eax) & 0x7ffu) * 8u + 4u) == 0u) goto L_10167a8c;
                    ecx = eax + (rd32(eax) & 0x7ffu) * 8u + 4u;
                    edx = rd32(eax + (rd32(eax) & 0x7ffu) * 8u + 4u);
                    eax = edx;
                    esi = ecx;
                    goto L_10167a72;
                }
                else
                {
                    wr32(edi, 0u);
                }
            }
L_10167a9d: ;
            t19 = loc_8 * 8u + rd32(sp0 + 4u) + 8u;
            wr32(sp0 + 4u, t19);
            if ((int32_t)(loc_c + 1u) < (int32_t)rd32(loc_4 + 8u))
            {
                loc_c = loc_c + 1u;
                goto L_101679dd;
            }
            eax = loc_c + 1u;
        }
    }
    return eax;
L_101679dd: ;
    eax = rd32(sp0 + 4u);
    goto L_101679e1;
L_10167a8c: ;
    if ((rd32(eax) >> 8u & 0x10u) != 0u)
    {
        if (esi != 0u)
        {
            wr32(esi, 0u);
        }
    }
    goto L_10167a9d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101679a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101679a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
