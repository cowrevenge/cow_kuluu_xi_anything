/* f_0x1008c480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1008c480(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(self + 0x128u) < 0)
    {
        eax = rd32(self + 0x128u);
        edx = in_edx;
        edi = rd32(self + 0xa0u);
    }
    else
    {
        eax = rd32(self + 0x128u);
        edi = rd32(self + 0xa0u);
        if (rd8(self + 0xeeu) == 3u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
            edx = in_edx;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
            if ((uint8_t)eax == 4u)
            {
                edx = in_edx;
            }
            else
            {
                if ((uint8_t)eax == 5u)
                {
                    edx = in_edx;
                }
                else
                {
                    g->edx = in_edx;
                    g->esp = sp0 - 0xcu;
                    t1 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, edi, g->edx, 1, 0);
                    t2 = g->edx;
                    if ((uint8_t)t1 == 0u)
                    {
                        eax = t1;
                        edx = t2;
                    }
                    else
                    {
                        edx = t2;
                        g->edx = edx;
                        g->esp = sp0 - 0xcu;
                        t3 = cow_thiscall(g, COW_IMG(0x100cf100u), edi, 1, 0u);
                        t4 = g->edx;
                        wr32(self + 0x128u, rd32(self + 0x128u) | 0x80000000u);
                        eax = t3;
                        edx = t4;
                    }
                }
            }
        }
    }
    if ((rd32(self + 0x128u) & 0x20000000u) != 0u)
    {
        loc_4 = self;
        goto L_1008c65c;
    }
    if (rd8(self + 0xeeu) == 3u)
    {
        loc_4 = self;
        goto L_1008c604;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax == 4u)
    {
        loc_4 = self;
        goto L_1008c604;
    }
    if ((uint8_t)eax == 5u)
    {
        loc_4 = self;
        goto L_1008c604;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, edi, g->edx, 1, 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        loc_4 = self;
        goto L_1008c65c;
    }
    edx = t6;
    if (rd32(self + 0x170u) - 6u > 0x4du) goto L_1008c598;
    eax = rd32(self + 0x170u) - 6u;
    t7 = rd32(COW_IMG(0x1008c660u) + rd8(COW_IMG(0x1008c670u) + eax) * 4u);
    switch (t7 - RD)
    {
    case 0x1008c523u: goto L_1008c523;
    case 0x1008c551u: goto L_1008c551;
    case 0x1008c589u: goto L_1008c589;
    case 0x1008c598u: goto L_1008c598;
    default: rt_fatal(g, COW_IMG(0x1008c51cu), "switch");
    }
    return;
L_1008c523: ;
    if (rd32(self + 0xa4u) == 0u)
    {
        loc_4 = self;
        goto L_1008c65c;
    }
    ecx = rd32(self + 0xa4u);
    g->esp = sp0 - 0xcu;
    t15 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, ecx, g->edx, 1, 0);
    if ((uint8_t)t15 == 0u)
    {
        loc_4 = self;
        goto L_1008c65c;
    }
    t16 = rd32(self + 0x170u);
    g->edx = t16;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1008c6c0u), self, 1, t16);
    t17 = g->edx;
    edx = t17;
    loc_4 = self;
L_1008c604: ;
    t29 = rd32(self + 0x128u) | 0x20000000u;
    wr32(self + 0x128u, t29);
    if ((t29 & 0x40000000u) != 0u)
    {
        eax = t29;
        if (rd8(self + 0xeeu) == 3u) goto L_1008c652;
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
        if ((uint8_t)eax == 4u) goto L_1008c652;
        if ((uint8_t)eax == 5u) goto L_1008c652;
        g->esp = sp0 - 0xcu;
        t30 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, edi, g->edx, 1, 0);
        if ((uint8_t)t30 == 0u) goto L_1008c65c;
        eax = t30;
        t31 = rd32(self + 0xa0u);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(t31) + 0x298u), t31, 3, 0x306e6568u, t31, 0u);
L_1008c652: ;
        wr32(self + 0x128u, rd32(self + 0x128u) & 0xbfffffffu);
    }
L_1008c65c: ;
    return;
L_1008c551: ;
    t9 = rd32(self + 0xa0u);
    g->eax = rd32(t9);
    t10 = rd32(t9);
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, rd32(t10 + 0x298u), t9, 3, 0x74696e69u, t9, 0u);
    t12 = rd32(self + 0xa0u);
    g->edx = rd32(t12);
    t13 = rd32(t12);
    cow_thiscall(g, rd32(t13 + 0x298u), t12, 3, 0x65746e69u, t12, 0u);
    t14 = g->edx;
    wr32(edi + 0x7d8u, 0x20202020u);
    edx = t14;
    loc_4 = self;
    goto L_1008c604;
L_1008c589: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100d60c0u), rd32(self + 0xa0u), 1, 0u);
    t8 = g->edx;
    edx = t8;
    loc_4 = self;
    goto L_1008c604;
L_1008c598: ;
    g->eax = rd32(rd32(self + 0xa0u));
    t18 = rd32(rd32(self + 0xa0u));
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, rd32(t18 + 0xa4u), rd32(self + 0xa0u), 0);
    t20 = (rd32(self + 0x124u) >> 1u & 0xffffff00u) | (rd32(self + 0x124u) >> 1u & 7u);
    g->eax = t20;
    t21 = cow_thiscall(g, rd32(rd32(rd32(self + 0xa0u)) + 0xa8u), rd32(self + 0xa0u), 1, t20);
    t22 = rd32(self + 0xa0u);
    g->edx = rd32(t22);
    t23 = rd32(t22);
    cow_thiscall(g, rd32(t23 + 0x298u), t22, 3, 0x74696e69u, t22, 0u);
    t24 = g->edx;
    t25 = rd32(self + 0xa0u);
    cow_thiscall(g, COW_IMG(0x100cf060u), edi, 1, t25);
    wr32(edi + 0x7d8u, 0x20202020u);
    t26 = (self & 0xffffff00u) | (uint8_t)t19;
    g->edx = rd32(rd32(self + 0xa0u));
    t27 = rd32(rd32(self + 0xa0u));
    cow_thiscall(g, rd32(t27 + 0xa8u), rd32(self + 0xa0u), 1, t26);
    t28 = g->edx;
    edx = t28;
    loc_4 = (self & 0xffffff00u) | (uint8_t)t19;
    goto L_1008c604;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008c480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1008c480(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
