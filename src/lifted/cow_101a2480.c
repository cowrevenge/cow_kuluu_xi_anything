/* f_0x101a2480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101a2480(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_244;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 620u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a24a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x24cu); in_ebx = rd32(sp0 - 0x248u); g->ebx = rd32(sp0 - 0x248u); g->esi = rd32(sp0 - 0x24cu); goto E_101a24a3;
    case 0x101a24b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a24b5;
    case 0x101a24d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a24d4;
    case 0x101a24deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a24de;
    case 0x101a24e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a24e6;
    case 0x101a24ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_244 = rd32(sp0 - 0x244u); goto E_101a24eb;
    case 0x101a2512u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a2512;
    case 0x101a251fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x24cu); in_ebx = rd32(sp0 - 0x248u); g->ebx = rd32(sp0 - 0x248u); g->esi = rd32(sp0 - 0x24cu); goto E_101a251f;
    case 0x101a2578u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a2578;
    case 0x101a2580u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a2580;
    case 0x101a2585u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a2585;
    case 0x101a258au: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101a258a;
    case 0x101a258eu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_244 = rd32(sp0 - 0x244u); goto E_101a258e;
    default: break;
    }
#endif

    COW_AT(101a2480)
    wr32(sp0 - 0x248u, in_ebx);
    wr32(sp0 - 0x24cu, in_esi);
    wr32(sp0 - 0x250u, COW_IMG(0x1037aa5cu));
    wr32(sp0 - 0x254u, arg1);
    g->ecx = self;
    g->esp = sp0 - 0x238u;
    t1 = cow_call_regs(g, COW_IMG(0x10311ef0u), in_eax, g->ecx, in_edx, 1, 7, arg1, COW_IMG(0x1037aa5cu), in_esi, in_ebx, rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        goto L_101a251f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    COW_AT(101a24a3)
    wr32(sp0 - 0x250u, COW_IMG(0x10353df4u));
    wr32(sp0 - 0x254u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x238u;
    t4 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, edx, 1, 7, esi, COW_IMG(0x10353df4u), in_esi, in_ebx, rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu));
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(101a24b5)
        wr8(eax + 1u, 0u);
        wr32(sp0 - 0x250u, sp0 - 0x244u);
        wr32(sp0 - 0x254u, COW_IMG(0x1037aa50u));
        wr32(sp0 - 0x258u, esi);
        g->eax = sp0 - 0x244u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24cu;
        t7 = cow_cdecl(g, COW_IMG(0x10313683u), 3, esi, COW_IMG(0x1037aa50u), sp0 - 0x244u);
        t8 = g->ecx;
        t9 = g->edx;
        wr8(esi, 0u);
        if (t7 == 1u)
        {
            ecx = t8;
            edx = t9;
            goto L_101a24de;
        }
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(101a24d4)
        wr32(sp0 - 0x244u, 1u);
        loc_244 = 1u;
L_101a24eb: ;
    COW_AT(101a24eb)
        g->eax = eax;
        g->esp = sp0 - 0x24cu;
        t10 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
        wr32(arg2, t10);
        t11 = rd32(sp0 - 0x244u) * 0x3e8u;
        wr32(arg3, t11);
    }
L_101a2512: ;
    COW_AT(101a2512)
    g->ebx = rd32(sp0 - 0x248u);
    g->esi = rd32(sp0 - 0x24cu);
    g->edi = in_edi;
    return 0u;
L_101a24de: ;
    COW_AT(101a24de)
    if ((int32_t)rd32(sp0 - 0x244u) < 0) goto L_101a2512;
    eax = rd32(sp0 - 0x244u);
    COW_AT(101a24e6)
    if ((int32_t)eax > 60) goto L_101a2512;
    loc_244 = rd32(sp0 - 0x244u);
    goto L_101a24eb;
L_101a251f: ;
    COW_AT(101a251f)
    wr32(sp0 - 0x250u, in_edi);
    wr32(sp0 - 0x254u, 0u);
    wr32(sp0 - 0x258u, 0u);
    wr32(sp0 - 0x25cu, 0x200u);
    wr32(sp0 - 0x260u, sp0 - 0x200u);
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t12 = ~ecx - 1u;
    wr32(sp0 - 0x264u, t12);
    wr32(sp0 - 0x268u, arg1);
    g->esp = sp0 - 0x250u;
    cow_thiscall(g, COW_IMG(0x101b7280u), rd32(COW_IMG(0x10662d40u)), 6, arg1, t12, sp0 - 0x200u, 0x200u, 0u, 0u);
    wr32(sp0 - 0x254u, sp0 - 0x244u);
    wr32(sp0 - 0x258u, sp0 - 0x240u);
    wr32(sp0 - 0x25cu, COW_IMG(0x1036ff70u));
    wr32(sp0 - 0x260u, sp0 - 0x200u);
    g->eax = sp0 - 0x240u;
    g->esp = sp0 - 0x254u;
    t13 = cow_cdecl(g, COW_IMG(0x10313683u), 3, sp0 - 0x200u, COW_IMG(0x1036ff70u), sp0 - 0x240u);
    esi = sp0 - 0x240u;
    edi = COW_IMG(0x1037aa48u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_101a2512;
    eax = t13;
    COW_AT(101a2578)
    if ((int32_t)rd32(sp0 - 0x244u) <= 0) goto L_101a2512;
    ecx = rd32(sp0 - 0x244u);
    COW_AT(101a2580)
    if ((int32_t)ecx > 60) goto L_101a2512;
    COW_AT(101a2585)
    if (eax != 1u)
    {
        loc_244 = rd32(sp0 - 0x244u);
    }
    else
    {
    COW_AT(101a258a)
        wr32(sp0 - 0x244u, eax);
        loc_244 = eax;
    }
    COW_AT(101a258e)
    g->eax = eax;
    g->esp = sp0 - 0x24cu;
    t14 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t15 = rd32(sp0 - 0x248u);
    t16 = rd32(sp0 - 0x24cu);
    wr32(arg2, t14);
    t17 = rd32(sp0 - 0x244u) * 0x3e8u;
    wr32(arg3, t17);
    g->ebx = t15;
    g->esi = t16;
    g->edi = in_edi;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a2480(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a24a3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x24cu);
        in_ebx = rd32(sp0 - 0x248u);
        g->esp = sp0 - 0x24cu;
        (void)sp0;
        return 1;
    }
    case 0x101a24b5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24cu;
        (void)sp0;
        return 1;
    }
    case 0x101a24d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24cu;
        wr32(sp0 - 0x250u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101a24deu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24cu;
        wr32(sp0 - 0x250u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101a24e6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24cu;
        wr32(sp0 - 0x250u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101a24ebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_244;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x24cu;
        wr32(sp0 - 0x250u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101a2512u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24cu;
        (void)sp0;
        return 1;
    }
    case 0x101a251fu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x24cu);
        in_ebx = rd32(sp0 - 0x248u);
        g->esp = sp0 - 0x24cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a2578u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24cu;
        g->edx = 0u;
        wr32(sp0 - 0x260u, sp0 - 0x200u);
        wr32(sp0 - 0x258u, sp0 - 0x240u);
        wr32(sp0 - 0x254u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101a2580u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24cu;
        g->edx = 0u;
        wr32(sp0 - 0x260u, sp0 - 0x200u);
        wr32(sp0 - 0x258u, sp0 - 0x240u);
        wr32(sp0 - 0x254u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101a2585u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24cu;
        g->edx = 0u;
        wr32(sp0 - 0x260u, sp0 - 0x200u);
        wr32(sp0 - 0x258u, sp0 - 0x240u);
        wr32(sp0 - 0x254u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101a258au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24cu;
        g->edx = 0u;
        wr32(sp0 - 0x260u, sp0 - 0x200u);
        wr32(sp0 - 0x258u, sp0 - 0x240u);
        wr32(sp0 - 0x254u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    case 0x101a258eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_244;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x24cu;
        g->edx = 0u;
        wr32(sp0 - 0x260u, sp0 - 0x200u);
        wr32(sp0 - 0x258u, sp0 - 0x240u);
        wr32(sp0 - 0x254u, sp0 - 0x244u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2480(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a2480(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
