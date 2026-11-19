/* f_0x10001520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10001520(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10001548u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_10001548;
    case 0x1000155bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1000155b;
    case 0x1000157eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1000157e;
    case 0x10001592u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10001592;
    case 0x1000159bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1000159b;
    case 0x100015b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100015b8;
    case 0x100015bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100015bf;
    case 0x100015c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100015c9;
    case 0x100015e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100015e4;
    case 0x100015ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100015ff;
    case 0x1000160au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1000160a;
    case 0x10001613u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10001613;
    case 0x1000161au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1000161a;
    case 0x1000161fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1000161f;
    case 0x10001626u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10001626;
    case 0x1000162du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1000162d;
    case 0x1000163bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1000163b;
    case 0x10001647u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10001647;
    case 0x1000164eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1000164e;
    case 0x10001655u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10001655;
    case 0x10001663u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10001663;
    case 0x10001696u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10001696;
    case 0x1000169fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1000169f;
    default: break;
    }
#endif

    COW_AT(10001520)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    t1 = rd32(self + 0x18u);
    wr32(sp0 - 0x34u, t1);
    g->eax = t1;
    g->esp = sp0 - 0x30u;
    t2 = cow_call_regs(g, COW_IMG(0x100014a0u), g->eax, self, in_edx, 1, 1, t1);
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x100091b0u), rd32(COW_IMG(0x1045666cu)), t3, 0);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        ebx = in_ebx;
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
    }
    else
    {
        eax = t4;
        edx = t5;
    COW_AT(10001548)
        t6 = rd32(self + 0x14u);
        wr32(sp0 - 0x34u, t6);
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t7 = cow_stdcall(g, COW_IMG(0x10001bb0u), 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 == 0u)
        {
            eax = t7;
            edx = t9;
            ebx = in_ebx;
            loc_24 = in_ebx;
            loc_28 = in_ebp;
            loc_2c = in_esi;
            loc_30 = in_edi;
        }
        else
        {
            ecx = t8;
    COW_AT(1000155b)
            wr32(sp0 - 0x34u, self + 0x20u);
            t10 = rd32(self + 0x18u);
            wr32(sp0 - 0x38u, t10);
            g->eax = t10;
            g->ecx = ecx;
            g->edx = self + 0x20u;
            g->esp = sp0 - 0x30u;
            t11 = cow_stdcall(g, rd32(COW_IMG(0x103293e4u)), 2, t10, self + 0x20u);   /* user32.dll!GetWindowRect */
            t12 = g->ecx;
            t13 = g->edx;
            wr32(sp0 - 0x34u, 0x33cu);
            g->esp = sp0 - 0x28u;
            t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t12, t13, 1, 3, 0x33cu, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            t15 = g->edx;
            if (t14 == 0u)
            {
                eax = t14;
                edx = t15;
    COW_AT(1000163b)
                wr32(COW_IMG(0x104568fcu), 0u);
                ebx = in_ebx;
                loc_24 = rd32(sp0 - 0x24u);
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
            }
            else
            {
                eax = t14;
                edx = t15;
    COW_AT(1000157e)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                t16 = cow_thiscall(g, COW_IMG(0x10010700u), eax, 0);
                t17 = g->edx;
                wr32(COW_IMG(0x104568fcu), t16);
                if (t16 == 0u)
                {
                    eax = t16;
                    edx = t17;
                    ebx = in_ebx;
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_30 = rd32(sp0 - 0x30u);
                }
                else
                {
                    eax = t16;
                    edx = t17;
    COW_AT(10001592)
                    wr32(sp0 - 0x34u, 0u);
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    t18 = cow_call_regs(g, COW_IMG(0x10010ce0u), eax, eax, g->edx, 0, 1, 0u);
                    t19 = g->edx;
                    eax = t18;
                    edx = t19;
L_1000159b: ;
    COW_AT(1000159b)
                    wr8(sp0 - 0x1du, 0u);
                    wr32(sp0 - 0x34u, sp0 - 0x1du);
                    g->eax = eax;
                    t20 = rd32(COW_IMG(0x104568fcu));
                    g->esp = sp0 - 0x30u;
                    t21 = cow_fastcall(g, COW_IMG(0x10010d20u), t20, edx, 1, sp0 - 0x1du);
                    t22 = g->ecx;
                    t23 = g->edx;
                    if ((uint8_t)t21 == 0u)
                    {
                        eax = t21;
                        edx = t23;
                        ebx = in_ebx;
                        loc_24 = rd32(sp0 - 0x24u);
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_2c = rd32(sp0 - 0x2cu);
                        loc_30 = rd32(sp0 - 0x30u);
                        goto L_1000169f;
                    }
                    eax = t21;
                    ecx = t22;
                    edx = t23;
    COW_AT(100015b8)
                    if (rd8(sp0 - 0x1du) != 1u) goto L_1000159b;
    COW_AT(100015bf)
                    t24 = rd32(COW_IMG(0x103293e8u));
                    wr8(self + 0x1du, 1u);
                    ebx = t24;
L_100015c9: ;
    COW_AT(100015c9)
                    t25 = rd32(self + 0x18u);
                    wr32(sp0 - 0x34u, t25);
                    g->eax = eax;
                    g->esp = sp0 - 0x30u;
                    t26 = cow_call_regs(g, COW_IMG(0x100014a0u), g->eax, ecx, t25, 1, 1, t25);
                    t27 = g->edx;
                    g->ebx = ebx;
                    g->edx = t27;
                    t28 = cow_thiscall(g, COW_IMG(0x10001b50u), self, 0);
                    t29 = g->ecx;
                    t30 = g->edx;
                    if ((uint8_t)t28 == 0u)
                    {
                        eax = t28;
                        edx = t30;
                        loc_24 = rd32(sp0 - 0x24u);
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_2c = rd32(sp0 - 0x2cu);
                        loc_30 = rd32(sp0 - 0x30u);
                        goto L_1000169f;
                    }
                    ecx = t29;
                    edx = t30;
L_100015e4: ;
    COW_AT(100015e4)
                    wr32(sp0 - 0x34u, 1u);
                    wr32(sp0 - 0x38u, 0u);
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0u);
                    wr32(sp0 - 0x44u, sp0 - 0x1cu);
                    g->eax = sp0 - 0x1cu;
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    t31 = cow_thiscall(g, ebx, ecx, 5, sp0 - 0x1cu, 0u, 0u, 0u, 1u);
                    t32 = g->ecx;
                    t33 = g->edx;
                    if (t31 == 0u)
                    {
                        eax = rd32(sp0 - 0x18u);
                        ecx = t32;
                        edx = t33;
                        goto L_10001696;
                    }
                    eax = rd32(sp0 - 0x18u);
                    ecx = t32;
                    edx = t33;
    COW_AT(100015ff)
                    if (eax == 0x401u) goto L_10001696;
    COW_AT(1000160a)
                    if (eax == 0x12u)
                    {
                        loc_24 = rd32(sp0 - 0x24u);
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_2c = rd32(sp0 - 0x2cu);
                        loc_30 = rd32(sp0 - 0x30u);
                        goto L_1000169f;
                    }
    COW_AT(10001613)
                    if (eax != 0x281u)
                    {
    COW_AT(1000161a)
                        if (eax != 0x1cu)
                        {
    COW_AT(1000161f)
                            if (eax != 0x105u) goto L_10001647;
    COW_AT(10001626)
                            if (rd32(sp0 - 0x14u) != 0x2cu) goto L_10001663;
    COW_AT(1000162d)
                            wr32(sp0 - 0x34u, COW_IMG(0x103d3c84u));
                            g->esp = sp0 - 0x30u;
                            cow_fastcall(g, COW_IMG(0x10001cc0u), self, edx, 1, COW_IMG(0x103d3c84u));
                            t34 = g->ecx;
                            t35 = g->edx;
                            ecx = t34;
                            edx = t35;
                        }
                    }
                    goto L_100015e4;
                }
            }
        }
    }
L_1000169f: ;
    COW_AT(1000169f)
    wr8(self + 0x1du, 0u);
    g->ebx = ebx;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10014c10u), rd32(COW_IMG(0x104568fcu)), 0);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return;
L_10001647: ;
    COW_AT(10001647)
    if (eax != 0x101u) goto L_10001663;
    COW_AT(1000164e)
    if (rd32(sp0 - 0x14u) != 0x2cu) goto L_10001663;
    COW_AT(10001655)
    wr32(sp0 - 0x34u, COW_IMG(0x103d3c84u));
    g->esp = sp0 - 0x30u;
    cow_fastcall(g, COW_IMG(0x10001cc0u), self, edx, 1, COW_IMG(0x103d3c84u));
    t36 = g->ecx;
    t37 = g->edx;
    ecx = t36;
    edx = t37;
    goto L_100015e4;
L_10001663: ;
    COW_AT(10001663)
    esi = sp0 - 0x1cu;
    edi = sp0 - 0x4cu;
    ecx = 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 0x4cu;
    t38 = cow_call_regs(g, COW_IMG(0x100016c0u), eax, g->ecx, edx, 1, 0);
    t39 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x1cu);
    g->ecx = sp0 - 0x1cu;
    g->esp = sp0 - 0x30u;
    t40 = cow_stdcall(g, rd32(COW_IMG(0x103293ecu)), 1, sp0 - 0x1cu);   /* user32.dll!TranslateMessage */
    t41 = g->ecx;
    wr32(sp0 - 0x34u, sp0 - 0x1cu);
    g->ecx = t41;
    g->edx = sp0 - 0x1cu;
    cow_stdcall(g, rd32(COW_IMG(0x103293c8u)), 1, sp0 - 0x1cu);   /* user32.dll!DispatchMessageA */
    t42 = g->ecx;
    t43 = g->edx;
    ecx = t42;
    edx = t43;
    goto L_100015e4;
L_10001696: ;
    COW_AT(10001696)
    if (eax != 0x12u) goto L_100015c9;
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_30 = rd32(sp0 - 0x30u);
    goto L_1000169f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10001520(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10001548u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x24u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1000155bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1000157eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10001592u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1000159bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100015b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x1du);
        (void)sp0;
        return 1;
    }
    case 0x100015bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x1du);
        (void)sp0;
        return 1;
    }
    case 0x100015c9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100015e4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100015ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1000160au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10001613u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1000161au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1000161fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10001626u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1000162du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1000163bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10001647u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1000164eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10001655u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10001663u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10001696u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x44u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1000169fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10001520(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10001520(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
