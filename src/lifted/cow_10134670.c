/* f_0x10134670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10134670(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013468bu: in_eax = g->eax; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1013468b;
    case 0x101346c6u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101346c6;
    case 0x101346dbu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_101346db;
    case 0x10134705u: in_eax = g->eax; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10134705;
    case 0x10134718u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10134718;
    case 0x10134727u: eax = g->eax; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10134727;
    default: break;
    }
#endif

    COW_AT(10134670)
    wr8(self + 0x14fu, (uint8_t)arg1);
    wr32(self + 0x150u, arg2);
    if ((uint8_t)arg1 == 0xffu) goto L_10134705;
    COW_AT(1013468b)
    g->eax = in_eax;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10666e34u));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x1021c7e0u), t1, 4, 0xffffu, 2u, 0x12u, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(COW_IMG(0x105781b4u));
    wr16(t5 + 8u, (uint8_t)arg1);
    wr32(t5 + 0xcu, arg2);
    g->eax = (t2 & 0xffff0000u) | (uint8_t)arg1;
    g->edx = t4;
    t6 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, arg2, arg1);
    t7 = g->edx;
    wr8(t5 + 6u, 0u);
    if (t6 == 0u)
    {
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
        esi = t5;
    COW_AT(101346c6)
        t8 = (edx & 0xffff0000u) | rd16(eax);
        g->eax = eax;
        g->edx = t8;
        g->esp = sp0 - 0xcu;
        t9 = cow_cdecl(g, COW_IMG(0x100fe990u), 3, t8, 0xeu, eax + 0x10u);
        t10 = g->edx;
        wr8(esi + 6u, (uint8_t)t9);
        edx = t10;
    }
    COW_AT(101346db)
    g->ebx = arg1;
    g->eax = rd32(COW_IMG(0x105781b4u));
    g->edx = edx;
    t11 = rd32(COW_IMG(0x105781b4u));
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t11);
    t13 = g->edx;
    g->ebx = arg1;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f898u), 1u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10134705: ;
    COW_AT(10134705)
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_10134727;
    }
    COW_AT(10134718)
    wr32(COW_IMG(0x105781c4u), 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10134727: ;
    COW_AT(10134727)
    g->ebx = arg1;
    g->esp = sp0 - 8u;
    t16 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, rd32(COW_IMG(0x10578204u)), edx, 0, 4, 0u, 1u, 0u, 0u);
    t17 = g->edx;
    g->ebx = arg1;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f898u), 1u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10134670(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013468bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101346c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101346dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10134705u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10134718u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10134727u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10134670(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10134670(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
