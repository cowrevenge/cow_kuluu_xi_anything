/* f_0x10200de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10200de0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1b8;
    uint32_t loc_1bc;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 472u);

    wr32(sp0 - 0x1b8u, in_ebp);
    wr32(sp0 - 0x1bcu, in_esi);
    wr8(COW_IMG(0x10663ac8u), 0u);
    if (arg3 != 0u) goto L_10200fe0;
    wr32(sp0 - 0x1c0u, (uint16_t)arg2);
    wr32(sp0 - 0x1b0u, (uint16_t)arg2);
    g->edx = in_edx;
    g->esp = sp0 - 0x1bcu;
    t1 = cow_cdecl(g, COW_IMG(0x10200aa0u), 1, (uint16_t)arg2);
    t2 = g->edx;
    if (t1 != 0xbu)
    {
        edx = t2;
        ebp = t1;
        goto L_10200e33;
    }
    edx = t2;
    wr32(sp0 - 0x1c0u, 0x60u);
    g->edx = edx;
    g->esp = sp0 - 0x1bcu;
    t3 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x60u);
    t4 = g->edx;
    g->esi = rd32(sp0 - 0x1bcu);
    g->ebp = rd32(sp0 - 0x1b8u);
    g->edx = t4;
    return t3 & 0xffffff00u;
L_10200e33: ;
    wr32(sp0 - 0x1c0u, in_edi);
    t5 = rd32(arg5 + 8u);
    wr32(sp0 - 0x1c4u, t5);
    wr32(sp0 - 0x1c8u, COW_IMG(0x10385260u));
    wr32(sp0 - 0x1ccu, sp0 - 0x1acu);
    g->esp = sp0 - 0x1b8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1acu, COW_IMG(0x10385260u), t5, in_edi, rd32(sp0 - 0x1bcu));
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, 1u);
    wr32(sp0 - 0x1ccu, 0u);
    wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
    wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
    t6 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 0x1c0u;
    cow_thiscall(g, COW_IMG(0x10127c00u), t6, 5, sp0 - 0x1acu, sp0 - 0x1b4u, 0u, 1u, 0u);
    t7 = g->ecx;
    if (ebp > 0xcu)
    {
        ecx = t7;
        goto L_10200f2c;
    }
    t8 = rd32(COW_IMG(0x10201004u) + rd8(COW_IMG(0x1020100cu) + ebp) * 4u);
    ecx = rd8(COW_IMG(0x1020100cu) + ebp);
    switch (t8 - RD)
    {
    case 0x10200e93u: goto L_10200e93;
    case 0x10200f2cu: goto L_10200f2c;
    default: rt_fatal(g, COW_IMG(0x10200e8cu), "switch");
    }
    return 0;
L_10200e93: ;
    t9 = rd32(arg5 + 0x10u);
    edi = t9;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u > 0x12cu)
    {
        ecx = ~ecx - 1u;
    }
    else
    {
        ecx = ~ecx - 1u;
        edx = t9;
        wr32(sp0 - 0x1c4u, edx);
        wr32(sp0 - 0x1c8u, COW_IMG(0x10385254u));
        wr32(sp0 - 0x1ccu, sp0 - 0x1acu);
        g->ecx = ecx;
        g->edx = sp0 - 0x1acu;
        g->esp = sp0 - 0x1b8u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1acu, COW_IMG(0x10385254u), edx, rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu));
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x1d0u, sp0 - 0x1acu);
        g->esp = sp0 - 0x1ccu;
        cow_call_regs(g, COW_IMG(0x101ba200u), sp0 - 0x1acu, g->ecx, g->edx, 1, 1, sp0 - 0x1acu);
        wr32(sp0 - 0x1c4u, 0u);
        wr32(sp0 - 0x1c8u, 1u);
        wr32(sp0 - 0x1ccu, 0u);
        wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
        wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
        t12 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 0x1c0u;
        cow_thiscall(g, COW_IMG(0x10127c00u), t12, 5, sp0 - 0x1acu, sp0 - 0x1b4u, 0u, 1u, 0u);
        t13 = g->ecx;
        ecx = t13;
    }
    t14 = rd32(arg5 + 0x14u);
    edi = t14;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u > 0x12cu) goto L_10200f7f;
    ecx = ~ecx - 1u;
    edx = t14;
    wr32(sp0 - 0x1c4u, edx);
    wr32(sp0 - 0x1c8u, COW_IMG(0x10385248u));
    wr32(sp0 - 0x1ccu, sp0 - 0x1acu);
    g->edx = edx;
    g->esp = sp0 - 0x1b8u;
    t15 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x1acu, COW_IMG(0x10385248u), edx, rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu));
    t16 = g->edx;
    wr32(sp0 - 0x1d0u, sp0 - 0x1acu);
    g->esp = sp0 - 0x1ccu;
    cow_call_regs(g, COW_IMG(0x101ba200u), t15, g->ecx, g->edx, 1, 1, sp0 - 0x1acu);
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, 1u);
    wr32(sp0 - 0x1ccu, 0u);
    wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
    wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
    edx = sp0 - 0x1b4u;
L_10200f74: ;
    g->esp = sp0 - 0x1c0u;
    cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x1acu, sp0 - 0x1b4u, 0u, 1u, 0u);
L_10200f7f: ;
    if (rd32(rd32(COW_IMG(0x10663abcu)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10663abcu)) + 8u);
        edx = rd32(COW_IMG(0x10663abcu));
        edi = rd32(sp0 - 0x1c0u);
        goto L_10200ff8;
    }
    edx = rd32(COW_IMG(0x10663abcu));
    edi = rd32(sp0 - 0x1c0u);
    if (rd32(sp0 - 0x1b0u) == 1u)
    {
        eax = rd32(sp0 - 0x1b0u) - 1u;
        goto L_10200fba;
    }
    eax = rd32(sp0 - 0x1b0u) - 1u;
    if (rd32(COW_IMG(0x10663ac0u)) == 0u) goto L_10200ff8;
    ecx = rd32(COW_IMG(0x10663ac0u));
    wr32(sp0 - 0x1c0u, ebp);
    t21 = rd32(arg5 + 0x18u);
    wr32(sp0 - 0x1c4u, t21);
    t22 = rd32(arg5 + 4u);
    wr32(sp0 - 0x1c8u, t22);
    wr32(sp0 - 0x1ccu, rd32(arg5));
    g->eax = rd32(arg5);
    g->edx = t22;
    t23 = rd32(arg5);
    g->esp = sp0 - 0x1bcu;
    t24 = cow_thiscall(g, COW_IMG(0x10200160u), ecx, 4, t23, t22, t21, ebp);
    t25 = g->edx;
    g->esi = rd32(sp0 - 0x1bcu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x1b8u);
    g->edx = t25;
    return t24 & 0xffffff00u;
L_10200f2c: ;
    eax = 0u;
L_10200f2e: ;
    t17 = rd8(COW_IMG(0x10385240u) + eax);
    wr8(eax + sp0 - 0x1acu, (uint8_t)t17);
    if ((uint8_t)t17 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t17;
        goto L_10200f2e;
    }
    ecx = (ecx & 0xffffff00u) | t17;
    t18 = rd32(sp0 - 0x1b0u);
    edi = sp0 - 0x1acu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, 0x12cu);
    t19 = sp0 + ~ecx - 0x1adu;
    wr32(sp0 - 0x1ccu, t19);
    wr32(sp0 - 0x1d0u, t18);
    g->edx = t18;
    g->esp = sp0 - 0x1c0u;
    cow_cdecl(g, COW_IMG(0x10311ab1u), 4, t18, t19, 0x12cu, 0u);
    t20 = g->edx;
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, 1u);
    wr32(sp0 - 0x1ccu, 0u);
    wr32(sp0 - 0x1d0u, sp0 - 0x1b4u);
    wr32(sp0 - 0x1d4u, sp0 - 0x1acu);
    edx = t20;
    goto L_10200f74;
L_10200fba: ;
    if (rd32(COW_IMG(0x10663ac4u)) == 0u) goto L_10200ff8;
    ecx = rd32(COW_IMG(0x10663ac4u));
    wr32(sp0 - 0x1c0u, ebp);
    t26 = rd32(arg5 + 0x18u);
    wr32(sp0 - 0x1c4u, t26);
    t27 = rd32(arg5 + 4u);
    wr32(sp0 - 0x1c8u, t27);
    wr32(sp0 - 0x1ccu, rd32(arg5));
    g->eax = t27;
    g->edx = rd32(arg5);
    t28 = rd32(arg5);
    g->esp = sp0 - 0x1bcu;
    t29 = cow_thiscall(g, COW_IMG(0x10200160u), ecx, 4, t28, t27, t26, ebp);
    t30 = g->edx;
    g->esi = rd32(sp0 - 0x1bcu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x1b8u);
    g->edx = t30;
    return t29 & 0xffffff00u;
L_10200fe0: ;
    if (arg3 != 1u)
    {
        eax = arg3;
        edx = in_edx;
        edi = in_edi;
        loc_1b8 = in_ebp;
        loc_1bc = in_esi;
    }
    else
    {
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
            edx = in_edx;
            edi = in_edi;
            loc_1b8 = in_ebp;
            loc_1bc = in_esi;
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
            wr32(sp0 - 0x1c0u, 0x10u);
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0x1bcu;
            t31 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x10u);
            t32 = g->edx;
            eax = t31;
            edx = t32;
            edi = in_edi;
            loc_1b8 = in_ebp;
            loc_1bc = in_esi;
        }
    }
L_10200ff8: ;
    g->esi = loc_1bc;
    g->edi = edi;
    g->ebp = loc_1b8;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10200de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10200de0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
