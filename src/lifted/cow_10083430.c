/* f_0x10083430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10083430(Guest* g)
{
    double d30;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    t3 = rd32(sp0 + 4u);
    g->edx = t2;
    t4 = cow_thiscall(g, COW_IMG(0x10084140u), t3, 0);
    t5 = g->edx;
    wr8(sp0 + 4u, (uint8_t)t4 == 1u);
    if (t1 == 0u)
    {
        edx = t5;
        ebp = t1;
        edi = t3;
        loc_4 = t1;
        loc_8 = 0u;
    }
    else
    {
        edx = t5;
        ebp = t1;
        edi = t3;
        loc_4 = t1;
        t6 = rd32(ebp + 0x70u);
        loc_8 = t6;
    }
    if (rd32(edi + 0x70u) == 0u) goto L_10083582;
    esi = rd32(edi + 0x70u);
    if ((rd32(esi + 0x1d0u) & arg4) == 0u)
    {
        eax = rd32(esi + 0x1d0u);
        goto L_10083491;
    }
    eax = rd32(esi + 0x1d0u);
    return eax & 0xffffff00u;
L_10083491: ;
    if ((arg3 & eax) != 0u)
    {
        ecx = arg4;
        goto L_100834cb;
    }
    g->ecx = arg4;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_call_regs(g, COW_IMG(0x101cc1d0u), eax, g->ecx, g->edx, 1, 3, esi, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_100834ab;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    if (arg3 & 1u) goto L_100834c7;
L_100834ab: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x101cc220u), eax, g->ecx, g->edx, 1, 3, esi, in_edi, in_esi);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        goto L_100834bd;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    if ((arg3 & 0x10u) != 0u) goto L_100834c7;
L_100834bd: ;
    return eax & 0xffffff00u;
L_100834c7: ;
    ebp = loc_4;
L_100834cb: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x97u);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_10083525;
    }
    ecx = t14;
    edx = t15;
    if (!(rd32(esi + 0x1d0u) >> 8u & 1u))
    {
        eax = rd32(esi + 0x1d0u);
        goto L_10083525;
    }
    t16 = rd32(esi + 0x12cu);
    if (!(t16 >> 0xdu & 1u))
    {
        eax = t16;
        ecx = t16 >> 0xdu;
        goto L_10083525;
    }
    eax = t16;
    ecx = t16 >> 0xdu;
    if (eax >> 0x1eu & 1u)
    {
        edx = eax >> 0x1eu;
        goto L_10083525;
    }
    edx = eax >> 0x1eu;
    if (eax >> 0x1fu != 0u)
    {
        eax = eax >> 0x1fu;
        goto L_10083525;
    }
    eax = eax >> 0x1fu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_call_regs(g, COW_IMG(0x101cc220u), eax, g->ecx, g->edx, 1, 3, esi, in_edi, in_esi);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_10083525;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    if (arg2 == esi) goto L_10083525;
    return eax & 0xffffff00u;
L_10083525: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t20 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xaau);
    t21 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        edx = t21;
        goto L_10083556;
    }
    edx = t21;
    if (!(rd32(esi + 0x12cu) >> 0x16u & 1u))
    {
        eax = rd32(esi + 0x12cu) >> 0x16u;
        goto L_10083556;
    }
    eax = rd32(esi + 0x12cu) >> 0x16u;
    if ((rd8(esi + 0x1d0u) & 0xcu) != 0u) goto L_10083556;
    return eax & 0xffffff00u;
L_10083556: ;
    if (rd8(sp0 + 4u) == 0u)
    {
        if (ebp != 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t22 = cow_thiscall(g, COW_IMG(0x1008e140u), esi, 0);
            t23 = g->edx;
            if ((uint8_t)t22 == 0u)
            {
                edx = t23;
            }
            else
            {
                eax = t22;
                edx = t23;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t24 = cow_call_regs(g, COW_IMG(0x1008e8d0u), eax, esi, g->edx, 0, 1, loc_8);
                t25 = g->edx;
                if ((uint8_t)t24 == 0u)
                {
                    edx = t25;
                }
                else
                {
                    edx = t25;
                    wr8(sp0 + 4u, 1u);
                }
            }
        }
    }
L_10083582: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t26 = cow_thiscall(g, COW_IMG(0x10084390u), edi, 0);
    t27 = g->ecx;
    t28 = g->edx;
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = t26;
        edx = t28;
        goto L_100835a5;
    }
    eax = t26;
    edx = t28;
    if (eax == 2u) goto L_1008359b;
    if (eax != 3u) goto L_100835a5;
L_1008359b: ;
    return eax & 0xffffff00u;
L_100835a5: ;
    if ((uint8_t)arg5 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg5;
        goto L_100835bb;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg5;
    if (edi != ebp) goto L_100835bb;
    return eax & 0xffffff00u;
L_100835bb: ;
    if (rd16(edi + 0xb2u) == 0u) goto L_100835cf;
    return eax & 0xffffff00u;
L_100835cf: ;
    if (rd8(edi + 0xc0u) != 2u) goto L_100835e2;
    return eax & 0xffffff00u;
L_100835e2: ;
    g->esp = sp0 - 0x18u;
    t29 = cow_thiscall(g, COW_IMG(0x10084580u), edi, 0);
    if (t29 == 0u)
    {
        eax = t29;
        goto L_100835f7;
    }
    eax = t29;
    return eax & 0xffffff00u;
L_100835f7: ;
    d30 = (double)rdf32(edi + 0x8cu);
    if (!(d30 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10083614;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    return eax & 0xffffff00u;
L_10083614: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10083430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10083430(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
