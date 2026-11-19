/* f_0x1015f790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1015f790(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015f7a6u: in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f7a6;
    case 0x1015f7afu: in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f7af;
    case 0x1015f7bbu: eax = g->eax; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f7bb;
    case 0x1015f7c6u: eax = g->eax; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f7c6;
    case 0x1015f7cfu: eax = g->eax; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f7cf;
    case 0x1015f7d8u: eax = g->eax; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f7d8;
    case 0x1015f7ddu: eax = g->eax; in_edx = g->edx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f7dd;
    case 0x1015f7eeu: eax = g->eax; edx = g->edx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f7ee;
    case 0x1015f7f7u: eax = g->eax; edx = g->edx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f7f7;
    case 0x1015f85eu: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f85e;
    case 0x1015f865u: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f865;
    case 0x1015f869u: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f869;
    case 0x1015f87eu: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f87e;
    case 0x1015f893u: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f893;
    case 0x1015f89fu: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f89f;
    case 0x1015f8a6u: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f8a6;
    case 0x1015f8a8u: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f8a8;
    case 0x1015f8adu: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f8ad;
    case 0x1015f8b2u: eax = g->eax; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1015f8b2;
    case 0x1015f8c6u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1015f8c6;
    case 0x1015f8d8u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1015f8d8;
    case 0x1015f8e3u: eax = g->eax; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1015f8e3;
    default: break;
    }
#endif

    COW_AT(1015f790)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(arg1) == 0u)
    {
        eax = arg1;
        goto L_1015f8e3;
    }
    edi = rd32(arg1);
    COW_AT(1015f7a6)
    if (rd32(edi + 8u) == 0u)
    {
        eax = arg1;
        goto L_1015f8e3;
    }
    COW_AT(1015f7af)
    if (arg2 == 0u)
    {
        eax = arg1;
        goto L_1015f8e3;
    }
    COW_AT(1015f7bb)
    if (rd32(arg2 + 0xcu) == 0u)
    {
        eax = rd32(arg2 + 0xcu);
        goto L_1015f8e3;
    }
    eax = rd32(arg2 + 0xcu);
    COW_AT(1015f7c6)
    if (rd32(eax + 8u) == 0u) goto L_1015f8e3;
    COW_AT(1015f7cf)
    if (rd32(COW_IMG(0x105781ccu)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781ccu));
        edx = in_edx;
        goto L_1015f7ee;
    }
    eax = rd32(COW_IMG(0x105781ccu));
    COW_AT(1015f7d8)
    if (rd8(eax + 0x48u) == 0u)
    {
        edx = in_edx;
        goto L_1015f7ee;
    }
    COW_AT(1015f7dd)
    wr32(sp0 - 0x28u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_1015f8e3;
    }
    eax = t1;
    edx = t2;
L_1015f7ee: ;
    COW_AT(1015f7ee)
    if (rd32(edi + 8u) == arg2) goto L_1015f8e3;
    COW_AT(1015f7f7)
    wr32(sp0 - 0x28u, in_ebp);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x28u;
    t3 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(edi + 8u), g->edx, 0, 1, sp0 - 0x10u);
    wr32(sp0 - 0x2cu, sp0 - 0x18u);
    g->edx = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10118f70u), t3, arg2, g->edx, 0, 1, sp0 - 0x18u);
    t4 = g->edx;
    t5 = rd32(arg2 + 0xc0u);
    wr32(sp0 - 4u, t5);
    t6 = rd32(arg2 + 0xbcu);
    wr32(sp0 - 8u, t6);
    g->eax = t6;
    t7 = rd16(sp0 - 0x18u);
    t8 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(edi + 8u), 0);
    if (t8 == 0u)
    {
        ebp = (uint32_t)(int16_t)t7;
        goto L_1015f87e;
    }
    eax = t8;
    ebp = (uint32_t)(int16_t)t7;
    COW_AT(1015f85e)
    if (rd8(eax + 0x44u) == 2u) goto L_1015f869;
    eax = (eax & 0xffffff00u) | rd8(eax + 0x44u);
    COW_AT(1015f865)
    if ((uint8_t)eax != 1u) goto L_1015f87e;
L_1015f869: ;
    COW_AT(1015f869)
    eax = (uint32_t)(int16_t)rd16(sp0 - 0xau);
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x12u);
    edi = (uint32_t)(int16_t)rd16(sp0 - 0xau) + (uint32_t)(int16_t)rd16(sp0 - 0x16u) - (uint32_t)(int16_t)rd16(sp0 - 0x12u);
L_1015f893: ;
    COW_AT(1015f893)
    if (rd16(sp0 - 6u) == rd16(sp0 - 2u))
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 - 6u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 - 6u);
    COW_AT(1015f89f)
        if ((int32_t)edi >= (int16_t)eax)
        {
            eax = (uint32_t)(int16_t)eax;
        }
        else
        {
            eax = (uint32_t)(int16_t)eax;
    COW_AT(1015f8a6)
            edi = eax;
        }
    }
    COW_AT(1015f8a8)
    if ((int32_t)edi < 16)
    {
    COW_AT(1015f8ad)
        edi = 0x10u;
    }
    COW_AT(1015f8b2)
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 - 0x30u, ebp);
    g->esp = sp0 - 0x28u;
    t9 = cow_call_regs(g, COW_IMG(0x10119110u), eax, arg2, g->edx, 0, 2, ebp, edi);
    if (rd32(arg2 + 0x88u) == 0u)
    {
        eax = t9;
        ebp = rd32(sp0 - 0x28u);
    }
    else
    {
        ebp = rd32(sp0 - 0x28u);
        esi = rd32(arg2 + 0x88u);
    COW_AT(1015f8c6)
        t10 = (uint32_t)(int16_t)(rd32(sp0 - 0x14u) - 8u);
        wr32(esi, t10);
        wr32(esi + 4u, (uint32_t)(int16_t)edi);
        eax = (uint32_t)(int16_t)edi;
    }
    COW_AT(1015f8d8)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = ebp;
    return (eax & 0xffffff00u) | 1u;
L_1015f87e: ;
    COW_AT(1015f87e)
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x16u);
    edx = (uint32_t)(int16_t)rd16(sp0 - 0x12u);
    edi = (uint32_t)(int16_t)rd16(sp0 - 0xeu) + (uint32_t)(int16_t)rd16(sp0 - 0x16u) - (uint32_t)(int16_t)rd16(sp0 - 0x12u) - 2u;
    goto L_1015f893;
L_1015f8e3: ;
    COW_AT(1015f8e3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015f790(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015f7a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->eax = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015f7afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->eax = arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015f7bbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1015f7c6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1015f7cfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1015f7d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1015f7ddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1015f7eeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1015f7f7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1015f85eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f865u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f869u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f87eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f893u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f89fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f8a6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f8a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f8adu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f8b2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->esi = arg2;
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1015f8c6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015f8d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1015f8e3u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015f790(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1015f790(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
