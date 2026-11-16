/* f_0x10297fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_10297fb0(Guest* g)
{
    double d10;
    double d12;
    double d13;
    double d16;
    double d20;
    double d21;
    double d23;
    double d26;
    double d6;
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
    uint32_t loc_20;
    int64_t q8;
    uint32_t t1;
    uint32_t t11;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (rd32(sp0 + 0x18u) != 0u)
    {
        eax = rd32(rd32(sp0 + 0x14u));
        ecx = rd32(sp0 + 0x14u) + 4u;
        edx = rd32(sp0 + 0x18u);
        goto L_10298030;
    }
    t1 = rd32(rd32(sp0 + 0x1cu));
    wr32(sp0 - 0xcu, t1);
    t2 = rd32(rd32(sp0 + 0x1cu) + 4u);
    wr32(sp0 - 8u, t2);
    t3 = rd32(rd32(sp0 + 0x1cu) + 8u);
    wr32(sp0 - 4u, t3);
    if ((int32_t)rd32(sp0 + 0xcu) <= 0)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_102981c4;
    }
    eax = t3;
    edx = t2;
    ebx = rd32(sp0 + 0xcu);
    esi = 0u;
    edi = arg2;
L_10297ff8: ;
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x28u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_cdecl(g, COW_IMG(0x10274890u), 2, edi, sp0 - 0xcu);
    t5 = g->edx;
    d6 = cow_take_float(g);
    if (!(d6 <= (double)rdf32(COW_IMG(0x103295d8u))))
    {
        edx = t5;
        eax = 0u;
    }
    else
    {
        edx = t5;
        eax = 1u;
    }
    wr32(arg1 + esi * 4u, eax);
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        esi = esi + 1u;
        edi = edi + 0xcu;
        goto L_10297ff8;
    }
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return;
L_10298030: ;
    if (eax == 0u)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
    }
    else
    {
        wr32(sp0 - 0x10u, eax);
        ebp = 0u;
        edi = rd32(sp0 + 0x1cu);
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        loc_10 = eax;
L_1029804a: ;
        t7 = rd32(ecx);
        wr32(sp0 + 0x1cu, t7);
        wr32(sp0 + 0x14u, ecx + 4u);
        if ((int32_t)t7 <= 0)
        {
            ecx = ecx + 4u;
            esi = t7;
            goto L_1029810a;
        }
        ecx = ecx + 4u;
        esi = t7;
        q8 = (int64_t)cow_muls(0x55555556u, esi);
        if ((int32_t)(cow_qhi(q8) + (cow_qhi(q8) >> 0x1fu)) <= 0)
        {
            edx = cow_qhi(q8) + (cow_qhi(q8) >> 0x1fu);
            goto L_102981ae;
        }
        edx = cow_qhi(q8) + (cow_qhi(q8) >> 0x1fu);
        wr32(sp0 + 0xcu, edx);
        t9 = arg2 + ebp * 0xcu;
        wr32(sp0 + 0x18u, t9);
        esi = ecx;
L_1029808a: ;
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        d10 = (double)(float)fr(g, (double)rdf32(arg4 + rd32(esi) * 0xcu) - (double)rdf32(edi));
        wrf32(sp0 - 0xcu, (float)d10);
        t11 = rd32(sp0 + 0x18u);
        wr32(sp0 - 0x28u, t11);
        d12 = (double)(float)fr(g, (double)rdf32(arg4 + rd32(esi) * 0xcu + 4u) - (double)rdf32(edi + 4u));
        wrf32(sp0 - 8u, (float)d12);
        d13 = (double)(float)fr(g, (double)rdf32(arg4 + rd32(esi) * 0xcu + 8u) - (double)rdf32(edi + 8u));
        wrf32(sp0 - 4u, (float)d13);
        g->eax = rd32(esi) * 3u;
        t14 = rd32(esi);
        g->esp = sp0 - 0x20u;
        t15 = cow_cdecl(g, COW_IMG(0x10274890u), 2, t11, sp0 - 0xcu);
        d16 = cow_take_float(g);
        if (!(d16 <= (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = 0u;
        }
        else
        {
            eax = 1u;
        }
        t17 = rd32(sp0 + 0x18u);
        wr32(arg1 + ebp * 4u, eax);
        t18 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0x18u, t17 + 0xcu);
        wr32(sp0 + 0xcu, t18 - 1u);
        if (t18 != 1u)
        {
            ebp = ebp + 1u;
            esi = esi + 0xcu;
            goto L_1029808a;
        }
        edx = t17 + 0xcu;
        ebp = ebp + 1u;
        ecx = rd32(sp0 + 0x14u);
L_102981aa: ;
        esi = rd32(sp0 + 0x1cu);
L_102981ae: ;
        t30 = ecx + esi * 4u;
        wr32(sp0 + 0x14u, t30);
        wr32(sp0 - 0x10u, loc_10 - 1u);
        if (loc_10 != 1u)
        {
            loc_10 = loc_10 - 1u;
            goto L_10298046;
        }
    }
L_102981c4: ;
    g->ebx = loc_14;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_18;
    return;
L_10298046: ;
    ecx = rd32(sp0 + 0x14u);
    goto L_1029804a;
L_1029810a: ;
    wr32(sp0 + 0x1cu, -esi);
    if ((int32_t)(-esi - 2u) > 0)
    {
        t19 = arg2 + ebp * 0xcu;
        wr32(sp0 + 0x18u, t19);
        esi = 0u;
L_1029812e: ;
        d20 = (double)(float)fr(g, (double)rdf32(arg4 + rd32(ecx + esi * 4u) * 0xcu) - (double)rdf32(edi));
        wrf32(sp0 - 0xcu, (float)d20);
        d21 = (double)(float)fr(g, (double)rdf32(arg4 + rd32(ecx + esi * 4u) * 0xcu + 4u) - (double)rdf32(edi + 4u));
        wrf32(sp0 - 8u, (float)d21);
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        t22 = rd32(sp0 + 0x18u);
        wr32(sp0 - 0x28u, t22);
        d23 = (double)(float)fr(g, (double)rdf32(arg4 + rd32(ecx + esi * 4u) * 0xcu + 8u) - (double)rdf32(edi + 8u));
        wrf32(sp0 - 4u, (float)d23);
        g->eax = rd32(ecx + esi * 4u) * 3u;
        t24 = rd32(ecx + esi * 4u);
        g->esp = sp0 - 0x20u;
        t25 = cow_cdecl(g, COW_IMG(0x10274890u), 2, t22, sp0 - 0xcu);
        d26 = cow_take_float(g);
        if (!(d26 <= (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = 0u;
        }
        else
        {
            eax = 1u;
        }
        t27 = rd32(sp0 + 0x1cu);
        wr32(arg1 + ebp * 4u, eax);
        t28 = rd32(sp0 + 0x18u) + 0xcu;
        t29 = rd32(sp0 + 0x14u);
        wr32(sp0 + 0x18u, t28);
        if ((int32_t)(esi + 1u) < (int32_t)(t27 - 2u))
        {
            ecx = t29;
            ebp = ebp + 1u;
            esi = esi + 1u;
            goto L_1029812e;
        }
        ecx = t29;
        edx = t27;
        ebp = ebp + 1u;
    }
    goto L_102981aa;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10297fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10297fb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
