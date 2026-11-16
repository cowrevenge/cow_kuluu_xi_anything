/* f_0x100ff140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ff140(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 880u);

    wr32(sp0 - 0x350u, in_ebx);
    wr32(sp0 - 0x354u, in_ebp);
    wr32(sp0 - 0x358u, in_esi);
    wr32(sp0 - 0x35cu, in_edi);
    edi = arg2;
    eax = 0u;
    ecx = 0x5au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd16(arg1 + 0xcu) < 0x2800u) goto L_100ff28d;
    if (rd8(arg1) != 2u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1);
        goto L_100ff26b;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1);
    if ((int8_t)rd8(arg1 + 1u) >= 0)
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(arg1 + 1u);
        goto L_100ff1b2;
    }
    ebx = (in_ebx & 0xffffff00u) | rd8(arg1 + 1u);
    edi = sp0 - 0x34cu;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x360u, sp0 - 0x34cu);
    wr32(sp0 - 0x364u, arg1);
    g->ebx = ebx;
    g->eax = sp0 - 0x34cu;
    g->edx = arg1;
    g->esp = sp0 - 0x354u;
    t1 = cow_cdecl(g, COW_IMG(0x10100fa0u), 4, arg1, sp0 - 0x34cu, in_edi, in_esi);
    t2 = g->edx;
    wr32(sp0 - 0x368u, sp0 - 0x34cu);
    wr32(sp0 - 0x36cu, arg2);
    g->esp = sp0 - 0x364u;
    t3 = cow_cdecl(g, COW_IMG(0x10100ed0u), 2, arg2, sp0 - 0x34cu);
    g->ebx = in_ebx;
    return t3;
L_100ff1b2: ;
    if ((ebx & 0x10u) == 0u) goto L_100ff1ce;
    wr32(sp0 - 0x360u, arg1);
    wr32(sp0 - 0x364u, arg2);
    g->eax = eax;
    g->esp = sp0 - 0x35cu;
    t4 = cow_cdecl(g, COW_IMG(0x101019d0u), 2, arg2, arg1);
    g->ebx = in_ebx;
    return t4;
L_100ff1ce: ;
    if ((ebx & 0x20u) == 0u) goto L_100ff1ea;
    wr32(sp0 - 0x360u, arg1);
    wr32(sp0 - 0x364u, arg2);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x340u;
    t5 = cow_call_regs(g, COW_IMG(0x101011c0u), eax, g->ecx, arg1, 1, 9, arg2, arg1, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x34cu), rd32(sp0 - 0x348u), rd32(sp0 - 0x344u));
    g->ebx = in_ebx;
    g->edi = in_edi;
    return t5;
L_100ff1ea: ;
    if ((ebx & 8u) == 0u) goto L_100ff206;
    wr32(sp0 - 0x360u, arg1);
    wr32(sp0 - 0x364u, arg2);
    g->esp = sp0 - 0x344u;
    t6 = cow_call_regs(g, COW_IMG(0x10101aa0u), eax, g->ecx, g->edx, 1, 8, arg2, arg1, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x34cu), rd32(sp0 - 0x348u));
    g->ebx = in_ebx;
    g->edi = in_edi;
    return t6;
L_100ff206: ;
    edi = sp0 - 0x310u;
    eax = 0u;
    ecx = 0xc4u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t7 = rd16(arg1 + 0xcu);
    t8 = rd16(arg1 + 0x10u);
    wr16(sp0 - 0x310u, (uint16_t)t7);
    t9 = rd16(arg1 + 0xeu);
    wr16(sp0 - 0x30cu, (uint16_t)t9);
    t10 = rd16(arg1 + 0x12u);
    wr16(sp0 - 0x30au, (uint16_t)t8);
    wr16(sp0 - 0x308u, (uint16_t)t10);
    if ((ebx & 0x40u) == 0u)
    {
        eax = ((eax | t7 | t9) & 0xffff0000u) | t10;
        ecx = (ecx & 0xffff0000u) | t8;
    }
    else
    {
        eax = ((eax | t7 | t9) & 0xffff0000u) | t10;
        ecx = (ecx & 0xffff0000u) | t8;
        t11 = rd16(arg1 + 0xau);
        wr16(sp0 - 0x30eu, (uint16_t)t11);
        ecx = (ecx & 0xffff0000u) | t11;
    }
    wr32(sp0 - 0x360u, arg1);
    wr32(sp0 - 0x364u, sp0 - 0x310u);
    g->esp = sp0 - 0x350u;
    cow_call_regs(g, COW_IMG(0x100ff9c0u), eax, ecx, sp0 - 0x310u, 1, 5, sp0 - 0x310u, arg1, in_edi, in_esi, in_ebp);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x368u, sp0 - 0x310u);
    wr32(sp0 - 0x36cu, arg2);
    g->eax = sp0 - 0x310u;
    g->esp = sp0 - 0x334u;
    t14 = cow_cdecl(g, COW_IMG(0x100ff2f0u), 14, arg2, sp0 - 0x310u, sp0 - 0x310u, arg1, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x34cu), rd32(sp0 - 0x348u), rd32(sp0 - 0x344u), rd32(sp0 - 0x340u), rd32(sp0 - 0x33cu), rd32(sp0 - 0x338u));
    g->ebx = in_ebx;
    g->edi = in_edi;
    return t14;
L_100ff26b: ;
    if ((uint8_t)eax != 3u)
    {
        esi = 0u;
        goto L_100ff2de;
    }
    if ((int8_t)rd8(arg1 + 1u) >= 0)
    {
        esi = 0u;
        goto L_100ff2de;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 1u);
    wr32(sp0 - 0x360u, arg1);
    wr32(sp0 - 0x364u, arg2);
    g->eax = eax;
    g->esp = sp0 - 0x35cu;
    t15 = cow_cdecl(g, COW_IMG(0x10101360u), 2, arg2, arg1);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return t15;
L_100ff28d: ;
    edi = sp0 - 0x34cu;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t16 = rd32(arg1) & 0x3ffu;
    wr32(sp0 - 0x34cu, t16);
    t17 = rd32(arg1) >> 0xau & 0xfu;
    wr32(sp0 - 0x344u, t17);
    wr32(sp0 - 0x360u, sp0 - 0x34cu);
    wr32(sp0 - 0x364u, arg2);
    t18 = rd32(arg1) >> 0xeu & 7u;
    wr32(sp0 - 0x340u, t18);
    t19 = rd32(arg1) >> 0x11u & 0xfu;
    wr32(sp0 - 0x348u, t19);
    wr32(sp0 - 0x33cu, t19);
    g->eax = t19;
    g->esp = sp0 - 0x35cu;
    t20 = cow_cdecl(g, COW_IMG(0x10100ed0u), 2, arg2, sp0 - 0x34cu);
    esi = t20;
L_100ff2de: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ff140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ff140(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
