/* f_0x10064510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10064510(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_34;
    uint32_t loc_4;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) != 0x5fu)
    {
        loc_8 = rd32(sp0 - 8u) & 0xffffff00u;
        loc_1c = 0u;
    }
    else
    {
        loc_8 = (rd32(sp0 - 8u) & 0xffffff00u) | 1u;
        loc_1c = 1u;
    }
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t1 = ~ecx - 1u;
    if ((int32_t)t1 <= 0)
    {
        ecx = t1;
        ebp = t1;
        loc_8 = loc_8 & 0xffff00ffu;
        goto L_10064565;
    }
    ecx = t1;
    ebp = t1;
    loc_8 = loc_8 & 0xffff00ffu;
L_1006455a: ;
    if (rd8(arg1 + eax) == 0x40u) goto L_10064565;
    if ((int32_t)(eax + 1u) < (int32_t)ebp)
    {
        eax = eax + 1u;
        goto L_1006455a;
    }
    eax = eax + 1u;
L_10064565: ;
    if (eax == ebp)
    {
        edx = in_edx;
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
        wr8(arg1 + eax, 0u);
        t2 = arg1 + eax + 1u;
        g->ecx = ecx;
        g->edx = t2;
        g->esp = sp0 - 0x30u;
        t3 = cow_call_regs(g, COW_IMG(0x10064410u), eax + 1u, g->ecx, g->edx, 1, 1, t2);
        t4 = g->ecx;
        t5 = g->edx;
        if ((uint8_t)t3 == 0u)
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            loc_8 = (loc_8 & 0xffff00ffu) | 0x100u;
            loc_34 = t5;
            goto L_10064593;
        }
        ecx = t4;
        edx = t5;
        loc_8 = (loc_8 & 0xffff00ffu) | 0x100u;
        loc_34 = t5;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t6 = cow_thiscall_cdecl(g, COW_IMG(0x10064490u), ecx, 1, loc_34);
        t7 = g->ecx;
        t8 = g->edx;
        d9 = cow_take_float(g);
        g->ecx = t7;
        g->edx = t8;
        fpush(g, d9);
        t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
L_100645a8: ;
        loc_4 = eax;
    }
L_100645ac: ;
    if (rd32(COW_IMG(0x103539a8u)) == 0u)
    {
        eax = 0u;
    }
    else
    {
        edi = rd32(COW_IMG(0x103539a8u));
        ebx = COW_IMG(0x103539a8u);
        loc_20 = 0u;
        loc_14 = COW_IMG(0x103539a8u);
L_100645c5: ;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t19 = ~ecx - 1u;
        if ((int32_t)t19 <= 0)
        {
            ecx = t19;
            ebp = t19;
            esi = 0u;
        }
        else
        {
            ebp = t19;
            ecx = arg1;
            esi = 0u;
            edi = arg1 + loc_1c;
L_100645e2: ;
            t20 = (uint32_t)(int8_t)rd8(edi + esi);
            g->esp = sp0 - 0x30u;
            t21 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, ecx, t20, 1, 1, t20);
            if (t21 != (uint32_t)(int8_t)rd8(esi + rd32(loc_14)))
            {
                ecx = (uint32_t)(int8_t)rd8(esi + rd32(loc_14));
                edx = rd32(loc_14);
                goto L_10064602;
            }
            ecx = (uint32_t)(int8_t)rd8(esi + rd32(loc_14));
            edx = rd32(loc_14);
            if ((int32_t)(esi + 1u) < (int32_t)ebp)
            {
                esi = esi + 1u;
                goto L_100645e2;
            }
            esi = esi + 1u;
        }
L_10064602: ;
        if (esi == ebp) goto L_1006461d;
        if (rd32(ebx + 8u) != 0u)
        {
            edx = loc_20 + 1u;
            edi = rd32(ebx + 8u);
            loc_20 = loc_20 + 1u;
            loc_14 = ebx + 8u;
            ebx = ebx + 8u;
            goto L_100645c5;
        }
        edx = loc_20 + 1u;
        loc_20 = loc_20 + 1u;
L_1006461d: ;
        eax = loc_20;
    }
    if (rd32(COW_IMG(0x103539a8u) + eax * 8u) != 0u)
    {
        ecx = rd32(COW_IMG(0x103539a8u) + eax * 8u);
        goto L_10064640;
    }
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_10064593: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t13 = cow_call_regs(g, COW_IMG(0x10064440u), eax, g->ecx, g->edx, 1, 1, loc_34);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        ecx = t14;
        edx = t15;
        loc_4 = rd32(sp0 - 4u);
        goto L_100645ac;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t16 = cow_cdecl(g, COW_IMG(0x100644a0u), 1, edx);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    goto L_100645a8;
L_10064640: ;
    t22 = rd32(COW_IMG(0x103539acu) + eax * 8u);
    if ((int32_t)rd32(COW_IMG(0x103539acu) + eax * 8u) < 11)
    {
        edi = t22;
        loc_10 = t22;
        goto L_1006466a;
    }
    edi = t22;
    loc_10 = t22;
    if ((int32_t)edi > 15) goto L_1006466a;
    t23 = arg1 + ebp + loc_1c;
    g->eax = eax;
    g->edx = loc_1c;
    g->esp = sp0 - 0x30u;
    t24 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, t23);
    t25 = g->ecx;
    t26 = g->edx;
    ecx = t25;
    edx = t26;
    ebx = t24;
L_1006466c: ;
    t27 = rd32(self + 4u) + 1u;
    wr32(self + 4u, t27);
    g->esp = sp0 - 0x28u;
    t28 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t27 << 4u, in_edi, in_esi);
    if (t28 == 0u)
    {
        eax = t28;
        ebp = t28;
        goto L_100646ff;
    }
    ebp = t28;
    if (rd32(self + 4u) == 1u) goto L_100646ea;
    ecx = rd32(self + 4u);
    t29 = (ecx << 4u) - 0x10u;
    t30 = rd32(self + 8u);
    esi = t30;
    edi = ebp;
    ecx = t29 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t29 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t31 = rd32(self + 4u);
    wr32(ebp + t31 * 0x10u - 0x10u, loc_10);
    wr32(ebp + t31 * 0x10u - 0xcu, ebx);
    wr32(ebp + t31 * 0x10u - 8u, loc_8);
    wr32(ebp + t31 * 0x10u - 4u, loc_4);
    t32 = rd32(self + 8u);
    g->eax = self;
    g->esp = sp0 - 0x30u;
    t33 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t32);
    wr32(self + 8u, ebp);
    g->ebx = in_ebx;
    return (t33 & 0xffffff00u) | 1u;
L_1006466a: ;
    ebx = 0u;
    goto L_1006466c;
L_100646ea: ;
    wr32(ebp, edi);
    wr32(ebp + 4u, ebx);
    wr32(ebp + 8u, loc_8);
    wr32(ebp + 0xcu, loc_4);
    eax = ebp;
L_100646ff: ;
    wr32(self + 8u, ebp);
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10064510(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
