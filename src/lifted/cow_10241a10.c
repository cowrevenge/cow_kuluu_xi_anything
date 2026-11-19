/* f_0x10241a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10241a10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_28;
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
    uint32_t t3;
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
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10241a93u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10241a93;
    case 0x10241a9au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10241a9a;
    case 0x10241addu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10241add;
    case 0x10241aedu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10241aed;
    case 0x10241b06u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10241b06;
    case 0x10241b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10241b15;
    case 0x10241b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10241b18;
    case 0x10241b2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10241b2d;
    case 0x10241b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10241b38;
    case 0x10241b41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10241b41;
    case 0x10241b80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10241b80;
    case 0x10241b90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10241b90;
    case 0x10241babu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10241bab;
    case 0x10241bbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10241bbe;
    case 0x10241bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10241bc9;
    case 0x10241bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10241bce;
    case 0x10241be2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10241be2;
    case 0x10241bf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10241bf2;
    default: break;
    }
#endif

    COW_AT(10241a10)
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, COW_IMG(0x1036c19cu));
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
    t2 = g->edx;
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    t3 = rd32(rd32(t1) + 0x23cu);
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 1u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x80808080u);
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    g->edx = 0u;
    t4 = cow_thiscall(g, COW_IMG(0x1011fc80u), t3, 8, 0u, 0u, 0x3f800000u, 0x3f800000u, 0x80808080u, 0u, 0u, 1u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t7 = g->edx;
    if (t6 == 0u)
    {
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
    COW_AT(10241a93)
        if (rd32(eax + 4u) != 0u)
        {
            ecx = rd32(eax + 4u);
    COW_AT(10241a9a)
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 8u, rd32(COW_IMG(0x106218b4u)));
            wr32(sp0 - 4u, rd32(COW_IMG(0x106218b8u)));
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, 0x20808080u);
            t8 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) >> 0x10u) + 0x20u;
            t9 = rd32(COW_IMG(0x106218b8u));
            wr32(ecx + 4u, t8);
            wr32(sp0 - 0x30u, 0x3f800000u);
            wr32(sp0 - 0x34u, 0x3f800000u);
            wr32(sp0 - 0x38u, 0xfffffff0u);
            wr32(sp0 - 0x3cu, 0u);
            t10 = rd32(eax + 4u);
            wr32(t10, (uint32_t)(int16_t)t9);
            g->edx = t10;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, COW_IMG(0x10234ab0u), rd32(eax + 4u), 7, 0u, 0xfffffff0u, 0x3f800000u, 0x3f800000u, 0x20808080u, 0u, 0u);
            t11 = g->edx;
            edx = t11;
        }
    }
    COW_AT(10241add)
    t12 = rd32(self + 0x28u) + 1u;
    wr32(self + 0x28u, t12);
    if ((int32_t)t12 < 150)
    {
        eax = t12;
    }
    else
    {
    COW_AT(10241aed)
        if (rd32(self + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0xacu) == 0u)
        {
            eax = rd32(COW_IMG(0x1066908cu));
            edx = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
        }
        else
        {
            eax = rd32(COW_IMG(0x1066908cu));
            edx = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
            edi = rd32(self + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0xacu);
    COW_AT(10241b06)
            wr32(sp0 - 0x24u, 1u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t13 = cow_thiscall(g, COW_IMG(0x102421e0u), self, 1, 1u);
            t14 = g->edx;
            wr32(COW_IMG(0x10487fb0u), edi);
            eax = t13;
            edx = t14;
        }
    COW_AT(10241b15)
        wr32(self + 0x28u, 0u);
    }
    COW_AT(10241b18)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, 0x3ccccccdu);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x102429a0u), self, 1, 0x3ccccccdu);
    t15 = g->edx;
    edx = t15;
    ebx = self + 0x34u;
    edi = 1u;
L_10241b2d: ;
    COW_AT(10241b2d)
    wr32(sp0 - 0x28u, edi);
    if (rd32(ebx + 0x34u) != 0u)
    {
        eax = rd32(ebx + 0x34u);
        ecx = rd32(self + 8u);
        loc_28 = edi;
    COW_AT(10241b41)
        wr32(sp0 - 0x2cu, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 0u, loc_28);
        t17 = g->edx;
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, edi);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        g->ebx = ebx;
        g->edi = edi;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x10u, edi, 1u, 1u);
        wr32(sp0 - 0x28u, ebx);
        t18 = (uint32_t)(int16_t)rd16(sp0 - 0xeu) + 2u;
        wr32(sp0 - 0x2cu, t18);
        t19 = (uint32_t)(int16_t)rd16(sp0 - 0x10u) + 4u;
        wr32(sp0 - 0x30u, t19);
        t20 = (uint32_t)(int16_t)rd16(sp0 - 0xcu) - (uint32_t)(int16_t)rd16(sp0 - 0x10u);
        wr32(sp0 - 0x34u, t20);
        g->edx = t19;
        cow_stdcall(g, COW_IMG(0x10241c10u), 4, t20, t19, t18, ebx);
        t21 = g->edx;
        if (rd32(ebx + 0x60u) == 0u)
        {
            edx = t21;
        }
        else
        {
    COW_AT(10241b80)
            if (rd32(rd32(rd32(sp0 - 0x14u)) + 0x3acu) == 0u)
            {
                edx = rd32(sp0 - 0x14u);
            }
            else
            {
                ecx = rd32(rd32(rd32(sp0 - 0x14u)) + 0x3acu);
    COW_AT(10241b90)
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x30u, 0x80808080u);
                t22 = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
                wr32(sp0 - 0x34u, t22);
                t23 = (uint32_t)(int16_t)rd16(sp0 - 0x10u) - 0x16u;
                wr32(sp0 - 0x38u, t23);
                g->edx = t22;
                g->esp = sp0 - 0x24u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t23, t22, 0x80808080u, 0u, 0u);
                t24 = g->edx;
                edx = t24;
            }
        }
    }
    else
    {
        eax = rd32(ebx + 0x34u);
        ecx = rd32(self + 8u);
        loc_28 = edi;
    COW_AT(10241b38)
        wr32(sp0 - 0x2cu, 5u);
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, loc_28);
        t16 = g->edx;
        edx = t16;
    }
    COW_AT(10241bab)
    if ((int32_t)edi < 16)
    {
        ebx = ebx + 0xb0u;
        edi = edi + 1u;
        goto L_10241b2d;
    }
    COW_AT(10241bbe)
    if ((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u) < 0)
    {
        ebx = rd32(sp0 - 0x24u);
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
        ebx = rd32(sp0 - 0x24u);
    COW_AT(10241bc9)
        if ((int32_t)eax <= 16)
        {
    COW_AT(10241bce)
            if (rd32(eax * 0xb0u + self + 0x68u) != 0u)
            {
                edx = eax * 0xb0u;
                eax = eax * 0xb0u + self;
    COW_AT(10241be2)
                wr32(sp0 - 0x24u, eax + 0x34u);
                wr32(sp0 - 0x28u, sp0 - 0x14u);
                g->esp = sp0 - 0x20u;
                cow_stdcall(g, COW_IMG(0x10241c60u), 2, sp0 - 0x14u, eax + 0x34u);
            }
        }
    }
    COW_AT(10241bf2)
    t25 = rd32(self + 0x24u);
    wr32(sp0 - 0x24u, t25);
    t26 = rd32(self + 0x20u);
    wr32(sp0 - 0x28u, t26);
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    g->eax = sp0 - 0x14u;
    g->edx = t26;
    g->esp = sp0 - 0x20u;
    t27 = cow_stdcall(g, COW_IMG(0x10241e20u), 3, sp0 - 0x14u, t26, t25);
    t28 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = t28;
    return t27;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10241a10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10241a93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241a9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241addu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241aedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241b06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241b15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241b18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241b2du:
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
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241b38u:
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
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241b41u:
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
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241b80u:
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
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241b90u:
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
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241babu:
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
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241bbeu:
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
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10241bc9u:
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
        (void)sp0;
        return 1;
    }
    case 0x10241bceu:
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
        (void)sp0;
        return 1;
    }
    case 0x10241be2u:
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
        (void)sp0;
        return 1;
    }
    case 0x10241bf2u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10241a10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10241a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
