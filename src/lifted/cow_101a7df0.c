/* f_0x101a7df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101a7df0(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 388u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a7e12u: in_eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x154u); goto E_101a7e12;
    case 0x101a7e1eu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x154u); goto E_101a7e1e;
    case 0x101a7e28u: in_eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x154u); goto E_101a7e28;
    case 0x101a7e34u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x154u); in_ebp = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebp = rd32(sp0 - 0x150u); g->ebx = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x154u); goto E_101a7e34;
    case 0x101a7e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7e40;
    case 0x101a7e55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7e55;
    case 0x101a7e9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7e9d;
    case 0x101a7eaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7eaa;
    case 0x101a7eb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7eb6;
    case 0x101a7eb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7eb9;
    case 0x101a7edau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7eda;
    case 0x101a7f00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7f00;
    case 0x101a7f08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7f08;
    case 0x101a7f0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7f0e;
    case 0x101a7f16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7f16;
    case 0x101a7f3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_101a7f3b;
    case 0x101a7f4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_101a7f4e;
    case 0x101a7fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101a7fba;
    default: break;
    }
#endif

    COW_AT(101a7df0)
    wr32(sp0 - 0x14cu, in_ebx);
    wr32(sp0 - 0x150u, in_ebp);
    wr32(sp0 - 0x154u, in_esi);
    wr8(sp0 - 0x145u, 1u);
    wr8(sp0 - 0x144u, 0u);
    if ((uint16_t)arg1 < 0xc8u) goto L_101a7e1e;
    COW_AT(101a7e12)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return in_eax & 0xffffff00u;
L_101a7e1e: ;
    COW_AT(101a7e1e)
    if (rd32(COW_IMG(0x106627d4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627d4u));
        goto L_101a7e34;
    }
    COW_AT(101a7e28)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return in_eax & 0xffffff00u;
L_101a7e34: ;
    COW_AT(101a7e34)
    wr32(sp0 - 0x158u, arg1);
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x154u;
    t1 = cow_thiscall(g, COW_IMG(0x101a8a60u), ecx, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_101a7e4c;
    }
    eax = t1;
    COW_AT(101a7e40)
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x154u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x150u);
    return eax & 0xffffff00u;
L_101a7e4c: ;
    COW_AT(101a7e4c)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t4 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_101a7e61;
    }
    eax = t4;
    COW_AT(101a7e55)
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x154u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x150u);
    return eax & 0xffffff00u;
L_101a7e61: ;
    COW_AT(101a7e61)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t7 = cow_stdcall(g, COW_IMG(0x101a7d00u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_101a7e83;
    }
    eax = t7;
    edx = t9;
    COW_AT(101a7e6a)
    wr32(sp0 - 0x158u, 0x22u);
    g->ebx = in_ebx & 0xffffff00u;
    g->eax = eax;
    g->esp = sp0 - 0x154u;
    t10 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0x22u);
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x154u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x150u);
    return (t10 & 0xffffff00u) | 1u;
L_101a7e83: ;
    COW_AT(101a7e83)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t11 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(COW_IMG(0x106627e4u), t11);
    wr32(sp0 - 0x158u, sp0 - 0x140u);
    wr32(sp0 - 0x15cu, esi);
    g->eax = sp0 - 0x140u;
    g->ecx = t12;
    g->esp = sp0 - 0x140u;
    t14 = cow_call_regs(g, COW_IMG(0x101a7d70u), g->eax, g->ecx, t13, 1, 7, esi, sp0 - 0x140u, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u));
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    edx = 0u;
    ebx = in_ebx & 0xffffff00u;
L_101a7e9d: ;
    COW_AT(101a7e9d)
    wr32(sp0 - 0x158u, edx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x101a7da0u), ecx, 7, edx, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u));
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    else
    {
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(101a7eaa)
        if ((rd8(edx * 4u + sp0 - 0x140u) & 3u) == 1u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(edx * 4u + sp0 - 0x140u);
            goto L_101a7eda;
        }
        eax = (rd8(edx * 4u + sp0 - 0x140u) & 3u) - 1u;
        ecx = (ecx & 0xffffff00u) | rd8(edx * 4u + sp0 - 0x140u);
    COW_AT(101a7eb6)
        if (eax != 1u)
        {
            eax = eax - 1u;
            goto L_101a7f08;
        }
    COW_AT(101a7eb9)
        t19 = rd32(sp0 - 0x144u);
        wr8(sp0 + (uint8_t)t19 * 8u - 0x7bu, 0u);
        wr8(sp0 + (uint8_t)t19 * 8u - 0x7cu, 0u);
        wr16(sp0 + (uint8_t)t19 * 8u - 0x7au, 0u);
        eax = sp0 + (uint8_t)t19 * 8u - 0x80u;
        ecx = (uint8_t)t19;
L_101a7f00: ;
    COW_AT(101a7f00)
        wr32(eax, edx);
        wr8(sp0 - 0x144u, (uint8_t)((uint8_t)ebx + 1u));
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
    }
L_101a7f08: ;
    COW_AT(101a7f08)
    if ((int32_t)(edx + 1u) < 16)
    {
        edx = edx + 1u;
        goto L_101a7e9d;
    }
    COW_AT(101a7f0e)
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(101a7f16)
        wr32(sp0 - 0x158u, arg2);
        wr32(sp0 - 0x15cu, sp0 - 0x80u);
        t23 = rd32(sp0 - 0x144u);
        wr32(sp0 - 0x160u, t23);
        g->eax = t23;
        g->ecx = ecx;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x154u;
        t24 = cow_cdecl(g, COW_IMG(0x100e5490u), 3, t23, sp0 - 0x80u, arg2);
        t25 = g->ecx;
        t26 = g->edx;
        wr8(sp0 - 0x145u, (uint8_t)t24);
        if ((uint8_t)t24 == 0u)
        {
            eax = t24;
        }
        else
        {
            eax = t24;
            ecx = t25;
            edx = t26;
    COW_AT(101a7f3b)
            wr32(sp0 - 0x158u, 1u);
            wr32(sp0 - 0x15cu, 0xbfu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x154u;
            t27 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xbfu, 1u);
            t28 = g->ecx;
            t29 = g->edx;
            if ((uint8_t)arg2 == 0u)
            {
                eax = t27;
            }
            else
            {
                ecx = t28;
                edx = t29;
    COW_AT(101a7f4e)
                wr32(sp0 - 0x158u, in_edi);
                wr8(sp0 - 0x100u, rd8(COW_IMG(0x103d3c84u)));
                edi = sp0 - 0xffu;
                eax = 0u;
                ecx = 0x1fu;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr8(sp0 - 0x144u, 0xcau);
                wr8(sp0 - 0x143u, 3u);
                wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
                t30 = (uint16_t)arg1 + 1u;
                wr32(sp0 - 0x15cu, t30);
                wr32(sp0 - 0x160u, 0x1c8u);
                wr32(sp0 - 0x164u, 0xcu);
                wr8(sp0 - 0x142u, 0u);
                wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x15cu;
                t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1c8u);
                t32 = g->ecx;
                wr32(sp0 - 0x160u, t31);
                wr32(sp0 - 0x164u, sp0 - 0x100u);
                g->ebx = arg2;
                g->edx = sp0 - 0x100u;
                g->esp = sp0 - 0x150u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t31, rd32(sp0 - 0x15cu), in_edi, rd32(sp0 - 0x154u));
                t33 = g->edx;
                wr32(sp0 - 0x168u, 0u);
                wr32(sp0 - 0x16cu, 0u);
                wr32(sp0 - 0x170u, 0u);
                wr32(sp0 - 0x174u, sp0 - 0x144u);
                wr32(sp0 - 0x178u, 1u);
                wr32(sp0 - 0x17cu, sp0 - 0x100u);
                wr32(sp0 - 0x180u, COW_IMG(0x103d3c84u));
                g->esp = sp0 - 0x164u;
                t34 = cow_call_regs(g, COW_IMG(0x100ad660u), sp0 - 0x144u, sp0 - 0x100u, t33, 1, 7, COW_IMG(0x103d3c84u), sp0 - 0x100u, 1u, sp0 - 0x144u, 0u, 0u, 0u);
                eax = t34;
            }
        }
    }
    COW_AT(101a7fba)
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x154u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x150u);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x145u);
L_101a7eda: ;
    COW_AT(101a7eda)
    t20 = rd32(sp0 - 0x144u);
    wr8(sp0 + (uint8_t)t20 * 8u - 0x7bu, (uint8_t)ecx >> 2u);
    t21 = rd8(edx * 4u + sp0 - 0x13fu);
    wr8(sp0 + (uint8_t)t20 * 8u - 0x7cu, (uint8_t)t21);
    t22 = rd16(edx * 4u + sp0 - 0x13eu);
    wr16(sp0 + (uint8_t)t20 * 8u - 0x7au, (uint16_t)t22);
    eax = sp0 + (uint8_t)t20 * 8u - 0x80u;
    ecx = ((ecx | t21) & 0xffff0000u) | t22;
    goto L_101a7f00;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a7df0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a7e12u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x101a7e1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x154u;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7e28u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x101a7e34u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x154u);
        in_ebp = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x154u;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7e40u:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x101a7e55u:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    case 0x101a7e9du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x154u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7eaau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x154u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7eb6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x154u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7eb9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x154u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7edau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x154u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7f00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x154u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7f08u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x154u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7f0eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x154u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7f16u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x154u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7f3bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x154u;
        g->ebx = arg2;
        g->ebp = arg1;
        wr32(sp0 - 0x15cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101a7f4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x154u;
        g->ebx = arg2;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7fbau:
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
        g->esp = sp0 - 0x154u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101a7e4c: holds in_ebx, which no location here says
     101a7e61: holds in_ebx, which no location here says
     101a7e6a: holds in_ebx, which no location here says
     101a7e83: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7df0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a7df0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
