/* f_0x1022e3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1022e3a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022e3c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e3c2;
    case 0x1022e3c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e3c9;
    case 0x1022e40au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e40a;
    case 0x1022e417u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e417;
    case 0x1022e43bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e43b;
    case 0x1022e449u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e449;
    case 0x1022e452u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e452;
    case 0x1022e45eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e45e;
    case 0x1022e468u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e468;
    case 0x1022e472u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e472;
    case 0x1022e47eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e47e;
    case 0x1022e48au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e48a;
    case 0x1022e496u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e496;
    case 0x1022e4a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e4a2;
    case 0x1022e4b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e4b0;
    case 0x1022e4bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e4bc;
    case 0x1022e4c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e4c8;
    case 0x1022e4d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e4d2;
    case 0x1022e4deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e4de;
    case 0x1022e4eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e4ea;
    case 0x1022e4f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e4f4;
    case 0x1022e4feu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e4fe;
    case 0x1022e50au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e50a;
    case 0x1022e516u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e516;
    case 0x1022e522u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e522;
    case 0x1022e52cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e52c;
    case 0x1022e531u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e531;
    case 0x1022e546u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e546;
    case 0x1022e54bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e54b;
    case 0x1022e560u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e560;
    case 0x1022e565u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e565;
    case 0x1022e57au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e57a;
    case 0x1022e57fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e57f;
    case 0x1022e594u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e594;
    case 0x1022e599u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e599;
    case 0x1022e5adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e5ad;
    case 0x1022e5b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e5b2;
    case 0x1022e5c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e5c9;
    case 0x1022e5ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e5ce;
    case 0x1022e5e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e5e5;
    case 0x1022e5eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e5ea;
    case 0x1022e5f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e5f7;
    case 0x1022e609u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e609;
    case 0x1022e61du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e61d;
    case 0x1022e626u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e626;
    case 0x1022e638u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e638;
    case 0x1022e64cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_1022e64c;
    case 0x1022e655u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e655;
    case 0x1022e667u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e667;
    case 0x1022e679u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e679;
    case 0x1022e67fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022e67f;
    case 0x1022e684u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_1022e684;
    default: break;
    }
#endif

    COW_AT(1022e3a0)
    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(self + 0x6cu);
    wr8(sp0 - 0xcu, 0u);
    if (t1 > 0xeu)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    eax = t1;
    ecx = t1 * 9u;
    edx = t1 * 0x25u;
    esi = COW_IMG(0x10667a90u) + t1 * 0x94u;
    COW_AT(1022e3c2)
    t2 = rd32(COW_IMG(0x1022e694u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x1022e3c9u: goto L_1022e3c9;
    case 0x1022e40au: goto L_1022e40a;
    case 0x1022e531u: goto L_1022e531;
    case 0x1022e54bu: goto L_1022e54b;
    case 0x1022e565u: goto L_1022e565;
    case 0x1022e57fu: goto L_1022e57f;
    case 0x1022e599u: goto L_1022e599;
    case 0x1022e5b2u: goto L_1022e5b2;
    case 0x1022e5ceu: goto L_1022e5ce;
    case 0x1022e5eau: goto L_1022e5ea;
    case 0x1022e61du: goto L_1022e61d;
    case 0x1022e64cu: goto L_1022e64c;
    default: rt_fatal(g, COW_IMG(0x1022e3c2u), "switch");
    }
    return 0;
L_1022e3c9: ;
    COW_AT(1022e3c9)
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, eax << 6u);
    wr32(sp0 - 0x20u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x10u;
    t42 = cow_cdecl(g, COW_IMG(0x10233500u), 4, arg1, eax << 6u, sp0 - 8u, sp0 - 4u);
    wr8(sp0 - 0xcu, (rd32(COW_IMG(0x1047fe08u) + rd32(sp0 - 8u) * 4u) & rd32(sp0 - 4u)) != 0u);
    g->esi = in_esi;
    return (uint8_t)rd32(sp0 - 0xcu);
L_1022e40a: ;
    COW_AT(1022e40a)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_call_regs(g, COW_IMG(0x100987d0u), eax, g->ecx, g->edx, 1, 0);
    t34 = g->edx;
    if ((uint8_t)t33 == 0u)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    eax = t33;
    edx = t34;
    COW_AT(1022e417)
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_thiscall(g, COW_IMG(0x1022f0f0u), esi, 1, arg1);
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 8u, t35);
    g->ecx = t36;
    g->edx = t37;
    t38 = cow_stdcall(g, COW_IMG(0x100987e0u), 0);
    t39 = g->ecx;
    t40 = g->edx;
    t41 = cow_stdcall(g, COW_IMG(0x100987f0u), 0);
    if (t38 != 0x145u)
    {
        eax = t41;
        esi = t38;
        goto L_1022e496;
    }
    eax = t41;
    COW_AT(1022e43b)
    if ((int32_t)(rd32(sp0 - 8u) - 0x14au) < 0)
    {
        edx = rd32(sp0 - 8u);
        goto L_1022e45e;
    }
    ecx = rd32(sp0 - 8u) - 0x14au;
    edx = rd32(sp0 - 8u);
    COW_AT(1022e449)
    if (ecx > (eax & 0xfu)) goto L_1022e45e;
    COW_AT(1022e452)
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e45e: ;
    COW_AT(1022e45e)
    if ((int32_t)(edx - 0x154u) < 0) goto L_1022e47e;
    ecx = edx - 0x154u;
    COW_AT(1022e468)
    if (ecx > (eax >> 4u & 0xfu)) goto L_1022e47e;
    COW_AT(1022e472)
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e47e: ;
    COW_AT(1022e47e)
    if (edx > 0x145u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1022e684;
    }
    COW_AT(1022e48a)
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e496: ;
    COW_AT(1022e496)
    if (esi != 0x212u) goto L_1022e522;
    COW_AT(1022e4a2)
    if ((int32_t)(rd32(sp0 - 8u) - 0x21cu) < 0)
    {
        edx = rd32(sp0 - 8u);
        goto L_1022e4c8;
    }
    ecx = rd32(sp0 - 8u) - 0x21cu;
    edx = rd32(sp0 - 8u);
    COW_AT(1022e4b0)
    if (ecx > (eax >> 8u & 0xfu)) goto L_1022e4c8;
    COW_AT(1022e4bc)
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e4c8: ;
    COW_AT(1022e4c8)
    if ((int32_t)(edx - 0x226u) < 0) goto L_1022e4ea;
    ecx = edx - 0x226u;
    COW_AT(1022e4d2)
    if (ecx > (eax >> 0xcu & 0xfu)) goto L_1022e4ea;
    COW_AT(1022e4de)
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e4ea: ;
    COW_AT(1022e4ea)
    if ((int32_t)(edx - 0x230u) < 0) goto L_1022e50a;
    ecx = edx - 0x230u;
    COW_AT(1022e4f4)
    if (ecx > (eax >> 0x10u & 0xfu)) goto L_1022e50a;
    COW_AT(1022e4fe)
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e50a: ;
    COW_AT(1022e50a)
    if (edx > 0x212u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1022e684;
    }
    COW_AT(1022e516)
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e522: ;
    COW_AT(1022e522)
    if (rd32(sp0 - 8u) > esi)
    {
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1022e684;
    }
    COW_AT(1022e52c)
L_1022e67f: ;
    COW_AT(1022e67f)
    wr8(sp0 - 0xcu, 1u);
    loc_10 = rd32(sp0 - 0x10u);
L_1022e684: ;
    COW_AT(1022e684)
    g->esi = loc_10;
    return (uint8_t)rd32(sp0 - 0xcu);
L_1022e531: ;
    COW_AT(1022e531)
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t32 = cow_cdecl(g, COW_IMG(0x10098880u), 3, arg1, in_esi, rd32(sp0 - 0xcu));
    if (t32 == 0u)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    COW_AT(1022e546)
    goto L_1022e67f;
L_1022e54b: ;
    COW_AT(1022e54b)
    wr32(sp0 - 0x14u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 8u;
    t31 = cow_cdecl(g, COW_IMG(0x100988c0u), 3, arg1, in_esi, rd32(sp0 - 0xcu));
    if (t31 == 0u)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    COW_AT(1022e560)
    goto L_1022e67f;
L_1022e565: ;
    COW_AT(1022e565)
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t30 = cow_cdecl(g, COW_IMG(0x100989b0u), 1, arg1);
    if (t30 == 0u)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    COW_AT(1022e57a)
    goto L_1022e67f;
L_1022e57f: ;
    COW_AT(1022e57f)
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t29 = cow_cdecl(g, COW_IMG(0x10098960u), 1, arg1);
    if (t29 == 0u)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    COW_AT(1022e594)
    goto L_1022e67f;
L_1022e599: ;
    COW_AT(1022e599)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t28 = cow_stdcall(g, COW_IMG(0x10098a00u), 0);
    if ((t28 & 0xfu) <= arg1)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    COW_AT(1022e5ad)
    goto L_1022e67f;
L_1022e5b2: ;
    COW_AT(1022e5b2)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t27 = cow_stdcall(g, COW_IMG(0x10098a00u), 0);
    if ((t27 >> 4u & 0xfu) <= arg1)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    COW_AT(1022e5c9)
    goto L_1022e67f;
L_1022e5ce: ;
    COW_AT(1022e5ce)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t26 = cow_stdcall(g, COW_IMG(0x10098a00u), 0);
    if ((t26 >> 8u & 0xfu) <= arg1)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    COW_AT(1022e5e5)
    goto L_1022e67f;
L_1022e5ea: ;
    COW_AT(1022e5ea)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_call_regs(g, COW_IMG(0x10098a60u), eax, g->ecx, g->edx, 1, 0);
    t19 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    eax = t18;
    edx = t19;
    COW_AT(1022e5f7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall(g, COW_IMG(0x1022ee80u), esi, 0);
    t21 = g->edx;
    if ((int32_t)arg1 >= (int32_t)(t20 - 1u))
    {
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1022e684;
    }
    edx = t21;
    COW_AT(1022e609)
    wr32(sp0 - 0x14u, arg1 + 1u);
    g->eax = arg1 + 1u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, COW_IMG(0x1022f0f0u), esi, 1, arg1 + 1u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 8u, t22);
    t25 = cow_stdcall(g, COW_IMG(0x10098a70u), 0);
    eax = t25;
L_1022e679: ;
    COW_AT(1022e679)
    if (eax < rd32(sp0 - 8u))
    {
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1022e684;
    }
    goto L_1022e67f;
L_1022e61d: ;
    COW_AT(1022e61d)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x10098a80u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    eax = t11;
    edx = t12;
    COW_AT(1022e626)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x1022ee80u), esi, 0);
    if ((int32_t)arg1 >= (int32_t)(t13 - 1u))
    {
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1022e684;
    }
    edx = t13 - 1u;
    COW_AT(1022e638)
    wr32(sp0 - 0x14u, arg1 + 1u);
    g->eax = arg1 + 1u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x1022f0f0u), esi, 1, arg1 + 1u);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 8u, t14);
    t17 = cow_stdcall(g, COW_IMG(0x10098a90u), 0);
    eax = t17;
    goto L_1022e679;
L_1022e64c: ;
    COW_AT(1022e64c)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10098aa0u), eax, g->ecx, g->edx, 1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        loc_10 = in_esi;
        goto L_1022e684;
    }
    eax = t3;
    edx = t4;
    COW_AT(1022e655)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x1022ee80u), esi, 0);
    t6 = g->edx;
    if ((int32_t)arg1 >= (int32_t)(t5 - 1u))
    {
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1022e684;
    }
    edx = t6;
    COW_AT(1022e667)
    wr32(sp0 - 0x14u, arg1 + 1u);
    g->eax = arg1 + 1u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1022f0f0u), esi, 1, arg1 + 1u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 8u, t7);
    t10 = cow_stdcall(g, COW_IMG(0x10098ab0u), 0);
    eax = t10;
    goto L_1022e679;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022e3a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022e3c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e3c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e40au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e417u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e43bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e449u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e452u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e45eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e468u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e472u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e47eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e48au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e496u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e4a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e4b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e4bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e4c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e4d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e4deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e4eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e4f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e4feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e50au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e516u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e522u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e52cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e531u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e546u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e54bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e560u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e565u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e57au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e57fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e594u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e599u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e5adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e5b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e5c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e5ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e5e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e5eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e5f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e609u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022e61du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e626u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e638u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022e64cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e655u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e667u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022e679u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e67fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022e684u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022e3a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022e3a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
