/* f_0x100a21c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a21c0(Guest* g)
{
    double d13;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 552u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a21e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a21e5;
    case 0x100a21efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a21ef;
    case 0x100a21f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a21f6;
    case 0x100a21fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a21fd;
    case 0x100a220bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a220b;
    case 0x100a2213u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a2213;
    case 0x100a221eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a221e;
    case 0x100a2254u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a2254;
    case 0x100a2259u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100a2259;
    case 0x100a22b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a22b1;
    case 0x100a22cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a22cb;
    case 0x100a22d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a22d9;
    case 0x100a22e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a22e1;
    case 0x100a22f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a22f4;
    case 0x100a22fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a22fc;
    case 0x100a2301u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a2301;
    case 0x100a236eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a236e;
    case 0x100a2387u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x214u); goto E_100a2387;
    default: break;
    }
#endif

    COW_AT(100a21c0)
    wr32(sp0 - 0x214u, in_esi);
    g->esp = sp0 - 0x214u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = rd16(arg3 + 4u);
    if ((t2 & 0x3fu) != 1u)
    {
        eax = t1;
        edx = (t2 & 0x3fu) - 1u;
        goto L_100a2387;
    }
    eax = t1;
    ecx = t2;
    edx = (t2 & 0x3fu) - 1u;
    COW_AT(100a21e5)
    if (ecx >> 6u == 1u) goto L_100a236e;
    ecx = (ecx >> 6u) - 1u;
    COW_AT(100a21ef)
    if (ecx == 1u) goto L_100a22cb;
    ecx = ecx - 1u;
    COW_AT(100a21f6)
    if (ecx != 1u) goto L_100a2387;
    COW_AT(100a21fd)
    if (rd16(COW_IMG(0x10485f7au)) == 0u) goto L_100a22b1;
    COW_AT(100a220b)
    if (eax == 0u) goto L_100a22b1;
    COW_AT(100a2213)
    if (rd32(arg3 + 8u) == 0u) goto L_100a22b1;
    COW_AT(100a221e)
    t3 = rd32(arg3 + 0x10u);
    wr32(sp0 - 0x210u, t3);
    t4 = rd32(arg3 + 0x18u);
    wr32(sp0 - 0x208u, t4);
    t5 = rd32(arg3 + 0x14u);
    wr32(sp0 - 0x20cu, t5);
    wr32(sp0 - 0x218u, sp0 - 0x210u);
    wr32(sp0 - 0x21cu, eax + 4u);
    t6 = rd32(arg3 + 0x1cu);
    wr32(sp0 - 0x204u, t6);
    g->eax = eax + 4u;
    g->edx = t6;
    g->esp = sp0 - 0x20cu;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100a23a0u), sp0 - 0x210u, 4, eax + 4u, sp0 - 0x210u, in_esi, t3);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)(t7 & 0xfu) >= 0)
    {
        eax = t7 & 0xfu;
        ecx = t8;
        edx = t9;
    }
    else
    {
        eax = t7 & 0xfu;
        ecx = t8;
        edx = t9;
    COW_AT(100a2254)
        eax = (eax - 1u | 0xfffffff0u) + 1u;
    }
    COW_AT(100a2259)
    wr32(sp0 - 0x220u, eax + 8u);
    wr32(sp0 - 0x224u, 0xfu);
    g->eax = eax + 8u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x21cu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xfu, eax + 8u);
    t11 = g->ecx;
    t12 = g->edx;
    d13 = fr(g, fr(g, (double)rdf32(arg3 + 0x20u) * (double)rdf32(COW_IMG(0x1032d6c8u))) + (double)rdf32(COW_IMG(0x10329a08u)));
    wr32(sp0 - 0x218u, t10);
    g->ecx = t11;
    g->edx = t12;
    fpush(g, d13);
    g->esp = sp0 - 0x218u;
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x21cu, t14);
    wr32(sp0 - 0x220u, 0x39u);
    wr32(sp0 - 0x224u, 0xau);
    g->ecx = t15;
    g->esp = sp0 - 0x21cu;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x39u);
    t18 = g->ecx;
    wr32(sp0 - 0x220u, t17);
    wr32(sp0 - 0x224u, sp0 - 0x200u);
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x210u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, t17, rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u));
    t19 = g->edx;
    wr32(sp0 - 0x218u, sp0 - 0x200u);
    g->eax = sp0 - 0x200u;
    g->edx = t19;
    g->esp = sp0 - 0x214u;
    t20 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x200u);
    t21 = g->edx;
    g->esi = rd32(sp0 - 0x214u);
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
L_100a22b1: ;
    COW_AT(100a22b1)
    wr32(sp0 - 0x218u, 0xdfu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x214u;
    t22 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xdfu);
    t23 = g->edx;
    g->esi = in_esi;
    g->edx = t23;
    return (t22 & 0xffffff00u) | 1u;
L_100a22cb: ;
    COW_AT(100a22cb)
    if (rd16(COW_IMG(0x10485f7au)) == 0u) goto L_100a2387;
    COW_AT(100a22d9)
    if (eax == 0u) goto L_100a2387;
    COW_AT(100a22e1)
    t24 = rd32(arg3 + 8u);
    wr32(eax + 0x27cu, t24);
    if (rd16(arg3 + 0x18u) >= 3u)
    {
    COW_AT(100a22fc)
        ecx = 2u;
    }
    else
    {
        ecx = (t24 & 0xffff0000u) | rd16(arg3 + 0x18u);
    COW_AT(100a22f4)
        ecx = (uint16_t)ecx;
    }
    COW_AT(100a2301)
    wr16(eax + 0x28cu, (uint16_t)ecx);
    wr16(eax + 0x28eu, rd16(arg3 + 0x1au));
    t25 = rd32(arg3 + 0xcu);
    wr32(eax + 0x280u, t25);
    t26 = rd32(arg3 + 0x10u);
    wr32(eax + 0x284u, t26);
    t27 = rd32(arg3 + 0x14u);
    wr32(eax + 0x288u, t27);
    t28 = rd8(arg3 + 0x1cu);
    wr8(eax + 0x290u, (uint8_t)t28);
    t29 = rd8(arg3 + 0x1du);
    wr8(eax + 0x291u, (uint8_t)t29);
    wr8(eax + 0x292u, rd8(arg3 + 0x1eu));
    wr8(eax + 0x293u, rd8(arg3 + 0x1fu));
    t30 = rd32(arg3 + 0x20u);
    wr32(eax + 0x298u, t30);
    t31 = rd32(arg3 + 0x24u);
    wr32(eax + 0x29cu, t31);
    g->esi = in_esi;
    g->edx = t30;
    return (eax & 0xffffff00u) | 1u;
L_100a236e: ;
    COW_AT(100a236e)
    t32 = rd32(arg3 + 8u);
    wr32(arg1 + 0x40e2eu, t32);
    t33 = rd32(arg3 + 0xcu);
    wr32(arg1 + 0x40e32u, t33);
    eax = arg1;
    edx = t32;
L_100a2387: ;
    COW_AT(100a2387)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a21c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a21e5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a21efu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a21f6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a21fdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a220bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a2213u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a221eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a2254u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x21cu;
        g->esi = arg3;
        wr32(sp0 - 0x218u, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x100a2259u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x21cu;
        g->esi = arg3;
        wr32(sp0 - 0x218u, sp0 - 0x210u);
        (void)sp0;
        return 1;
    }
    case 0x100a22b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x100a22cbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a22d9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a22e1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a22f4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a22fcu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a2301u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a236eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a2387u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a21c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a21c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
