/* f_0x101e0940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e0940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101e15f0u), rd32(COW_IMG(0x106634acu)), 0);
    t1 = g->edx;
    if (rd8(arg1 + 4u) > 0xeu)
    {
        edx = t1;
        goto L_101e0a35;
    }
    eax = rd8(arg1 + 4u);
    edx = t1;
    t2 = rd32(COW_IMG(0x101e0a54u) + rd8(COW_IMG(0x101e0a78u) + eax) * 4u);
    switch (t2 - RD)
    {
    case 0x101e096fu: goto L_101e096f;
    case 0x101e09b3u: goto L_101e09b3;
    case 0x101e0a03u: goto L_101e0a03;
    case 0x101e0a07u: goto L_101e0a07;
    case 0x101e0a0bu: goto L_101e0a0b;
    case 0x101e0a0fu: goto L_101e0a0f;
    case 0x101e0a13u: goto L_101e0a13;
    case 0x101e0a17u: goto L_101e0a17;
    case 0x101e0a35u: goto L_101e0a35;
    default: rt_fatal(g, COW_IMG(0x101e0968u), "switch");
    }
    return 0;
L_101e096f: ;
    t16 = rd32(COW_IMG(0x106634b4u));
    esi = arg1;
    edi = t16 + 0x18u;
    ecx = 0xdu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
    g->edx = t16;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f298u), 1u, 0u);
    t18 = g->edx;
    g->ebx = arg1;
    t19 = cow_fastcall(g, COW_IMG(0x101e1b40u), rd32(COW_IMG(0x106634b8u)), t18, 1, arg1);
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x101e0700u), rd32(COW_IMG(0x106634acu)), 0);
    t22 = g->edx;
    g->ebx = in_ebx;
    g->edx = t22;
    return (t21 & 0xffffff00u) | 1u;
L_101e09b3: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xau);
    t7 = g->edx;
    t8 = rd32(COW_IMG(0x106634b4u));
    esi = arg1;
    edi = t8 + 0x18u;
    ecx = 0xdu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
    g->edx = t7;
    t9 = rd32(COW_IMG(0x106634b4u));
    t10 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f298u), 1u, 0u);
    t11 = g->edx;
    g->ebx = arg1;
    t12 = cow_fastcall(g, COW_IMG(0x101e1b40u), rd32(COW_IMG(0x106634b8u)), t11, 1, arg1);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x101e0700u), rd32(COW_IMG(0x106634acu)), 0);
    t15 = g->edx;
    g->ebx = in_ebx;
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_101e0a03: ;
    loc_10 = 0xcu;
L_101e0a37: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, loc_10);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x101e0700u), rd32(COW_IMG(0x106634acu)), 0);
    t26 = g->edx;
    g->ebx = in_ebx;
    g->edx = t26;
    return (t25 & 0xffffff00u) | 1u;
L_101e0a07: ;
    loc_10 = 9u;
    goto L_101e0a37;
L_101e0a0b: ;
    loc_10 = 0xdu;
    goto L_101e0a37;
L_101e0a0f: ;
    loc_10 = 0xeu;
    goto L_101e0a37;
L_101e0a13: ;
    loc_10 = 0x10u;
    goto L_101e0a37;
L_101e0a17: ;
    g->ebx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x64u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101e0700u), rd32(COW_IMG(0x106634acu)), 0);
    t6 = g->edx;
    g->ebx = in_ebx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_101e0a35: ;
    loc_10 = 0xbu;
    goto L_101e0a37;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e0940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
