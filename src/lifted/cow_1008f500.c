/* f_0x1008f500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1008f500(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x106643a8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106643a8u));
        goto L_1008f710;
    }
    t1 = rd32(sp0 + 0xcu);
    if (rd32(sp0 + 4u) == 0u)
    {
        ebp = rd32(sp0 + 4u);
        loc_4 = t1 & 0xfu;
        loc_c = (rd32(sp0 - 0xcu) & 0xffffffu) | (t1 >> 7u & 1u) << 0x18u;
        loc_8 = 0u;
    }
    else
    {
        ebp = rd32(sp0 + 4u);
        loc_4 = t1 & 0xfu;
        loc_c = (rd32(sp0 - 0xcu) & 0xffffffu) | (t1 >> 7u & 1u) << 0x18u;
        t2 = rd32(ebp + 0x78u);
        loc_8 = t2;
    }
    g->esp = sp0 - 0x1cu;
    t3 = cow_fastcall(g, COW_IMG(0x1008e1e0u), arg2, in_edx, 0);
    t4 = g->edx;
    if (arg4 == 0u)
    {
        eax = t3;
        edx = t4;
        edi = t3;
        goto L_1008f567;
    }
    eax = t3;
    edx = t4;
    edi = t3;
    if (arg4 == arg2)
    {
        ecx = arg4;
        goto L_1008f573;
    }
    g->esp = sp0 - 0x1cu;
    t5 = cow_fastcall(g, COW_IMG(0x1008e1e0u), arg4, edx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    zf = t5 == arg2;
L_1008f56d: ;
    if (!zf) goto L_1008f710;
L_1008f573: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
L_1008f575: ;
    wr8(sp0 + 0xcu, 0u);
    wr8(sp0 + 4u, 0u);
    if ((uint8_t)ebx == 0u) goto L_1008f58b;
    if (edi == 0u)
    {
        esi = arg2;
    }
    else
    {
        esi = edi;
    }
L_1008f5cf: ;
    g->edx = edx;
    t20 = rd32(esi + 0x78u);
    g->esp = sp0 - 0x14u;
    t21 = cow_call_regs(g, COW_IMG(0x101cc220u), eax, g->ecx, g->edx, 1, 3, esi, in_edi, in_esi);
    t22 = g->edx;
    g->edx = t22;
    g->esp = sp0 - 0x1cu;
    t23 = cow_thiscall(g, COW_IMG(0x10097a60u), esi, 0);
    t24 = g->edx;
    if (loc_4 - 2u > 7u)
    {
        eax = t23;
        goto L_1008f710;
    }
    eax = t23;
    ecx = loc_4 - 2u;
    edx = t24;
    ebx = (ebx & 0xffffff00u) | (uint8_t)t21;
    edi = t20;
    t25 = rd32(COW_IMG(0x1008f71cu) + ecx * 4u);
    switch (t25 - RD)
    {
    case 0x1008f5fbu: goto L_1008f5fb;
    case 0x1008f62au: goto L_1008f62a;
    case 0x1008f642u: goto L_1008f642;
    case 0x1008f677u: goto L_1008f677;
    case 0x1008f6a7u: goto L_1008f6a7;
    case 0x1008f6d7u: goto L_1008f6d7;
    case 0x1008f6fcu: goto L_1008f6fc;
    case 0x1008f710u: goto L_1008f710;
    default: rt_fatal(g, COW_IMG(0x1008f5f4u), "switch");
    }
    return 0;
L_1008f567: ;
    if (edi == 0u)
    {
        ecx = arg4;
        ebx = in_ebx & 0xffffff00u;
        goto L_1008f575;
    }
    ecx = arg4;
    zf = edi == ebp;
    goto L_1008f56d;
L_1008f58b: ;
    g->esi = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t8 = cow_thiscall(g, COW_IMG(0x1008e180u), arg2, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_1008f5b6;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    edi = t8;
    if (loc_c >> 0x18u != 0u)
    {
        eax = (eax & 0xffffff00u) | loc_c >> 0x18u;
        goto L_1008f710;
    }
    eax = (eax & 0xffffff00u) | loc_c >> 0x18u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t11 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if (edi != t11)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        esi = arg2;
    }
    else
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        wr8(sp0 + 0xcu, 1u);
        esi = edi;
    }
    goto L_1008f5cf;
L_1008f5b6: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t14 = cow_call_regs(g, COW_IMG(0x101cc510u), eax, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        esi = arg2;
    }
    else
    {
        eax = t14;
        edx = t16;
        g->esi = arg2;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t17 = cow_thiscall(g, COW_IMG(0x1008e180u), eax, 0);
        t18 = g->ecx;
        t19 = g->edx;
        if (t17 != arg2)
        {
            eax = t17;
            ecx = t18;
            edx = t19;
            esi = arg2;
        }
        else
        {
            eax = t17;
            ecx = t18;
            edx = t19;
            wr8(sp0 + 4u, 1u);
            esi = arg2;
        }
    }
    goto L_1008f5cf;
L_1008f5fb: ;
    if ((uint8_t)eax != 0u) goto L_1008f710;
    if ((uint8_t)ebx != 0u) goto L_1008f710;
    if (rd8(sp0 + 0xcu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
        goto L_1008f710;
    }
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    t29 = cow_stdcall(g, COW_IMG(0x10203260u), 2, edi, loc_8);
    eax = t29;
L_1008f697: ;
    if ((uint8_t)eax == 0u) goto L_1008f710;
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
L_1008f62a: ;
    if ((uint8_t)eax != 0u) goto L_1008f710;
    if ((uint8_t)ebx != 0u) goto L_1008f710;
    eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    zf = rd8(sp0 + 0xcu) == 0u;
L_1008f681: ;
    if (!zf) goto L_1008f710;
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    t28 = cow_call_regs(g, COW_IMG(0x102031f0u), eax, g->ecx, g->edx, 0, 3, edi, 0u, 1u);
    eax = t28;
    goto L_1008f697;
L_1008f642: ;
    if ((uint8_t)eax != 0u) goto L_1008f710;
    if ((uint8_t)ebx != 0u) goto L_1008f710;
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    t27 = cow_stdcall(g, COW_IMG(0x10203260u), 2, edi, loc_8);
    if ((uint8_t)t27 == 0u)
    {
        eax = t27;
        goto L_1008f710;
    }
    eax = t27;
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
L_1008f677: ;
    if ((uint8_t)eax != 0u) goto L_1008f710;
    zf = (uint8_t)ebx == 0u;
    goto L_1008f681;
L_1008f6a7: ;
    if ((uint8_t)eax != 0u) goto L_1008f710;
    if ((uint8_t)ebx != 0u) goto L_1008f710;
    if (rd8(sp0 + 0xcu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
        goto L_1008f6c3;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
L_1008f6c3: ;
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
        goto L_1008f710;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
L_1008f6d7: ;
    if ((uint8_t)ebx != 0u) goto L_1008f710;
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    t26 = cow_stdcall(g, COW_IMG(0x10203260u), 2, edi, loc_8);
    if ((uint8_t)t26 == 0u)
    {
        eax = t26;
        goto L_1008f710;
    }
    eax = t26;
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
L_1008f6fc: ;
    if ((uint8_t)eax != 0u) goto L_1008f710;
    if ((uint8_t)ebx == 0u) goto L_1008f710;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | 1u;
L_1008f710: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008f500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008f500(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
