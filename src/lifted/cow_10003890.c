/* f_0x10003890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10003890(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_d4;
    uint32_t loc_d8;
    uint32_t loc_dc;
    uint32_t loc_e0;
    uint32_t loc_e4;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 252u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100039a1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); goto E_100039a1;
    case 0x100039afu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); goto E_100039af;
    case 0x10003a2cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a2c;
    case 0x10003a3eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a3e;
    case 0x10003a4cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a4c;
    case 0x10003ad4u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); goto E_10003ad4;
    case 0x10003aeau: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_e4 = rd32(sp0 - 0xe4u); loc_e0 = rd32(sp0 - 0xe0u); loc_dc = rd32(sp0 - 0xdcu); loc_d8 = rd32(sp0 - 0xd8u); loc_d4 = rd32(sp0 - 0xd4u); goto E_10003aea;
    default: break;
    }
#endif

    COW_AT(10003890)
    wr32(sp0 - 0xd8u, in_ebx);
    wr32(sp0 - 0xdcu, in_ebp);
    wr32(sp0 - 0xe0u, in_esi);
    wr32(sp0 - 0xe4u, in_edi);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 0x1cu);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t1);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t1, 0x1cu, 0u);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 0x89u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t2);
    cow_thiscall(g, rd32(rd32(t2) + 0xc8u), rd32(t2), 3, t2, 0x89u, 0u);
    wr32(sp0 - 0xe8u, 2u);
    wr32(sp0 - 0xecu, 1u);
    wr32(sp0 - 0xf0u, 0u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t3);
    cow_thiscall(g, rd32(rd32(t3) + 0xfcu), rd32(t3), 4, t3, 0u, 1u, 2u);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 2u);
    wr32(sp0 - 0xf0u, 0u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t4);
    cow_thiscall(g, rd32(rd32(t4) + 0xfcu), rd32(t4), 4, t4, 0u, 2u, 0u);
    wr32(sp0 - 0xe8u, 2u);
    wr32(sp0 - 0xecu, 4u);
    wr32(sp0 - 0xf0u, 0u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t5);
    cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 4u, 2u);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 5u);
    wr32(sp0 - 0xf0u, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t6);
    cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 0u, 5u, 0u);
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 1u);
    wr32(sp0 - 0xf0u, 1u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t7);
    cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 1u, 1u, 1u);
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 4u);
    wr32(sp0 - 0xf0u, 1u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t8);
    g->eax = t8;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t9 = rd32(COW_IMG(0x1045666cu));
    t10 = cow_thiscall(g, rd32(rd32(t8) + 0xfcu), rd32(t8), 4, t8, 1u, 4u, 1u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xc0u, 0);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t17 = g->edx;
    t18 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x80u, 0);
    wr32(sp0 - 0xe8u, sp0 - 0x40u);
    wr32(sp0 - 0xecu, 0x100u);
    g->edx = sp0 - 0x40u;
    cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x40u);
    t19 = g->edx;
    wr32(sp0 - 0xd4u, 0u);
    edx = t19;
    ebx = in_ebx;
    ebp = 0u;
    edi = 0u;
    loc_d8 = in_ebx;
    loc_dc = in_ebp;
    loc_e0 = in_esi;
    loc_e4 = in_edi;
    loc_d4 = 0u;
L_100039a1: ;
    COW_AT(100039a1)
    if (rd32(ebp + rd32(self + 0xcu) + 4u) != 0xffffffffu)
    {
        eax = rd32(self + 0xcu);
    COW_AT(100039af)
        g->eax = eax;
        g->esp = sp0 - 0xe4u;
        t20 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xc0u, 0);
        t21 = rd32(edi + rd32(self + 0x10u) + 0xcu);
        wr32(sp0 - 0xe8u, t21);
        g->edx = t21;
        cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0xc0u, 1, t21);
        t22 = g->edx;
        t23 = edi + rd32(self + 0x10u);
        wr32(sp0 - 0xe8u, t23);
        g->eax = t23;
        g->edx = t22;
        t24 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0xc0u, 1, t23);
        t25 = g->edx;
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xecu, 0x100u);
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0xc0u);
        wr32(sp0 - 0xe8u, 0x42u);
        t26 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xecu, t26);
        g->eax = t26;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t27 = rd32(COW_IMG(0x1045666cu));
        t28 = cow_thiscall(g, rd32(rd32(t26) + 0x130u), rd32(t26), 2, t26, 0x42u);
        t29 = g->edx;
        wr32(sp0 - 0xe8u, 0x10u);
        wr32(sp0 - 0xecu, COW_IMG(0x1034f6c0u));
        wr32(sp0 - 0xf0u, 3u);
        wr32(sp0 - 0xf4u, 2u);
        g->ebx = ebx;
        cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 3u, COW_IMG(0x1034f6c0u), 0x10u);
        if (rd32(COW_IMG(0x10480af0u) + rd32(ebp + rd32(self + 0xcu)) * 4u) == 0u)
        {
            edx = rd32(self + 0xcu);
            loc_d8 = rd32(sp0 - 0xd8u);
            loc_dc = rd32(sp0 - 0xdcu);
            loc_e0 = rd32(sp0 - 0xe0u);
            loc_e4 = rd32(sp0 - 0xe4u);
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd32(ebp + rd32(self + 0xcu)) * 4u);
            edx = rd32(self + 0xcu);
    COW_AT(10003a2c)
            if (!(rd32(eax + 0x120u) >> 9u & 1u))
            {
                loc_d8 = rd32(sp0 - 0xd8u);
                loc_dc = rd32(sp0 - 0xdcu);
                loc_e0 = rd32(sp0 - 0xe0u);
                loc_e4 = rd32(sp0 - 0xe4u);
            }
            else
            {
    COW_AT(10003a3e)
                if (rd32(eax + 0xa0u) == 0u)
                {
                    ebx = rd32(eax + 0xa0u);
                    loc_d8 = rd32(sp0 - 0xd8u);
                    loc_dc = rd32(sp0 - 0xdcu);
                    loc_e0 = rd32(sp0 - 0xe0u);
                    loc_e4 = rd32(sp0 - 0xe4u);
                }
                else
                {
                    ebx = rd32(eax + 0xa0u);
    COW_AT(10003a4c)
                    g->eax = eax;
                    g->edx = rd32(ebx);
                    t30 = rd32(ebx);
                    g->esp = sp0 - 0xe4u;
                    t31 = cow_thiscall(g, rd32(t30 + 0x198u), ebx, 0);
                    t32 = g->edx;
                    t33 = (-((uint8_t)t31 != 0u) & 0xff010000u) - 0x7f000001u;
                    wr32(COW_IMG(0x1034f72cu), t33);
                    g->eax = rd32(ebx);
                    g->edx = t32;
                    t34 = rd32(ebx);
                    t35 = cow_thiscall(g, rd32(t34 + 0x1bcu), ebx, 0);
                    t36 = g->edx;
                    wr32(sp0 - 0xe8u, t35);
                    wr32(sp0 - 0xecu, sp0 - 0xd0u);
                    g->ecx = sp0 - 0xd0u;
                    cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0xd0u, t35);
                    t37 = g->ecx;
                    t38 = edi + rd32(self + 0x10u);
                    wr32(sp0 - 0xf0u, t38);
                    wr32(sp0 - 0xf4u, sp0 - 0xd0u);
                    wr32(sp0 - 0xf8u, COW_IMG(0x1034f730u));
                    g->eax = sp0 - 0xd0u;
                    g->edx = t38;
                    g->esp = sp0 - 0xecu;
                    t39 = cow_cdecl(g, COW_IMG(0x10027120u), 3, COW_IMG(0x1034f730u), sp0 - 0xd0u, t38);
                    t40 = g->edx;
                    t41 = edi + rd32(self + 0x10u);
                    wr32(sp0 - 0xe8u, t41);
                    g->esp = sp0 - 0xe4u;
                    t42 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x80u, 1, t41);
                    wr32(sp0 - 0xe8u, sp0 - 0x80u);
                    wr32(sp0 - 0xecu, 0x100u);
                    g->edx = sp0 - 0x80u;
                    t43 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x80u);
                    t44 = g->edx;
                    wr32(sp0 - 0xe8u, 0x10u);
                    wr32(sp0 - 0xecu, COW_IMG(0x1034f720u));
                    wr32(sp0 - 0xf0u, 1u);
                    wr32(sp0 - 0xf4u, 2u);
                    g->ebx = ebx;
                    g->edx = t44;
                    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 1u, COW_IMG(0x1034f720u), 0x10u);
                    t45 = g->edx;
                    edx = t45;
                    ebp = rd32(sp0 - 0xd4u);
                    loc_d8 = rd32(sp0 - 0xd8u);
                    loc_dc = rd32(sp0 - 0xdcu);
                    loc_e0 = rd32(sp0 - 0xe0u);
                    loc_e4 = rd32(sp0 - 0xe4u);
                }
            }
        }
    }
    COW_AT(10003ad4)
    wr32(sp0 - 0xd4u, ebp + 8u);
    if ((int32_t)(ebp + 8u) < 18432)
    {
        edi = edi + 0x10u;
        loc_d4 = ebp + 8u;
        ebp = ebp + 8u;
        goto L_100039a1;
    }
    COW_AT(10003aea)
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 0xeu);
    t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t46);
    g->esp = sp0 - 0xe4u;
    cow_thiscall(g, rd32(rd32(t46) + 0xc8u), rd32(t46), 3, t46, 0xeu, 1u);
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 7u);
    t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t47);
    g->eax = t47;
    t48 = cow_thiscall(g, rd32(rd32(t47) + 0xc8u), rd32(t47), 3, t47, 7u, 1u);
    wr32(sp0 - 0xe8u, sp0 - 0x40u);
    wr32(sp0 - 0xecu, 0x100u);
    g->edx = sp0 - 0x40u;
    t49 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x40u);
    t50 = g->edx;
    g->edx = t50;
    t51 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t52 = g->edx;
    g->edx = t52;
    t53 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t54 = g->edx;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0xd8u);
    g->esi = rd32(sp0 - 0xe0u);
    g->edi = rd32(sp0 - 0xe4u);
    g->ebp = rd32(sp0 - 0xdcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10003890(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100039a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        uint32_t loc_e0;
        uint32_t loc_e4;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100039afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        uint32_t loc_e0;
        uint32_t loc_e4;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a2cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a3eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a4cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003ad4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        uint32_t loc_e0;
        uint32_t loc_e4;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003aeau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_d4;
        uint32_t loc_d8;
        uint32_t loc_dc;
        uint32_t loc_e0;
        uint32_t loc_e4;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_e4 = rd32(sp0 - 0xe4u);
        loc_e0 = rd32(sp0 - 0xe0u);
        loc_dc = rd32(sp0 - 0xdcu);
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10003890(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10003890(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
