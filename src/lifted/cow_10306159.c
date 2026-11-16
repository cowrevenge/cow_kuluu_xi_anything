/* f_0x10306159 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10306159(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
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
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x1a0u) + 8u);
    t2 = rd32(rd32(sp0 + 4u) + 0x5cu);
    t3 = rd32(rd32(rd32(sp0 + 4u) + 0x1a0u) + 0xcu);
    t4 = rd32(rd32(rd32(sp0 + 4u) + 0x1a0u) + 0x10u);
    t5 = rd32(rd32(rd32(sp0 + 4u) + 0x1a0u) + 0x14u);
    if (rd8(COW_IMG(0x103ce448u)) == 0u)
    {
        esi = rd32(rd32(sp0 + 4u) + 0x11cu);
        edi = t2;
        loc_20 = t1;
        loc_2c = t3;
        loc_14 = t2;
        loc_28 = t4;
        loc_24 = t5;
        goto L_1030629b;
    }
    eax = t5;
    ebx = t2 & 0xfffffff8u;
    esi = rd32(rd32(sp0 + 4u) + 0x11cu);
    loc_20 = t1;
    loc_2c = t3;
    loc_14 = t2;
    loc_38 = t2 & 0xfffffff8u;
    loc_28 = t4;
    loc_24 = t5;
    if ((int32_t)(arg5 - 1u) < 0)
    {
        edx = in_edx;
    }
    else
    {
        eax = arg3 << 2u;
        loc_34 = ebx * 3u;
        loc_1c = arg5;
L_103061c3: ;
        t6 = rd32(sp0 + 0x10u);
        t7 = rd32(eax + rd32(arg2 + 8u));
        t8 = rd32(eax + rd32(arg2));
        t9 = rd32(eax + rd32(arg2 + 4u));
        wr32(sp0 + 0x10u, t6 + 4u);
        wr32(sp0 + 4u, t9);
        t10 = rd32(sp0 + 4u);
        g->eax = t6;
        g->edx = t8;
        t11 = rd32(t6);
        g->esp = sp0 - 0x3cu;
        t12 = cow_cdecl(g, COW_IMG(0x10305db3u), 7, ebx, t8, t10, t7, t11, in_edi, in_esi);
        t13 = g->edx;
        if (ebx >= loc_14)
        {
            edx = t13;
            loc_30 = eax + 4u;
            eax = t12;
        }
        else
        {
            edi = loc_34 + t11;
            loc_30 = eax + 4u;
            loc_8 = t8;
            loc_c = t7;
            t14 = loc_8 - rd32(sp0 + 4u);
            t15 = loc_c - rd32(sp0 + 4u);
            eax = ebx + rd32(sp0 + 4u);
            ecx = t15;
            loc_8 = t14;
            loc_c = t15;
            loc_18 = loc_14 - ebx;
L_1030622d: ;
            t16 = rd8(eax + loc_8);
            t17 = rd8(eax + ecx);
            t18 = rd32(loc_20 + rd8(eax + ecx) * 4u);
            wr32(sp0 + 4u, t16);
            t19 = rd8(eax);
            wr8(edi, rd8(esi + t18 + rd32(sp0 + 4u)));
            wr8(edi + 1u, rd8(esi + rd32(sp0 + 4u) + (uint32_t)((int32_t)(rd32(loc_24 + t19 * 4u) + rd32(loc_28 + t17 * 4u)) >> 0x10u)));
            wr8(edi + 2u, rd8(esi + rd32(sp0 + 4u) + rd32(loc_2c + t19 * 4u)));
            if (loc_18 != 1u)
            {
                eax = eax + 1u;
                edi = edi + 3u;
                loc_18 = loc_18 - 1u;
                goto L_1030622a;
            }
            eax = eax + 1u;
            edx = loc_2c;
            ebx = loc_38;
        }
        if (loc_1c != 1u)
        {
            loc_1c = loc_1c - 1u;
            goto L_103061c0;
        }
    }
    rt_fatal(g, COW_IMG(0x10306294u), "unimplemented: emms ");
    return 0;
L_103061c0: ;
    eax = loc_30;
    goto L_103061c3;
L_1030622a: ;
    ecx = loc_c;
    goto L_1030622d;
L_1030629b: ;
    if ((int32_t)(arg5 - 1u) < 0)
    {
        eax = arg5 - 1u;
        edx = in_edx;
    }
    else
    {
        edx = arg3 << 2u;
        loc_18 = arg5;
L_103062b2: ;
        t20 = rd32(edx + rd32(arg2));
        t21 = rd32(edx + rd32(arg2 + 4u));
        wr32(sp0 + 4u, t21);
        t22 = rd32(edx + rd32(arg2 + 8u));
        t23 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, t23 + 4u);
        if (edi == 0u)
        {
            eax = rd32(t23);
            edx = edx + 4u;
        }
        else
        {
            eax = rd32(t23);
            loc_8 = t20;
            loc_c = t22;
            loc_34 = edx + 4u;
            t24 = loc_8 - rd32(sp0 + 4u);
            t25 = loc_c - rd32(sp0 + 4u);
            ecx = rd32(sp0 + 4u);
            edx = t25;
            loc_8 = t24;
            loc_c = t25;
            loc_1c = edi;
L_103062fe: ;
            t26 = rd8(ecx + edx);
            t27 = rd8(ecx + loc_8);
            t28 = rd8(ecx);
            wr8(eax, rd8(esi + t27 + rd32(loc_20 + t26 * 4u)));
            wr32(sp0 + 4u, t27);
            wr8(eax + 1u, rd8(esi + rd32(sp0 + 4u) + (uint32_t)((int32_t)(rd32(loc_24 + t28 * 4u) + rd32(loc_28 + t26 * 4u)) >> 0x10u)));
            wr8(eax + 2u, rd8(esi + rd32(sp0 + 4u) + rd32(loc_2c + t28 * 4u)));
            if (loc_1c != 1u)
            {
                eax = eax + 3u;
                ecx = ecx + 1u;
                loc_1c = loc_1c - 1u;
                goto L_103062fb;
            }
            eax = eax + 3u;
            edx = loc_34;
            edi = loc_14;
        }
        if (loc_18 != 1u)
        {
            loc_18 = loc_18 - 1u;
            goto L_103062b2;
        }
    }
    g->edx = edx;
    return eax;
L_103062fb: ;
    edx = loc_c;
    goto L_103062fe;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10306159(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10306159(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
