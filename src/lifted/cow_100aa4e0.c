/* f_0x100aa4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100aa4e0(Guest* g)
{
    double d18;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d36;
    double d37;
    double d39;
    double d40;
    double d42;
    double d43;
    double d45;
    double d46;
    double d47;
    double d48;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t38;
    uint32_t t4;
    uint32_t t41;
    uint32_t t44;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 232u);

    wr32(sp0 - 0xbcu, in_esi);
    wr32(sp0 - 0xc0u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xc0u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    g->eax = rd32(arg3);
    t2 = rd32(arg3);
    t3 = cow_thiscall(g, rd32(t2 + 0x1bcu), arg3, 0);
    wr32(sp0 - 0xc4u, t3);
    g->edx = rd32(arg2);
    t4 = rd32(arg2);
    t5 = cow_thiscall_cdecl(g, rd32(t4 + 0x1bcu), arg2, 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0xc8u, t5);
    wr32(sp0 - 0xccu, sp0 - 0xb8u);
    g->eax = sp0 - 0xb8u;
    t8 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xb8u, t5, rd32(sp0 - 0xc4u));
    g->edx = rd32(arg3);
    t9 = rd32(arg3);
    t10 = cow_thiscall(g, rd32(t9 + 0x1c0u), arg3, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0xc4u, t10);
    wr32(sp0 - 0xc8u, sp0 - 0x4cu);
    g->eax = sp0 - 0x4cu;
    g->edx = t12;
    t13 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x4cu, t10);
    t14 = g->edx;
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0xc4u, t16);
    d18 = (double)(float)-(double)rdf32(sp0 - 0x48u);
    wrf32(sp0 - 0xc4u, (float)d18);
    g->edx = t17;
    t19 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, cow_f2bits(d18));
    t20 = g->edx;
    wr32(sp0 - 0xc4u, sp0 - 0xb8u);
    t21 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0xb8u);
    t22 = g->ecx;
    wr32(sp0 - 0xc4u, COW_IMG(0x10487fa4u));
    wr32(sp0 - 0xc8u, sp0 - 0x64u);
    g->edx = sp0 - 0x64u;
    t23 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x64u, COW_IMG(0x10487fa4u));
    t24 = g->edx;
    d25 = (double)rdf32(sp0 - 0xb8u);
    if ((cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        edx = t24;
        goto L_100aa5c1;
    }
    eax = cow_fsw(g, d25, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    edx = t24;
    d26 = (double)rdf32(sp0 - 0xb0u);
    if ((cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_100aa5ac;
    }
    ecx = 3u;
L_100aa602: ;
    wr32(sp0 - 0xc4u, sp0 - 0x74u);
    t31 = ecx * 2u + 0xdu;
    wr32(sp0 - 0xc8u, t31);
    g->esp = sp0 - 0xc0u;
    cow_thiscall(g, rd32(rd32(arg3) + 0x1c8u), arg3, 2, t31, sp0 - 0x74u);
    wr32(sp0 - 0xc4u, sp0 - 0x94u);
    wr32(sp0 - 0xc8u, t31 + 1u);
    cow_thiscall(g, rd32(rd32(arg3) + 0x1c8u), arg3, 2, t31 + 1u, sp0 - 0x94u);
    wr32(sp0 - 0xc4u, sp0 - 0x84u);
    t32 = (t31 - 3u & 7u) + 0xdu;
    wr32(sp0 - 0xc8u, t32);
    cow_thiscall(g, rd32(rd32(arg3) + 0x1c8u), arg3, 2, t32, sp0 - 0x84u);
    wr32(sp0 - 0xc4u, sp0 - 0x74u);
    wr32(sp0 - 0xc8u, sp0 - 0xb8u);
    wr32(sp0 - 0xccu, sp0 - 0xa0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0xb4u, 0u);
    cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xa0u, sp0 - 0xb8u, sp0 - 0x74u);
    wr32(sp0 - 0xd0u, sp0 - 0x94u);
    wr32(sp0 - 0xd4u, sp0 - 0xb8u);
    wr32(sp0 - 0xd8u, sp0 - 0xacu);
    g->esp = sp0 - 0xccu;
    cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0xacu, sp0 - 0xb8u, sp0 - 0x94u);
    wr32(sp0 - 0xdcu, sp0 - 0x84u);
    wr32(sp0 - 0xe0u, sp0 - 0xb8u);
    wr32(sp0 - 0xe4u, sp0 - 0x58u);
    g->eax = sp0 - 0x58u;
    g->ecx = sp0 - 0x84u;
    g->edx = sp0 - 0xb8u;
    g->esp = sp0 - 0xd8u;
    t33 = cow_cdecl(g, COW_IMG(0x10027550u), 3, sp0 - 0x58u, sp0 - 0xb8u, sp0 - 0x84u);
    t34 = g->ecx;
    t35 = g->edx;
    d36 = (double)rdf32(sp0 - 0x9cu);
    if (!(d36 < (double)rdf32(COW_IMG(0x1032a22cu))))
    {
        eax = (t33 & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        ecx = t34;
        edx = t35;
        goto L_100aa6e2;
    }
    eax = (t33 & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
    ecx = t34;
    edx = t35;
    d37 = (double)rdf32(sp0 - 0x9cu);
    if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032e834u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032e834u)), 0u) & 0x4100u;
        goto L_100aa6e2;
    }
    eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x1032e834u)), 0u) & 0x4100u;
    wr32(sp0 - 0xc4u, sp0 - 0x74u);
    wr32(sp0 - 0xc8u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, sp0 - 0x74u);
    t38 = g->edx;
    edx = t38;
L_100aa7e0: ;
    g->eax = rd32(arg3);
    g->edx = edx;
    t50 = rd32(arg3);
    g->esp = sp0 - 0xc0u;
    t51 = cow_thiscall(g, rd32(t50 + 0x1bcu), arg3, 0);
    t52 = g->ecx;
    t53 = g->edx;
    wr32(sp0 - 0xc4u, t51);
    wr32(sp0 - 0xc8u, arg1);
    g->edx = t53;
    t54 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, arg1, t51);
    t55 = g->edx;
    t56 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0xbcu);
    g->edi = rd32(sp0 - 0xc0u);
    return t56;
L_100aa5ac: ;
    d27 = (double)rdf32(sp0 - 0xb0u);
    if (!(d27 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100aa5c1;
    }
    ecx = 0u;
    goto L_100aa602;
L_100aa5c1: ;
    d28 = (double)rdf32(sp0 - 0xb8u);
    if (!(d28 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = 0u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        d29 = (double)rdf32(sp0 - 0xb0u);
        if (!(d29 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            d30 = (double)rdf32(sp0 - 0xb0u);
            if ((cow_fsw(g, d30, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
            {
                ecx = 0u;
            }
            else
            {
                ecx = 2u;
            }
        }
        else
        {
            ecx = 1u;
        }
    }
    goto L_100aa602;
L_100aa6e2: ;
    d39 = (double)rdf32(sp0 - 0xa8u);
    if (!(d39 < (double)rdf32(COW_IMG(0x1032a22cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        goto L_100aa720;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d39, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
    d40 = (double)rdf32(sp0 - 0xa8u);
    if ((cow_fsw(g, d40, (double)rdf32(COW_IMG(0x1032e834u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d40, (double)rdf32(COW_IMG(0x1032e834u)), 0u) & 0x4100u;
        goto L_100aa720;
    }
    eax = cow_fsw(g, d40, (double)rdf32(COW_IMG(0x1032e834u)), 0u) & 0x4100u;
    wr32(sp0 - 0xc4u, sp0 - 0x94u);
    wr32(sp0 - 0xc8u, arg1);
    g->edx = sp0 - 0x94u;
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, sp0 - 0x94u);
    t41 = g->edx;
    edx = t41;
    goto L_100aa7e0;
L_100aa720: ;
    d42 = (double)rdf32(sp0 - 0x54u);
    if (!(d42 < (double)rdf32(COW_IMG(0x1032a22cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
        goto L_100aa75e;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x1032a22cu)), 0u);
    d43 = (double)rdf32(sp0 - 0x54u);
    if ((cow_fsw(g, d43, (double)rdf32(COW_IMG(0x1032e834u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d43, (double)rdf32(COW_IMG(0x1032e834u)), 0u) & 0x4100u;
        goto L_100aa75e;
    }
    wr32(sp0 - 0xc4u, sp0 - 0x84u);
    wr32(sp0 - 0xc8u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, arg1, sp0 - 0x84u);
    t44 = g->edx;
    edx = t44;
    goto L_100aa7e0;
L_100aa75e: ;
    d45 = (double)rdf32(sp0 - 0x9cu);
    if ((cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_100aa782;
    }
    eax = cow_fsw(g, d45, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    d46 = (double)rdf32(sp0 - 0xa8u);
    if (d46 < (double)rdf32(COW_IMG(0x103295d8u))) goto L_100aa7a6;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_100aa782: ;
    d47 = (double)rdf32(sp0 - 0x9cu);
    if (!(d47 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100aa7bc;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d47, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d48 = (double)rdf32(sp0 - 0xa8u);
    if ((cow_fsw(g, d48, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u) goto L_100aa7bc;
L_100aa7a6: ;
    wr32(sp0 - 0xc4u, sp0 - 0x94u);
    wr32(sp0 - 0xc8u, sp0 - 0x74u);
    wr32(sp0 - 0xccu, sp0 - 0xb8u);
    wr32(sp0 - 0xd0u, sp0 - 0x64u);
    eax = sp0 - 0xb8u;
    ecx = sp0 - 0x64u;
    edx = sp0 - 0x74u;
    loc_c4 = sp0 - 0x94u;
    loc_c8 = sp0 - 0x74u;
L_100aa7d0: ;
    wr32(sp0 - 0xd4u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x100aa3e0u), 5, arg1, sp0 - 0x64u, sp0 - 0xb8u, loc_c8, loc_c4);
    t49 = g->edx;
    edx = t49;
    goto L_100aa7e0;
L_100aa7bc: ;
    wr32(sp0 - 0xc4u, sp0 - 0x84u);
    wr32(sp0 - 0xc8u, sp0 - 0x94u);
    wr32(sp0 - 0xccu, sp0 - 0xb8u);
    wr32(sp0 - 0xd0u, sp0 - 0x64u);
    eax = sp0 - 0x94u;
    ecx = sp0 - 0xb8u;
    edx = sp0 - 0x64u;
    loc_c4 = sp0 - 0x84u;
    loc_c8 = sp0 - 0x94u;
    goto L_100aa7d0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aa4e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100aa4e0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
