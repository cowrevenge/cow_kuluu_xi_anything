/* f_0x101e2b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101e2b60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e2b70u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e2b70;
    case 0x101e2bbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e2bbe;
    case 0x101e2bdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e2bdf;
    case 0x101e2c05u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e2c05;
    case 0x101e2c0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e2c0b;
    default: break;
    }
#endif

    COW_AT(101e2b60)
    if (arg1 != 0u)
    {
    COW_AT(101e2b70)
        wr32(self + 0x54u, arg3);
        wr32(self + 0x58u, arg1);
        wr32(self + 0x50u, arg2);
        g->esp = sp0 - 0xcu;
        t1 = cow_call_regs(g, COW_IMG(0x101f6700u), arg2, self, in_edx, 0, 1, 0xbu);
        g->edx = rd32(arg1);
        t2 = rd32(arg1);
        t3 = cow_thiscall(g, rd32(t2 + 0xcu), arg1, 0);
        t4 = g->edx;
        g->eax = rd32(arg1);
        t5 = rd32(arg1);
        t6 = cow_thiscall(g, rd32(t5 + 0x10u), arg1, 0);
        wr16(self + 0x16u, (uint16_t)t6);
        wr32(self + 0x30u, t3);
        wr16(self + 0x26u, 0x12u);
        g->edx = rd32(arg1);
        t7 = rd32(arg1);
        t8 = cow_thiscall(g, rd32(t7 + 4u), arg1, 0);
        t9 = g->edx;
        wr32(self + 0x40u, t8);
        g->eax = rd32(arg1);
        g->edx = t9;
        t10 = rd32(arg1);
        t11 = cow_thiscall(g, rd32(t10 + 8u), arg1, 0);
        t12 = g->ecx;
        t13 = g->edx;
        if ((uint8_t)t11 == 0u)
        {
            eax = t11;
            edx = t13;
        }
        else
        {
            eax = t11;
            ecx = t12;
            edx = t13;
    COW_AT(101e2bbe)
            g->eax = eax;
            g->esp = sp0 - 8u;
            t14 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
            t15 = rd32(rd32(t14) + 0x6b0u);
            wr8(self + 0x49u, 1u);
            wr32(self + 0x34u, t15);
            wr8(self + 0x2eu, 0u);
            wr8(self + 0x2fu, 6u);
            eax = t14;
            edx = t15;
        }
    COW_AT(101e2bdf)
        wr8(self + 0x2cu, 0u);
        wr8(self + 0x2du, 3u);
        wr8(self + 0x47u, 1u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f2ecu), 1u, 0u);
        if (rd32(self + 8u) != 0u)
        {
            esi = rd32(self + 8u);
    COW_AT(101e2c05)
            wr16(esi + 0x38u, 0x81u);
        }
    }
    COW_AT(101e2c0b)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e2b60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e2b70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101e2bbeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e2bdfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e2c05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e2c0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2b60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101e2b60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
