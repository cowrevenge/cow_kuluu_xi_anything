/* f_0x10005130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10005130(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_98;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 180u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10005145u: eax = g->eax; ecx = g->ecx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x98u); g->ebx = rd32(sp0 - 0x98u); goto E_10005145;
    case 0x10005176u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10005176;
    case 0x10005180u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10005180;
    case 0x10005184u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10005184;
    case 0x100051abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_100051ab;
    case 0x100051eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100051ea;
    case 0x100051f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100051f7;
    case 0x10005205u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005205;
    case 0x1000520bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000520b;
    case 0x10005226u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005226;
    case 0x10005242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005242;
    case 0x1000524au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000524a;
    case 0x10005252u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005252;
    case 0x10005256u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005256;
    case 0x10005268u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005268;
    case 0x1000527au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000527a;
    case 0x10005282u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005282;
    case 0x1000528au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000528a;
    case 0x10005291u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005291;
    case 0x10005294u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005294;
    case 0x1000529au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000529a;
    case 0x100052aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100052aa;
    case 0x100052c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100052c7;
    case 0x100052d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100052d0;
    case 0x100052e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100052e4;
    case 0x100052ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100052ec;
    case 0x100052f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100052f9;
    case 0x10005300u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005300;
    case 0x10005304u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10005304;
    case 0x1000530du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1000530d;
    case 0x10005316u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_98 = rd32(sp0 - 0x98u); goto E_10005316;
    default: break;
    }
#endif

    COW_AT(10005130)
    wr32(sp0 - 0x98u, in_ebx);
    if (arg1 == 0u)
    {
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
        loc_98 = in_ebx;
    }
    else
    {
    COW_AT(10005145)
        wr32(sp0 - 0x9cu, in_ebp);
        wr32(sp0 - 0xa0u, in_esi);
        wr32(sp0 - 0xa4u, in_edi);
        wr32(sp0 - 0xa8u, COW_IMG(0x1034f9ecu));
        edi = sp0 - 0x94u;
        eax = 0xffffffffu;
        ecx = 0x25u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        edi = COW_IMG(0x10455b20u);
        ecx = 0x20u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0xacu, arg1);
        g->ebx = 0u;
        g->eax = eax;
        g->esp = sp0 - 0x9cu;
        t1 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, arg1, 1, 4, arg1, COW_IMG(0x1034f9ecu), in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 != 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
    COW_AT(10005176)
            esi = COW_IMG(0x1034f930u);
            edi = COW_IMG(0x10455b20u);
L_10005180: ;
    COW_AT(10005180)
            if (rd32(esi) == 0xffffffffu) goto L_100051ab;
    COW_AT(10005184)
            wr32(sp0 - 0xa8u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xa4u;
            t4 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
            t5 = g->edx;
            t6 = rd32(esi);
            wr8(edi, (uint8_t)t4);
            wr32(sp0 - 0xacu, COW_IMG(0x1034f9ecu));
            wr32(sp0 - 0xb0u, 0u);
            wr32(sp0 + t6 * 4u - 0x94u, (uint32_t)(int8_t)t4);
            g->ebx = 0u;
            g->eax = (uint32_t)(int8_t)t4;
            g->esp = sp0 - 0xa0u;
            t7 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, t6, t5, 1, 4, 0u, COW_IMG(0x1034f9ecu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u));
            t8 = g->ecx;
            t9 = g->edx;
            if (t7 != 0u)
            {
                eax = t7;
                ecx = t8;
                edx = t9;
                esi = esi + 4u;
                edi = edi + 1u;
                goto L_10005180;
            }
        }
L_100051ab: ;
    COW_AT(100051ab)
        wr32(COW_IMG(0x10455c48u), 0xffffffffu);
        wr32(COW_IMG(0x10455c4cu), 0xffffffffu);
        wr32(COW_IMG(0x10456448u), 0u);
        esi = COW_IMG(0x10455c48u);
        edi = COW_IMG(0x10455c50u);
        ecx = 0xfeu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(COW_IMG(0x1045644cu), 0u);
        esi = COW_IMG(0x10456448u);
        edi = COW_IMG(0x10456450u);
        ecx = 0x16u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ebx = 0u;
        edi = COW_IMG(0x10456468u);
L_100051ea: ;
    COW_AT(100051ea)
        if (rd32(ebx * 4u + sp0 - 0x94u) != 0xffffffffu)
        {
            esi = rd32(ebx * 4u + sp0 - 0x94u);
    COW_AT(100051f7)
            if ((int32_t)((esi ^ (uint32_t)((int32_t)esi >> 0x1fu)) - (uint32_t)((int32_t)esi >> 0x1fu)) >= 32)
            {
    COW_AT(10005242)
                if ((int32_t)edi > (int32_t)COW_IMG(0x10456528u)) goto L_1000527a;
    COW_AT(1000524a)
                if ((int32_t)edi < (int32_t)COW_IMG(0x104564f0u)) goto L_1000527a;
    COW_AT(10005252)
                if ((int32_t)esi <= 0)
                {
    COW_AT(10005268)
                    wr32(edi - 0xa8u, esi + 0x1fu);
                    t15 = (uint32_t)((int32_t)(esi + 0x1fu) >> 0x1fu);
                    wr32(edi - 0xa4u, t15);
                }
                else
                {
    COW_AT(10005256)
                    wr32(edi - 0xa8u, esi - 0x1fu);
                    t14 = (uint32_t)((int32_t)(esi - 0x1fu) >> 0x1fu);
                    wr32(edi - 0xa4u, t14);
                }
            }
            else
            {
                eax = esi;
                edx = (uint32_t)((int32_t)esi >> 0x1fu);
                ebp = (esi ^ (uint32_t)((int32_t)esi >> 0x1fu)) - (uint32_t)((int32_t)esi >> 0x1fu);
    COW_AT(10005205)
                if ((int32_t)esi >= 0)
                {
                    ecx = ebx;
    COW_AT(10005226)
                    g->esp = sp0 - 0xa4u;
                    t12 = cow_call_regs(g, COW_IMG(0x10312a60u), 1u, ecx, 0u, 1, 0);
                    t13 = g->edx;
                    wr32(COW_IMG(0x10455c48u) + esi * 8u, t12);
                    wr32(COW_IMG(0x10455c4cu) + esi * 8u, t13);
                }
                else
                {
                    ecx = ebx;
    COW_AT(1000520b)
                    g->esp = sp0 - 0xa4u;
                    t10 = cow_call_regs(g, COW_IMG(0x10312a60u), 0xffffffffu, ecx, 0xffffffffu, 1, 0);
                    t11 = g->edx;
                    wr32(COW_IMG(0x10455c48u) + ebp * 8u, t10);
                    wr32(COW_IMG(0x10455c4cu) + ebp * 8u, t11);
                }
            }
        }
L_1000529a: ;
    COW_AT(1000529a)
        if ((int32_t)(edi + 8u) < (int32_t)COW_IMG(0x10456590u))
        {
            ebx = ebx + 1u;
            edi = edi + 8u;
            goto L_100051ea;
        }
        ebx = ebx + 1u;
    COW_AT(100052aa)
        t16 = rd32(sp0 - 0xa0u);
        t17 = rd32(sp0 - 0xa4u);
        t18 = rd32(sp0 - 0x18u);
        wr8(COW_IMG(0x10455c3cu), 0u);
        wr8(COW_IMG(0x10455c3bu), 0u);
        if (t18 == 0xffffffffu)
        {
            ebp = rd32(sp0 - 0x9cu);
            esi = t16;
            edi = t17;
            goto L_1000530d;
        }
        ebx = ebx & 0xffffff00u;
        ebp = rd32(sp0 - 0x9cu);
        esi = t16;
        edi = t17;
    COW_AT(100052c7)
        if (rd32(sp0 - 0x40u) == 0xffffffffu) goto L_1000530d;
        eax = rd32(sp0 - 0x40u);
    COW_AT(100052d0)
        if ((rd32(sp0 - 0x50u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x50u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x50u) >> 0x1fu) != (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu))
        {
            ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
        }
        else
        {
            ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
    COW_AT(100052e4)
            wr8(COW_IMG(0x10455c3cu), 1u);
            ebx = (ebx & 0xffffff00u) | 1u;
        }
    COW_AT(100052ec)
        if ((rd32(sp0 - 0x84u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu) != ecx)
        {
            eax = (rd32(sp0 - 0x84u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu);
        }
        else
        {
            eax = (rd32(sp0 - 0x84u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu);
    COW_AT(100052f9)
            wr8(COW_IMG(0x10455c3bu), 1u);
        }
    COW_AT(10005300)
        if ((uint8_t)ebx != 0u)
        {
            loc_98 = rd32(sp0 - 0x98u);
            goto L_10005316;
        }
    COW_AT(10005304)
        if (rd8(COW_IMG(0x10455c3bu)) != 0u)
        {
            loc_98 = rd32(sp0 - 0x98u);
            goto L_10005316;
        }
L_1000530d: ;
    COW_AT(1000530d)
        wr16(COW_IMG(0x10455c3eu), 0u);
        loc_98 = rd32(sp0 - 0x98u);
    }
L_10005316: ;
    COW_AT(10005316)
    g->ebx = loc_98;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_1000527a: ;
    COW_AT(1000527a)
    if ((int32_t)edi >= (int32_t)COW_IMG(0x10456488u))
    {
    COW_AT(10005282)
        if ((int32_t)edi <= (int32_t)COW_IMG(0x104564a0u))
        {
    COW_AT(1000528a)
            if ((int32_t)esi > 0)
            {
                eax = esi - 0x1fu;
            }
            else
            {
    COW_AT(10005291)
                eax = esi + 0x1fu;
            }
    COW_AT(10005294)
            wr32(edi, eax);
            wr32(edi + 4u, (uint32_t)((int32_t)eax >> 0x1fu));
        }
    }
    goto L_1000529a;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10005130(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10005145u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        g->edx = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10005176u:
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
        g->esp = sp0 - 0xa4u;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10005180u:
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
        g->esp = sp0 - 0xa4u;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x10005184u:
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
        g->esp = sp0 - 0xa4u;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100051abu:
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
        g->esp = sp0 - 0xa4u;
        g->ebx = 0u;
        g->ebp = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x100051eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x100051f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10005205u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1000520bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10005226u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10005242u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1000524au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10005252u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10005256u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10005268u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1000527au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10005282u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1000528au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10005291u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10005294u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1000529au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x100052aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x100052c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x100052d0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x100052e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x100052ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x100052f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x10005300u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x10005304u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1000530du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x10005316u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10005130(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10005130(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
