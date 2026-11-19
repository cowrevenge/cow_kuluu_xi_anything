/* f_0x100a1600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a1600(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a1635u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_100a1635;
    case 0x100a1644u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_100a1644;
    case 0x100a1659u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_100a1659;
    case 0x100a1661u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_100a1661;
    case 0x100a1687u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a1687;
    case 0x100a16a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a16a9;
    case 0x100a16c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a16c0;
    case 0x100a16c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a16c7;
    case 0x100a16cau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100a16ca;
    case 0x100a16f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a16f9;
    case 0x100a1700u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1700;
    case 0x100a1703u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1703;
    case 0x100a1726u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100a1726;
    case 0x100a1749u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x54u); in_esi = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x50u); goto E_100a1749;
    default: break;
    }
#endif

    COW_AT(100a1600)
    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    wr8(sp0 - 0x4cu, 0x96u);
    t1 = rd16(arg3 + 8u);
    wr8(sp0 - 0x4bu, 2u);
    t2 = (in_edx & 0xffff0000u) | t1;
    wr8(sp0 - 0x4au, 0u);
    wr32(sp0 - 0x58u, (uint16_t)t2);
    g->ecx = (uint16_t)t2;
    g->edx = t2;
    g->esp = sp0 - 0x54u;
    t3 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, (uint16_t)t2);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t5;
        goto L_100a1749;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(100a1635)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) == 0u) goto L_100a1749;
    ecx = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    COW_AT(100a1644)
    t6 = rd32(ecx + 0x74u);
    wr32(sp0 - 0x48u, t6);
    if (rd32(ecx + 0x78u) != rd32(arg3 + 4u))
    {
        eax = rd32(arg3 + 4u);
        goto L_100a1749;
    }
    eax = rd32(arg3 + 4u);
    ecx = rd32(ecx + 0x78u);
    COW_AT(100a1659)
    if (ecx == 0u) goto L_100a1749;
    COW_AT(100a1661)
    wr16(COW_IMG(0x104804ccu), (uint16_t)edx);
    t7 = rd16(arg3 + 0xau) & 0x7fffu;
    wr32(sp0 - 0x58u, t7);
    wr32(sp0 - 0x5cu, 8u);
    g->eax = eax;
    g->ecx = t7;
    g->esp = sp0 - 0x54u;
    t8 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, 8u, t7);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t10;
        goto L_100a1749;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    edi = t8;
    COW_AT(100a1687)
    t11 = rd16(arg3 + 8u);
    wr16(COW_IMG(0x10482f40u), (uint16_t)t11);
    wr16(COW_IMG(0x104855aau), rd16(arg3 + 8u));
    wr8(COW_IMG(0x10488208u), 1u);
    if ((rd8(arg3 + 0xbu) & 0x80u) != 0u)
    {
        edx = (edx & 0xffff0000u) | t11;
        goto L_100a1726;
    }
    COW_AT(100a16a9)
    if (rd16(rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) + 0x210u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
        ecx = rd16(arg3 + 8u);
    COW_AT(100a16c7)
        eax = eax + 0x7cu;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
        ecx = rd16(arg3 + 8u);
    COW_AT(100a16c0)
        eax = eax + 0x214u;
    }
    COW_AT(100a16ca)
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, COW_IMG(0x1035bb48u));
    wr32(sp0 - 0x60u, sp0 - 0x40u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1035bb48u), eax, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    t12 = (arg3 & 0xffff0000u) | rd16(arg3 + 8u);
    if (rd16(rd32(COW_IMG(0x10480af0u) + (uint16_t)t12 * 4u) + 0x210u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t12 * 4u);
        esi = t12;
    COW_AT(100a1700)
        eax = eax + 0x7cu;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t12 * 4u);
        esi = t12;
    COW_AT(100a16f9)
        eax = eax + 0x214u;
    }
    COW_AT(100a1703)
    wr32(sp0 - 0x58u, eax);
    wr32(sp0 - 0x5cu, esi);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    wr32(sp0 - 0x6cu, 1u);
    wr32(sp0 - 0x70u, edi);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    g->esp = sp0 - 0x54u;
    t13 = cow_call_regs(g, COW_IMG(0x100ad5e0u), eax, sp0 - 0x4cu, sp0 - 0x40u, 1, 8, sp0 - 0x40u, edi, 1u, sp0 - 0x4cu, 0u, 1u, esi, eax);
    t14 = g->edx;
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
L_100a1726: ;
    COW_AT(100a1726)
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, sp0 - 0x4cu);
    wr32(sp0 - 0x68u, 1u);
    wr32(sp0 - 0x6cu, edi);
    wr32(sp0 - 0x70u, COW_IMG(0x103d3c84u));
    g->esp = sp0 - 0x54u;
    t15 = cow_call_regs(g, COW_IMG(0x100ad660u), sp0 - 0x4cu, ecx, edx, 1, 7, COW_IMG(0x103d3c84u), edi, 1u, sp0 - 0x4cu, 0u, 0u, 0u);
    t16 = g->edx;
    g->esi = rd32(sp0 - 0x50u);
    g->edi = rd32(sp0 - 0x54u);
    g->edx = t16;
    return (t15 & 0xffffff00u) | 1u;
L_100a1749: ;
    COW_AT(100a1749)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a1600(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a1635u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x54u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1644u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x54u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1659u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x54u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1661u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x54u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a1687u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a16a9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a16c0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a16c7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a16cau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a16f9u:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100a1700u:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100a1703u:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100a1726u:
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
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100a1749u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x54u);
        in_esi = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a1600(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a1600(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
