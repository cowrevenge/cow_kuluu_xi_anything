/* f_0x101bd510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101bd510(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_18;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_101bd807;
    }
    eax = rd32(sp0 + 4u);
    if (rd16(eax) == 0u) goto L_101bd807;
    if (arg2 == 0u) goto L_101bd807;
    if (rd16(arg2) == 0u) goto L_101bd807;
    if (arg3 == 0u) goto L_101bd807;
    edx = in_edx;
    ebx = in_ebx;
    loc_4 = eax;
    loc_18 = rd32(sp0 - 0x18u);
L_101bd554: ;
    if (rd16(eax) == 0u) goto L_101bd7f7;
    esi = arg2;
    edi = arg3;
    loc_c = eax;
L_101bd565: ;
    t1 = rd16(esi);
    wr8(sp0 + 4u, 0u);
    if ((uint16_t)t1 == 0u)
    {
        eax = (eax & 0xffff0000u) | t1;
        loc_18 = (uint16_t)loc_18;
        goto L_101bd7c8;
    }
    eax = (eax & 0xffff0000u) | t1;
    ecx = 0u;
    loc_18 = (uint16_t)loc_18;
    loc_10 = 0u;
    loc_8 = 0u;
L_101bd588: ;
    if (loc_18 >> 0x18u != 0u)
    {
        ecx = (ecx & 0xffffff00u) | loc_18 >> 0x18u;
        ebx = ebx & 0xffffff00u;
    }
    else
    {
        ebx = ebx & 0xffffff00u;
        ecx = 0u;
        loc_18 = loc_18 & 0xff00ffffu;
        loc_10 = 0u;
        loc_8 = 0u;
    }
    t2 = (ecx & 0xffffff00u) | rd8(edi);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t3 = cow_stdcall(g, COW_IMG(0x101be1c0u), 2, eax, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t5;
        goto L_101bd5f1;
    }
    ecx = t4;
    edx = t5;
    eax = loc_10 + 1u;
    loc_18 = (loc_18 & 0xffffffu) | 0x1000000u;
    loc_10 = loc_10 + 1u;
L_101bd5bf: ;
    ebx = (ebx & 0xffffff00u) | 1u;
L_101bd5c1: ;
    if (rd8(sp0 + 4u) != 1u) goto L_101bd5d6;
L_101bd5c8: ;
    if (loc_18 >> 0x18u != 1u) goto L_101bd5d6;
L_101bd5cf: ;
    if ((uint8_t)(loc_18 >> 0x10u) == 1u) goto L_101bd5df;
L_101bd5d6: ;
    if ((uint8_t)ebx != 1u) goto L_101bd769;
L_101bd5df: ;
    if (rd16(esi + 2u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 2u);
        esi = esi + 2u;
        edi = edi + 1u;
        goto L_101bd588;
    }
    eax = (eax & 0xffff0000u) | rd16(esi + 2u);
    esi = esi + 2u;
    edi = edi + 1u;
L_101bd7c8: ;
    if (rd8(sp0 + 4u) != 1u) goto L_101bd7ef;
    eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
    esi = esi + 2u;
    edi = edi + 1u;
    if (rd16(esi) == 0u) goto L_101bd812;
    if (rd16(loc_c + 2u) != 0u)
    {
        eax = loc_c + 2u;
        loc_c = loc_c + 2u;
        goto L_101bd565;
    }
L_101bd7ef: ;
    eax = loc_4;
L_101bd7f7: ;
    if (rd16(eax + 2u) != 0u)
    {
        loc_4 = eax + 2u;
        eax = eax + 2u;
        goto L_101bd554;
    }
    eax = eax + 2u;
L_101bd807: ;
    return eax & 0xffffff00u;
L_101bd5f1: ;
    t6 = (edx & 0xffffff00u) | rd8(edi);
    t7 = (eax & 0xffff0000u) | rd16(esi);
    g->eax = t7;
    g->ecx = self;
    g->edx = t6;
    g->esp = sp0 - 0x24u;
    t8 = cow_stdcall(g, COW_IMG(0x101be1e0u), 2, t7, t6);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101bd635;
    }
    edx = t10;
    if (loc_10 != loc_8 + 1u)
    {
        eax = loc_8 + 1u;
        ecx = loc_10;
        ebx = (ebx & 0xffffff00u) | 1u;
        loc_8 = loc_8 + 1u;
        goto L_101bd5c1;
    }
    eax = loc_8 + 1u;
    ecx = loc_10;
    ebx = (ebx & 0xffffff00u) | 1u;
    loc_8 = loc_8 + 1u;
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
        loc_18 = loc_18 & 0xffffffu;
        goto L_101bd7c8;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
    loc_18 = loc_18 & 0xffffffu;
    if ((uint8_t)(loc_18 >> 0x10u) == (uint8_t)ebx) goto L_101bd7c8;
    goto L_101bd5c1;
L_101bd635: ;
    if (loc_18 >> 0x18u != 1u) goto L_101bd748;
    t11 = (ecx & 0xffffff00u) | rd8(edi);
    t12 = (edx & 0xffff0000u) | rd16(esi);
    g->eax = eax;
    g->ecx = self;
    g->edx = t12;
    g->esp = sp0 - 0x24u;
    t13 = cow_stdcall(g, COW_IMG(0x101be220u), 2, t12, t11);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_101bd65e;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    loc_18 = (loc_18 & 0xff00ffffu) | 0x10000u;
    goto L_101bd5bf;
L_101bd65e: ;
    t16 = (eax & 0xffffff00u) | rd8(edi);
    t17 = (ecx & 0xffff0000u) | rd16(esi);
    g->eax = t16;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t18 = cow_stdcall(g, COW_IMG(0x101be200u), 2, t17, t16);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_101bd6bf;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    if ((uint8_t)(loc_18 >> 0x10u) != 1u) goto L_101bd69a;
    if (rd16(loc_c) < rd16(esi - 2u))
    {
        eax = (eax & 0xffff0000u) | rd16(loc_c);
        edx = loc_c;
        goto L_101bd690;
    }
    eax = (eax & 0xffff0000u) | rd16(loc_c);
    edx = loc_c;
    if (rd16(esi + 2u) >= (uint16_t)eax) goto L_101bd762;
L_101bd690: ;
    wr8(sp0 + 4u, 1u);
    goto L_101bd5df;
L_101bd69a: ;
    if (rd16(esi - 2u) > rd16(loc_c))
    {
        eax = (loc_c & 0xffff0000u) | rd16(loc_c);
        goto L_101bd5bf;
    }
    eax = (loc_c & 0xffff0000u) | rd16(loc_c);
    if ((uint16_t)eax > rd16(esi + 2u)) goto L_101bd5bf;
    wr8(sp0 + 4u, 1u);
    goto L_101bd5cf;
L_101bd6bf: ;
    t21 = (ecx & 0xffffff00u) | rd8(edi + 1u);
    t22 = (edx & 0xffff0000u) | rd16(esi + 2u);
    g->eax = eax;
    g->ecx = self;
    g->edx = t22;
    g->esp = sp0 - 0x24u;
    t23 = cow_stdcall(g, COW_IMG(0x101be200u), 2, t22, t21);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 != 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_101bd5bf;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    t26 = (eax & 0xffffff00u) | rd8(edi - 1u);
    t27 = (ecx & 0xffff0000u) | rd16(esi - 2u);
    g->eax = t26;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t28 = cow_stdcall(g, COW_IMG(0x101be200u), 2, t27, t26);
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 != 0u)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        goto L_101bd5bf;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    if ((uint8_t)(loc_18 >> 0x10u) != 1u) goto L_101bd710;
    if (rd16(loc_c) == rd16(esi))
    {
        eax = (eax & 0xffff0000u) | rd16(loc_c);
        edx = loc_c;
        goto L_101bd762;
    }
    eax = (eax & 0xffff0000u) | rd16(loc_c);
    edx = loc_c;
    wr8(sp0 + 4u, 1u);
    goto L_101bd5df;
L_101bd710: ;
    t31 = (ecx & 0xffffff00u) | rd8(edi);
    t32 = (edx & 0xffff0000u) | rd16(esi);
    g->eax = eax;
    g->ecx = self;
    g->edx = t32;
    g->esp = sp0 - 0x24u;
    t33 = cow_stdcall(g, COW_IMG(0x101be240u), 2, t32, t31);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        ecx = t34;
        edx = t35;
        goto L_101bd72e;
    }
    eax = t33;
    ecx = t34;
    edx = t35;
    wr8(sp0 + 4u, 1u);
    goto L_101bd5cf;
L_101bd72e: ;
    if (rd16(loc_c) != rd16(esi))
    {
        eax = loc_c;
        ecx = (ecx & 0xffff0000u) | rd16(loc_c);
        goto L_101bd5bf;
    }
    eax = loc_c;
    ecx = (ecx & 0xffff0000u) | rd16(loc_c);
    wr8(sp0 + 4u, 1u);
    goto L_101bd5cf;
L_101bd748: ;
    if (rd16(loc_c) != rd16(esi))
    {
        eax = (eax & 0xffff0000u) | rd16(loc_c);
        edx = loc_c;
        goto L_101bd5c1;
    }
    eax = (eax & 0xffff0000u) | rd16(loc_c);
    edx = loc_c;
    wr8(sp0 + 4u, 1u);
    goto L_101bd5c8;
L_101bd762: ;
    wr8(sp0 + 4u, 0u);
    goto L_101bd7c8;
L_101bd769: ;
    if (rd8(sp0 + 4u) == 1u)
    {
        if (loc_18 >> 0x18u == 1u)
        {
            if (rd16(esi) == 0u) goto L_101bd7c8;
L_101bd77d: ;
            t36 = (ecx & 0xffffff00u) | rd8(edi + 1u);
            t37 = (edx & 0xffff0000u) | rd16(esi + 2u);
            g->eax = eax;
            g->ecx = self;
            g->edx = t37;
            g->esp = sp0 - 0x24u;
            t38 = cow_stdcall(g, COW_IMG(0x101be1c0u), 2, t37, t36);
            t39 = g->ecx;
            t40 = g->edx;
            if ((uint8_t)t38 == 0u)
            {
                eax = t38;
                ecx = t39;
                edx = t40;
                esi = esi + 2u;
                edi = edi + 1u;
                goto L_101bd79f;
            }
            eax = t38;
            ecx = t39;
            edx = t40;
            esi = esi + 2u;
            edi = edi + 1u;
            loc_10 = loc_10 + 1u;
L_101bd7c2: ;
            if (rd16(esi) != 0u) goto L_101bd77d;
            ebx = self;
        }
    }
    goto L_101bd7c8;
L_101bd79f: ;
    t41 = (eax & 0xffffff00u) | rd8(edi);
    t42 = (ecx & 0xffff0000u) | rd16(esi);
    g->eax = t41;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t43 = cow_stdcall(g, COW_IMG(0x101be1e0u), 2, t42, t41);
    t44 = g->ecx;
    t45 = g->edx;
    if ((uint8_t)t43 == 0u)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
        goto L_101bd7c2;
    }
    edx = t45;
    if (loc_10 == loc_8 + 1u)
    {
        eax = loc_8 + 1u;
        ebx = self;
        goto L_101bd7c8;
    }
    eax = loc_8 + 1u;
    ecx = loc_10;
    loc_8 = loc_8 + 1u;
    goto L_101bd7c2;
L_101bd812: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bd510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bd510(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
