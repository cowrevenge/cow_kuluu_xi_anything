/* f_0x100a1070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a1070(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_250;
    uint32_t loc_254;
    uint32_t loc_258;
    uint32_t loc_25c;
    uint32_t loc_260;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 640u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a10ceu: ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x25cu); in_esi = rd32(sp0 - 0x258u); in_ebp = rd32(sp0 - 0x254u); in_ebx = rd32(sp0 - 0x250u); g->ebp = rd32(sp0 - 0x254u); g->ebx = rd32(sp0 - 0x250u); g->edi = rd32(sp0 - 0x25cu); g->esi = rd32(sp0 - 0x258u); goto E_100a10ce;
    case 0x100a10e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a10e7;
    case 0x100a10f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a10f2;
    case 0x100a10fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a10fd;
    case 0x100a110au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a110a;
    case 0x100a111fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a111f;
    case 0x100a1123u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a1123;
    case 0x100a112cu: ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_edi = rd32(sp0 - 0x25cu); in_esi = rd32(sp0 - 0x258u); in_ebp = rd32(sp0 - 0x254u); in_ebx = rd32(sp0 - 0x250u); g->ebp = rd32(sp0 - 0x254u); g->ebx = rd32(sp0 - 0x250u); g->edi = rd32(sp0 - 0x25cu); g->esi = rd32(sp0 - 0x258u); goto E_100a112c;
    case 0x100a1133u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; loc_25c = rd32(sp0 - 0x25cu); loc_258 = rd32(sp0 - 0x258u); loc_254 = rd32(sp0 - 0x254u); loc_250 = rd32(sp0 - 0x250u); goto E_100a1133;
    case 0x100a114eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a114e;
    case 0x100a115bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a115b;
    case 0x100a1177u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a1177;
    case 0x100a1188u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a1188;
    case 0x100a118cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a118c;
    case 0x100a119fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a119f;
    case 0x100a11acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a11ac;
    case 0x100a11b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a11b2;
    case 0x100a11c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a11c8;
    case 0x100a11cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a11cf;
    case 0x100a11d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_100a11d2;
    case 0x100a1201u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a1201;
    case 0x100a1208u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a1208;
    case 0x100a120bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a120b;
    case 0x100a1227u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_100a1227;
    case 0x100a1238u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a1238;
    case 0x100a1241u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a1241;
    case 0x100a1250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a1250;
    case 0x100a125du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100a125d;
    case 0x100a126du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_260 = rd32(sp0 - 0x260u); goto E_100a126d;
    case 0x100a127du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a127d;
    default: break;
    }
#endif

    COW_AT(100a1070)
    wr32(sp0 - 0x250u, in_ebx);
    wr32(sp0 - 0x254u, in_ebp);
    wr32(sp0 - 0x258u, in_esi);
    wr32(sp0 - 0x25cu, in_edi);
    esi = COW_IMG(0x10488d08u);
    edi = sp0 - 0x200u;
    ecx = 0x80u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(sp0 - 0x24cu, 0u);
    wr8(sp0 - 0x24bu, 2u);
    wr8(sp0 - 0x24au, 0u);
    t1 = rd32(arg3 + 0x10u);
    wr32(COW_IMG(0x10488d08u), t1);
    t2 = rd32(arg3 + 0x14u);
    wr32(COW_IMG(0x10488d0cu), t2);
    t3 = rd32(arg3 + 0x18u);
    wr32(COW_IMG(0x10488d10u), t3);
    t4 = rd32(arg3 + 0x1cu);
    wr32(COW_IMG(0x10488d14u), t4);
    if ((rd8(arg3 + 0xbu) & 0x80u) != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_100a112c;
    }
    edx = t4;
    COW_AT(100a10ce)
    t5 = (edx & 0xffff0000u) | rd16(arg3 + 8u);
    wr32(sp0 - 0x260u, (uint16_t)t5);
    g->ecx = (uint16_t)t5;
    g->edx = t5;
    g->esp = sp0 - 0x25cu;
    t6 = cow_call_regs(g, COW_IMG(0x10086fc0u), arg3 + 0x10u, g->ecx, g->edx, 1, 1, (uint16_t)t5);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_100a10f2;
    }
    eax = t6;
    edx = t8;
    COW_AT(100a10e7)
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return eax;
L_100a10f2: ;
    COW_AT(100a10f2)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_100a110a;
    }
    COW_AT(100a10fd)
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a110a: ;
    COW_AT(100a110a)
    t9 = rd32(ecx + 0x74u);
    wr32(sp0 - 0x248u, t9);
    if (rd32(ecx + 0x78u) != rd32(arg3 + 4u))
    {
        eax = rd32(arg3 + 4u);
        goto L_100a119f;
    }
    eax = rd32(arg3 + 4u);
    ecx = rd32(ecx + 0x78u);
    COW_AT(100a111f)
    if (ecx == 0u) goto L_100a119f;
    COW_AT(100a1123)
    wr16(COW_IMG(0x104804ccu), (uint16_t)edx);
    loc_250 = rd32(sp0 - 0x250u);
    loc_254 = rd32(sp0 - 0x254u);
    loc_258 = rd32(sp0 - 0x258u);
    loc_25c = rd32(sp0 - 0x25cu);
L_100a1133: ;
    COW_AT(100a1133)
    t10 = rd16(arg3 + 0xau) & 0x7fffu;
    wr32(sp0 - 0x260u, t10);
    wr32(sp0 - 0x264u, 8u);
    g->eax = eax;
    g->ecx = t10;
    g->esp = sp0 - 0x25cu;
    t11 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 8u, t10);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        ebp = t11;
        goto L_100a115b;
    }
    eax = t11;
    edx = t13;
    COW_AT(100a114e)
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a112c: ;
    COW_AT(100a112c)
    wr16(COW_IMG(0x104804ccu), 0u);
    eax = arg3 + 0x10u;
    loc_250 = in_ebx;
    loc_254 = in_ebp;
    loc_258 = in_esi;
    loc_25c = in_edi;
    goto L_100a1133;
L_100a115b: ;
    COW_AT(100a115b)
    t14 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x10482f40u), (uint16_t)t14);
    t15 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x104855aau), (uint16_t)t15);
    if (rd8(arg3 + 0xcu) >= 8u)
    {
        eax = (((eax & 0xffff0000u) | t15) & 0xffffff00u) | rd8(arg3 + 0xcu);
        edx = (edx & 0xffff0000u) | t14;
    COW_AT(100a1188)
        wr8(sp0 - 0x24cu, 0u);
    }
    else
    {
        eax = (((eax & 0xffff0000u) | t15) & 0xffffff00u) | rd8(arg3 + 0xcu);
        edx = (edx & 0xffff0000u) | t14;
    COW_AT(100a1177)
        t16 = rd8(COW_IMG(0x1035b944u) + (uint8_t)eax);
        wr8(sp0 - 0x24cu, (uint8_t)t16);
        eax = (uint8_t)eax;
        ecx = (ecx & 0xffffff00u) | t16;
    }
    COW_AT(100a118c)
    if (((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 0x40u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047fb40u));
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
        goto L_100a11ac;
    }
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
L_100a119f: ;
    COW_AT(100a119f)
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a11ac: ;
    COW_AT(100a11ac)
    if ((rd8(arg3 + 0xbu) & 0x80u) != 0u)
    {
    COW_AT(100a1227)
        if (rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) == 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
            edx = rd16(arg3 + 8u);
    COW_AT(100a125d)
            t20 = -(rd8(arg3 + 0x10u) != 0u) & arg3 + 0x10u;
            wr32(sp0 - 0x260u, t20);
            wr32(sp0 - 0x264u, 0u);
            wr32(sp0 - 0x268u, 0u);
            wr32(sp0 - 0x26cu, sp0 - 0x24cu);
            eax = t20;
            ecx = sp0 - 0x24cu;
            loc_260 = t20;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
            edx = rd16(arg3 + 8u);
    COW_AT(100a1238)
            if (rd16(eax + 0x210u) == 0u)
            {
    COW_AT(100a1250)
                wr32(sp0 - 0x260u, eax + 0x7cu);
                wr32(sp0 - 0x264u, 0u);
                wr32(sp0 - 0x268u, 0u);
                wr32(sp0 - 0x26cu, sp0 - 0x24cu);
                loc_260 = eax + 0x7cu;
                eax = sp0 - 0x24cu;
            }
            else
            {
    COW_AT(100a1241)
                wr32(sp0 - 0x260u, eax + 0x214u);
                wr32(sp0 - 0x264u, 0u);
                wr32(sp0 - 0x268u, 0u);
                wr32(sp0 - 0x26cu, sp0 - 0x24cu);
                loc_260 = eax + 0x214u;
                eax = sp0 - 0x24cu;
            }
        }
    COW_AT(100a126d)
        wr32(sp0 - 0x270u, 1u);
        wr32(sp0 - 0x274u, ebp);
        wr32(sp0 - 0x278u, COW_IMG(0x103d3c84u));
        g->esp = sp0 - 0x25cu;
        t21 = cow_call_regs(g, COW_IMG(0x100ad660u), eax, ecx, edx, 1, 7, COW_IMG(0x103d3c84u), ebp, 1u, sp0 - 0x24cu, 0u, 0u, loc_260);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    else
    {
    COW_AT(100a11b2)
        if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) + 0x210u) == 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
    COW_AT(100a11cf)
            eax = eax + 0x7cu;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
    COW_AT(100a11c8)
            eax = eax + 0x214u;
        }
    COW_AT(100a11d2)
        wr32(sp0 - 0x260u, eax);
        wr32(sp0 - 0x264u, COW_IMG(0x1035bb48u));
        wr32(sp0 - 0x268u, sp0 - 0x240u);
        g->ebx = 0u;
        g->esp = sp0 - 0x254u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, COW_IMG(0x1035bb48u), eax, rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u));
        t17 = (arg3 & 0xffff0000u) | rd16(arg3 + 8u);
        if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)t17 * 4u) + 0x210u) == 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t17 * 4u);
            edx = (uint16_t)t17;
            esi = t17;
    COW_AT(100a1208)
            eax = eax + 0x7cu;
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t17 * 4u);
            edx = (uint16_t)t17;
            esi = t17;
    COW_AT(100a1201)
            eax = eax + 0x214u;
        }
    COW_AT(100a120b)
        wr32(sp0 - 0x260u, eax);
        wr32(sp0 - 0x264u, esi);
        wr32(sp0 - 0x268u, 1u);
        wr32(sp0 - 0x26cu, 0u);
        wr32(sp0 - 0x270u, sp0 - 0x24cu);
        wr32(sp0 - 0x274u, 1u);
        wr32(sp0 - 0x278u, ebp);
        wr32(sp0 - 0x27cu, sp0 - 0x240u);
        g->esp = sp0 - 0x25cu;
        t18 = cow_call_regs(g, COW_IMG(0x100ad5e0u), sp0 - 0x24cu, sp0 - 0x240u, edx, 1, 8, sp0 - 0x240u, ebp, 1u, sp0 - 0x24cu, 0u, 1u, esi, eax);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    COW_AT(100a127d)
    esi = sp0 - 0x200u;
    edi = COW_IMG(0x10488d08u);
    ecx = 0x80u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = rd32(sp0 - 0x250u);
    g->esi = rd32(sp0 - 0x258u);
    g->edi = rd32(sp0 - 0x25cu);
    g->ebp = rd32(sp0 - 0x254u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a1070(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a10ceu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x25cu);
        in_esi = rd32(sp0 - 0x258u);
        in_ebp = rd32(sp0 - 0x254u);
        in_ebx = rd32(sp0 - 0x250u);
        g->esp = sp0 - 0x25cu;
        g->eax = arg3 + 0x10u;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a10e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        (void)sp0;
        return 1;
    }
    case 0x100a10f2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a10fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        (void)sp0;
        return 1;
    }
    case 0x100a110au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a111fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a1123u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a112cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x25cu);
        in_esi = rd32(sp0 - 0x258u);
        in_ebp = rd32(sp0 - 0x254u);
        in_ebx = rd32(sp0 - 0x250u);
        g->esp = sp0 - 0x25cu;
        g->eax = arg3 + 0x10u;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a1133u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_250;
        uint32_t loc_254;
        uint32_t loc_258;
        uint32_t loc_25c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        loc_25c = rd32(sp0 - 0x25cu);
        loc_258 = rd32(sp0 - 0x258u);
        loc_254 = rd32(sp0 - 0x254u);
        loc_250 = rd32(sp0 - 0x250u);
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a114eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        (void)sp0;
        return 1;
    }
    case 0x100a115bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a1177u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a1188u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a118cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a119fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        (void)sp0;
        return 1;
    }
    case 0x100a11acu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a11b2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a11c8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a11cfu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a11d2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1201u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        wr32(sp0 - 0x268u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100a1208u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        wr32(sp0 - 0x268u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100a120bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        wr32(sp0 - 0x268u, sp0 - 0x240u);
        (void)sp0;
        return 1;
    }
    case 0x100a1227u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->esi = arg3;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a1238u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a1241u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a1250u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a125du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x25cu;
        g->ebx = 0u;
        g->edi = arg3 + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100a126du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_260;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_260 = rd32(sp0 - 0x260u);
        g->esp = sp0 - 0x26cu;
        wr32(sp0 - 0x26cu, sp0 - 0x24cu);
        wr32(sp0 - 0x268u, 0u);
        wr32(sp0 - 0x264u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100a127du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x25cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a1070(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a1070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
