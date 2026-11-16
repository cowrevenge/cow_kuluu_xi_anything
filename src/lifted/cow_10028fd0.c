/* f_0x10028fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10028fd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = arg1 + rd32(COW_IMG(0x104570dcu));
    wr32(COW_IMG(0x104570dcu), t1);
    if (arg2 > 6u) goto L_100290f2;
    edx = t1;
    t2 = rd32(COW_IMG(0x1002912cu) + arg2 * 4u);
    switch (t2 - RD)
    {
    case 0x10028ff6u: goto L_10028ff6;
    case 0x10029022u: goto L_10029022;
    case 0x1002904du: goto L_1002904d;
    case 0x10029078u: goto L_10029078;
    case 0x100290a4u: goto L_100290a4;
    case 0x100290cbu: goto L_100290cb;
    case 0x100290f2u: goto L_100290f2;
    default: rt_fatal(g, COW_IMG(0x10028fefu), "switch");
    }
    return 0;
L_10028ff6: ;
    g->eax = arg2;
    g->ecx = rd32(COW_IMG(0x104570b8u));
    g->edx = rd32(COW_IMG(0x104570b4u));
    t25 = rd32(COW_IMG(0x104570b8u));
    t26 = rd32(COW_IMG(0x104570b4u));
    g->esp = sp0 - 4u;
    t27 = cow_cdecl(g, COW_IMG(0x10028930u), 3, 0x20u, t26, t25);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        goto L_1002911a;
    }
    eax = t27;
    edx = t29;
    wr32(eax, COW_IMG(0x1032a67cu));
    g->edx = edx;
    return eax + 0x20u;
L_10029022: ;
    g->eax = rd32(COW_IMG(0x104570b8u));
    g->ecx = rd32(COW_IMG(0x104570b4u));
    g->edx = edx;
    t20 = rd32(COW_IMG(0x104570b8u));
    t21 = rd32(COW_IMG(0x104570b4u));
    g->esp = sp0 - 4u;
    t22 = cow_cdecl(g, COW_IMG(0x10028850u), 3, 0x20u, t21, t20);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_1002911a;
    }
    eax = t22;
    edx = t24;
    wr32(eax, COW_IMG(0x1032a664u));
    g->edx = edx;
    return eax + 0x20u;
L_1002904d: ;
    g->eax = rd32(COW_IMG(0x104570bcu));
    g->edx = rd32(COW_IMG(0x104570c0u));
    t16 = rd32(COW_IMG(0x104570bcu));
    t17 = rd32(COW_IMG(0x104570c0u));
    g->esp = sp0 - 4u;
    t18 = cow_cdecl(g, COW_IMG(0x10028930u), 3, 0x20u, t16, t17);
    t19 = g->edx;
    if (t18 == 0u)
    {
        edx = t19;
        goto L_10029127;
    }
    eax = t18;
    edx = t19;
    wr32(eax, COW_IMG(0x1032a64cu));
    g->edx = edx;
    return eax + 0x20u;
L_10029078: ;
    g->eax = arg2;
    g->edx = rd32(COW_IMG(0x104570bcu));
    t13 = rd32(COW_IMG(0x104570bcu));
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x10028930u), 3, 0x20u, t13, rd32(COW_IMG(0x104570c0u)));
    t15 = g->edx;
    if (t14 == 0u)
    {
        edx = t15;
        goto L_10029127;
    }
    eax = t14;
    edx = t15;
    wr32(eax, COW_IMG(0x1032a634u));
    g->edx = edx;
    return eax + 0x20u;
L_100290a4: ;
    g->eax = rd32(COW_IMG(0x104570d0u));
    g->ecx = rd32(COW_IMG(0x104570ccu));
    g->edx = edx;
    t8 = rd32(COW_IMG(0x104570d0u));
    t9 = rd32(COW_IMG(0x104570ccu));
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x10028930u), 3, 0x20u, t9, t8);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_1002911a;
    }
    eax = t10;
    edx = t12;
    wr32(eax, COW_IMG(0x1032a61cu));
    g->edx = edx;
    return eax + 0x20u;
L_100290cb: ;
    g->eax = rd32(COW_IMG(0x104570d4u));
    g->ecx = self;
    g->edx = rd32(COW_IMG(0x104570d8u));
    t3 = rd32(COW_IMG(0x104570d4u));
    t4 = rd32(COW_IMG(0x104570d8u));
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10028930u), 3, 0x20u, t3, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_1002911a;
    }
    eax = t5;
    edx = t7;
    wr32(eax, COW_IMG(0x1032a604u));
    g->edx = edx;
    return eax + 0x20u;
L_100290f2: ;
    g->eax = arg2;
    g->ecx = rd32(COW_IMG(0x104570c8u));
    g->edx = rd32(COW_IMG(0x104570c4u));
    t30 = rd32(COW_IMG(0x104570c8u));
    t31 = rd32(COW_IMG(0x104570c4u));
    g->esp = sp0 - 4u;
    t32 = cow_cdecl(g, COW_IMG(0x10028930u), 3, 0x20u, t31, t30);
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 == 0u)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        goto L_1002911a;
    }
    eax = t32;
    edx = t34;
    wr32(eax, COW_IMG(0x1032a5ecu));
    g->edx = edx;
    return eax + 0x20u;
L_1002911a: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0x7d2u);
    t35 = g->edx;
    edx = t35;
L_10029127: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10028fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
