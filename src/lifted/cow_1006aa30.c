/* f_0x1006aa30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1006aa30(Guest* g)
{
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006aa48u: in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1006aa48;
    case 0x1006aa51u: edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1006aa51;
    case 0x1006aab8u: edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1006aab8;
    case 0x1006aabfu: edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1006aabf;
    case 0x1006ab07u: edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1006ab07;
    default: break;
    }
#endif

    COW_AT(1006aa30)
    if (rd32(self + 0x18u) == 0u)
    {
        edx = in_edx;
        ebp = 0u;
        loc_4 = 0u;
    }
    else
    {
    COW_AT(1006aa48)
        if ((int32_t)rd32(self + 0xcu) <= 0)
        {
            edx = in_edx;
            ebp = 0u;
            loc_4 = 0u;
            goto L_1006aab8;
        }
        edi = 0u;
        loc_4 = 0u;
L_1006aa51: ;
    COW_AT(1006aa51)
        t1 = rd32(self + 0x20u);
        t2 = rd32(arg1 + 0xebcu);
        t3 = rd32(t2);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(t3 + 0x130u), t3, 2, t2, t1);
        t4 = g->ecx;
        t5 = rd32(self + 0x20u);
        g->eax = t5;
        g->edx = rd32(arg1 + 0xebcu);
        t6 = rd32(arg1 + 0xebcu);
        t7 = rd32(rd32(arg1 + 0xebcu));
        t8 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, t5);
        t9 = g->edx;
        t10 = rd32(self + 4u);
        cow_thiscall(g, rd32(t7 + 0x14cu), t10, 4, t9, 0u, t10, t8);
        t11 = (uint32_t)(int16_t)rd16(edi * 2u + rd32(self + 0x18u)) - 2u;
        g->ebx = arg1;
        cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(arg1 + 0xdc8u), 3, 5u, loc_4, t11);
        t12 = loc_4 + (uint32_t)(int16_t)rd16(edi * 2u + rd32(self + 0x18u));
        if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0xcu))
        {
            edi = edi + 1u;
            loc_4 = t12;
            goto L_1006aa51;
        }
        edx = (uint32_t)(int16_t)rd16(edi * 2u + rd32(self + 0x18u));
        ebp = t12;
        loc_4 = t12;
    }
L_1006aab8: ;
    COW_AT(1006aab8)
    if (rd32(self + 8u) != 0u)
    {
    COW_AT(1006aabf)
        t13 = rd32(self + 0x20u);
        t14 = rd32(arg1 + 0xebcu);
        t15 = rd32(t14);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(t15 + 0x130u), t15, 2, t14, t13);
        t16 = g->ecx;
        t17 = rd32(self + 0x20u);
        g->eax = t17;
        g->edx = rd32(arg1 + 0xebcu);
        t18 = rd32(arg1 + 0xebcu);
        t19 = rd32(rd32(arg1 + 0xebcu));
        t20 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, t17);
        t21 = g->edx;
        t22 = rd32(self + 8u);
        t23 = cow_thiscall(g, rd32(t19 + 0x14cu), t22, 4, t21, 0u, t22, t20);
        t24 = rd32(self + 0x14u);
        g->ebx = arg1;
        g->edx = t24;
        cow_thiscall(g, COW_IMG(0x1000cb20u), rd32(arg1 + 0xdc8u), 3, 4u, 0u, t24);
        t25 = g->edx;
        edx = t25;
    }
    COW_AT(1006ab07)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return ebp + rd32(self + 0x14u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006aa30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006aa48u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1;
        g->ebp = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1006aa51u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006aab8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006aabfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006ab07u:
    {
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006aa30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006aa30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
