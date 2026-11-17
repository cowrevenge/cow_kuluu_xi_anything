/* f_0x100ef1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ef1a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1) > 0xeu)
    {
        edx = in_edx;
        goto L_100ef22b;
    }
    eax = rd32(arg1);
    t1 = rd32(COW_IMG(0x100ef410u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100ef1b3u: goto L_100ef1b3;
    case 0x100ef20bu: goto L_100ef20b;
    case 0x100ef22fu: goto L_100ef22f;
    case 0x100ef24du: goto L_100ef24d;
    case 0x100ef26au: goto L_100ef26a;
    case 0x100ef28eu: goto L_100ef28e;
    case 0x100ef34bu: goto L_100ef34b;
    case 0x100ef368u: goto L_100ef368;
    case 0x100ef380u: goto L_100ef380;
    case 0x100ef3c0u: goto L_100ef3c0;
    default: rt_fatal(g, COW_IMG(0x100ef1acu), "switch");
    }
    return 0;
L_100ef1b3: ;
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, 0u);
    if (rd32(COW_IMG(0x104ca430u)) != 0u) goto L_100ef200;
    eax = rd32(COW_IMG(0x104ca430u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x101152d0u), 0);
    t37 = g->edx;
    t38 = rd32(COW_IMG(0x104df770u)) + 0x136b4u;
    t39 = rd32(COW_IMG(0x104df770u)) + 0x13690u;
    g->edx = t37;
    cow_cdecl(g, COW_IMG(0x10115500u), 2, t39, t38);
    t40 = g->edx;
    t41 = rd32(COW_IMG(0x104ca430u)) + 1u;
    wr32(COW_IMG(0x104ca430u), t41);
    t42 = rd32(arg1) + 1u;
    wr32(arg1, t42);
    g->edx = t40;
    return 0u;
L_100ef200: ;
    t43 = rd32(arg1) + 2u;
    wr32(arg1, t43);
    return 0u;
L_100ef20b: ;
    t33 = rd32(COW_IMG(0x104df770u)) + 0x136dcu;
    t34 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->edx = t33;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10115930u), 2, t34, t33);
    t35 = g->edx;
    t36 = rd32(arg1) + 1u;
    wr32(arg1, t36);
    edx = t35;
L_100ef22b: ;
    g->edx = edx;
    return 0u;
L_100ef22f: ;
    t30 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->edx = t30;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101158e0u), 1, t30);
    t31 = g->edx;
    t32 = rd32(arg1) + 1u;
    wr32(arg1, t32);
    g->edx = t31;
    return 0u;
L_100ef24d: ;
    t27 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101158e0u), 1, t27);
    t28 = g->edx;
    t29 = rd32(arg1) + 1u;
    wr32(arg1, t29);
    g->edx = t28;
    return 0u;
L_100ef26a: ;
    t23 = rd32(COW_IMG(0x104df770u)) + 0x136dcu;
    t24 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->edx = t23;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10115970u), 2, t24, t23);
    t25 = g->edx;
    t26 = rd32(arg1) + 1u;
    wr32(arg1, t26);
    g->edx = t25;
    return 0u;
L_100ef28e: ;
    t13 = rd32(rd32(COW_IMG(0x104df770u)) + rd32(rd32(COW_IMG(0x104df770u)) + 0x1381cu) * 0x8cu + 0x13830u);
    t14 = rd32(COW_IMG(0x104df770u));
    t15 = rd32(rd32(COW_IMG(0x104df770u)) + 0x1381cu);
    wr32(t14 + 0xb8u, t13);
    t16 = rd32(t14 + t15 * 0x8cu + 0x13834u);
    wr32(t14 + 0xbcu, t16);
    t17 = rd32(t14 + t15 * 0x8cu + 0x13838u);
    wr32(t14 + 0xc0u, t17);
    wr16(t14 + 0xc4u, rd16(t14 + t15 * 0x8cu + 0x1383cu));
    wr8(t14 + 0xc6u, rd8(t14 + t15 * 0x8cu + 0x1383eu));
    wr8(rd32(COW_IMG(0x104df770u)) + 0xc7u, 0u);
    t18 = rd16(rd32(COW_IMG(0x104df770u)) + rd32(rd32(COW_IMG(0x104df770u)) + 0x1381cu) * 0x8cu + 0x13828u) + (rd8(rd32(COW_IMG(0x104df770u)) + rd32(rd32(COW_IMG(0x104df770u)) + 0x1381cu) * 0x8cu + 0x1382fu) << 0x10u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0xb4u, t18);
    edi = rd32(COW_IMG(0x104df770u)) + 0x64u;
    eax = 0u;
    ecx = 0x14u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t19 = rd32(COW_IMG(0x104df770u)) + 0x64u;
    t20 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->edx = t20;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101159b0u), 3, t20, t19, in_edi);
    t21 = g->edx;
    t22 = rd32(arg1) + 1u;
    wr32(arg1, t22);
    g->edx = t21;
    return 0u;
L_100ef34b: ;
    t10 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10115870u), 1, t10);
    t11 = g->edx;
    t12 = rd32(arg1) + 1u;
    wr32(arg1, t12);
    g->edx = t11;
    return 0u;
L_100ef368: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x101152e0u), 0);
    t8 = g->edx;
    wr32(COW_IMG(0x104ca430u), 0u);
    t9 = rd32(arg1) + 1u;
    wr32(arg1, t9);
    g->edx = t8;
    return 0u;
L_100ef380: ;
    t6 = rd32(COW_IMG(0x104df770u)) + 0x13698u;
    t7 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), self, 2, t7, t6);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
        wr32(arg1, rd32(arg1) + 1u);
    }
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0xffffffffu)
    {
        edx = rd32(COW_IMG(0x104df770u));
        goto L_100ef40b;
    }
    edx = rd32(COW_IMG(0x104df770u));
    g->edx = edx;
    return 0u;
L_100ef3c0: ;
    t2 = rd32(COW_IMG(0x104df770u)) + 0x13698u;
    t3 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
    g->edx = t3;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t2, 2, t3, t2);
    t4 = g->edx;
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        edx = t4;
    }
    else
    {
        eax = rd32(COW_IMG(0x104df770u));
        edx = t4;
        wr32(eax + 0x13690u, 0u);
        t5 = rd32(arg1) + 1u;
        wr32(arg1, t5);
        eax = rd32(COW_IMG(0x104df770u));
    }
    if (rd32(eax + 0x13698u) != 0xffffffffu) goto L_100ef22b;
L_100ef40b: ;
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ef1a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ef1a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
