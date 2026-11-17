/* f_0x10002130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10002130(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    t1 = rd32(rd32(sp0 + 0xcu) + 0xcu) - rd32(rd32(sp0 + 0xcu) + 4u);
    t2 = rd32(sp0 + 0xcu);
    t3 = rd32(rd32(sp0 + 0xcu));
    wr32(sp0 + 0xcu, t1);
    wr32(sp0 - 0x38u, 0x10u);
    t4 = rd32(t2 + 8u) - t3;
    wr32(sp0 - 0x2cu, t4);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, sp0 - 0x28u);
    wr32(sp0 - 0x44u, arg1);
    g->eax = rd32(arg1);
    t5 = rd32(arg1);
    g->esp = sp0 - 0x34u;
    t6 = cow_thiscall(g, rd32(t5 + 0x24u), sp0 - 0x28u, 4, arg1, sp0 - 0x28u, 0u, 0x10u);
    t7 = g->ecx;
    if ((int32_t)t6 >= 0)
    {
        ecx = t7;
        goto L_10002170;
    }
    eax = t6;
    return eax & 0xffffff00u;
L_10002170: ;
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    wr32(sp0 - 0x3cu, arg1);
    g->edx = rd32(arg1);
    t8 = rd32(arg1);
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(t8 + 0x20u), ecx, 2, arg1, sp0 - 0x20u);
    t9 = g->edx;
    if ((int32_t)rd32(sp0 - 0x20u) > 62)
    {
        eax = rd32(sp0 - 0x20u);
        edx = t9;
        goto L_100021ac;
    }
    eax = rd32(sp0 - 0x20u);
    edx = t9;
    zf = rd32(sp0 - 0x20u) == 0x3eu;
    if (zf) goto L_100021ca;
    if (eax > 0x3du)
    {
        edi = 0u;
        goto L_10002214;
    }
    t10 = rd32(COW_IMG(0x100023b0u) + rd8(COW_IMG(0x100023c8u) + eax) * 4u);
    switch (t10 - RD)
    {
    case 0x1000219eu: goto L_1000219e;
    case 0x100021a5u: goto L_100021a5;
    case 0x100021cau: goto L_100021ca;
    case 0x100021efu: goto L_100021ef;
    case 0x10002212u: goto L_10002212;
    case 0x10002214u: edi = 0u; goto L_10002214;
    default: rt_fatal(g, COW_IMG(0x10002197u), "switch");
    }
    return 0;
L_1000219e: ;
    edi = 3u;
L_10002214: ;
    wr32(sp0 - 0x38u, in_ebx);
    wr32(sp0 - 0x3cu, in_ebp);
    if (edi - 1u > 3u) goto L_10002399;
    eax = edi - 1u;
    t12 = rd32(COW_IMG(0x10002428u) + eax * 4u);
    switch (t12 - RD)
    {
    case 0x1000222du: goto L_1000222d;
    case 0x10002282u: goto L_10002282;
    case 0x100022fcu: goto L_100022fc;
    case 0x10002359u: goto L_10002359;
    default: rt_fatal(g, COW_IMG(0x10002226u), "switch");
    }
    return 0;
L_100021a5: ;
    edi = 1u;
    goto L_10002214;
L_100021ac: ;
    if ((int32_t)eax > 100) goto L_100021d1;
    zf = eax == 0x64u;
    if (zf) goto L_10002212;
    if (eax - 0x3fu > 0x11u)
    {
        edi = 0u;
        goto L_10002214;
    }
    eax = eax - 0x3fu;
    t11 = rd32(COW_IMG(0x10002408u) + rd8(COW_IMG(0x10002414u) + eax) * 4u);
    switch (t11 - RD)
    {
    case 0x100021cau: edx = rd8(COW_IMG(0x10002414u) + eax); goto L_100021ca;
    case 0x100021efu: edx = rd8(COW_IMG(0x10002414u) + eax); goto L_100021ef;
    case 0x10002214u: edx = rd8(COW_IMG(0x10002414u) + eax); edi = 0u; goto L_10002214;
    default: rt_fatal(g, COW_IMG(0x100021c3u), "switch");
    }
    return 0;
L_100021ca: ;
    edi = 4u;
    goto L_10002214;
L_100021d1: ;
    if ((int32_t)eax > 861165636) goto L_100021fd;
    zf = eax == 0x33545844u;
    if (zf) goto L_10002212;
    if ((int32_t)eax > 844388420) goto L_100021f6;
    zf = eax == 0x32545844u;
    if (zf) goto L_10002212;
    if (eax == 0x65u) goto L_100021ef;
    zf = eax == 0x31545844u;
L_10002210: ;
    if (!zf)
    {
        edi = 0u;
        goto L_10002214;
    }
L_10002212: ;
    edi = 0u;
    goto L_10002214;
L_100021ef: ;
    edi = 2u;
    goto L_10002214;
L_100021f6: ;
    zf = eax == 0x32595559u;
    goto L_10002210;
L_100021fd: ;
    if (eax == 0x34545844u) goto L_10002212;
    if (eax == 0x35545844u) goto L_10002212;
    zf = eax == 0x59565955u;
    goto L_10002210;
L_1000222d: ;
    if (rd32(sp0 + 0xcu) == 0u) goto L_10002399;
    ebp = 0u;
    esi = arg2;
L_1000223b: ;
    if (rd32(sp0 - 0x2cu) == 0u) goto L_10002265;
    ecx = rd32(sp0 - 0x24u);
    ebx = rd32(sp0 - 0x2cu);
    edi = rd32(sp0 - 0x24u) + rd32(sp0 - 0x28u) * ebp;
L_10002250: ;
    wr32(sp0 - 0x40u, (uint32_t)(int8_t)rd8(edi));
    g->eax = (uint32_t)(int8_t)rd8(edi);
    g->ecx = ecx;
    g->edx = edx;
    t27 = rd8(edi);
    g->esp = sp0 - 0x3cu;
    t28 = cow_cdecl(g, COW_IMG(0x10002440u), 1, (uint32_t)(int8_t)t27);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(esi, t28);
    if (ebx != 1u)
    {
        ecx = t29;
        edx = t30;
        ebx = ebx - 1u;
        esi = esi + 4u;
        edi = edi + 1u;
        goto L_10002250;
    }
    edx = t30;
    esi = esi + 4u;
L_10002265: ;
    if (ebp + 1u < rd32(sp0 + 0xcu))
    {
        ebp = ebp + 1u;
        goto L_1000223b;
    }
    wr32(sp0 - 0x40u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x3cu;
    t31 = cow_thiscall(g, rd32(rd32(arg1) + 0x28u), rd32(arg1), 1, arg1);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return (t31 & 0xffffff00u) | 1u;
L_10002282: ;
    if (rd32(sp0 + 0xcu) == 0u) goto L_10002399;
    ebp = 0u;
    esi = arg2;
L_10002290: ;
    if (rd32(sp0 - 0x2cu) != 0u)
    {
        eax = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x24u) + rd32(sp0 - 0x28u) * ebp;
        ebx = eax;
L_100022a7: ;
        t22 = (((rd16(edi) & 0x7c00u) << 3u | (rd16(edi) & 0x3e0u)) << 3u | (rd16(edi) & 0x1fu)) << 3u;
        wr32(sp0 - 0x40u, t22);
        g->eax = t22;
        g->edx = rd16(edi) & 0x3e0u;
        t23 = rd16(edi);
        g->esp = sp0 - 0x3cu;
        t24 = cow_cdecl(g, COW_IMG(0x10002440u), 1, t22);
        t25 = g->edx;
        wr32(esi, t24);
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            esi = esi + 4u;
            edi = edi + 2u;
            goto L_100022a7;
        }
        edx = t25;
        esi = esi + 4u;
    }
    if (ebp + 1u < rd32(sp0 + 0xcu))
    {
        ebp = ebp + 1u;
        goto L_10002290;
    }
    wr32(sp0 - 0x40u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x3cu;
    t26 = cow_thiscall(g, rd32(rd32(arg1) + 0x28u), rd32(arg1), 1, arg1);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return (t26 & 0xffffff00u) | 1u;
L_100022fc: ;
    if (rd32(sp0 + 0xcu) == 0u) goto L_10002399;
    ebp = 0u;
    esi = arg2;
L_1000230a: ;
    if (rd32(sp0 - 0x2cu) != 0u)
    {
        eax = rd32(sp0 - 0x2cu);
        ecx = rd32(sp0 - 0x24u);
        edi = rd32(sp0 - 0x24u) + rd32(sp0 - 0x28u) * ebp;
        ebx = eax;
L_10002321: ;
        t17 = rd32(edi) & 0xffffffu;
        wr32(sp0 - 0x40u, t17);
        g->eax = t17;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t18 = cow_cdecl(g, COW_IMG(0x10002440u), 1, t17);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(esi, t18);
        if (ebx != 1u)
        {
            ecx = t19;
            edx = t20;
            ebx = ebx - 1u;
            esi = esi + 4u;
            edi = edi + 3u;
            goto L_10002321;
        }
        edx = t20;
        esi = esi + 4u;
    }
    if (ebp + 1u < rd32(sp0 + 0xcu))
    {
        ebp = ebp + 1u;
        goto L_1000230a;
    }
    wr32(sp0 - 0x40u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x3cu;
    t21 = cow_thiscall(g, rd32(rd32(arg1) + 0x28u), rd32(arg1), 1, arg1);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return (t21 & 0xffffff00u) | 1u;
L_10002359: ;
    if (rd32(sp0 + 0xcu) == 0u) goto L_10002399;
    ebp = 0u;
    esi = arg2;
L_10002363: ;
    if (rd32(sp0 - 0x2cu) != 0u)
    {
        eax = rd32(sp0 - 0x2cu);
        ecx = rd32(sp0 - 0x24u);
        edi = rd32(sp0 - 0x24u) + rd32(sp0 - 0x28u) * ebp;
        ebx = eax;
L_1000237a: ;
        wr32(sp0 - 0x40u, rd32(edi));
        g->eax = rd32(edi);
        g->ecx = ecx;
        g->edx = edx;
        t13 = rd32(edi);
        g->esp = sp0 - 0x3cu;
        t14 = cow_cdecl(g, COW_IMG(0x10002440u), 1, t13);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(esi, t14);
        if (ebx != 1u)
        {
            ecx = t15;
            edx = t16;
            ebx = ebx - 1u;
            esi = esi + 4u;
            edi = edi + 4u;
            goto L_1000237a;
        }
        edx = t16;
        esi = esi + 4u;
    }
    if (ebp + 1u < rd32(sp0 + 0xcu))
    {
        ebp = ebp + 1u;
        goto L_10002363;
    }
L_10002399: ;
    wr32(sp0 - 0x40u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x3cu;
    t32 = cow_thiscall(g, rd32(rd32(arg1) + 0x28u), rd32(arg1), 1, arg1);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    return (t32 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10002130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10002130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
