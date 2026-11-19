/* f_0x101d6540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d6540(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d6558u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d6558;
    case 0x101d655fu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d655f;
    case 0x101d6573u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d6573;
    case 0x101d657fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d657f;
    case 0x101d6593u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d6593;
    case 0x101d659au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d659a;
    case 0x101d65afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d65af;
    case 0x101d65b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d65b5;
    case 0x101d65bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d65ba;
    case 0x101d65c5u: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d65c5;
    case 0x101d65ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d65cc;
    case 0x101d65e1u: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d65e1;
    case 0x101d65e7u: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d65e7;
    case 0x101d6604u: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d6604;
    case 0x101d660bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d660b;
    case 0x101d6616u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d6616;
    case 0x101d6626u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d6626;
    case 0x101d6631u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d6631;
    case 0x101d663du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d663d;
    case 0x101d6657u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d6657;
    case 0x101d666eu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d666e;
    case 0x101d6675u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d6675;
    case 0x101d668au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d668a;
    case 0x101d669fu: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d669f;
    case 0x101d66a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d66a6;
    case 0x101d66acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d66ac;
    case 0x101d66b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d66b1;
    case 0x101d66bau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d66ba;
    case 0x101d66d4u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d66d4;
    case 0x101d66dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d66db;
    case 0x101d66e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d66e1;
    case 0x101d66e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d66e6;
    case 0x101d66efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101d66ef;
    case 0x101d66fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101d66fb;
    default: break;
    }
#endif

    COW_AT(101d6540)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x100f1080u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = t2;
        goto L_101d66fb;
    }
    ecx = t1;
    edx = t2;
    COW_AT(101d6558)
    t3 = rd32(COW_IMG(0x101d6700u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t3 - RD)
    {
    case 0x101d655fu: goto L_101d655f;
    case 0x101d666eu: goto L_101d666e;
    case 0x101d669fu: goto L_101d669f;
    case 0x101d66d4u: goto L_101d66d4;
    case 0x101d66fbu: eax = (uint32_t)(int16_t)arg1 - 1u; goto L_101d66fb;
    default: rt_fatal(g, COW_IMG(0x101d6558u), "switch");
    }
    return 0;
L_101d655f: ;
    COW_AT(101d655f)
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t14 = cow_call_regs(g, COW_IMG(0x101cc0d0u), (uint32_t)(int16_t)arg1 - 1u, g->ecx, edx, 1, 2, 4u, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t16;
        goto L_101d66fb;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(101d6573)
    if (rd8(self + 0x18u) == 0u) goto L_101d65ba;
    eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
    COW_AT(101d657f)
    if (rd16((uint32_t)(int16_t)arg2 * 2u + rd32(self + 0x1cu) - 2u) != 0x118u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)arg2;
        edx = rd32(self + 0x1cu);
        goto L_101d65b5;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)arg2;
    edx = rd32(self + 0x1cu);
    COW_AT(101d6593)
    if (rd8(self + 0x19u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x19u);
        goto L_101d65af;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x19u);
    COW_AT(101d659a)
    g->ebx = 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xbeu);
    t18 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t18;
    return t17;
L_101d65af: ;
    COW_AT(101d65af)
    wr8(self + 0x15u, 0x7fu);
L_101d6626: ;
    COW_AT(101d6626)
    if ((int8_t)rd8(self + 0x15u) < 0)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x15u);
        goto L_101d66fb;
    }
    COW_AT(101d6631)
    if (rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u);
    COW_AT(101d663d)
        wr32(eax + 0x880u, COW_IMG(0x101d6190u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t30 = cow_thiscall(g, COW_IMG(0x100ad1e0u), rd32(rd32(COW_IMG(0x106631d4u)) + 0x38u), 1, 0u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    COW_AT(101d6657)
    wr8(COW_IMG(0x106631d0u), 1u);
    wr8(COW_IMG(0x106218e6u), 1u);
    wr8(COW_IMG(0x10482f18u), 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101d65b5: ;
    COW_AT(101d65b5)
    wr8(self + 0x15u, (uint8_t)eax);
    goto L_101d6626;
L_101d65ba: ;
    COW_AT(101d65ba)
    if ((uint32_t)(int16_t)arg2 - 1u > 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_101d6626;
    }
    COW_AT(101d65c5)
    t19 = rd32(COW_IMG(0x101d6724u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t19 - RD)
    {
    case 0x101d65ccu: goto L_101d65cc;
    case 0x101d65e1u: goto L_101d65e1;
    case 0x101d65e7u: goto L_101d65e7;
    case 0x101d6604u: goto L_101d6604;
    default: rt_fatal(g, COW_IMG(0x101d65c5u), "switch");
    }
    return 0;
L_101d65cc: ;
    COW_AT(101d65cc)
    t27 = rd32(self + 8u);
    wr8(self + 0x15u, 0xffu);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_call_regs(g, COW_IMG(0x1015e790u), t27, COW_IMG(0x10621838u), g->edx, 0, 2, t27, 1u);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    goto L_101d6626;
L_101d65e1: ;
    COW_AT(101d65e1)
    wr8(self + 0x15u, 0u);
    eax = (uint32_t)(int16_t)arg2 - 1u;
    goto L_101d6626;
L_101d65e7: ;
    COW_AT(101d65e7)
    t24 = rd32(self + 8u);
    wr8(self + 0x15u, 0xffu);
    wr8(self + 0x18u, 1u);
    g->ebx = 1u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_call_regs(g, COW_IMG(0x10118db0u), (uint32_t)(int16_t)arg2 - 1u, t24, g->edx, 0, 2, 1u, 0u);
    t26 = g->edx;
    wr16(rd32(self + 8u) + 0x5eu, 0u);
    eax = t25;
    edx = t26;
    goto L_101d6626;
L_101d6604: ;
    COW_AT(101d6604)
    if (rd8(self + 0x1au) != 0u)
    {
        eax = ((uint32_t)(int16_t)arg2 - 1u & 0xffffff00u) | rd8(self + 0x1au);
    COW_AT(101d6616)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t22 = cow_stdcall(g, COW_IMG(0x100f1080u), 0);
        t23 = g->edx;
        wr8(self + 0x15u, (uint8_t)((t22 != 0u) + 0x7du));
        eax = t22;
        edx = (t23 & 0xffffff00u) | (uint8_t)((t22 != 0u) + 0x7du);
    }
    else
    {
        eax = ((uint32_t)(int16_t)arg2 - 1u & 0xffffff00u) | rd8(self + 0x1au);
    COW_AT(101d660b)
        wr8(self + 0x15u, 0xffu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t20 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    goto L_101d6626;
L_101d666e: ;
    COW_AT(101d666e)
    if (rd8(self + 0x18u) == 0u)
    {
        eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x18u);
        goto L_101d668a;
    }
    eax = ((uint32_t)(int16_t)arg1 - 1u & 0xffffff00u) | rd8(self + 0x18u);
    COW_AT(101d6675)
    t8 = rd32(self + 8u);
    wr8(self + 0x18u, 0u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t8, g->edx, 0, 2, 4u, 0u);
    t10 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t10;
    return t9;
L_101d668a: ;
    COW_AT(101d668a)
    t11 = rd32(self + 8u);
    g->edx = t11;
    g->esp = sp0 - 8u;
    t12 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t11, 1u);
    t13 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t13;
    return t12;
L_101d669f: ;
    COW_AT(101d669f)
    if (rd8(self + 0x18u) == 0u)
    {
    COW_AT(101d66ac)
        eax = 4u;
    }
    else
    {
    COW_AT(101d66a6)
        eax = (uint32_t)(int8_t)rd8(self + 0x16u);
    }
    COW_AT(101d66b1)
    if ((int16_t)arg2 <= (int32_t)eax) goto L_101d66fb;
    COW_AT(101d66ba)
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, eax, 0u);
    t7 = rd32(COW_IMG(0x104e1d4cu));
    wr8(t7 + 0x4cu, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = t7;
    return t6;
L_101d66d4: ;
    COW_AT(101d66d4)
    if (rd8(self + 0x18u) == 0u)
    {
    COW_AT(101d66e1)
        eax = 4u;
    }
    else
    {
    COW_AT(101d66db)
        eax = (uint32_t)(int8_t)rd8(self + 0x16u);
    }
    COW_AT(101d66e6)
    if ((int16_t)arg2 > (int32_t)eax)
    {
    COW_AT(101d66ef)
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 1u, 0u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
L_101d66fb: ;
    COW_AT(101d66fb)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d6540(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d6558u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d655fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d6573u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101d657fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6593u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d659au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d65afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d65b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d65bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d65c5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d65ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d65e1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d65e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6604u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d660bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6616u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6626u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6631u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d663du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d6657u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x101d666eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d6675u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d668au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101d669fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101d66fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6540(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101d6540(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
