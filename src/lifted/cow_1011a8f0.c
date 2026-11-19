/* f_0x1011a8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1011a8f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_8;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011a913u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1011a913;
    case 0x1011a92au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011a92a;
    case 0x1011a932u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011a932;
    case 0x1011a935u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011a935;
    case 0x1011a93cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011a93c;
    case 0x1011a94cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011a94c;
    case 0x1011a964u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011a964;
    case 0x1011a97fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011a97f;
    case 0x1011a98eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011a98e;
    case 0x1011a993u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011a993;
    case 0x1011a9cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1011a9ca;
    case 0x1011a9d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1011a9d4;
    case 0x1011a9d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1011a9d7;
    case 0x1011a9dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1011a9da;
    case 0x1011a9e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1011a9e5;
    case 0x1011a9ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1011a9ec;
    case 0x1011aa05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011aa05;
    case 0x1011aa11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1011aa11;
    case 0x1011aa1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1011aa1b;
    default: break;
    }
#endif

    COW_AT(1011a8f0)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x14u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x18u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        loc_1c = in_ebx;
        loc_20 = in_ebp;
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_1011aa11;
    }
    edx = t2;
    ebx = 0u;
    ebp = in_ebp;
    edi = self;
    loc_1c = in_ebx;
    loc_20 = in_ebp;
    loc_24 = in_esi;
    loc_28 = in_edi;
    loc_14 = self;
    loc_18 = t1;
L_1011a913: ;
    COW_AT(1011a913)
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 0x18u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1011aa11;
    }
    edx = t4;
    esi = t3;
    COW_AT(1011a92a)
    if ((uint32_t)(int16_t)rd16(esi) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(esi);
        goto L_1011a964;
    }
    eax = (uint32_t)(int16_t)rd16(esi);
    COW_AT(1011a932)
    if (eax == 1u)
    {
    COW_AT(1011a94c)
        wr32(sp0 - 0x2cu, 0u);
        t7 = (uint32_t)(int16_t)rd16(ebx + 0x1cu);
        wr32(sp0 - 0x30u, t7);
        t8 = (uint32_t)(int16_t)rd16(ebx + 0x1au);
        wr32(sp0 - 0x34u, t8);
        g->esp = sp0 - 0x28u;
        cow_fastcall(g, COW_IMG(0x10119ad0u), esi, t7, 3, t8, t7, 0u);
        t9 = g->edx;
        edx = t9;
    }
    else
    {
        eax = eax - 1u;
    COW_AT(1011a935)
        if (eax == 1u)
        {
            eax = eax - 1u;
    COW_AT(1011a93c)
            t5 = rd32(edi + 8u);
            wr32(sp0 - 0x2cu, t5);
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x10119e30u), esi, 1, t5);
            t6 = g->edx;
            edx = t6;
        }
    }
L_1011aa05: ;
    COW_AT(1011aa05)
    if (rd32(sp0 - 0x18u) != 0u)
    {
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_1011a913;
    }
    eax = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
L_1011aa11: ;
    COW_AT(1011aa11)
    g->ebx = loc_1c;
    g->esi = loc_24;
    g->edi = loc_28;
    g->ebp = loc_20;
    return eax;
L_1011a964: ;
    COW_AT(1011a964)
    wr32(sp0 - 0x10u, esi);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t10 = cow_thiscall(g, COW_IMG(0x1015e030u), COW_IMG(0x10621838u), 1, arg1);
    t11 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1011aa11;
    }
    eax = t10;
    edx = t11;
    COW_AT(1011a97f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t12 = cow_thiscall(g, COW_IMG(0x1011b310u), eax, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1011aa11;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(1011a98e)
    if (rd32(esi + 0x30u) == eax)
    {
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_1011aa11;
    }
    COW_AT(1011a993)
    wr32(esi + 0x30u, eax);
    wr32(esi + 8u, 0u);
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x106218b4u)));
    wr32(sp0 - 8u, rd32(COW_IMG(0x106218b8u)));
    if (rd8(rd32(eax) + 0x17u) != 0u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(rd32(eax) + 2u);
        edx = (edx & 0xffff0000u) | rd16(rd32(eax) + 0xcu);
        ebp = (ebp & 0xffff0000u) | rd16(rd32(eax) + 0xau);
        esi = (esi & 0xffff0000u) | rd16(rd32(eax) + 4u);
        eax = rd32(eax);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(rd32(eax) + 2u);
        edx = (edx & 0xffff0000u) | rd16(rd32(eax) + 0xcu);
        ebp = (ebp & 0xffff0000u) | rd16(rd32(eax) + 0xau);
        esi = (esi & 0xffff0000u) | rd16(rd32(eax) + 4u);
        eax = rd32(eax);
        edi = rd32(COW_IMG(0x106218b8u));
        loc_8 = rd32(COW_IMG(0x106218b8u));
    COW_AT(1011a9ca)
        t15 = rd8(eax + 0x13u);
        if (t15 == 1u)
        {
            eax = t15 - 1u;
            goto L_1011a9e5;
        }
        eax = t15 - 1u;
    COW_AT(1011a9d4)
        if (eax == 1u) goto L_1011aa1b;
        eax = eax - 1u;
    COW_AT(1011a9d7)
        if (eax != 1u)
        {
            eax = eax - 1u;
            goto L_1011a9ec;
        }
    COW_AT(1011a9da)
        eax = rd32(sp0 - 6u);
        esi = esi + rd32(sp0 - 6u) - 0x1c0u;
L_1011a9e5: ;
    COW_AT(1011a9e5)
        ecx = ecx + edi - 0x200u;
    }
L_1011a9ec: ;
    COW_AT(1011a9ec)
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, edx);
    wr32(sp0 - 0x3cu, ebp);
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, ecx);
    t16 = rd32(sp0 - 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x1011a5a0u), t16, 7, ecx, esi, ebp, edx, 1u, 0u, 0u);
    t17 = g->edx;
    edx = t17;
    ebx = rd32(sp0 - 0x10u);
    edi = t16;
    goto L_1011aa05;
L_1011aa1b: ;
    COW_AT(1011aa1b)
    eax = rd32(sp0 - 6u);
    esi = esi + rd32(sp0 - 6u) - 0x1c0u;
    goto L_1011a9ec;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011a8f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011a913u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011a92au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1011a932u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1011a935u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1011a93cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1011a94cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1011a964u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1011a97fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011a98eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011a993u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011a9cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011a9d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011a9d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011a9dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011a9e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011a9ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011aa05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011aa11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1011aa1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a8f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011a8f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
