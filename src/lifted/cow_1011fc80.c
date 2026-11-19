/* f_0x1011fc80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_1011fc80(Guest* g)
{
    double d12;
    double d17;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011fcb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1011fcb1;
    case 0x1011fcc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1011fcc2;
    case 0x1011fcecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1011fcec;
    case 0x1011fcf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1011fcf4;
    case 0x1011fd64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 8u) - 0x4u; g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1011fd64;
    case 0x1011fd6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 8u) - 0x4u; g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1011fd6c;
    case 0x1011fd76u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 8u) - 0x4u; g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1011fd76;
    case 0x1011fd7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 8u) - 0x4u; g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1011fd7a;
    case 0x1011fd8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011fd8b;
    case 0x1011fd8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_1011fd8f;
    case 0x1011fd93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_1011fd93;
    case 0x1011fda1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_1011fda1;
    case 0x1011fdb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1011fdb3;
    case 0x1011fdc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1011fdc8;
    case 0x1011fdd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); goto E_1011fdd3;
    default: break;
    }
#endif

    COW_AT(1011fc80)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd32(self + 0x14u);
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 8u, self + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t3 = g->ecx;
    t4 = g->edx;
    d5 = (double)rdf32(sp0 + 0xcu);
    wr32(sp0 - 0xcu, t2);
    if (d5 != (double)rdf32(COW_IMG(0x1032961cu)))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        ecx = t3;
        edx = t4;
        ebp = t1;
        goto L_1011fcec;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d5, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    ecx = t3;
    edx = t4;
    ebp = t1;
    COW_AT(1011fcb1)
    d6 = (double)rdf32(sp0 + 0x10u);
    if (d6 != (double)rdf32(COW_IMG(0x1032961cu)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        goto L_1011fcec;
    }
    COW_AT(1011fcc2)
    wr32(sp0 - 0x20u, arg8);
    wr32(sp0 - 0x24u, arg7);
    wr32(sp0 - 0x28u, arg5);
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, arg1);
    g->eax = arg2;
    g->edx = arg5;
    g->esp = sp0 - 0x1cu;
    t7 = cow_thiscall(g, COW_IMG(0x1011fb60u), self, 5, arg1, arg2, arg5, arg7, arg8);
    t8 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t8;
    return t7;
L_1011fcec: ;
    COW_AT(1011fcec)
    if (rd8(sp0 + 0x18u) == 0u)
    {
    COW_AT(1011fd64)
        esi = arg2;
        edi = arg1;
    }
    else
    {
    COW_AT(1011fcf4)
        t9 = ((uint32_t)(int16_t)rd16(self + 0x22u) - (uint32_t)(int16_t)rd16(self + 0x20u) ^ (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(self + 0x22u) - (uint32_t)(int16_t)rd16(self + 0x20u)) >> 0x1fu)) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(self + 0x22u) - (uint32_t)(int16_t)rd16(self + 0x20u)) >> 0x1fu);
        t10 = rd16(self + 0x22u);
        t11 = rd16(self + 0x20u);
        wr32(sp0 + 0x18u, t9);
        d12 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * fr(g, (double)rdf32(sp0 + 0xcu) - (double)rdf32(COW_IMG(0x1032961cu)))) * (double)rdf32(COW_IMG(0x10329a08u)));
        fpush(g, d12);
        g->esp = sp0 - 0x1cu;
        t13 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
        t14 = ((uint32_t)(int16_t)rd16(self + 0x26u) - (uint32_t)(int16_t)rd16(self + 0x24u) ^ (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(self + 0x26u) - (uint32_t)(int16_t)rd16(self + 0x24u)) >> 0x1fu)) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(self + 0x26u) - (uint32_t)(int16_t)rd16(self + 0x24u)) >> 0x1fu);
        t15 = rd16(self + 0x24u);
        t16 = rd16(self + 0x26u);
        wr32(sp0 + 0x18u, t14);
        d17 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * fr(g, (double)rdf32(sp0 + 0x10u) - (double)rdf32(COW_IMG(0x1032961cu)))) * (double)rdf32(COW_IMG(0x10329a08u)));
        fpush(g, d17);
        t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), t14, g->ecx, g->edx, 1, 0);
        edx = (uint32_t)(int16_t)t18;
        esi = arg2 - (uint32_t)(int16_t)t18;
        edi = arg1 - (uint32_t)(int16_t)t13;
    }
    COW_AT(1011fd6c)
    if ((int32_t)arg8 <= 0)
    {
        eax = arg8;
        ebx = 0u;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        loc_8 = self + 4u;
    }
    else
    {
    COW_AT(1011fd76)
        ebp = arg8;
L_1011fd7a: ;
    COW_AT(1011fd7a)
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->esp = sp0 - 0x1cu;
        t19 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0xcu);
        t20 = g->edx;
        if (ebp != 1u)
        {
            edx = t20;
            ebp = ebp - 1u;
            goto L_1011fd7a;
        }
        eax = t19;
        edx = t20;
    COW_AT(1011fd8b)
        ebx = arg8;
        ebp = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(1011fd8f)
    if ((int32_t)ebx < (int32_t)ebp)
    {
    COW_AT(1011fd93)
        wr32(sp0 + 0x18u, ebp - ebx);
L_1011fda1: ;
    COW_AT(1011fda1)
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t21 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0xcu);
        t22 = g->edx;
        if (t21 == 0u)
        {
            edx = t22;
        }
        else
        {
            eax = t21;
    COW_AT(1011fdb3)
            wr32(sp0 - 0x20u, arg7);
            wr32(sp0 - 0x24u, arg5);
            wr32(sp0 - 0x28u, arg4);
            wr32(sp0 - 0x2cu, arg3);
            wr32(sp0 - 0x30u, esi);
            wr32(sp0 - 0x34u, edi);
            g->ebx = arg7;
            g->esp = sp0 - 0x1cu;
            cow_fastcall(g, COW_IMG(0x1011e980u), eax, arg4, 6, edi, esi, arg3, arg4, arg5, arg7);
            t23 = g->edx;
            edx = t23;
        }
    COW_AT(1011fdc8)
        t24 = rd32(sp0 + 0x18u) - 1u;
        t25 = rd32(sp0 + 0x18u);
        wr32(sp0 + 0x18u, t24);
        if (t25 != 1u)
        {
            eax = t24;
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_8 = rd32(sp0 - 8u);
            goto L_1011fda1;
        }
        eax = t24;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1011fdd3)
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011fc80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011fcb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 8u, self + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011fcc2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1011fcecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 8u, self + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011fcf4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 8u, self + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011fd64u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 8u) - 0x4u;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1011fd6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 8u) - 0x4u;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1011fd76u:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 8u) - 0x4u;
        g->esp = sp0 - 0x1cu;
        g->eax = arg8;
        (void)sp0;
        return 1;
    }
    case 0x1011fd7au:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 8u) - 0x4u;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg8;
        (void)sp0;
        return 1;
    }
    case 0x1011fd8bu:
    {
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg8;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1011fd8fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1011fd93u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1011fda1u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg7;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1011fdb3u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
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
        g->esp = sp0 - 0x1cu;
        g->ebx = arg7;
        g->ebp = arg5;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1011fdc8u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
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
        g->esp = sp0 - 0x1cu;
        g->ebx = arg7;
        g->ebp = arg5;
        (void)sp0;
        return 1;
    }
    case 0x1011fdd3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011fc80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011fc80(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
