/* f_0x102d0ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102d0ed0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(COW_IMG(0x103cc350u)) * 2u;
    t2 = rd32(sp0 + 4u) - 0xc8u;
    t3 = rd32(COW_IMG(0x10344dc8u) + rd32(rd32(sp0 + 0x10u) + 0x100u) * 4u);
    t4 = rd32(sp0 + 0x10u);
    t5 = rd32(rd32(sp0 + 0x10u) + 0x104u);
    wr32(sp0 + 4u, t2);
    if ((int32_t)t5 >= (int32_t)(uint32_t)((int32_t)t3 >> 8u))
    {
        ebx = t4;
        loc_1c = 0x16u;
        loc_8 = t1;
    }
    else
    {
        eax = (uint32_t)((int32_t)t3 >> 8u);
        ebx = t4;
        esi = t5;
        loc_8 = t1;
        wr32(ebx + 0x104u, eax);
        t6 = eax * 3u - esi * 3u + 0x16u;
        loc_1c = t6;
    }
    edi = ebx + 0x110u;
    eax = 0u;
    ecx = 0x10cu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(ebx + 0x120u, 5u);
    wr32(ebx + 0x338u, 7u);
    wr32(ebx + 0x33cu, 3u);
    wr32(ebx + 0x124u, 3u);
    wr32(ebx + 0x108u, 1u);
    wr32(ebx + 0x10cu, 2u);
    edx = 0u;
L_102d0f73: ;
    t7 = rd32(ebx + 0x100u);
    wr32(sp0 + 0x10u, 0u);
    if ((int32_t)rd32(COW_IMG(0x10344dc8u) + t7 * 4u) <= 0) goto L_102d113d;
    loc_4 = edx;
    t8 = ebx + edx * 0x18u + 0x540u;
    ebp = 0u;
    loc_10 = t8;
    loc_14 = ebx + 0xc80u;
L_102d0faa: ;
    if (rd32(loc_14) * 2u < loc_8) goto L_102d110e;
    if ((int32_t)ebp < 1020)
    {
        eax = ebp;
        ecx = loc_10;
        loc_c = loc_10;
        loc_10 = loc_10 + 0x18u;
        loc_18 = edx + 1u;
    }
    else
    {
        ecx = loc_10;
        loc_c = loc_10;
        loc_10 = loc_10 + 0x18u;
        loc_18 = edx + 1u;
        eax = 0x3fcu;
    }
    wr32(ecx + 0x10u, eax);
    t9 = eax * 4u + ebx + 0xc80u;
    g->esp = sp0 - 0x2cu;
    t10 = cow_cdecl(g, COW_IMG(0x102d0e70u), 1, t9);
    if (rd32(ebx + (uint32_t)((int32_t)ebp >> 6u) * 0x20u + ((int32_t)t10 > 30) * 0x218u + 0x128u) != 7u)
    {
        esi = (int32_t)t10 > 30;
        edi = (uint32_t)((int32_t)ebp >> 6u) << 5u;
        ebp = (uint32_t)((int32_t)ebp >> 6u);
        goto L_102d1073;
    }
    eax = t10;
    esi = (int32_t)t10 > 30;
    edi = (uint32_t)((int32_t)ebp >> 6u) << 5u;
    ebp = (uint32_t)((int32_t)ebp >> 6u);
    if (rd32(ebx + edi - esi * 0x218u + 0x340u) != 7u)
    {
        esi = 1u - esi;
        goto L_102d1073;
    }
    esi = 1u - esi;
    g->ebx = ebx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x102d13f0u), 11, 1u - esi, ebp, eax, ebx, in_edi, in_esi, in_ebp, in_ebx, loc_1c, loc_18 - 1u, loc_14);
    if (t11 == 0u)
    {
        loc_10 = loc_10 - 0x18u;
        loc_18 = loc_18 - 1u;
        goto L_102d1106;
    }
    eax = t11;
    esi = 1u - esi;
    loc_10 = loc_10 - 0x18u;
    loc_18 = loc_18 - 1u;
L_102d1077: ;
    if (rd32(ebx + esi * 0x218u + (uint32_t)((int32_t)ebp >> 2u) * 4u + 0x110u) != 0u)
    {
        ecx = ebx + esi * 0x218u + 0x110u;
    }
    else
    {
        ecx = ebx + esi * 0x218u + 0x110u;
        edx = ebx + esi * 0x218u + (uint32_t)((int32_t)ebp >> 2u) * 4u + 0x110u;
        wr32(edx, 1u);
        loc_1c = loc_1c + 0xcu;
    }
    wr32(ebp * 0x20u + ecx + rd32(ecx + edi + 0x18u) * 4u + 0x1cu, eax);
    t12 = rd32(ecx + edi + 0x18u) + 1u;
    wr32(ecx + edi + 0x18u, t12);
    t13 = rd32(ecx + 0x10u);
    t14 = ebx + rd32(eax + 0x10u) * 4u + 0xc80u;
    g->edx = rd32(eax + 0x10u);
    t15 = rd32(eax + 0x10u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102d1200u), 12, t14, eax, t13, 4u, in_edi, in_esi, in_ebp, in_ebx, loc_1c, loc_18, loc_14, loc_10);
    t16 = g->edx;
    t17 = esi * 8u + loc_1c + 0x1cu;
    if ((int32_t)(esi * 8u + loc_1c + 0x1cu) > (int32_t)rd32(sp0 + 4u))
    {
        edx = t16;
        loc_1c = t17;
        goto L_102d113d;
    }
    edx = t16;
    loc_1c = t17;
    if ((int32_t)loc_18 >= 64) goto L_102d113d;
    t18 = rd32(sp0 + 0x10u) + 3u;
    wr32(sp0 + 0x10u, t18);
    loc_14 = loc_14 + 0xcu;
L_102d1106: ;
    edx = loc_18;
    ebp = rd32(sp0 + 0x10u);
L_102d110e: ;
    t19 = rd32(COW_IMG(0x10344dc8u) + rd32(ebx + 0x100u) * 4u);
    wr32(sp0 + 0x10u, ebp + 1u);
    if ((int32_t)(ebp + 1u) < (int32_t)t19)
    {
        ebp = ebp + 1u;
        loc_14 = loc_14 + 4u;
        goto L_102d0faa;
    }
    if (loc_4 != edx) goto L_102d0f73;
L_102d113d: ;
    t20 = rd32(ebx + 0x100u);
    wr32(sp0 + 0x10u, 0u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t20 > 0)
    {
        t21 = COW_IMG(0x10344dccu) - ebx;
        t22 = rd32(sp0 + 8u) - ebx;
        wr32(sp0 + 8u, t22);
        ebp = ebx;
        loc_4 = t21;
L_102d116c: ;
        ecx = rd32(sp0 + 0x10u);
        esi = 0u;
        edi = ebx + rd32(sp0 + 0x10u) * 0x10u + 0xc80u;
L_102d117d: ;
        g->esp = sp0 - 0x2cu;
        t23 = cow_cdecl(g, COW_IMG(0x102d0e70u), 1, edi);
        t24 = rd32(sp0 + 0x10u);
        wr32(arg3 + t24 * 4u, t23);
        if ((int32_t)esi >= (int32_t)t23)
        {
            ecx = t24;
        }
        else
        {
            eax = t23;
            ecx = t24;
            esi = eax;
        }
        wr32(sp0 + 0x10u, ecx + 1u);
        if ((int32_t)(ecx + 1u) < (int32_t)(uint32_t)((int32_t)rd32(ebp + loc_4) >> 2u))
        {
            ecx = ecx + 1u;
            edx = (uint32_t)((int32_t)rd32(ebp + loc_4) >> 2u);
            edi = edi + 0x10u;
            goto L_102d117d;
        }
        wr32(ebp + 0x80u, esi);
        wr32(ebp, esi != 0u);
        wr32(ebp + rd32(sp0 + 8u), esi * 0x155u);
        t25 = rd32(sp0 + 4u) + 1u;
        t26 = rd32(sp0 + 4u);
        t27 = rd32(ebx + 0x100u);
        wr32(sp0 + 4u, t25);
        if ((int32_t)(t26 + 1u) < (int32_t)t27)
        {
            edx = esi * 0x155u;
            ebp = ebp + 4u;
            goto L_102d116c;
        }
    }
    g->ebx = in_ebx;
    return loc_1c;
L_102d1073: ;
    eax = loc_c;
    goto L_102d1077;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d0ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d0ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
