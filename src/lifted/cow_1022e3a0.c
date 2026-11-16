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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x10u, in_esi);
    if (rd32(self + 0x6cu) > 0xeu)
    {
        loc_c = rd32(sp0 - 0xcu) & 0xffffff00u;
        goto L_1022e684;
    }
    eax = rd32(self + 0x6cu);
    ecx = rd32(self + 0x6cu) * 9u;
    edx = rd32(self + 0x6cu) * 0x25u;
    esi = COW_IMG(0x10667a90u) + rd32(self + 0x6cu) * 0x94u;
    loc_c = rd32(sp0 - 0xcu) & 0xffffff00u;
    t1 = rd32(COW_IMG(0x1022e694u) + eax * 4u);
    switch (t1 - RD)
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
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, eax << 6u);
    wr32(sp0 - 0x20u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x10u;
    t41 = cow_cdecl(g, COW_IMG(0x10233500u), 4, arg1, eax << 6u, sp0 - 8u, sp0 - 4u);
    return (rd32(COW_IMG(0x1047fe08u) + rd32(sp0 - 8u) * 4u) & rd32(sp0 - 4u)) != 0u;
L_1022e40a: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t32 = cow_call_regs(g, COW_IMG(0x100987d0u), eax, g->ecx, g->edx, 1, 0);
    t33 = g->edx;
    if ((uint8_t)t32 == 0u) goto L_1022e684;
    edx = t33;
    wr32(sp0 - 0x14u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t34 = cow_thiscall(g, COW_IMG(0x1022f0f0u), esi, 1, arg1);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 8u, t34);
    g->ecx = t35;
    g->edx = t36;
    t37 = cow_stdcall(g, COW_IMG(0x100987e0u), 0);
    t38 = g->ecx;
    t39 = g->edx;
    t40 = cow_stdcall(g, COW_IMG(0x100987f0u), 0);
    if (t37 != 0x145u)
    {
        eax = t40;
        esi = t37;
        goto L_1022e496;
    }
    eax = t40;
    if ((int32_t)(rd32(sp0 - 8u) - 0x14au) < 0)
    {
        edx = rd32(sp0 - 8u);
        goto L_1022e45e;
    }
    ecx = rd32(sp0 - 8u) - 0x14au;
    edx = rd32(sp0 - 8u);
    if (ecx > (eax & 0xfu)) goto L_1022e45e;
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e45e: ;
    if ((int32_t)(edx - 0x154u) < 0) goto L_1022e47e;
    ecx = edx - 0x154u;
    if (ecx > (eax >> 4u & 0xfu)) goto L_1022e47e;
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e47e: ;
    if (edx > 0x145u) goto L_1022e684;
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e496: ;
    if (esi != 0x212u) goto L_1022e522;
    if ((int32_t)(rd32(sp0 - 8u) - 0x21cu) < 0)
    {
        edx = rd32(sp0 - 8u);
        goto L_1022e4c8;
    }
    ecx = rd32(sp0 - 8u) - 0x21cu;
    edx = rd32(sp0 - 8u);
    if (ecx > (eax >> 8u & 0xfu)) goto L_1022e4c8;
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e4c8: ;
    if ((int32_t)(edx - 0x226u) < 0) goto L_1022e4ea;
    ecx = edx - 0x226u;
    if (ecx > (eax >> 0xcu & 0xfu)) goto L_1022e4ea;
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e4ea: ;
    if ((int32_t)(edx - 0x230u) < 0) goto L_1022e50a;
    ecx = edx - 0x230u;
    if (ecx > (eax >> 0x10u & 0xfu)) goto L_1022e50a;
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e50a: ;
    if (edx > 0x212u) goto L_1022e684;
    g->esi = rd32(sp0 - 0x10u);
    return 1u;
L_1022e522: ;
    if (rd32(sp0 - 8u) > esi) goto L_1022e684;
L_1022e67f: ;
    loc_c = (rd32(sp0 - 0xcu) & 0xffffff00u) | 1u;
L_1022e684: ;
    return (uint8_t)loc_c;
L_1022e531: ;
    wr32(sp0 - 0x14u, arg1);
    g->esp = sp0 - 8u;
    t31 = cow_cdecl(g, COW_IMG(0x10098880u), 3, arg1, in_esi, loc_c);
    if (t31 == 0u) goto L_1022e684;
    goto L_1022e67f;
L_1022e54b: ;
    wr32(sp0 - 0x14u, arg1);
    g->esp = sp0 - 8u;
    t30 = cow_cdecl(g, COW_IMG(0x100988c0u), 3, arg1, in_esi, loc_c);
    if (t30 == 0u) goto L_1022e684;
    goto L_1022e67f;
L_1022e565: ;
    wr32(sp0 - 0x14u, arg1);
    g->esp = sp0 - 0x10u;
    t29 = cow_cdecl(g, COW_IMG(0x100989b0u), 1, arg1);
    if (t29 == 0u) goto L_1022e684;
    goto L_1022e67f;
L_1022e57f: ;
    wr32(sp0 - 0x14u, arg1);
    g->esp = sp0 - 0x10u;
    t28 = cow_cdecl(g, COW_IMG(0x10098960u), 1, arg1);
    if (t28 == 0u) goto L_1022e684;
    goto L_1022e67f;
L_1022e599: ;
    g->esp = sp0 - 0x10u;
    t27 = cow_stdcall(g, COW_IMG(0x10098a00u), 0);
    if ((t27 & 0xfu) <= arg1) goto L_1022e684;
    goto L_1022e67f;
L_1022e5b2: ;
    g->esp = sp0 - 0x10u;
    t26 = cow_stdcall(g, COW_IMG(0x10098a00u), 0);
    if ((t26 >> 4u & 0xfu) <= arg1) goto L_1022e684;
    goto L_1022e67f;
L_1022e5ce: ;
    g->esp = sp0 - 0x10u;
    t25 = cow_stdcall(g, COW_IMG(0x10098a00u), 0);
    if ((t25 >> 8u & 0xfu) <= arg1) goto L_1022e684;
    goto L_1022e67f;
L_1022e5ea: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_call_regs(g, COW_IMG(0x10098a60u), eax, g->ecx, g->edx, 1, 0);
    t18 = g->edx;
    if ((uint8_t)t17 == 0u) goto L_1022e684;
    edx = t18;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x1022ee80u), esi, 0);
    t20 = g->edx;
    if ((int32_t)arg1 >= (int32_t)(t19 - 1u)) goto L_1022e684;
    edx = t20;
    wr32(sp0 - 0x14u, arg1 + 1u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x1022f0f0u), esi, 1, arg1 + 1u);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 8u, t21);
    t24 = cow_stdcall(g, COW_IMG(0x10098a70u), 0);
    eax = t24;
L_1022e679: ;
    if (eax < rd32(sp0 - 8u)) goto L_1022e684;
    goto L_1022e67f;
L_1022e61d: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x10098a80u), eax, g->ecx, g->edx, 1, 0);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u) goto L_1022e684;
    edx = t11;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x1022ee80u), esi, 0);
    if ((int32_t)arg1 >= (int32_t)(t12 - 1u)) goto L_1022e684;
    edx = t12 - 1u;
    wr32(sp0 - 0x14u, arg1 + 1u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x1022f0f0u), esi, 1, arg1 + 1u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 8u, t13);
    t16 = cow_stdcall(g, COW_IMG(0x10098a90u), 0);
    eax = t16;
    goto L_1022e679;
L_1022e64c: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10098aa0u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u) goto L_1022e684;
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x1022ee80u), esi, 0);
    t5 = g->edx;
    if ((int32_t)arg1 >= (int32_t)(t4 - 1u)) goto L_1022e684;
    edx = t5;
    wr32(sp0 - 0x14u, arg1 + 1u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x1022f0f0u), esi, 1, arg1 + 1u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 8u, t6);
    t9 = cow_stdcall(g, COW_IMG(0x10098ab0u), 0);
    eax = t9;
    goto L_1022e679;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022e3a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022e3a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
