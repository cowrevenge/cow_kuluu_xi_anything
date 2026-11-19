/* f_0x101970a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101970a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_28;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_c;
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
    uint32_t t4;
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
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101970d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101970d1;
    case 0x101970f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101970f2;
    case 0x101970feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101970fe;
    case 0x1019710au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1019710a;
    case 0x1019710fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1019710f;
    case 0x10197116u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10197116;
    case 0x10197130u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10197130;
    case 0x1019714eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1019714e;
    case 0x1019716cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); goto E_1019716c;
    case 0x10197173u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10197173;
    case 0x1019717du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1019717d;
    case 0x1019719cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1019719c;
    case 0x101971a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101971a0;
    case 0x101971a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101971a9;
    case 0x101971d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101971d3;
    case 0x101971dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101971dc;
    case 0x101971e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101971e0;
    case 0x101971e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101971e9;
    case 0x101971f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101971f8;
    case 0x10197212u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10197212;
    case 0x10197237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10197237;
    default: break;
    }
#endif

    COW_AT(101970a0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 1u);
    t1 = rd32(self + 0x34u);
    wr32(sp0 - 0x24u, t1);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x10196a20u), self, 3, t1, 1u, 2u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    ebx = 1u;
    edi = in_edi;
    loc_c = in_ebx;
    loc_10 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
L_101970d1: ;
    COW_AT(101970d1)
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, ebx);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebx, 1u, 1u);
    if ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) == ebx)
    {
        eax = t4;
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    }
    else
    {
        eax = t4;
        ecx = rd32(self + 8u);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    COW_AT(101970f2)
        wr32(sp0 - 0x1cu, ebx);
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t5 = cow_thiscall(g, COW_IMG(0x10118ad0u), ecx, 1, ebx);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
            edi = t5;
        }
        else
        {
            eax = t5;
            edx = t6;
            edi = t5;
    COW_AT(101970fe)
            wr32(sp0 - 0x1cu, ebx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t7 = cow_thiscall(g, COW_IMG(0x10118bc0u), rd32(self + 8u), 1, ebx);
            t8 = g->edx;
            if (t7 == 1u)
            {
                eax = t7 - 1u;
                goto L_1019714e;
            }
            eax = t7 - 1u;
            edx = t8;
    COW_AT(1019710a)
            if (eax == 2u)
            {
                eax = eax - 2u;
                goto L_1019714e;
            }
            eax = eax - 2u;
    COW_AT(1019710f)
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0u);
            if (eax == 2u) goto L_10197130;
    COW_AT(10197116)
            wr32(sp0 - 0x24u, 0x80808080u);
            t9 = (uint32_t)(int16_t)rd16(sp0 - 6u);
            wr32(sp0 - 0x28u, t9);
            t10 = (uint32_t)(int16_t)rd16(sp0 - 8u);
            wr32(sp0 - 0x2cu, t10);
            g->eax = t9;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t11 = cow_thiscall(g, COW_IMG(0x1011fb60u), edi, 5, t10, t9, 0x80808080u, 0u, 0u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
    }
L_10197173: ;
    COW_AT(10197173)
    if ((int32_t)(ebx + 1u) < 6)
    {
        ebx = ebx + 1u;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101970d1;
    }
    ebx = ebx + 1u;
    COW_AT(1019717d)
    t19 = (eax & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    wr32(sp0 - 0x1cu, t19);
    g->edi = edi;
    g->eax = t19;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t20 = cow_thiscall(g, COW_IMG(0x10118ad0u), rd32(self + 8u), 1, t19);
    t21 = g->edx;
    if (rd16(rd32(self + 8u) + 0x4cu) != 2u)
    {
        eax = rd32(self + 8u);
        ecx = rd32(COW_IMG(0x10662778u));
        edx = t21;
        edi = t20;
    COW_AT(101971dc)
        if (ecx != 0u)
        {
    COW_AT(101971e0)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t24 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
            t25 = g->edx;
            if ((uint8_t)t24 != 0u)
            {
                eax = t24;
                edx = t25;
    COW_AT(101971e9)
                wr32(sp0 - 0x1cu, COW_IMG(0x1037a708u));
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037a708u));
            }
        }
    }
    else
    {
        eax = rd32(self + 8u);
        ecx = rd32(COW_IMG(0x10662778u));
        edx = t21;
        edi = t20;
    COW_AT(1019719c)
        if (ecx != 0u)
        {
    COW_AT(101971a0)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t22 = cow_thiscall(g, COW_IMG(0x1011ba40u), ecx, 0);
            t23 = g->edx;
            if ((uint8_t)t22 == 0u)
            {
                eax = t22;
                edx = t23;
    COW_AT(101971a9)
                wr32(sp0 - 0x1cu, 0u);
                wr32(sp0 - 0x20u, 1u);
                wr32(sp0 - 0x24u, COW_IMG(0x1037a708u));
                g->ebx = ebx;
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a708u), 1u, 0u);
                if (rd32(rd32(COW_IMG(0x10662778u)) + 8u) != 0u)
                {
                    eax = (uint32_t)(int16_t)rd16(self + 0x3eu) - 0xeu;
                    ecx = rd32(rd32(COW_IMG(0x10662778u)) + 8u);
                    edx = (uint32_t)(int16_t)rd16(self + 0x40u);
    COW_AT(101971d3)
                    wr32(sp0 - 0x1cu, eax);
                    wr32(sp0 - 0x20u, edx);
                    g->esp = sp0 - 0x18u;
                    cow_call_regs(g, COW_IMG(0x10119110u), eax, ecx, g->edx, 0, 2, edx, eax);
                }
            }
        }
    }
    COW_AT(101971f8)
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    t26 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    wr32(sp0 - 0x24u, t26);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->ebx = ebx;
    g->edi = edi;
    g->eax = sp0 - 8u;
    g->edx = t26;
    g->esp = sp0 - 0x18u;
    t27 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t26, 1u, 1u);
    t28 = g->edx;
    if (edi == 0u)
    {
        eax = t27;
        edx = t28;
    }
    else
    {
        eax = t27;
    COW_AT(10197212)
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80805020u);
        wr32(sp0 - 0x2cu, 0x3f800000u);
        wr32(sp0 - 0x30u, 0x3f800000u);
        t29 = (uint32_t)(int16_t)rd16(sp0 - 6u);
        wr32(sp0 - 0x34u, t29);
        t30 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(sp0 - 0x38u, t30);
        g->eax = eax;
        g->edx = t30;
        g->esp = sp0 - 0x18u;
        t31 = cow_thiscall(g, COW_IMG(0x1011fc80u), edi, 8, t30, t29, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    COW_AT(10197237)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
L_10197130: ;
    COW_AT(10197130)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x30808080u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x34u, t13);
    t14 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x38u, t14);
    eax = t14;
    edx = t13;
    loc_28 = 0x30808080u;
    loc_34 = t13;
    loc_38 = t14;
L_1019716c: ;
    COW_AT(1019716c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t17 = cow_thiscall(g, COW_IMG(0x1011fc80u), edi, 8, loc_38, loc_34, 0x3f800000u, 0x3f800000u, loc_28, 0u, 0u, 0u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    goto L_10197173;
L_1019714e: ;
    COW_AT(1019714e)
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x40402810u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    t15 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x34u, t15);
    t16 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x38u, t16);
    edx = t16;
    loc_28 = 0x40402810u;
    loc_34 = t15;
    loc_38 = t16;
    goto L_1019716c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101970a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101970d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101970f2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101970feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1019710au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1019710fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10197116u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10197130u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1019714eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1019716cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        g->ebp = 0u;
        wr32(sp0 - 0x30u, 0x3f800000u);
        wr32(sp0 - 0x2cu, 0x3f800000u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10197173u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019717du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019719cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101971a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101971a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101971d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101971dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101971e0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101971e9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101971f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10197212u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10197237u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101970a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101970a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
