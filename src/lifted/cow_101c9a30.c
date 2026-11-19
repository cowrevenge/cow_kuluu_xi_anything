/* f_0x101c9a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101c9a30(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d12;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c9a3cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); goto E_101c9a3c;
    case 0x101c9a46u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebx = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x14u); goto E_101c9a46;
    case 0x101c9a86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_101c9a86;
    case 0x101c9a87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9a87;
    case 0x101c9a8du: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9a8d;
    case 0x101c9a91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9a91;
    case 0x101c9aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9aa1;
    case 0x101c9aa6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9aa6;
    case 0x101c9aabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9aab;
    case 0x101c9ab6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9ab6;
    case 0x101c9abbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9abb;
    case 0x101c9ac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9ac6;
    case 0x101c9ad7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9ad7;
    case 0x101c9adfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9adf;
    case 0x101c9ae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9ae5;
    case 0x101c9ae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9ae9;
    case 0x101c9b33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9b33;
    case 0x101c9b40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x20u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x20u); goto E_101c9b40;
    case 0x101c9b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_101c9b41;
    default: break;
    }
#endif

    COW_AT(101c9a30)
    wr32(sp0 - 0x14u, in_ebx);
    if (arg3 != 0u) goto L_101c9a46;
    COW_AT(101c9a3c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (uint32_t)(int16_t)rd16(sp0 + 4u);
L_101c9a46: ;
    COW_AT(101c9a46)
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, sp0 + 0xcu);
    g->eax = sp0 - 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t1 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, sp0 + 0xcu, sp0 - 0x10u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    edi = arg3;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x1cu < sp0 - 0x20u;
    pf = PARITY((uint8_t)(sp0 - 0x1cu));
    af = (sp0 - 0x20u ^ sp0 - 0x1cu) >> 4u & 1u;
    zf = sp0 == 0x1cu;
    sf = (int32_t)(sp0 - 0x1cu) < 0;
    of = ((sp0 - 0x20u ^ sp0 - 0x1cu) & (sp0 - 0x1cu ^ 4u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t7 = ~ecx - 1u;
    wr32(sp0 - 4u, t7);
    if ((int32_t)(~ecx - 1u) <= 0)
    {
        eax = rd32(sp0 + 4u);
        edx = t6;
    }
    else
    {
        eax = rd32(sp0 + 4u);
        ecx = t7;
        ebp = t4;
        loc_4 = t7;
    COW_AT(101c9a86)
        wr32(sp0 - 0x20u, in_esi);
        edi = 0u;
L_101c9a87: ;
    COW_AT(101c9a87)
        if ((int32_t)edi <= 0)
        {
            edx = 0u;
        }
        else
        {
    COW_AT(101c9a8d)
            edx = rd8(arg3 + edi - 1u);
        }
    COW_AT(101c9a91)
        t8 = rd8(arg3 + edi);
        wr8(sp0 + 4u, (uint8_t)t8);
        if ((uint8_t)t8 != 0x85u)
        {
            ecx = (ecx & 0xffffff00u) | t8;
    COW_AT(101c9aa1)
            if ((uint8_t)edx != 0x85u) goto L_101c9ac6;
    COW_AT(101c9aa6)
            if ((uint8_t)ecx != 0xdau) goto L_101c9ab6;
    COW_AT(101c9aab)
            edx = rd32(ebp);
            esi = rd32(rd32(ebp) + 0x17cu);
L_101c9ae5: ;
    COW_AT(101c9ae5)
            if (esi != 0u)
            {
    COW_AT(101c9ae9)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, arg4);
                t9 = rd32(sp0 - 0x10u);
                wr32(sp0 - 0x34u, t9);
                wr32(sp0 - 0x38u, arg3);
                wr32(sp0 - 0x3cu, (uint32_t)(int16_t)arg2);
                wr32(sp0 - 0x40u, (uint32_t)(int16_t)eax);
                wr32(sp0 - 8u, (uint32_t)(int16_t)eax);
                g->edx = (uint32_t)(int16_t)arg2;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, (uint32_t)(int16_t)eax, (uint32_t)(int16_t)arg2, arg3, t9, arg4, 0u, 0u, 0u);
                t10 = g->edx;
                t11 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - 1u;
                wr32(sp0 - 0xcu, t11);
                g->edx = t10;
                d12 = fr(g, fr(g, (double)(int32_t)t11 * (double)rdf32(sp0 + 0xcu)) + (double)(int32_t)rd32(sp0 - 8u));
                fpush(g, d12);
                t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
                t14 = g->edx;
                eax = t13;
                edx = t14;
                loc_4 = rd32(sp0 - 4u);
            }
        }
L_101c9b33: ;
    COW_AT(101c9b33)
        if ((int32_t)(edi + 1u) < (int32_t)loc_4)
        {
            ecx = loc_4;
            edi = edi + 1u;
            goto L_101c9a87;
        }
    COW_AT(101c9b40)
    }
    COW_AT(101c9b41)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return (uint32_t)(int16_t)eax;
L_101c9ab6: ;
    COW_AT(101c9ab6)
    if ((uint8_t)ecx != 0xc8u) goto L_101c9ac6;
    COW_AT(101c9abb)
    esi = rd32(rd32(ebp) + 0x180u);
    goto L_101c9ae5;
L_101c9ac6: ;
    COW_AT(101c9ac6)
    if ((int32_t)((uint8_t)rd32(sp0 + 4u) - 0x20u) < 0)
    {
        edx = (uint8_t)rd32(sp0 + 4u);
        goto L_101c9b33;
    }
    ecx = (uint8_t)rd32(sp0 + 4u) - 0x20u;
    edx = (uint8_t)rd32(sp0 + 4u);
    COW_AT(101c9ad7)
    if ((int32_t)ecx > 139) goto L_101c9b33;
    COW_AT(101c9adf)
    edx = rd32(ebp);
    esi = rd32(ecx * 4u + rd32(ebp));
    goto L_101c9ae5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c9a30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c9a3cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101c9a46u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9a86u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg3;
        g->edi = 0u;
        wr32(sp0 - 0x24u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c9a87u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9a8du:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9a91u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9aa1u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9aa6u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9aabu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9ab6u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9abbu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9ac6u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9ad7u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9adfu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9ae5u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9ae9u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9b33u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c9b40u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101c9b41u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c9a30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c9a30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
