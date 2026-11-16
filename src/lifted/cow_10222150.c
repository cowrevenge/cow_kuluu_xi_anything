/* f_0x10222150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10222150(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x40u) == 0u)
    {
        edx = in_edx;
        goto L_102223ed;
    }
    eax = rd32(self + 0x40u);
    if ((rd8(self + 0x5cu) >> 1u & 1u) == 1u)
    {
        edx = in_edx;
        goto L_102223ed;
    }
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au)
    {
        edx = in_edx;
        goto L_102223ed;
    }
    edi = rd32(self + 0x30u);
    t1 = rd32(COW_IMG(0x102223f4u) + rd8(COW_IMG(0x10222410u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    edx = rd8(COW_IMG(0x10222410u) + (uint32_t)(int16_t)arg1 - 1u);
    switch (t1 - RD)
    {
    case 0x10222198u: goto L_10222198;
    case 0x102221aau: goto L_102221aa;
    case 0x102221e4u: goto L_102221e4;
    case 0x102221ebu: goto L_102221eb;
    case 0x102221f0u: goto L_102221f0;
    case 0x102221f9u: goto L_102221f9;
    case 0x102223edu: goto L_102223ed;
    default: rt_fatal(g, COW_IMG(0x10222191u), "switch");
    }
    return;
L_10222198: ;
    if (rd32(rd32(self + 8u) + 0x88u) == 0u)
    {
        eax = rd32(rd32(self + 8u) + 0x88u);
        ecx = (self & 0xffff0000u) | (uint16_t)arg1;
        ebp = 0u;
        goto L_1022220b;
    }
    eax = rd32(rd32(self + 8u) + 0x88u);
    ecx = (self & 0xffff0000u) | (uint16_t)arg1;
    ebp = rd32(eax + 0x14u);
L_10222202: ;
    if (ebp != 0u) goto L_10222215;
    ecx = (ecx & 0xffff0000u) | (uint16_t)arg1;
L_1022220b: ;
    if ((uint16_t)ecx != 0x1bu) goto L_102223d1;
L_10222215: ;
    t10 = rd32(COW_IMG(0x1022242cu) + rd8(COW_IMG(0x10222450u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t10 - RD)
    {
    case 0x10222224u: ecx = rd8(COW_IMG(0x10222450u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10222224;
    case 0x1022223eu: ecx = rd8(COW_IMG(0x10222450u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1022223e;
    case 0x1022226au: ecx = rd8(COW_IMG(0x10222450u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1022226a;
    case 0x102222b7u: ecx = rd8(COW_IMG(0x10222450u) + (uint32_t)(int16_t)arg1 - 1u); goto L_102222b7;
    case 0x10222316u: ecx = rd8(COW_IMG(0x10222450u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10222316;
    case 0x10222358u: goto L_10222358;
    case 0x1022239bu: ecx = rd8(COW_IMG(0x10222450u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1022239b;
    case 0x102223aeu: ecx = rd8(COW_IMG(0x10222450u) + (uint32_t)(int16_t)arg1 - 1u); goto L_102223ae;
    case 0x102223edu: goto L_102223ed;
    default: rt_fatal(g, COW_IMG(0x1022221du), "switch");
    }
    return;
L_102221aa: ;
    if ((int32_t)rd32(self + 0x58u) < 2) goto L_102221b7;
    eax = (uint32_t)(int16_t)arg1;
    ebp = 1u;
    goto L_10222215;
L_102221b7: ;
    if (rd8(self + 0x5cu) & 1u) goto L_102221eb;
    if ((uint16_t)arg1 != 4u)
    {
        edx = rd32(self);
        goto L_102221d8;
    }
    edx = rd32(self);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(edx + 0x18u), self, 2, 0x18u, arg2);
    t8 = g->edx;
    g->edx = t8;
    return;
L_102221d8: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(edx + 0x18u), self, 2, 0x19u, arg2);
    t9 = g->edx;
    g->edx = t9;
    return;
L_102221e4: ;
    eax = (uint32_t)(int16_t)arg1;
    ecx = (self & 0xffff0000u) | (uint16_t)arg1;
    ebp = (uint32_t)(int16_t)arg2;
    goto L_10222202;
L_102221eb: ;
    eax = (uint32_t)(int16_t)arg1;
    ecx = (self & 0xffff0000u) | (uint16_t)arg1;
    ebp = rd32(self + 0x58u);
    goto L_10222202;
L_102221f0: ;
    g->eax = (uint32_t)(int16_t)arg1;
    g->esp = sp0 - 0x10u;
    t5 = cow_fastcall(g, COW_IMG(0x10221d60u), self, edx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
L_10222200: ;
    ebp = eax;
    goto L_10222202;
L_102221f9: ;
    g->eax = (uint32_t)(int16_t)arg1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10221da0u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    goto L_10222200;
L_10222224: ;
    if (rd32(self + 0x3cu) == 0u)
    {
        eax = rd32(self + 0x3cu);
        goto L_102223c8;
    }
    eax = rd32(self + 0x3cu);
    edx = ebp - rd32(self + 0x38u);
    edi = ebp + edi - rd32(self + 0x38u);
    loc_14 = ebp;
L_102223c1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, COW_IMG(0x10221e10u), self, 1, loc_14);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
L_102223c8: ;
    wr16(self + 0x60u, (uint16_t)arg1);
    edx = (edx & 0xffff0000u) | (uint16_t)arg1;
L_102223d1: ;
    if (edi != rd32(self + 0x30u))
    {
        if (rd8(self + 0x5cu) >> 3u & 1u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x5cu) >> 3u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x5cu) >> 3u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t25 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
            t26 = g->edx;
            eax = t25;
            edx = t26;
        }
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, edi);
    t27 = g->edx;
    edx = t27;
L_102223ed: ;
    g->edx = edx;
    return;
L_1022223e: ;
    if (rd32(self + 0x3cu) != 0u)
    {
        t18 = rd32(self + 0x38u) - ebp;
        g->eax = t18;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t19 = cow_thiscall(g, COW_IMG(0x10221e10u), self, 1, t18);
        t20 = g->ecx;
        t21 = g->edx;
        if ((int32_t)(edi - ebp) >= 0)
        {
            eax = t19;
            ecx = t20;
            edx = t21;
            edi = edi - ebp;
        }
        else
        {
            eax = t19;
            ecx = t20;
            edx = t21;
            edi = 0u;
        }
    }
    else
    {
        eax = rd32(self + 0x3cu);
        edi = 0u;
    }
    goto L_102223c8;
L_1022226a: ;
    if (rd32(self + 0x3cu) != 0u)
    {
        eax = rd32(self + 0x3cu);
        if (edi == rd32(self + 0x40u) - 1u)
        {
            ecx = rd32(self + 0x40u) - 1u;
        }
        else
        {
            t15 = ebp + rd32(self + 0x38u);
            g->edx = t15;
            t16 = rd32(self + 0x38u);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10221e10u), self, 1, t15);
            t17 = g->edx;
            if ((int32_t)(ebp + edi) < (int32_t)(rd32(self + 0x40u) - 1u))
            {
                eax = rd32(self + 0x40u);
                ecx = rd32(self + 0x40u) - 1u;
                edx = t17;
                edi = ebp + edi;
            }
            else
            {
                eax = rd32(self + 0x40u);
                ecx = rd32(self + 0x40u) - 1u;
                edx = t17;
                ebx = t16;
                if (ebx != rd32(self + 0x38u))
                {
                    edi = eax;
                }
                else
                {
                    edi = ecx;
                }
            }
        }
    }
    else
    {
        eax = rd32(self + 0x3cu);
        edi = rd32(self + 0x40u) - 1u;
    }
    goto L_102223c8;
L_102222b7: ;
    if ((rd8(self + 0x5cu) >> 2u & 1u) != 1u)
    {
        eax = (eax & 0xffffff00u) | (rd8(self + 0x5cu) >> 2u & 1u);
        edi = edi - ebp;
        if ((int32_t)edi < 0)
        {
            if ((int32_t)ebp <= 1)
            {
                if (rd16(self + 0x60u) == 2u)
                {
                    edi = ebp + edi;
                }
                else
                {
                    edi = edi + rd32(self + 0x40u);
                }
            }
            else
            {
                t13 = cow_divs(g, ebp + rd32(self + 0x40u) - 1u, ebp);
                t14 = cow_mods(g, ebp + rd32(self + 0x40u) - 1u, ebp);
                if ((int32_t)(edi + t13 * ebp) < (int32_t)rd32(self + 0x40u))
                {
                    eax = t13 * ebp;
                    ecx = rd32(self + 0x40u);
                    edx = t14;
                    edi = edi + t13 * ebp;
                }
                else
                {
                    eax = t13 * ebp;
                    ecx = rd32(self + 0x40u);
                    edx = t14;
                    edi = ecx - 1u;
                }
            }
        }
    }
    else
    {
        eax = (eax & 0xffffff00u) | (rd8(self + 0x5cu) >> 2u & 1u);
        edi = edi - ebp;
        if ((int32_t)edi < 0)
        {
            edi = 0u;
        }
    }
    goto L_102223c8;
L_10222316: ;
    if ((rd8(self + 0x5cu) >> 2u & 1u) != 1u)
    {
        edi = ebp + edi;
        goto L_10222339;
    }
    ecx = (ecx & 0xffffff00u) | (rd8(self + 0x5cu) >> 2u & 1u);
    edi = ebp + edi;
    if ((int32_t)edi < (int32_t)rd32(self + 0x40u))
    {
        eax = rd32(self + 0x40u);
    }
    else
    {
        eax = rd32(self + 0x40u);
        edi = eax - 1u;
    }
    goto L_102223c8;
L_10222339: ;
    if ((int32_t)edi < (int32_t)rd32(self + 0x40u))
    {
        ecx = rd32(self + 0x40u);
        goto L_102223c8;
    }
    ecx = rd32(self + 0x40u);
    if ((int32_t)ebp > 1) goto L_10222388;
    if (rd16(self + 0x60u) == 1u) goto L_10222354;
L_10222350: ;
    edi = edi - ecx;
    goto L_102223c8;
L_10222354: ;
    edi = edi - ebp;
    goto L_102223c8;
L_10222358: ;
    if ((rd8(self + 0x5cu) >> 2u & 1u) != 1u)
    {
        edx = (edx & 0xffffff00u) | (rd8(self + 0x5cu) >> 2u & 1u);
        edi = ebp + rd32(self + 0x38u) - rd32(self + 0x54u);
        goto L_1022237c;
    }
    ecx = rd32(self + 0x54u);
    edx = (edx & 0xffffff00u) | (rd8(self + 0x5cu) >> 2u & 1u);
    edi = ebp + rd32(self + 0x38u) - rd32(self + 0x54u);
    if ((int32_t)edi < (int32_t)rd32(self + 0x40u))
    {
        eax = rd32(self + 0x40u);
    }
    else
    {
        eax = rd32(self + 0x40u);
        edi = eax - 1u;
    }
    goto L_102223c8;
L_1022237c: ;
    if ((int32_t)edi < (int32_t)rd32(self + 0x40u))
    {
        ecx = rd32(self + 0x40u);
        goto L_102223c8;
    }
    ecx = rd32(self + 0x40u);
    if ((int32_t)ebp <= 1) goto L_10222350;
L_10222388: ;
    t11 = cow_divs(g, ebp + ecx - 1u, ebp);
    t12 = cow_mods(g, ebp + ecx - 1u, ebp);
    if ((int32_t)(edi - t11 * ebp) >= 0)
    {
        eax = t11 * ebp;
        edx = t12;
        edi = edi - t11 * ebp;
    }
    else
    {
        eax = t11 * ebp;
        edx = t12;
        edi = ecx - 1u;
    }
    goto L_102223c8;
L_1022239b: ;
    if (rd32(self + 0x3cu) == 0u)
    {
        eax = rd32(self + 0x3cu);
        goto L_102223c8;
    }
    if ((int32_t)(rd32(self + 0x38u) - ebp) < 0)
    {
        eax = rd32(self + 0x38u) - ebp;
    }
    else
    {
        eax = rd32(self + 0x38u) - ebp;
        edi = edi - ebp;
    }
    loc_14 = eax;
    goto L_102223c1;
L_102223ae: ;
    if (rd32(self + 0x3cu) == 0u)
    {
        eax = rd32(self + 0x3cu);
        goto L_102223c8;
    }
    eax = rd32(self + 0x3cu);
    if ((int32_t)(ebp + rd32(self + 0x38u)) > (int32_t)eax)
    {
        ecx = ebp + rd32(self + 0x38u);
    }
    else
    {
        ecx = ebp + rd32(self + 0x38u);
        edi = ebp + edi;
    }
    loc_14 = ecx;
    goto L_102223c1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10222150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10222150(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
