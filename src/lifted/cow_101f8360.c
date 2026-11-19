/* f_0x101f8360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_101f8360(Guest* g)
{
    double d24;
    double d25;
    double d26;
    double d32;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f836eu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f836e;
    case 0x101f8376u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f8376;
    case 0x101f8380u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f8380;
    case 0x101f83b7u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f83b7;
    case 0x101f83eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f83ee;
    case 0x101f83f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f83f8;
    case 0x101f8436u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f8436;
    case 0x101f843eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f843e;
    case 0x101f8447u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f8447;
    case 0x101f845bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f845b;
    case 0x101f8477u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f8477;
    case 0x101f8560u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f8560;
    case 0x101f857au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f857a;
    case 0x101f85c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f85c6;
    case 0x101f85ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101f85dd;
    default: break;
    }
#endif

    COW_AT(101f8360)
    if (rd8(sp0 + 0xcu) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    COW_AT(101f83b7)
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t5 = cow_cdecl(g, COW_IMG(0x101f85f0u), 1, arg1);
        t6 = g->ecx;
        t7 = g->edx;
        t8 = rd16(COW_IMG(0x103821fcu) + arg1 * 0xeu);
        wr32(sp0 + 0x10u, t5);
        t9 = rd16(COW_IMG(0x103821fau) + arg1 * 0xeu);
        wr16(sp0 + 0xcu, 0u);
        wr16(sp0 + 0xeu, 0u);
        eax = 0u;
        ecx = t6;
        edx = t7;
        ebx = (arg1 & 0xffff0000u) | t8;
        ebp = (in_ebp & 0xffff0000u) | t9;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    COW_AT(101f836e)
        if (rd8(sp0 + 0x10u) == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
    COW_AT(101f8376)
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101f8650u), self, 1, arg2);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
        }
    COW_AT(101f8380)
        wr32(sp0 + 0x10u, 0x1592u);
        t3 = rd16(COW_IMG(0x103821fau) + arg1 * 0xeu);
        t4 = rd16(COW_IMG(0x103821fcu) + arg1 * 0xeu);
        wr16(sp0 + 0xcu, (uint16_t)t3);
        wr16(sp0 + 0xeu, (uint16_t)t4);
        eax = arg1;
        ecx = (ecx & 0xffff0000u) | t3;
        edx = (edx & 0xffff0000u) | t4;
        ebx = in_ebx & 0xffff0000u;
        ebp = in_ebp & 0xffff0000u;
    }
    COW_AT(101f83ee)
    if (rd16(self + 0x104u) == 6u)
    {
    COW_AT(101f83f8)
        g->eax = self + 0x6c8u;
        g->esp = sp0 - 0x10u;
        t10 = cow_thiscall_cdecl(g, COW_IMG(0x101cc620u), ecx, 2, 0xd0c2u, self + 0x6c8u);
        t11 = rd32(rd32(t10));
        wr16(self + 0x7cu, 0x1eu);
        wr16(self + 0x7eu, 0x1eu);
        wr32(self + 0x90u, t11);
        wr16(self + 0x80u, 0x60u);
        wr16(self + 0x82u, 0x60u);
        eax = 0x60u;
        edx = t11;
    }
    COW_AT(101f8436)
    if ((uint8_t)arg5 != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg5;
    COW_AT(101f843e)
        if (rd8(COW_IMG(0x103821f6u) + arg1 * 0xeu) & 1u)
        {
    COW_AT(101f8447)
            wr8(self + 0xedu, 0x80u);
            wr8(self + 0xeeu, 0x80u);
            wr8(self + 0xefu, 0x80u);
        }
    }
    COW_AT(101f845b)
    t12 = rd32(sp0 + 0x10u);
    g->eax = self + 0x6c4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x101cc620u), t12, 2, t12, self + 0x6c4u);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
    COW_AT(101f8477)
        t16 = rd16(sp0 + 0xeu);
        t17 = rd16(sp0 + 0xcu);
        wr16(self + 0x54u, (uint16_t)ebp);
        wr16(self + 0x56u, (uint16_t)ebx);
        wr16(self + 0x6cu, (uint16_t)t17);
        wr16(self + 0x6eu, (uint16_t)t16);
        t18 = rd32(rd32(eax));
        wr32(self + 0x8cu, self + 0x168u);
        wr32(self + 0x168u, t18);
        wr16(self + 0x14u, rd16(self + 0x14u) | 1u);
        wr16(self + 0x78u, 1u);
        wr8(self + 0xa2u, 1u);
        t19 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
        t20 = rd32(COW_IMG(0x106218b8u));
        t21 = rd32(COW_IMG(0x106218b4u));
        wr32(sp0 + 0xcu, t19);
        t22 = (uint32_t)(int16_t)(t20 - t21);
        t23 = rd16(self + 0x14u);
        d24 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032ac88u)));
        wr32(sp0 + 0xcu, t22);
        wr16(self + 0x14u, (uint16_t)((t23 & 0xffffff00u) | (uint8_t)(t23 | 2u)));
        d25 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032ac88u)));
        d26 = fr(g, d24 * (double)rdf32(COW_IMG(0x1032a3a0u)));
        wrf32(self + 0x60u, (float)d25);
        wrf32(self + 0x64u, (float)d26);
        t27 = rd32(COW_IMG(0x106218b4u));
        t28 = rd32(COW_IMG(0x106218b8u));
        g->esp = sp0 - 0x10u;
        t29 = cow_call_regs(g, COW_IMG(0x10193850u), t27, g->ecx, g->edx, 1, 1, 0x8au);
        wr32(sp0 + 0xcu, t29);
        t30 = (uint32_t)(int16_t)(t28 - t27);
        t31 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t30);
        d32 = fr(g, fr(g, (double)(int32_t)t31 * fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032ac88u)))) * (double)rdf32(COW_IMG(0x1032a22cu)));
        wrf32(self + 0x68u, (float)d32);
        wrf32(self + 0x58u, (float)d32);
        g->edx = t30;
        t33 = cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
        t34 = g->ecx;
        t35 = g->edx;
        t36 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        eax = t36;
        ecx = COW_IMG(0x1038214cu);
        edx = self + 0x114u;
L_101f8560: ;
    COW_AT(101f8560)
        t37 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
        wr32(edx, t37);
        if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x10382174u))
        {
            ecx = ecx + 2u;
            edx = edx + 4u;
            goto L_101f8560;
        }
        ecx = ecx + 2u;
        edx = edx + 4u;
    COW_AT(101f857a)
        wr32(self + 0x84u, self + 0x114u);
        wr16(self + 0x74u, 0x14u);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t38 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        t39 = rd32(rd32(t38) + (uint32_t)(int16_t)rd16(COW_IMG(0x10382174u)) * 4u);
        t40 = rd32(t38);
        wr32(self + 0x164u, t39);
        wr32(self + 0x88u, self + 0x164u);
        wr16(self + 0x76u, 1u);
        wr16(self + 0x16u, 0u);
        g->ebx = 0u;
        g->eax = t40;
        g->ecx = self + 0x164u;
        g->edx = t39;
        g->esp = sp0 - 0xcu;
        t41 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, arg2, 1u, 2u, in_edi);
        t42 = g->ecx;
        t43 = g->edx;
        if (t41 != 0u)
        {
            eax = t41;
            ecx = t42;
            edx = t43;
    COW_AT(101f85c6)
            g->ebx = 0u;
            g->eax = eax;
            g->esp = sp0 - 8u;
            t44 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, arg2, 1u, in_edi, in_esi);
            wr32(self + 0xb8u, 0u);
            wr32(self + 0xb4u, t44);
        }
    }
    COW_AT(101f85dd)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f8360(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f836eu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        wr32(sp0 - 8u, in_ebp);
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101f8376u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        wr32(sp0 - 8u, in_ebp);
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101f8380u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 8u, in_ebp);
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101f83b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        wr32(sp0 - 8u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x101f83eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1 * 0xeu;
        (void)sp0;
        return 1;
    }
    case 0x101f83f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1 * 0xeu;
        (void)sp0;
        return 1;
    }
    case 0x101f8436u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1 * 0xeu;
        (void)sp0;
        return 1;
    }
    case 0x101f843eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1 * 0xeu;
        (void)sp0;
        return 1;
    }
    case 0x101f8447u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101f845bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101f8477u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101f8560u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = self + 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101f857au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = self + 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x101f85c6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101f85ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f8360(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f8360(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
