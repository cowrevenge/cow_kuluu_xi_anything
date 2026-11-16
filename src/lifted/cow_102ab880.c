/* f_0x102ab880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102ab880(Guest* g)
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
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    int64_t q9;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    wr32(sp0 - 0x20u, 2u);
    t1 = rd32(rd32(arg1 + 0x34u) + 0x14u);
    wr32(sp0 - 0x28u, t1);
    t2 = rd32(arg1 + 0x44u);
    wr32(sp0 - 0x10u, t2);
    if (rd32(arg1 + 0x58u) != 0u)
    {
        eax = t2;
        ecx = rd32(arg1 + 0x58u);
        edx = in_edx;
        ebp = rd32(arg1 + 0x48u);
        edi = t1;
        loc_28 = t1;
        loc_10 = t2;
    }
    else
    {
        eax = t2;
        ecx = rd32(arg1 + 0x58u);
        ebp = rd32(arg1 + 0x48u);
        edi = t1;
        loc_28 = t1;
        loc_10 = t2;
        wr32(sp0 - 0x44u, 0x386u);
        wr32(sp0 - 0x48u, COW_IMG(0x103be980u));
        wr32(sp0 - 0x4cu, 0xcu);
        wr32(sp0 - 0x50u, eax);
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        t3 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 0xcu, COW_IMG(0x103be980u), 0x386u, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(arg1 + 0x58u, t3);
        eax = rd32(sp0 - 0x10u);
        ecx = t4;
        edx = t5;
    }
    wr32(sp0 - 0x44u, 0x387u);
    wr32(sp0 - 0x48u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t6 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 4u, COW_IMG(0x103be980u), 0x387u, in_edi);
    t7 = g->edx;
    wr32(sp0 - 0x54u, 0x390u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x5cu, edi * 4u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x1cu, t6);
    t8 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, edi * 4u, COW_IMG(0x103be980u), 0x390u, rd32(sp0 - 0x50u), 4u, COW_IMG(0x103be980u), 0x387u, in_edi);
    wr32(sp0 - 0x30u, t8);
    if ((int32_t)edi <= 0)
    {
        edx = t8;
        loc_30 = t8;
    }
    else
    {
        edx = t8;
        loc_30 = t8;
        edi = edx;
        eax = 0u;
        ecx = edi;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        edi = rd32(sp0 - 0x28u);
    }
    if (rd32(ebp) != 0u)
    {
        eax = rd32(ebp);
        ebp = ebp + 4u;
        wr32(sp0 - 0x14u, eax);
        esi = 0u;
        loc_14 = eax;
L_102ab92c: ;
        wr32(sp0 - 0x2cu, rd32(ebp));
        wr32(sp0 - 0x24u, ebp + 4u);
        if ((int32_t)rd32(ebp) <= 0)
        {
            ecx = rd32(ebp);
            loc_24 = ebp + 4u;
            ebp = ebp + 4u;
            goto L_102ab9ad;
        }
        ecx = rd32(ebp);
        loc_2c = rd32(ebp);
        loc_24 = ebp + 4u;
        ebp = ebp + 4u;
        q9 = (int64_t)cow_muls(0x55555556u, ecx);
        if ((int32_t)(cow_qhi(q9) + (cow_qhi(q9) >> 0x1fu)) <= 0) goto L_102aba26;
        edx = cow_qhi(q9) + (cow_qhi(q9) >> 0x1fu);
        wr32(sp0 - 0x18u, edx);
        ebx = esi * 0xcu;
        edi = ebp;
        ebp = loc_20;
        loc_18 = edx;
L_102ab964: ;
        wr32(esi * 4u + rd32(sp0 - 0x1cu), ebp);
        eax = 0u;
L_102ab96d: ;
        wr32(eax * 4u + sp0 - 0xcu, rd32(edi));
        if ((int32_t)(eax + 1u) < 3)
        {
            eax = eax + 1u;
            edi = edi + 4u;
            goto L_102ab96d;
        }
        edi = edi + 4u;
        wr32(sp0 - 0x44u, loc_30);
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, esi);
        t10 = ebx + rd32(arg1 + 0x58u);
        wr32(sp0 - 0x50u, t10);
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102abdc0u), 4, t10, esi, sp0 - 0xcu, loc_30);
        t11 = rd32(sp0 - 0x18u) - 1u;
        wr32(sp0 - 0x18u, t11);
        if (rd32(sp0 - 0x18u) != 1u)
        {
            ebx = ebx + 0xcu;
            ebp = ebp + 3u;
            esi = esi + 1u;
            loc_18 = t11;
            goto L_102ab964;
        }
        esi = esi + 1u;
L_102aba16: ;
        ebp = rd32(sp0 - 0x24u);
L_102aba1e: ;
        ecx = loc_2c;
        edi = rd32(sp0 - 0x28u);
L_102aba26: ;
        t14 = ebp + ecx * 4u;
        wr32(sp0 - 0x24u, t14);
        t15 = ecx + loc_20 + 1u;
        wr32(sp0 - 0x20u, t15);
        wr32(sp0 - 0x14u, loc_14 - 1u);
        if (loc_14 != 1u)
        {
            edx = t14;
            loc_14 = loc_14 - 1u;
            loc_24 = t14;
            loc_20 = t15;
            goto L_102ab928;
        }
    }
    if ((int32_t)edi <= 0) goto L_102aba8c;
    ebp = 0u;
L_102aba4f: ;
    if (rd32(ebp * 4u + loc_30) == 0u) goto L_102aba87;
    esi = rd32(ebp * 4u + loc_30);
L_102aba5a: ;
    if (rd32(esi + 4u) != 0xffffffffu)
    {
        eax = rd32(esi + 4u);
        t16 = rd32(arg1 + 0x48u);
        wr32(sp0 - 0x44u, t16);
        t17 = rd32(arg1 + 0x58u);
        wr32(sp0 - 0x48u, t17);
        t18 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x4cu, t18);
        wr32(sp0 - 0x50u, eax);
        wr32(sp0 - 0x54u, rd32(esi));
        t19 = rd32(esi + 8u);
        wr32(sp0 - 0x58u, t19);
        wr32(sp0 - 0x5cu, ebp);
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102abcf0u), 7, ebp, t19, rd32(esi), eax, t18, t17, t16);
    }
    if (rd32(esi + 0xcu) != 0u)
    {
        esi = rd32(esi + 0xcu);
        goto L_102aba5a;
    }
L_102aba87: ;
    if ((int32_t)(ebp + 1u) < (int32_t)edi)
    {
        ebp = ebp + 1u;
        goto L_102aba4f;
    }
L_102aba8c: ;
    t20 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x44u, t20);
    t21 = rd32(arg1 + 0x58u);
    wr32(sp0 - 0x48u, t21);
    t22 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x4cu, t22);
    t23 = rd32(arg1 + 0x48u);
    wr32(sp0 - 0x50u, t23);
    g->ebp = t22;
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102abb10u), 4, t23, t22, t21, t20);
    t24 = g->ecx;
    t25 = g->edx;
    if ((int32_t)edi <= 0)
    {
        ecx = t24;
        ebp = t22;
        goto L_102abad8;
    }
    edx = t25;
    ebx = 0u;
    ebp = t22;
L_102abaac: ;
    if (rd32(ebx * 4u + rd32(sp0 - 0x30u)) == 0u)
    {
        ecx = rd32(sp0 - 0x30u);
        goto L_102abad3;
    }
    eax = rd32(ebx * 4u + rd32(sp0 - 0x30u));
    ecx = rd32(sp0 - 0x30u);
L_102abab7: ;
    wr32(sp0 - 0x44u, 0x3c1u);
    wr32(sp0 - 0x48u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x4cu, eax);
    g->ecx = ecx;
    g->edx = edx;
    t26 = rd32(eax + 0xcu);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103be980u), 0x3c1u);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_102abab7;
    }
    ecx = t27;
    edx = t28;
L_102abad3: ;
    if ((int32_t)(ebx + 1u) < (int32_t)edi)
    {
        ebx = ebx + 1u;
        goto L_102abaac;
    }
L_102abad8: ;
    wr32(sp0 - 0x44u, 0x3c5u);
    wr32(sp0 - 0x48u, COW_IMG(0x103be980u));
    t29 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x4cu, t29);
    g->ecx = ecx;
    g->edx = t29;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t29, COW_IMG(0x103be980u), 0x3c5u);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x50u, 0x3c6u);
    wr32(sp0 - 0x54u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x58u, ebp);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103be980u), 0x3c6u);
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    return;
L_102ab928: ;
    ebp = loc_24;
    goto L_102ab92c;
L_102ab9ad: ;
    wr32(sp0 - 0x2cu, -ecx);
    t12 = -ecx - 2u;
    wr32(sp0 - 0x18u, t12);
    if ((int32_t)(-ecx - 2u) <= 0)
    {
        loc_2c = -ecx;
        goto L_102aba1e;
    }
    loc_2c = -ecx;
    loc_18 = t12;
    ebx = esi * 0xcu;
    edi = 0u;
L_102ab9c8: ;
    wr32(esi * 4u + rd32(sp0 - 0x1cu), edi + loc_20);
    eax = 0u;
    ecx = ebp;
L_102ab9da: ;
    wr32(eax * 4u + sp0 - 0xcu, rd32(ecx));
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_102ab9da;
    }
    wr32(sp0 - 0x44u, loc_30);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    wr32(sp0 - 0x4cu, esi);
    t13 = ebx + rd32(arg1 + 0x58u);
    wr32(sp0 - 0x50u, t13);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102abdc0u), 4, t13, esi, sp0 - 0xcu, loc_30);
    if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 - 0x18u))
    {
        ebx = ebx + 0xcu;
        ebp = ebp + 4u;
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_102ab9c8;
    }
    esi = esi + 1u;
    goto L_102aba16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ab880(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ab880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
