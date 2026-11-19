/* f_0x10077ed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10077ed0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
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
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10077effu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_10077eff;
    case 0x10077f07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x5cu); in_ebx = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x5cu); goto E_10077f07;
    case 0x10077f2au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_10077f2a;
    case 0x10077f34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_10077f34;
    case 0x10077f58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_10077f58;
    case 0x10077f71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_10077f71;
    case 0x10077f76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_10077f76;
    case 0x10077f7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_10077f7f;
    case 0x10077f93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_10077f93;
    default: break;
    }
#endif

    COW_AT(10077ed0)
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    if ((int32_t)rd16(COW_IMG(0x1032c9c8u) + rd8(COW_IMG(0x103579eau)) * 4u) < 18)
    {
        edx = rd16(COW_IMG(0x1032c9c8u) + rd8(COW_IMG(0x103579eau)) * 4u);
        ebx = rd16(COW_IMG(0x1032c9ccu) + rd8(COW_IMG(0x103579eau)) * 4u);
        esi = rd16(COW_IMG(0x1032c9cau) + rd8(COW_IMG(0x103579eau)) * 4u);
        goto L_10077f07;
    }
    eax = (uint32_t)rd8(COW_IMG(0x103579eau)) << 2u;
    COW_AT(10077eff)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_10077f07: ;
    COW_AT(10077f07)
    wr32(sp0 - 0x60u, in_edi);
    wr32(sp0 - 0x64u, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, COW_IMG(0x1047d3a8u));
    wr32(sp0 - 0x70u, edx);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t1 = cow_cdecl(g, COW_IMG(0x101f0060u), 4, edx, COW_IMG(0x1047d3a8u), 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(10077f2a)
        if (rd8(COW_IMG(0x1047d4a4u)) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047d4a4u));
        }
        else
        {
    COW_AT(10077f34)
            wr16(sp0 - 0x4cu, 0x11cu);
            wr32(sp0 - 0x60u, sp0 - 0x54u);
            wr32(sp0 - 0x48u, rd16(eax));
            g->ebx = ebx;
            g->ecx = rd16(eax);
            g->edx = sp0 - 0x54u;
            t4 = rd16(eax);
            g->esp = sp0 - 0x5cu;
            cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            t5 = g->ecx;
            t6 = g->edx;
            wr8(COW_IMG(0x1047d4a4u), 0u);
            ecx = t5;
            edx = t6;
        }
    COW_AT(10077f58)
        wr16(sp0 - 0x4cu, (uint16_t)esi);
        wr32(sp0 - 0x60u, sp0 - 0x54u);
        g->ebx = ebx;
        g->eax = sp0 - 0x54u;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t7 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
        t8 = g->edx;
        wr8(COW_IMG(0x1047d4a5u), 1u);
        eax = t7;
        edx = t8;
    }
    COW_AT(10077f71)
    if (ebx == 0x12u)
    {
    COW_AT(10077f76)
        if (rd8(COW_IMG(0x1047d4a5u)) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d4a5u));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d4a5u));
    COW_AT(10077f7f)
            wr16(sp0 - 0x4cu, 0x11du);
            wr32(sp0 - 0x60u, sp0 - 0x54u);
            g->ebx = ebx;
            g->eax = eax;
            g->esp = sp0 - 0x5cu;
            t9 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            eax = t9;
        }
    }
    COW_AT(10077f93)
    t10 = rd8(COW_IMG(0x103579eau));
    t11 = rd32(sp0 - 0x58u);
    t12 = rd32(sp0 - 0x5cu);
    wr8(COW_IMG(0x103579eau), (uint8_t)(t10 + 1u));
    g->ebx = t11;
    g->esi = t12;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10077ed0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10077effu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10077f07u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x5cu);
        in_ebx = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10077f2au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10077f34u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10077f58u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10077f71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10077f76u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10077f7fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x10077f93u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10077ed0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10077ed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
