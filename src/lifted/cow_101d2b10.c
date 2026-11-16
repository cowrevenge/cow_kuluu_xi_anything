/* f_0x101d2b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d2b10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_2c;
    uint32_t loc_34;
    uint32_t loc_38;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 9u)
    {
        loc_18 = rd32(COW_IMG(0x10666e30u));
    }
    else
    {
        loc_18 = rd32(COW_IMG(0x10666e6cu));
    }
    t1 = rd8(loc_18 + rd32(loc_18 + 0xcu) + 0x18u);
    if ((int32_t)rd8(loc_18 + rd32(loc_18 + 0xcu) + 0x18u) > 0)
    {
        ecx = loc_18;
        edx = rd32(loc_18 + 0xcu);
        loc_4 = t1;
        loc_14 = 0u;
L_101d2b75: ;
        g->eax = loc_14;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t2 = cow_thiscall(g, COW_IMG(0x1021cb80u), ecx, 1, loc_14);
        t3 = g->edx;
        if (t2 == 0u)
        {
            edx = t3;
        }
        else
        {
            eax = t2;
            edx = t3;
            esi = t2;
            t4 = rd8(esi + 2u);
            if (t4 != 0u)
            {
                edi = t4;
                if ((int32_t)edi < 81)
                {
                    g->eax = eax;
                    g->esp = sp0 - 0x28u;
                    t5 = cow_thiscall(g, COW_IMG(0x1021cbf0u), loc_18, 1, loc_14);
                    if (rd32(edi * 4u + self + (arg1 == 9u) * 0x144u + 0x4cu) == 0u)
                    {
                        eax = edi + (arg1 == 9u) * 0x51u;
                        edx = t5;
                        loc_10 = t5;
                        goto L_101d2bff;
                    }
                    eax = edi + (arg1 == 9u) * 0x51u;
                    ecx = rd32(edi * 4u + self + (arg1 == 9u) * 0x144u + 0x4cu);
                    edx = t5;
                    loc_10 = t5;
                    if (edx != 0u) goto L_101d2bed;
                    if ((rd8(esi + 0x11u) & 0x40u) != 0u)
                    {
                        if (rd8(ecx + 0x2fu) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(ecx + 0x2fu);
                            g->ebx = self;
                            g->edx = edx;
                            g->esp = sp0 - 0x28u;
                            cow_thiscall(g, COW_IMG(0x101d5e50u), self, 1, ecx);
                            t6 = g->edx;
                            edx = t6;
                        }
                    }
                }
            }
        }
L_101d2c9c: ;
        if ((int32_t)(loc_14 + 1u) < (int32_t)loc_4)
        {
            loc_14 = loc_14 + 1u;
            goto L_101d2b6d;
        }
    }
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_101d2b6d: ;
    ecx = loc_18;
    goto L_101d2b75;
L_101d2bed: ;
    g->esi = esi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t7 = cow_thiscall(g, COW_IMG(0x101cdd60u), ecx, 1, edx);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t8;
        goto L_101d2c9c;
    }
    eax = t7;
    edx = t8;
L_101d2bff: ;
    if (rd16(edi * 4u + self + (arg1 == 9u) * 0x144u + 0x55cu) == rd16(esi))
    {
        ecx = edi + (arg1 == 9u) * 0x51u;
        edi = edi * 4u + self + (arg1 == 9u) * 0x144u + 0x55cu;
        goto L_101d2c37;
    }
    eax = (eax & 0xffff0000u) | rd16(esi);
    edi = edi * 4u + self + (arg1 == 9u) * 0x144u + 0x55cu;
    g->eax = (uint16_t)eax;
    g->edx = edx;
    t9 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x28u;
    t10 = cow_thiscall(g, COW_IMG(0x1015bc40u), t9, 1, (uint16_t)eax);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        edx = t12;
        goto L_101d2c9c;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    t13 = rd16(esi);
    wr16(edi, (uint16_t)t13);
    wr8(edi + 2u, rd8(eax + 4u));
    edx = (edx & 0xffff0000u) | t13;
L_101d2c37: ;
    if (rd8(edi + 2u) == 0xau)
    {
        eax = rd8(edi + 2u) - 0xau;
        goto L_101d2c4b;
    }
    eax = rd8(edi + 2u) - 0xau;
    if (eax == 2u)
    {
        eax = eax - 2u;
        goto L_101d2c4b;
    }
    eax = eax - 2u;
    if (eax != 2u) goto L_101d2c9c;
    eax = eax - 2u;
L_101d2c4b: ;
    if ((rd8(esi + 0x11u) & 0x40u) != 0u)
    {
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t14 = cow_stdcall(g, COW_IMG(0x100f1080u), 0);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == (rd8(esi + 0x11u) & 3u))
        {
            eax = t14;
            t18 = (eax & 0xffffff00u) | rd8(esi + 2u);
            t19 = (t18 & 0xffff0000u) | rd16(esi);
            if (rd32(self + (uint8_t)t18 * 4u + (arg1 == 9u) * 0x144u + 0x4cu) == 0u)
            {
                eax = t19;
                loc_2c = loc_10;
                loc_34 = t18;
                loc_38 = t19;
                g->edx = arg1;
                g->esp = sp0 - 0x28u;
                cow_thiscall(g, COW_IMG(0x101d39e0u), self, 4, loc_38, loc_34, arg1, loc_2c);
                t21 = g->edx;
                edx = t21;
            }
            else
            {
                eax = t19;
                loc_2c = loc_10;
                loc_34 = t18;
                loc_38 = t19;
                g->edx = arg1;
                g->esp = sp0 - 0x28u;
                cow_thiscall(g, COW_IMG(0x101d3a70u), self, 4, loc_38, loc_34, arg1, loc_2c);
                t20 = g->edx;
                edx = t20;
            }
        }
        else
        {
            eax = t14;
            edx = t16;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x101d4ba0u), self, 1, esi);
            t17 = g->edx;
            edx = t17;
        }
    }
    goto L_101d2c9c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d2b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d2b10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
