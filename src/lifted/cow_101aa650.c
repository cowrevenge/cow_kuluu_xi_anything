/* f_0x101aa650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101aa650(Guest* g)
{
    double d1;
    double d11;
    double d2;
    double d32;
    double d37;
    double d42;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_4_f;
    double loc_8_f;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    d1 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
    d2 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329a18u)));
    if (arg1 - 9u > 0x8du)
    {
        edx = in_edx;
        goto L_101aa8a3;
    }
    loc_4_f = d1;
    loc_8_f = d2;
    t3 = rd32(COW_IMG(0x101aa8b0u) + rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u) * 4u);
    switch (t3 - RD)
    {
    case 0x101aa687u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa687;
    case 0x101aa6b7u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa6b7;
    case 0x101aa6e7u: goto L_101aa6e7;
    case 0x101aa6feu: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa6fe;
    case 0x101aa715u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa715;
    case 0x101aa748u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa748;
    case 0x101aa77bu: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa77b;
    case 0x101aa7aeu: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa7ae;
    case 0x101aa7ccu: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa7cc;
    case 0x101aa834u: goto L_101aa834;
    case 0x101aa852u: ecx = rd8(COW_IMG(0x101aa8e8u) + arg1 - 9u); goto L_101aa852;
    case 0x101aa869u: goto L_101aa869;
    case 0x101aa88bu: goto L_101aa88b;
    case 0x101aa8a3u: edx = in_edx; goto L_101aa8a3;
    default: rt_fatal(g, COW_IMG(0x101aa680u), "switch");
    }
    return 0;
L_101aa687: ;
    if ((int32_t)rd32(sp0 + 8u) <= 0)
    {
        eax = rd32(sp0 + 8u);
        edx = in_edx;
        loc_10 = 0u;
    }
    else
    {
        eax = rd32(sp0 + 8u);
        edx = cow_f2bits(loc_8_f);
        loc_10 = cow_f2bits(loc_8_f);
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t51 = cow_cdecl(g, COW_IMG(0x10035e80u), 1, loc_10);
    t52 = g->ecx;
    t53 = g->edx;
    g->edx = t53;
    cow_cdecl(g, COW_IMG(0x10035ec0u), 1, 0x3f800000u);
    t54 = g->edx;
    g->edx = t54;
    return 1u;
L_101aa6b7: ;
    if ((int32_t)rd32(sp0 + 8u) <= 0)
    {
        eax = rd32(sp0 + 8u);
        loc_10 = 0u;
    }
    else
    {
        eax = cow_f2bits(loc_8_f);
        loc_10 = cow_f2bits(loc_8_f);
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t47 = cow_cdecl(g, COW_IMG(0x100372a0u), 1, loc_10);
    t48 = g->ecx;
    t49 = g->edx;
    g->edx = t49;
    cow_cdecl(g, COW_IMG(0x100372e0u), 1, 0x3f800000u);
    t50 = g->edx;
    g->edx = t50;
    return 1u;
L_101aa6e7: ;
    t45 = rd32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002d50u), 1, t45);
    t46 = g->edx;
    g->edx = t46;
    return 1u;
L_101aa6fe: ;
    g->edx = cow_f2bits(loc_4_f);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002d70u), 1, cow_f2bits(loc_4_f));
    t44 = g->edx;
    g->edx = t44;
    return 1u;
L_101aa715: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_stdcall(g, COW_IMG(0x10002be0u), 0);
    t40 = g->ecx;
    t41 = g->edx;
    if ((uint8_t)t39 != 1u)
    {
        edx = t41;
        goto L_101aa8a3;
    }
    eax = t39;
    ecx = t40;
    edx = t41;
    d42 = (double)(float)fr(g, fr(g, loc_8_f - (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(COW_IMG(0x1032a3acu)));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002c30u), 1, cow_f2bits(d42));
    t43 = g->edx;
    g->edx = t43;
    return 1u;
L_101aa748: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_stdcall(g, COW_IMG(0x10002be0u), 0);
    t35 = g->ecx;
    t36 = g->edx;
    if ((uint8_t)t34 != 1u)
    {
        edx = t36;
        goto L_101aa8a3;
    }
    eax = t34;
    ecx = t35;
    edx = t36;
    d37 = (double)(float)fr(g, fr(g, loc_8_f - (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(COW_IMG(0x1032a3acu)));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002c80u), 1, cow_f2bits(d37));
    t38 = g->edx;
    g->edx = t38;
    return 1u;
L_101aa77b: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_stdcall(g, COW_IMG(0x10002be0u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 != 1u)
    {
        edx = t31;
        goto L_101aa8a3;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    d32 = (double)(float)fr(g, fr(g, loc_8_f - (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(COW_IMG(0x1032a3acu)));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002cd0u), 1, cow_f2bits(d32));
    t33 = g->edx;
    g->edx = t33;
    return 1u;
L_101aa7ae: ;
    t26 = 1u - rd32(sp0 + 8u);
    g->edx = rd32(sp0 + 8u);
    t27 = rd32(sp0 + 8u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002e20u), 1, t26);
    t28 = g->edx;
    g->edx = t28;
    return 1u;
L_101aa7cc: ;
    d11 = fr(g, fr(g, loc_4_f + (double)rdf32(COW_IMG(0x1032cf58u))) * (double)rdf32(COW_IMG(0x1032b7b4u)));
    wrf32(sp0 + 8u, (float)d11);
    if ((cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032a3ccu)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032a3ccu)), 0u) & 0x100u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t15 = cow_cdecl(g, COW_IMG(0x10002da0u), 1, 0x3f000000u);
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
        loc_14 = 0x3f000000u;
    }
    else
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x1032a3ccu)), 0u) & 0x100u;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t12 = cow_cdecl(g, COW_IMG(0x10002da0u), 1, 0x3f800000u);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
        loc_14 = 0x3f800000u;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_cdecl(g, COW_IMG(0x10002dc0u), 1, loc_14);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd32(sp0 + 8u);
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0xcu;
    t22 = cow_cdecl(g, COW_IMG(0x10002de0u), 1, t21);
    t23 = g->ecx;
    t24 = g->edx;
    g->edx = t24;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10002e00u), 1, t21);
    t25 = g->edx;
    g->edx = t25;
    return 1u;
L_101aa834: ;
    t9 = 3u - rd32(sp0 + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002e40u), 1, t9);
    t10 = g->edx;
    g->edx = t10;
    return 1u;
L_101aa852: ;
    t7 = rd32(sp0 + 8u);
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10002e60u), 1, t7);
    t8 = g->edx;
    g->edx = t8;
    return 1u;
L_101aa869: ;
    t6 = ((rd32(sp0 + 8u) * 2u ^ rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u)) & 6u) ^ rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, t6);
    g->edx = t6;
    return 1u;
L_101aa88b: ;
    t4 = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    t5 = ((t4 ^ rd32(sp0 + 8u)) & 1u) ^ t4;
    wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, t5);
    edx = t5;
L_101aa8a3: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101aa650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101aa650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
