/* f_0x102214d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102214d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
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
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102214ddu: eax = g->eax; self = g->ecx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); goto E_102214dd;
    case 0x102214fbu: eax = g->eax; ecx = g->ecx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); goto E_102214fb;
    case 0x10221505u: eax = g->eax; ecx = g->ecx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); goto E_10221505;
    case 0x10221510u: eax = g->eax; ecx = g->ecx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); goto E_10221510;
    case 0x1022151bu: eax = g->eax; ecx = g->ecx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x48u); goto E_1022151b;
    case 0x1022154cu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022154c;
    case 0x1022154eu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022154e;
    case 0x102215afu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_102215af;
    case 0x102215fcu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102215fc;
    case 0x10221606u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10221606;
    case 0x1022161cu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_1022161c;
    case 0x10221622u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_10221622;
    case 0x10221635u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_10221635;
    case 0x1022163cu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1022163c;
    case 0x10221651u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_10221651;
    case 0x10221658u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_10221658;
    case 0x1022166du: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1022166d;
    default: break;
    }
#endif

    COW_AT(102214d0)
    wr32(sp0 - 0x48u, in_ebx);
    if (rd32(self + 0x64u) == 0u)
    {
    COW_AT(102214fb)
        if ((int32_t)rd32(self + 0x70u) >= 4)
        {
            ebp = in_ebp;
            esi = in_esi;
            edi = in_edi;
            loc_48 = in_ebx;
        }
        else
        {
    COW_AT(10221505)
            if (rd32(self + 0x48u) == 0u)
            {
                ebp = in_ebp;
                esi = in_esi;
                edi = in_edi;
                loc_48 = in_ebx;
            }
            else
            {
    COW_AT(10221510)
                if (rd32(self + 0x50u) == 0u)
                {
                    ebp = in_ebp;
                    esi = in_esi;
                    edi = in_edi;
                    loc_48 = in_ebx;
                }
                else
                {
                    eax = rd32(self + 0x50u);
    COW_AT(1022151b)
                    wr32(sp0 - 0x4cu, in_ebp);
                    wr32(sp0 - 0x50u, in_esi);
                    wr32(sp0 - 0x54u, in_edi);
                    g->eax = eax;
                    g->esp = sp0 - 0x54u;
                    t3 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
                    t4 = rd32(self + 0x58u);
                    esi = t3;
                    edi = sp0 - 0x18u;
                    ecx = 6u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    esi = sp0 - 0x18u;
                    edi = sp0 - 0x30u;
                    ecx = 6u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    if ((int32_t)t4 >= 0)
                    {
                        eax = t4;
                    }
                    else
                    {
    COW_AT(1022154c)
                        eax = 0u;
                    }
    COW_AT(1022154e)
                    t5 = rd32(self + 0x60u);
                    wr32(sp0 - 0x28u, t5);
                    wr32(sp0 - 0x58u, sp0 - 0x30u);
                    wr32(sp0 - 0x30u, eax);
                    g->edx = sp0 - 0x30u;
                    g->esp = sp0 - 0x54u;
                    cow_thiscall(g, COW_IMG(0x10009dc0u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x30u);
                    t6 = g->edx;
                    t7 = rd32(self + 0x48u);
                    wr32(sp0 - 0x44u, t7);
                    g->eax = t7;
                    g->edx = t6;
                    t8 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
                    t9 = g->edx;
                    t10 = rd32(t8);
                    t11 = rd32(self + 0x4cu);
                    t12 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(COW_IMG(0x1045666cu)), 0);
                    t13 = rd32(self + 0x5cu) + rd32(t12 + 4u);
                    wr32(sp0 - 0x40u, t13);
                    t14 = rd32(self + 0x60u) + (uint32_t)((int32_t)rd32(self + 0x4cu) >> 4u);
                    wr32(sp0 - 0x3cu, t14);
                    if ((int32_t)(rd32(self + 0x60u) + (uint32_t)((int32_t)rd32(self + 0x4cu) >> 4u)) < 0)
                    {
                        eax = t14;
                        goto L_10221622;
                    }
                    eax = t14;
                    ecx = rd32(self + 0x60u);
                    ebp = t10 - (uint32_t)((int32_t)t11 >> 4u);
                    edi = 0u;
                    loc_40 = t13;
                    loc_3c = t14;
                    loc_44 = rd32(sp0 - 0x44u);
L_102215af: ;
    COW_AT(102215af)
                    wr32(sp0 - 0x58u, sp0 - 0x44u);
                    g->eax = eax;
                    g->esp = sp0 - 0x4cu;
                    t15 = cow_cdecl(g, COW_IMG(0x1011d050u), 3, sp0 - 0x44u, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
                    wr32(sp0 - 0x58u, 0x3f800000u);
                    wr32(sp0 - 0x5cu, 0x3f800000u);
                    t16 = rd32(sp0 - 0x40u);
                    wr32(sp0 - 0x34u, t16);
                    wr32(sp0 - 0x60u, sp0 - 0x38u);
                    wr32(sp0 - 0x64u, t15);
                    wr32(sp0 - 0x38u, ebp + edi);
                    g->eax = ebp + edi;
                    g->edx = sp0 - 0x38u;
                    t17 = rd32(COW_IMG(0x104e1b90u));
                    g->esp = sp0 - 0x54u;
                    t18 = cow_thiscall(g, COW_IMG(0x1011bba0u), t17, 4, t15, sp0 - 0x38u, 0x3f800000u, 0x3f800000u);
                    t19 = g->ecx;
                    t20 = g->edx;
                    wr32(sp0 - 0x58u, t15);
                    g->ecx = t19;
                    t21 = cow_cdecl(g, COW_IMG(0x10221770u), 1, t15);
                    t22 = g->ecx;
                    if (rd8(rd32(sp0 - 0x44u)) != 0u)
                    {
                        eax = rd32(sp0 - 0x44u);
                        ecx = t22;
                        edi = edi + t21;
                        loc_44 = rd32(sp0 - 0x44u);
                        goto L_1022161c;
                    }
                    eax = rd32(sp0 - 0x44u);
                    edi = edi + t21;
    COW_AT(102215fc)
                    if (rd8(self + 0x3a0u) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 0x3a0u);
                        goto L_10221622;
                    }
    COW_AT(10221606)
                    t23 = self + rd32(self + 0x70u) * 0xcbu + 0x74u;
                    wr32(sp0 - 0x44u, t23);
                    eax = self + rd32(self + 0x70u);
                    ecx = t23;
                    loc_44 = t23;
L_1022161c: ;
    COW_AT(1022161c)
                    if ((int32_t)edi <= (int32_t)rd32(sp0 - 0x3cu))
                    {
                        loc_40 = rd32(sp0 - 0x40u);
                        loc_3c = rd32(sp0 - 0x3cu);
                        goto L_102215af;
                    }
L_10221622: ;
    COW_AT(10221622)
                    wr32(sp0 - 0x58u, sp0 - 0x18u);
                    g->esp = sp0 - 0x54u;
                    cow_thiscall(g, COW_IMG(0x10009dc0u), rd32(COW_IMG(0x1045666cu)), 1, sp0 - 0x18u);
                    ebp = rd32(sp0 - 0x4cu);
                    esi = rd32(sp0 - 0x50u);
                    edi = rd32(sp0 - 0x54u);
                    loc_48 = rd32(sp0 - 0x48u);
                }
            }
        }
    }
    else
    {
    COW_AT(102214dd)
        wr32(sp0 - 0x4cu, 1u);
        t1 = rd32(self + 0x5cu);
        wr32(sp0 - 0x50u, t1);
        t2 = rd32(self + 0x58u) + (uint32_t)((int32_t)(rd32(self + 0x60u) - (uint32_t)((int32_t)rd32(self + 0x60u) >> 0x1fu)) >> 1u);
        wr32(sp0 - 0x54u, t2);
        g->esp = sp0 - 0x48u;
        cow_thiscall(g, COW_IMG(0x10220ef0u), self, 3, t2, t1, 1u);
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
        loc_48 = in_ebx;
    }
    COW_AT(10221635)
    if (rd32(self + 0x68u) != 0u)
    {
    COW_AT(1022163c)
        t24 = rd32(self + 0x5cu);
        wr32(sp0 - 0x4cu, t24);
        t25 = rd32(self + 0x58u) + rd32(self + 0x60u);
        wr32(sp0 - 0x50u, t25);
        g->esp = sp0 - 0x48u;
        cow_thiscall(g, COW_IMG(0x10220f40u), self + 0x18u, 2, t25, t24);
        loc_48 = rd32(sp0 - 0x48u);
    }
    COW_AT(10221651)
    if (rd32(self + 0x6cu) != 0u)
    {
    COW_AT(10221658)
        t26 = rd32(self + 0x5cu);
        wr32(sp0 - 0x4cu, t26);
        t27 = rd32(self + 0x58u) + rd32(self + 0x60u);
        wr32(sp0 - 0x50u, t27);
        g->esp = sp0 - 0x48u;
        cow_thiscall(g, COW_IMG(0x10220f40u), self + 0x30u, 2, t27, t26);
        loc_48 = rd32(sp0 - 0x48u);
    }
    COW_AT(1022166d)
    g->ebx = loc_48;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102214d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102214ddu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        g->ebx = self;
        (void)sp0;
        return 1;
    }
    case 0x102214fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10221505u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10221510u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1022151bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1022154cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x1022154eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102215afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102215fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x10221606u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x1022161cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x10221622u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10221635u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1022163cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10221651u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10221658u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1022166du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102214d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102214d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
