/* f_0x10321d5c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10321d5c(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1ac;
    uint32_t loc_4;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 480u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10321d6fu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_10321d6f;
    case 0x10321d73u: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_10321d73;
    case 0x10321d7eu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_10321d7e;
    case 0x10321d90u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1acu); goto E_10321d90;
    case 0x10321d9eu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1acu); goto E_10321d9e;
    case 0x10321da2u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1acu); goto E_10321da2;
    case 0x10321dafu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1acu); goto E_10321daf;
    case 0x10321dbbu: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1acu); goto E_10321dbb;
    case 0x10321dd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10321dd3;
    case 0x10321de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10321de6;
    case 0x10321e00u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_10321e00;
    case 0x10321e29u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10321e29;
    case 0x10321e86u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1acu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1acu); goto E_10321e86;
    case 0x10321eacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1ac = rd32(sp0 - 0x1acu); loc_4 = rd32(sp0 - 4u); goto E_10321eac;
    default: break;
    }
#endif

    COW_AT(10321d5c)
    wr32(sp0 - 4u, in_ebp);
    eax = COW_IMG(0x103d2ea8u);
    ecx = 0u;
L_10321d6f: ;
    COW_AT(10321d6f)
    if (arg1 == rd32(eax)) goto L_10321d7e;
    COW_AT(10321d73)
    if (eax + 8u < COW_IMG(0x103d2f38u))
    {
        eax = eax + 8u;
        ecx = ecx + 1u;
        goto L_10321d6f;
    }
    ecx = ecx + 1u;
L_10321d7e: ;
    COW_AT(10321d7e)
    wr32(sp0 - 0x1acu, in_esi);
    if (arg1 != rd32(COW_IMG(0x103d2ea8u) + ecx * 8u))
    {
        edi = in_edi;
        loc_4 = in_ebp;
        loc_1ac = in_esi;
    }
    else
    {
        esi = ecx << 3u;
    COW_AT(10321d90)
        if (rd32(COW_IMG(0x109b2714u)) == 1u) goto L_10321e86;
        eax = rd32(COW_IMG(0x109b2714u));
    COW_AT(10321d9e)
        if (eax != 0u) goto L_10321daf;
    COW_AT(10321da2)
        if (rd32(COW_IMG(0x109b2718u)) == 1u) goto L_10321e86;
L_10321daf: ;
    COW_AT(10321daf)
        if (arg1 == 0xfcu)
        {
            edi = in_edi;
            loc_4 = in_ebp;
            loc_1ac = in_esi;
        }
        else
        {
    COW_AT(10321dbb)
            wr32(sp0 - 0x1b0u, 0x104u);
            wr32(sp0 - 0x1b4u, sp0 - 0x1a8u);
            wr32(sp0 - 0x1b8u, 0u);
            g->eax = sp0 - 0x1a8u;
            g->ecx = ecx;
            g->edx = arg1;
            g->esp = sp0 - 0x1acu;
            t1 = cow_stdcall(g, rd32(COW_IMG(0x10329150u)), 3, 0u, sp0 - 0x1a8u, 0x104u);   /* kernel32.dll!GetModuleFileNameA */
            t2 = g->ecx;
            t3 = g->edx;
            if (t1 != 0u)
            {
                ecx = t2;
                edx = t3;
                edi = in_edi;
            }
            else
            {
                ecx = t2;
                edx = t3;
    COW_AT(10321dd3)
                wr32(sp0 - 0x1b0u, COW_IMG(0x1034a8d0u));
                wr32(sp0 - 0x1b4u, sp0 - 0x1a8u);
                g->esp = sp0 - 0x1a8u;
                cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, edx, 1, 3, sp0 - 0x1a8u, COW_IMG(0x1034a8d0u), rd32(sp0 - 0x1acu));
                t4 = g->edx;
                t5 = g->edi;
                ecx = COW_IMG(0x1034a8d0u);
                edx = t4;
                edi = t5;
            }
    COW_AT(10321de6)
            wr32(sp0 - 0x1b0u, edi);
            wr32(sp0 - 0x1b4u, sp0 - 0x1a8u);
            g->edx = edx;
            g->esp = sp0 - 0x1b0u;
            t6 = cow_call_regs(g, COW_IMG(0x10317480u), sp0 - 0x1a8u, g->ecx, g->edx, 1, 1, sp0 - 0x1a8u);
            t7 = g->edx;
            if (t6 + 1u <= 0x3cu)
            {
                ecx = sp0 - 0x1a8u;
                edx = t7;
                edi = sp0 - 0x1a8u;
            }
            else
            {
                edx = t7;
    COW_AT(10321e00)
                wr32(sp0 - 0x1b4u, sp0 - 0x1a8u);
                g->ecx = sp0 - 0x1a8u;
                g->edx = edx;
                g->esp = sp0 - 0x1b0u;
                t8 = cow_call_regs(g, COW_IMG(0x10317480u), sp0 - 0x1a8u, g->ecx, g->edx, 1, 1, sp0 - 0x1a8u);
                t9 = g->ecx;
                t10 = g->edx;
                wr32(sp0 - 0x1b8u, 3u);
                wr32(sp0 - 0x1bcu, COW_IMG(0x1036c9a4u));
                t11 = sp0 + t8 - 0x1e3u;
                wr32(sp0 - 0x1c0u, t11);
                g->ecx = t9;
                g->edx = t10;
                g->esp = sp0 - 0x1b4u;
                cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x1e3u, g->ecx, g->edx, 1, 3, t11, COW_IMG(0x1036c9a4u), 3u);
                t12 = g->ecx;
                t13 = g->edx;
                ecx = t12;
                edx = t13;
                edi = t11;
            }
    COW_AT(10321e29)
            wr32(sp0 - 0x1b4u, COW_IMG(0x1034a8b4u));
            wr32(sp0 - 0x1b8u, sp0 - 0xa4u);
            g->edi = edi;
            g->ecx = ecx;
            g->esp = sp0 - 0x1acu;
            cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, edx, 1, 3, sp0 - 0xa4u, COW_IMG(0x1034a8b4u), rd32(sp0 - 0x1b0u));
            t14 = g->ecx;
            t15 = g->edx;
            t16 = g->edi;
            wr32(sp0 - 0x1bcu, t16);
            wr32(sp0 - 0x1c0u, sp0 - 0xa4u);
            g->ecx = t14;
            g->esp = sp0 - 0x1b8u;
            cow_call_regs(g, COW_IMG(0x10317510u), sp0 - 0xa4u, g->ecx, t15, 1, 2, sp0 - 0xa4u, t16);
            t17 = g->ecx;
            t18 = g->edx;
            wr32(sp0 - 0x1c4u, COW_IMG(0x10388368u));
            wr32(sp0 - 0x1c8u, sp0 - 0xa4u);
            g->ecx = t17;
            g->esp = sp0 - 0x1c0u;
            cow_call_regs(g, COW_IMG(0x10317510u), sp0 - 0xa4u, g->ecx, t18, 1, 2, sp0 - 0xa4u, COW_IMG(0x10388368u));
            t19 = g->ecx;
            t20 = g->edx;
            t21 = rd32(COW_IMG(0x103d2eacu) + esi);
            wr32(sp0 - 0x1ccu, t21);
            wr32(sp0 - 0x1d0u, sp0 - 0xa4u);
            g->ecx = t19;
            g->esp = sp0 - 0x1c8u;
            cow_call_regs(g, COW_IMG(0x10317510u), sp0 - 0xa4u, g->ecx, t20, 1, 2, sp0 - 0xa4u, t21);
            t22 = g->ecx;
            t23 = g->edx;
            wr32(sp0 - 0x1d4u, 0x12010u);
            wr32(sp0 - 0x1d8u, COW_IMG(0x1034a88cu));
            wr32(sp0 - 0x1dcu, sp0 - 0xa4u);
            g->esp = sp0 - 0x1d0u;
            cow_call_regs(g, COW_IMG(0x10324d90u), g->eax, t22, t23, 1, 3, sp0 - 0xa4u, COW_IMG(0x1034a88cu), 0x12010u);
            edi = rd32(sp0 - 0x1b0u);
            loc_4 = rd32(sp0 - 4u);
            loc_1ac = rd32(sp0 - 0x1acu);
        }
    }
L_10321eac: ;
    COW_AT(10321eac)
    g->esi = loc_1ac;
    g->edi = edi;
    g->ebp = loc_4;
    return;
L_10321e86: ;
    COW_AT(10321e86)
    wr32(sp0 - 0x1b0u, 0u);
    wr32(sp0 - 0x1b4u, sp0 + 4u);
    t24 = rd32(COW_IMG(0x103d2eacu) + esi);
    wr32(sp0 - 0x1b8u, t24);
    g->edx = arg1;
    g->esp = sp0 - 0x1b4u;
    t25 = cow_call_regs(g, COW_IMG(0x10317480u), sp0 + 4u, g->ecx, g->edx, 1, 1, t24);
    t26 = g->edx;
    t27 = rd32(sp0 - 0x1b8u);
    wr32(sp0 - 0x1b8u, t25);
    t28 = rd32(COW_IMG(0x103d2eacu) + esi);
    wr32(sp0 - 0x1bcu, t28);
    wr32(sp0 - 0x1c0u, 0xfffffff4u);
    g->ecx = t27;
    g->edx = t26;
    g->esp = sp0 - 0x1bcu;
    t29 = cow_stdcall(g, rd32(COW_IMG(0x103292bcu)), 1, 0xfffffff4u);   /* kernel32.dll!GetStdHandle */
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x1c0u, t29);
    g->esp = sp0 - 0x1acu;
    cow_stdcall(g, rd32(COW_IMG(0x10329240u)), 5, t29, rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), sp0 + 4u, 0u);   /* kernel32.dll!WriteFile */
    edi = in_edi;
    loc_4 = in_ebp;
    loc_1ac = in_esi;
    goto L_10321eac;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10321d5c(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10321d6fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1a8u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321d73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1a8u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321d7eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1a8u;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321d90u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321d9eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321da2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321dafu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321dbbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321dd3u:
    {
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
        g->esp = sp0 - 0x1acu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1b4u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x10321de6u:
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
        g->esp = sp0 - 0x1acu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1b4u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x10321e00u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1b0u;
        g->ecx = sp0 - 0x1a8u;
        g->ebp = sp0 - 4u;
        g->edi = sp0 - 0x1a8u;
        wr32(sp0 - 0x1b4u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x10321e29u:
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
        g->esp = sp0 - 0x1b0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1b4u, sp0 - 0x1a8u);
        (void)sp0;
        return 1;
    }
    case 0x10321e86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1acu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->edx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321eacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1ac;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10321d5c(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10321d5c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
