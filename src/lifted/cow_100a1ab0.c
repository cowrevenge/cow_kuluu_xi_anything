/* f_0x100a1ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a1ab0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_628;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 1612u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a1ad1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x624u); in_esi = rd32(sp0 - 0x620u); in_ebp = rd32(sp0 - 0x61cu); g->ebp = rd32(sp0 - 0x61cu); g->edi = rd32(sp0 - 0x624u); g->esi = rd32(sp0 - 0x620u); goto E_100a1ad1;
    case 0x100a1addu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x624u); in_esi = rd32(sp0 - 0x620u); in_ebp = rd32(sp0 - 0x61cu); g->ebp = rd32(sp0 - 0x61cu); g->edi = rd32(sp0 - 0x624u); g->esi = rd32(sp0 - 0x620u); goto E_100a1add;
    case 0x100a1aefu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x624u); in_esi = rd32(sp0 - 0x620u); in_ebp = rd32(sp0 - 0x61cu); g->ebp = rd32(sp0 - 0x61cu); g->edi = rd32(sp0 - 0x624u); g->esi = rd32(sp0 - 0x620u); goto E_100a1aef;
    case 0x100a1af6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x624u); in_esi = rd32(sp0 - 0x620u); in_ebp = rd32(sp0 - 0x61cu); g->ebp = rd32(sp0 - 0x61cu); g->edi = rd32(sp0 - 0x624u); g->esi = rd32(sp0 - 0x620u); goto E_100a1af6;
    case 0x100a1b0au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x624u); in_esi = rd32(sp0 - 0x620u); in_ebp = rd32(sp0 - 0x61cu); g->ebp = rd32(sp0 - 0x61cu); g->edi = rd32(sp0 - 0x624u); g->esi = rd32(sp0 - 0x620u); goto E_100a1b0a;
    case 0x100a1b16u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x624u); in_esi = rd32(sp0 - 0x620u); in_ebp = rd32(sp0 - 0x61cu); g->ebp = rd32(sp0 - 0x61cu); g->edi = rd32(sp0 - 0x624u); g->esi = rd32(sp0 - 0x620u); goto E_100a1b16;
    case 0x100a1b4bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; loc_628 = rd32(sp0 - 0x628u); in_edi = rd32(sp0 - 0x624u); in_esi = rd32(sp0 - 0x620u); in_ebp = rd32(sp0 - 0x61cu); g->ebp = rd32(sp0 - 0x61cu); g->edi = rd32(sp0 - 0x624u); g->esi = rd32(sp0 - 0x620u); goto E_100a1b4b;
    case 0x100a1b87u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1b87;
    case 0x100a1b99u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1b99;
    case 0x100a1ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1ba0;
    case 0x100a1bb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1bb4;
    case 0x100a1bc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1bc0;
    case 0x100a1bc7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; loc_628 = rd32(sp0 - 0x628u); in_edi = rd32(sp0 - 0x624u); in_esi = rd32(sp0 - 0x620u); in_ebp = rd32(sp0 - 0x61cu); g->ebp = rd32(sp0 - 0x61cu); g->edi = rd32(sp0 - 0x624u); g->esi = rd32(sp0 - 0x620u); goto E_100a1bc7;
    case 0x100a1beeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1bee;
    case 0x100a1bf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_628 = rd32(sp0 - 0x628u); goto E_100a1bf9;
    case 0x100a1c00u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_628 = rd32(sp0 - 0x628u); goto E_100a1c00;
    case 0x100a1c05u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1c05;
    case 0x100a1c4au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1c4a;
    case 0x100a1c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1c66;
    case 0x100a1ca0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1ca0;
    case 0x100a1cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1cac;
    case 0x100a1cbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1cbd;
    case 0x100a1ce3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1ce3;
    case 0x100a1cf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1cf5;
    case 0x100a1cfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1cfc;
    case 0x100a1d10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1d10;
    case 0x100a1d1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1d1c;
    case 0x100a1d1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1d1e;
    default: break;
    }
#endif

    COW_AT(100a1ab0)
    wr32(sp0 - 0x61cu, in_ebp);
    wr32(sp0 - 0x620u, in_esi);
    wr32(sp0 - 0x624u, in_edi);
    t1 = rd32(COW_IMG(0x104859e4u));
    wr8(sp0 - 0x618u, 0u);
    wr8(sp0 - 0x617u, 0u);
    wr8(sp0 - 0x616u, 0u);
    if (t1 == 0u) goto L_100a1add;
    eax = t1;
    COW_AT(100a1ad1)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_100a1add: ;
    COW_AT(100a1add)
    esi = COW_IMG(0x10488800u);
    edi = sp0 - 0x614u;
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = 0u;
L_100a1aef: ;
    COW_AT(100a1aef)
    if ((int32_t)eax < 1024)
    {
    COW_AT(100a1af6)
        esi = COW_IMG(0x10488d08u) + eax;
        edi = eax + sp0 - 0x400u;
        ecx = 0x40u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    COW_AT(100a1b0a)
    if ((int32_t)(eax + 0x100u) < 1280)
    {
        eax = eax + 0x100u;
        goto L_100a1aef;
    }
    COW_AT(100a1b16)
    t2 = rd32(arg1);
    esi = COW_IMG(0x104886f8u);
    edi = sp0 - 0x600u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x628u, t2);
    esi = COW_IMG(0x10488108u);
    edi = sp0 - 0x500u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((t2 & 0xff000000u) != 0u)
    {
        eax = t2;
        loc_628 = t2;
        goto L_100a1bc7;
    }
    eax = t2;
    loc_628 = t2;
    COW_AT(100a1b4b)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x624u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x100a1770u), ecx, 1, loc_628);
    t4 = g->edx;
    wr32(sp0 - 0x62cu, 0u);
    esi = t3;
    edi = COW_IMG(0x10488d08u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = COW_IMG(0x10488d08u);
    edi = COW_IMG(0x104886f8u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t5 = (t3 & 0xffff0000u) | rd16(arg1 + 8u);
    wr32(sp0 - 0x630u, t5);
    wr32(sp0 - 0x634u, COW_IMG(0x10488d08u));
    g->ecx = ecx;
    g->edx = t4;
    g->esp = sp0 - 0x628u;
    t6 = cow_call_regs(g, COW_IMG(0x100a1a00u), t5, g->ecx, g->edx, 1, 3, COW_IMG(0x10488d08u), t5, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        goto L_100a1bee;
    }
    edx = t8;
    COW_AT(100a1b87)
    esi = sp0 - 0x614u;
    edi = COW_IMG(0x10488800u);
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = 0u;
L_100a1b99: ;
    COW_AT(100a1b99)
    if ((int32_t)eax < 1024)
    {
    COW_AT(100a1ba0)
        esi = eax + sp0 - 0x400u;
        edi = COW_IMG(0x10488d08u) + eax;
        ecx = 0x40u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    COW_AT(100a1bb4)
    if ((int32_t)(eax + 0x100u) < 1280)
    {
        eax = eax + 0x100u;
        goto L_100a1b99;
    }
    eax = eax + 0x100u;
    COW_AT(100a1bc0)
    eax = eax & 0xffffff00u;
L_100a1d1e: ;
    COW_AT(100a1d1e)
    esi = sp0 - 0x600u;
    edi = COW_IMG(0x104886f8u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = sp0 - 0x500u;
    edi = COW_IMG(0x10488108u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esi = rd32(sp0 - 0x620u);
    g->edi = rd32(sp0 - 0x624u);
    g->ebp = rd32(sp0 - 0x61cu);
    g->edx = edx;
    return eax;
L_100a1bc7: ;
    COW_AT(100a1bc7)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x624u;
    t9 = cow_cdecl(g, COW_IMG(0x100a1d50u), 1, loc_628);
    t10 = g->edx;
    esi = t9;
    edi = COW_IMG(0x10488d08u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = COW_IMG(0x10488d08u);
    edi = COW_IMG(0x104886f8u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edx = t10;
L_100a1bee: ;
    COW_AT(100a1bee)
    t11 = rd32(arg1 + 4u);
    wr32(sp0 - 0x628u, t11);
    if ((rd32(arg1 + 4u) & 0xff000000u) != 0u)
    {
        eax = t11;
        loc_628 = t11;
    COW_AT(100a1c00)
        g->eax = eax;
        g->esp = sp0 - 0x624u;
        t13 = cow_cdecl(g, COW_IMG(0x100a1d50u), 1, loc_628);
        eax = t13;
    }
    else
    {
        eax = t11;
        loc_628 = t11;
    COW_AT(100a1bf9)
        g->eax = eax;
        g->esp = sp0 - 0x624u;
        t12 = cow_thiscall_cdecl(g, COW_IMG(0x100a1770u), ecx, 1, loc_628);
        eax = t12;
    }
    COW_AT(100a1c05)
    esi = eax;
    edi = COW_IMG(0x10488e08u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = COW_IMG(0x10488e08u);
    edi = COW_IMG(0x10488108u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = arg1 + 0x20u;
    edi = COW_IMG(0x10488f08u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = arg1 + 0x38u;
    edi = COW_IMG(0x10489008u);
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = 0u;
    ecx = arg1 + 0xcu;
L_100a1c4a: ;
    COW_AT(100a1c4a)
    wr32(COW_IMG(0x10487020u) + eax, rd32(ecx));
    t14 = rd32(ecx);
    wr32(COW_IMG(0x10488800u) + eax, t14);
    if ((int32_t)(eax + 4u) < 20)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_100a1c4a;
    }
    eax = eax + 4u;
    ecx = ecx + 4u;
    edx = t14;
    COW_AT(100a1c66)
    wr8(sp0 - 0x618u, rd8(arg1 + 0x51u));
    wr32(sp0 - 0x628u, rd32(arg1));
    g->eax = rd32(arg1);
    g->edx = edx;
    t15 = rd32(arg1);
    g->esp = sp0 - 0x624u;
    t16 = cow_cdecl(g, COW_IMG(0x10086fe0u), 1, t15);
    t17 = g->edx;
    wr16(COW_IMG(0x10482f40u), (uint16_t)t16);
    t18 = rd32(arg1 + 4u);
    wr32(sp0 - 0x62cu, t18);
    g->ecx = t18;
    g->edx = t17;
    g->esp = sp0 - 0x628u;
    t19 = cow_cdecl(g, COW_IMG(0x10086fe0u), 1, t18);
    t20 = g->ecx;
    t21 = g->edx;
    wr16(COW_IMG(0x104855aau), (uint16_t)t19);
    t22 = (t21 & 0xffff0000u) | rd16(arg1 + 8u);
    wr32(sp0 - 0x630u, t22);
    wr32(sp0 - 0x634u, 6u);
    g->ecx = t20;
    g->esp = sp0 - 0x62cu;
    t23 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t22, 1, 2, 6u, t22);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 0u)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        esi = t23;
        goto L_100a1cac;
    }
    eax = t23;
    edx = t25;
    COW_AT(100a1ca0)
    g->esi = rd32(sp0 - 0x620u);
    g->edi = rd32(sp0 - 0x624u);
    g->ebp = rd32(sp0 - 0x61cu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a1cac: ;
    COW_AT(100a1cac)
    t26 = (eax & 0xffff0000u) | rd16(arg1 + 8u);
    wr32(sp0 - 0x628u, t26);
    g->eax = t26;
    g->edx = edx;
    g->esp = sp0 - 0x624u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x100a19b0u), ecx, 1, t26);
    t28 = g->edx;
    if ((uint8_t)t27 != 0u)
    {
        edx = t28;
    }
    else
    {
    COW_AT(100a1cbd)
        t29 = rd32(arg1 + 4u);
        wr32(sp0 - 0x628u, t29);
        wr32(sp0 - 0x62cu, rd32(arg1));
        wr32(sp0 - 0x630u, 0u);
        wr32(sp0 - 0x634u, 0u);
        t30 = (uint32_t)(int8_t)rd8(arg1 + 0x50u);
        wr32(sp0 - 0x638u, t30);
        wr32(sp0 - 0x63cu, sp0 - 0x618u);
        wr32(sp0 - 0x640u, 1u);
        wr32(sp0 - 0x644u, esi);
        wr32(sp0 - 0x648u, COW_IMG(0x103d3c84u));
        t31 = rd32(arg1);
        g->esp = sp0 - 0x624u;
        cow_call_regs(g, COW_IMG(0x100ad6d0u), t30, sp0 - 0x618u, t31, 1, 9, COW_IMG(0x103d3c84u), esi, 1u, sp0 - 0x618u, t30, 0u, 0u, t31, t29);
        t32 = g->edx;
        edx = t32;
    }
    COW_AT(100a1ce3)
    esi = sp0 - 0x614u;
    edi = COW_IMG(0x10488800u);
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = 0u;
L_100a1cf5: ;
    COW_AT(100a1cf5)
    if ((int32_t)eax < 1024)
    {
    COW_AT(100a1cfc)
        esi = eax + sp0 - 0x400u;
        edi = COW_IMG(0x10488d08u) + eax;
        ecx = 0x40u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    COW_AT(100a1d10)
    if ((int32_t)(eax + 0x100u) < 1280)
    {
        eax = eax + 0x100u;
        goto L_100a1cf5;
    }
    eax = eax + 0x100u;
    COW_AT(100a1d1c)
    eax = (eax & 0xffffff00u) | 1u;
    goto L_100a1d1e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a1ab0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a1ad1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x624u);
        in_esi = rd32(sp0 - 0x620u);
        in_ebp = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1addu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x624u);
        in_esi = rd32(sp0 - 0x620u);
        in_ebp = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1aefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x624u);
        in_esi = rd32(sp0 - 0x620u);
        in_ebp = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1af6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x624u);
        in_esi = rd32(sp0 - 0x620u);
        in_ebp = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1b0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x624u);
        in_esi = rd32(sp0 - 0x620u);
        in_ebp = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1b16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x624u);
        in_esi = rd32(sp0 - 0x620u);
        in_ebp = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1b4bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_628;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_628 = rd32(sp0 - 0x628u);
        in_edi = rd32(sp0 - 0x624u);
        in_esi = rd32(sp0 - 0x620u);
        in_ebp = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x628u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1b87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1b99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1ba0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1bb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1bc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1bc7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_628;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_628 = rd32(sp0 - 0x628u);
        in_edi = rd32(sp0 - 0x624u);
        in_esi = rd32(sp0 - 0x620u);
        in_ebp = rd32(sp0 - 0x61cu);
        g->esp = sp0 - 0x628u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1beeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1bf9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x628u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1c00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_628;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x628u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1c05u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x628u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1c4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1c66u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1ca0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1cacu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1cbdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100a1ce3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1cf5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1cfcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1d10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1d1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    case 0x100a1d1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x624u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a1ab0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a1ab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
