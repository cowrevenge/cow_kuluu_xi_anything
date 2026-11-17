/* f_0x10292dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10292dd0(Guest* g)
{
    double d12;
    double d13;
    double d17;
    double d18;
    double d22;
    double d23;
    double d27;
    double d28;
    double d31;
    double d33;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
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

    if ((int32_t)arg2 < 0)
    {
        ebx = rd32(sp0 + 4u);
        goto L_10292f6a;
    }
    ebx = rd32(sp0 + 4u);
    if ((int32_t)arg2 >= (int32_t)rd32(ebx + 0x24u)) goto L_10292f6a;
    if (rd32(ebx + 0x2cu) == 0u) goto L_10292e00;
    eax = rd32(ebx + 0x2cu);
    return eax + rd32(ebx + 0x1cu) * arg2 * 4u;
L_10292e00: ;
    if (arg2 != 0u) goto L_10292e33;
    if ((int32_t)rd32(ebx + 0x1cu) <= 0) goto L_10292e25;
    eax = 0u;
L_10292e0d: ;
    t1 = rd32(rd32(eax * 4u + rd32(ebx + 0x34u)));
    wr32(eax * 4u + rd32(ebx + 0x38u), t1);
    if ((int32_t)(eax + 1u) < (int32_t)rd32(ebx + 0x1cu))
    {
        eax = eax + 1u;
        goto L_10292e0d;
    }
L_10292e25: ;
    t2 = rd32(ebx + 0x38u);
    wr32(ebx + 0x48u, 0u);
    return t2;
L_10292e33: ;
    if (arg2 != rd32(ebx + 0x48u))
    {
        eax = rd32(ebx + 0x48u);
        goto L_10292e41;
    }
    return rd32(ebx + 0x38u);
L_10292e41: ;
    if (arg2 != eax - 1u) goto L_10292e4f;
    return rd32(ebx + 0x3cu);
L_10292e4f: ;
    if ((int32_t)arg2 < (int32_t)eax)
    {
        if ((int32_t)rd32(ebx + 0x1cu) <= 0) goto L_10292e74;
        eax = 0u;
L_10292e5c: ;
        t3 = rd32(rd32(eax * 4u + rd32(ebx + 0x34u)));
        wr32(eax * 4u + rd32(ebx + 0x38u), t3);
        if ((int32_t)(eax + 1u) < (int32_t)rd32(ebx + 0x1cu))
        {
            eax = eax + 1u;
            goto L_10292e5c;
        }
L_10292e74: ;
        eax = 0u;
    }
    if ((int32_t)eax >= (int32_t)arg2)
    {
        loc_4 = self;
    }
    else
    {
        ebp = eax;
        loc_4 = self;
L_10292e82: ;
        t4 = rd32(ebx + 0x44u);
        t5 = rd32(ebx + 0x38u);
        t6 = rd32(ebx + 0x3cu);
        esi = t5;
        edi = t6;
        ecx = t4 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t4 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        t7 = rd32(ebx + 0x1cu);
        t8 = rd32(ebx + 0x38u);
        t9 = rd32(ebx + 0x34u);
        wr32(sp0 + 4u, 0u);
        if ((int32_t)(uint32_t)((int32_t)(t7 + ((uint32_t)((int32_t)t7 >> 0x1fu) & 3u)) >> 2u) <= 0)
        {
            ecx = 0u;
        }
        else
        {
            eax = (uint32_t)((int32_t)(t7 + ((uint32_t)((int32_t)t7 >> 0x1fu) & 3u)) >> 2u);
            edx = (uint32_t)((int32_t)t7 >> 0x1fu) & 3u;
            esi = t8;
            edi = t9;
            wr32(sp0 + 4u, eax * 4u);
            ecx = eax * 4u;
            loc_4 = eax;
L_10292ec4: ;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(edi) + 0x14u), ecx, 0);
            t10 = g->ecx;
            t11 = g->edx;
            d12 = cow_take_float(g);
            d13 = fr(g, d12 + (double)rdf32(esi));
            wrf32(esi, (float)d13);
            t14 = rd32(edi + 4u);
            g->edx = t11;
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, rd32(t14 + 0x14u), t10, 0);
            t15 = g->ecx;
            t16 = g->edx;
            d17 = cow_take_float(g);
            d18 = fr(g, d17 + (double)rdf32(esi + 4u));
            wrf32(esi + 4u, (float)d18);
            t19 = rd32(edi + 8u);
            g->edx = t16;
            g->esp = sp0 - 0x2cu;
            cow_thiscall(g, rd32(t19 + 0x14u), t15, 0);
            t20 = g->ecx;
            t21 = g->edx;
            d22 = cow_take_float(g);
            d23 = fr(g, d22 + (double)rdf32(esi + 8u));
            wrf32(esi + 8u, (float)d23);
            t24 = rd32(edi + 0xcu);
            g->edx = t21;
            g->esp = sp0 - 0x34u;
            cow_thiscall(g, rd32(t24 + 0x14u), t20, 0);
            t25 = g->ecx;
            t26 = g->edx;
            d27 = cow_take_float(g);
            d28 = fr(g, d27 + (double)rdf32(esi + 0xcu));
            wrf32(esi + 0xcu, (float)d28);
            if (loc_4 != 1u)
            {
                ecx = t25;
                edx = t26;
                esi = esi + 0x10u;
                edi = edi + 0x10u;
                loc_4 = loc_4 - 1u;
                goto L_10292ec4;
            }
            loc_4 = loc_4 - 1u;
            ecx = rd32(sp0 + 4u);
        }
        if ((int32_t)ecx < (int32_t)rd32(ebx + 0x1cu))
        {
L_10292f29: ;
            t29 = rd32(ecx * 4u + rd32(ebx + 0x34u));
            t30 = rd32(ebx + 0x38u);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(t29 + 0x14u), ecx, 0);
            d31 = cow_take_float(g);
            t32 = rd32(sp0 + 4u) + 1u;
            d33 = fr(g, d31 + (double)rdf32(ecx * 4u + t30));
            wr32(sp0 + 4u, t32);
            wrf32(ecx * 4u + t30, (float)d33);
            if ((int32_t)t32 < (int32_t)rd32(ebx + 0x1cu)) goto L_10292f25;
        }
        if ((int32_t)(ebp + 1u) < (int32_t)arg2)
        {
            ebp = ebp + 1u;
            goto L_10292e82;
        }
    }
    t34 = rd32(ebx + 0x38u);
    wr32(ebx + 0x48u, arg2);
    return t34;
L_10292f25: ;
    ecx = rd32(sp0 + 4u);
    goto L_10292f29;
L_10292f6a: ;
    g->ebx = ebx;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb254u));
    t35 = g->ecx;
    t36 = g->edx;
    t37 = rd32(ebx + 0x24u);
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb414u), arg2);
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292dd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
