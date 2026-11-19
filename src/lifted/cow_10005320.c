/* f_0x10005320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10005320(Guest* g)
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 176u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10005332u: ecx = g->ecx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_10005332;
    case 0x10005389u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10005389;
    case 0x10005393u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10005393;
    case 0x10005398u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10005398;
    case 0x100053c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100053c0;
    case 0x100053c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100053c2;
    case 0x100053cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100053cb;
    case 0x100053d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100053d9;
    case 0x100053dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100053df;
    case 0x100053fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_100053fa;
    case 0x10005414u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10005414;
    case 0x1000541au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000541a;
    case 0x10005429u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10005429;
    case 0x10005432u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10005432;
    case 0x10005446u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10005446;
    case 0x1000544du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000544d;
    case 0x1000545au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000545a;
    case 0x10005461u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10005461;
    case 0x1000546au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000546a;
    case 0x10005473u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10005473;
    case 0x1000547cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000547c;
    default: break;
    }
#endif

    COW_AT(10005320)
    if (arg1 == 0u)
    {
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
    COW_AT(10005332)
        wr32(sp0 - 0x98u, in_ebx);
        wr32(sp0 - 0x9cu, in_esi);
        wr32(sp0 - 0xa0u, in_edi);
        edi = sp0 - 0x94u;
        eax = 0xffffffffu;
        ecx = 0x25u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(COW_IMG(0x10456048u), 0xffffffffu);
        wr32(COW_IMG(0x1045604cu), 0xffffffffu);
        esi = COW_IMG(0x10456048u);
        edi = COW_IMG(0x10456050u);
        ecx = 0xfeu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0xa4u, COW_IMG(0x1034f9ecu));
        wr32(sp0 - 0xa8u, arg1);
        edi = COW_IMG(0x10455ba0u);
        eax = 0xffffffffu;
        ecx = 0x20u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->eax = eax;
        g->esp = sp0 - 0x98u;
        t1 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, arg1, 1, 4, arg1, COW_IMG(0x1034f9ecu), in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 != 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
    COW_AT(10005389)
            esi = COW_IMG(0x1034f930u);
            edi = COW_IMG(0x10455ba0u);
L_10005393: ;
    COW_AT(10005393)
            if (rd32(esi) == 0xffffffffu) goto L_100053c0;
    COW_AT(10005398)
            wr32(sp0 - 0xa4u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xa0u;
            t4 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
            t5 = g->edx;
            t6 = rd32(esi);
            wr8(edi, (uint8_t)t4);
            wr32(sp0 - 0xa8u, COW_IMG(0x1034f9ecu));
            wr32(sp0 - 0xacu, 0u);
            wr32(sp0 + t6 * 4u - 0x94u, (uint32_t)(int8_t)t4);
            g->eax = (uint32_t)(int8_t)t4;
            g->esp = sp0 - 0x9cu;
            t7 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, t6, t5, 1, 4, 0u, COW_IMG(0x1034f9ecu), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
            t8 = g->ecx;
            t9 = g->edx;
            if (t7 != 0u)
            {
                eax = t7;
                ecx = t8;
                edx = t9;
                esi = esi + 4u;
                edi = edi + 1u;
                goto L_10005393;
            }
        }
L_100053c0: ;
    COW_AT(100053c0)
        ebx = 0u;
L_100053c2: ;
    COW_AT(100053c2)
        if (rd32(ebx * 4u + sp0 - 0x94u) != 0xffffffffu)
        {
            edi = rd32(ebx * 4u + sp0 - 0x94u);
    COW_AT(100053cb)
            if ((int32_t)((edi ^ (uint32_t)((int32_t)edi >> 0x1fu)) - (uint32_t)((int32_t)edi >> 0x1fu)) < 32)
            {
                eax = edi;
                edx = (uint32_t)((int32_t)edi >> 0x1fu);
                esi = (edi ^ (uint32_t)((int32_t)edi >> 0x1fu)) - (uint32_t)((int32_t)edi >> 0x1fu);
    COW_AT(100053d9)
                if ((int32_t)edi >= 0)
                {
                    ecx = ebx;
    COW_AT(100053fa)
                    g->esp = sp0 - 0xa0u;
                    t12 = cow_call_regs(g, COW_IMG(0x10312a60u), 1u, ecx, 0u, 1, 0);
                    t13 = g->edx;
                    wr32(COW_IMG(0x10456048u) + edi * 8u, t12);
                    wr32(COW_IMG(0x1045604cu) + edi * 8u, t13);
                }
                else
                {
                    ecx = ebx;
    COW_AT(100053df)
                    g->esp = sp0 - 0xa0u;
                    t10 = cow_call_regs(g, COW_IMG(0x10312a60u), 0xffffffffu, ecx, 0xffffffffu, 1, 0);
                    t11 = g->edx;
                    wr32(COW_IMG(0x10456048u) + esi * 8u, t10);
                    wr32(COW_IMG(0x1045604cu) + esi * 8u, t11);
                }
            }
        }
    COW_AT(10005414)
        if ((int32_t)(ebx + 1u) < 37)
        {
            ebx = ebx + 1u;
            goto L_100053c2;
        }
    COW_AT(1000541a)
        if (rd32(sp0 - 0x18u) == 0xffffffffu)
        {
            eax = rd32(sp0 - 0x18u);
            ebx = rd32(sp0 - 0x98u);
            esi = rd32(sp0 - 0x9cu);
            edi = rd32(sp0 - 0xa0u);
        }
        else
        {
            ebx = rd32(sp0 - 0x98u);
            esi = rd32(sp0 - 0x9cu);
            edi = rd32(sp0 - 0xa0u);
    COW_AT(10005429)
            if (rd32(sp0 - 0x40u) == 0xffffffffu)
            {
                eax = rd32(sp0 - 0x40u);
            }
            else
            {
                eax = rd32(sp0 - 0x40u);
    COW_AT(10005432)
                if ((rd32(sp0 - 0x50u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x50u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x50u) >> 0x1fu) != (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu))
                {
                    ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
                }
                else
                {
                    ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
    COW_AT(10005446)
                    wr8(COW_IMG(0x10455c3cu), 1u);
                }
    COW_AT(1000544d)
                if ((rd32(sp0 - 0x84u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu) != ecx)
                {
                    eax = (rd32(sp0 - 0x84u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu);
                }
                else
                {
                    eax = (rd32(sp0 - 0x84u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu);
    COW_AT(1000545a)
                    wr8(COW_IMG(0x10455c3bu), 1u);
                }
            }
        }
    COW_AT(10005461)
        if (rd8(COW_IMG(0x10455c3cu)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3cu));
    COW_AT(1000546a)
            if (rd8(COW_IMG(0x10455c3bu)) == 0u)
            {
    COW_AT(10005473)
                wr16(COW_IMG(0x10455c3eu), 0u);
            }
        }
    }
    COW_AT(1000547c)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10005320(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10005332u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x94u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10005389u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x10005393u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x10005398u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x100053c0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x100053c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x100053cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x100053d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x100053dfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x100053fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x10005414u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x1000541au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x10005429u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x10005432u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x10005446u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1000544du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1000545au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x10005461u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1000546au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x10005473u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1000547cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10005320(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10005320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
