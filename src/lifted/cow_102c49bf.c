/* f_0x102c49bf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c49bf(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    unsigned of;
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
    uint32_t t3;
    uint32_t t4;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c49d1u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_102c49d1;
    case 0x102c49dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; goto E_102c49dc;
    case 0x102c49deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_4 = rd32(sp0 - 4u); goto E_102c49de;
    case 0x102c49e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_4 = rd32(sp0 - 4u); goto E_102c49e4;
    case 0x102c49efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; goto E_102c49ef;
    case 0x102c49f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_4 = rd32(sp0 - 4u); goto E_102c49f1;
    case 0x102c4a01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; goto E_102c4a01;
    case 0x102c4a09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; goto E_102c4a09;
    case 0x102c4a12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; goto E_102c4a12;
    case 0x102c4a20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; goto E_102c4a20;
    case 0x102c4a68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102c4a68;
    case 0x102c4a6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102c4a6c;
    case 0x102c4a6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102c4a6f;
    case 0x102c4a72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102c4a72;
    case 0x102c4a76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102c4a76;
    case 0x102c4a7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102c4a7f;
    case 0x102c4a88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102c4a88;
    case 0x102c4a91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102c4a91;
    case 0x102c4a98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_8 = rd32(sp0 - 8u); goto E_102c4a98;
    case 0x102c4ad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; goto E_102c4ad3;
    default: break;
    }
#endif

    COW_AT(102c49bf)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (!(rd8(rd32(sp0 + 4u) + 0x68u) & 1u))
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        esi = rd32(sp0 + 4u);
        loc_4 = in_ebp;
        loc_1c = in_ebx;
        loc_20 = in_esi;
        loc_24 = in_edi;
    }
    else
    {
        esi = rd32(sp0 + 4u);
    COW_AT(102c49d1)
        wr32(sp0 - 0x28u, COW_IMG(0x103c8810u));
        wr32(sp0 - 0x2cu, esi);
        g->eax = in_eax;
        g->esp = sp0 - 0x1cu;
        t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, esi, COW_IMG(0x103c8810u), in_edi, in_esi);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    COW_AT(102c49dc)
        ecx = COW_IMG(0x103c8810u);
        loc_4 = rd32(sp0 - 4u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    COW_AT(102c49de)
    if (rd32(sp0 + 0xcu) != 0xdu)
    {
    COW_AT(102c49e4)
        wr32(sp0 - 0x28u, COW_IMG(0x103c87fcu));
        wr32(sp0 - 0x2cu, esi);
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, esi, COW_IMG(0x103c87fcu), loc_24, loc_20);
        t3 = g->edx;
        edx = t3;
    COW_AT(102c49ef)
        ecx = COW_IMG(0x103c87fcu);
        loc_4 = rd32(sp0 - 4u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    COW_AT(102c49f1)
    wr32(esi + 0x68u, rd32(esi + 0x68u) | 1u);
    wr32(sp0 - 0x28u, 0xdu);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    wr32(sp0 - 0x30u, esi);
    g->eax = sp0 - 0x18u;
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    t4 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, esi, sp0 - 0x18u, 0xdu, loc_24, loc_20);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(102c4a01)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, edx, 1, 5, esi, 0u, rd32(sp0 - 0x30u), sp0 - 0x18u, 0xdu);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
    COW_AT(102c4a09)
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t9 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 - 0x18u);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(102c4a12)
    wr32(sp0 - 0x40u, sp0 - 0x14u);
    wr32(sp0 + 0xcu, eax);
    g->eax = sp0 - 0x14u;
    g->esp = sp0 - 0x3cu;
    t12 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 - 0x14u);
    edi = eax;
    eax = t12;
    COW_AT(102c4a20)
    t13 = rd8(sp0 - 0xfu);
    t14 = rd8(sp0 - 0x10u);
    t15 = rd8(sp0 - 0xdu);
    wr32(sp0 + 4u, eax);
    wr32(esi + 0xc8u, edi);
    t16 = rd8(sp0 - 0xcu);
    wr32(sp0 - 8u, t16);
    t17 = rd32(sp0 + 4u);
    wr8(esi + 0x123u, (uint8_t)t16);
    wr32(esi + 0xccu, t17);
    wr8(esi + 0x127u, (uint8_t)t14);
    wr8(esi + 0x126u, (uint8_t)t13);
    wr8(esi + 0x238u, (uint8_t)t15);
    if ((uint8_t)t13 == 0u)
    {
        eax = (uint8_t)t13;
        ecx = t13;
        edx = t14;
        ebx = t15;
        of = 0u;
        loc_8 = t16;
        goto L_102c4a91;
    }
    eax = (uint8_t)t13;
    ecx = t13;
    edx = t14;
    ebx = t15;
    loc_8 = t16;
    COW_AT(102c4a68)
    if (eax == 2u)
    {
        of = eax - 1u == 0x80000000u;
        eax = eax - 2u;
        goto L_102c4a88;
    }
    eax = eax - 2u;
    COW_AT(102c4a6c)
    if (eax == 1u)
    {
        of = eax == 0x80000000u;
        eax = eax - 1u;
        goto L_102c4a91;
    }
    eax = eax - 1u;
    COW_AT(102c4a6f)
    if (eax == 1u)
    {
        of = eax == 0x80000000u;
        eax = eax - 1u;
    COW_AT(102c4a7f)
        wr8(esi + 0x12au, 2u);
    }
    else
    {
        eax = eax - 1u;
    COW_AT(102c4a72)
        if (eax != 2u)
        {
            of = eax - 1u == 0x80000000u;
            eax = eax - 2u;
        }
        else
        {
            of = eax - 1u == 0x80000000u;
            eax = eax - 2u;
    COW_AT(102c4a76)
            wr8(esi + 0x12au, 4u);
        }
    }
L_102c4a98: ;
    COW_AT(102c4a98)
    wr32(sp0 - 0x28u, ebx);
    t18 = rd8(esi + 0x12au);
    eax = (eax & 0xffffff00u) | t18;
    cf = 0u;
    { /* imul dl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)edx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(esi + 0x129u, (uint8_t)eax);
    t19 = ((uint8_t)eax * rd32(sp0 + 0xcu) + 7u) >> 3u;
    wr32(esi + 0xd8u, t19);
    t20 = rd8(sp0 - 0xeu);
    wr32(sp0 - 0x2cu, t20);
    wr32(sp0 - 0x30u, loc_8);
    wr32(sp0 - 0x34u, ecx);
    wr32(sp0 - 0x38u, edx);
    t21 = rd32(sp0 + 4u);
    wr32(sp0 - 0x3cu, t21);
    t22 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x40u, t22);
    wr32(sp0 - 0x44u, arg2);
    wr32(sp0 - 0x48u, esi);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102c80a9u), g->eax, ecx, edx, 1, 9, esi, arg2, t22, t21, edx, ecx, loc_8, t20, ebx);
    COW_AT(102c4ad3)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c4a88: ;
    COW_AT(102c4a88)
    wr8(esi + 0x12au, 3u);
    goto L_102c4a98;
L_102c4a91: ;
    COW_AT(102c4a91)
    wr8(esi + 0x12au, 1u);
    goto L_102c4a98;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c49bf(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c49d1u:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c49dcu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x28u, COW_IMG(0x103c8810u));
        (void)sp0;
        return 1;
    }
    case 0x102c49deu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c49e4u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c49efu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x28u, COW_IMG(0x103c87fcu));
        (void)sp0;
        return 1;
    }
    case 0x102c49f1u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4a01u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        wr32(sp0 - 0x28u, 0xdu);
        (void)sp0;
        return 1;
    }
    case 0x102c4a09u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a12u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a20u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x40u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a68u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a72u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a76u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a7fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a88u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a91u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4a98u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102c4ad3u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x48u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c49bf(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c49bf(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
