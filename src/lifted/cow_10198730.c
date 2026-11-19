/* f_0x10198730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10198730(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10198769u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10198769;
    case 0x10198775u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10198775;
    case 0x1019877cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1019877c;
    case 0x10198783u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10198783;
    case 0x101987d4u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101987d4;
    case 0x101987f1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101987f1;
    case 0x101987f3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_101987f3;
    default: break;
    }
#endif

    COW_AT(10198730)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    t1 = rd32(self + 0x18u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x1cu, rd32(t1));
    wr32(sp0 - 0x20u, 0xbu);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, rd32(t1));
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        ebx = in_ebx;
        ebp = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
    }
    else
    {
        edx = t3;
    COW_AT(10198769)
        wr32(sp0 - 0x1cu, in_ebx);
        wr32(sp0 - 0x20u, in_ebp);
        wr32(sp0 - 0x10u, 1u);
        ebx = in_ebx;
        ebp = 0u;
        esi = 0u;
        loc_c = 0u;
        loc_10 = 1u;
L_10198775: ;
    COW_AT(10198775)
        if ((int32_t)rd32(self + 0x28u) <= (int32_t)esi)
        {
            eax = rd32(self + 0x28u);
    COW_AT(1019877c)
            if ((int32_t)esi < (int32_t)(eax + 0xbu))
            {
    COW_AT(10198783)
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 1u);
                wr32(sp0 - 0x2cu, loc_10);
                wr32(sp0 - 0x30u, sp0 - 8u);
                g->ebx = ebx;
                g->edi = self;
                g->eax = sp0 - 8u;
                g->esp = sp0 - 0x20u;
                t4 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, loc_10, 1u, 1u);
                wr32(sp0 - 0x24u, 0x80808080u);
                t5 = rd32(ebp + rd32(self + 0x18u));
                wr32(sp0 - 0x28u, t5);
                wr32(sp0 - 0x2cu, 0xbu);
                g->ecx = rd32(self + 0x18u);
                g->edx = t5;
                t6 = rd32(self + 0x18u);
                t7 = rd16(sp0 - 6u);
                t8 = rd16(sp0 - 8u);
                g->esp = sp0 - 0x24u;
                t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t5);
                t10 = g->ecx;
                t11 = g->edx;
                wr32(sp0 - 0x28u, t9);
                wr32(sp0 - 0x2cu, (uint32_t)(int16_t)t7);
                t12 = (uint32_t)(int16_t)t8 + 0x1eu;
                wr32(sp0 - 0x30u, t12);
                g->edx = t11;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x101907e0u), 9, t12, (uint32_t)(int16_t)t7, t9, 0x80808080u, in_ebp, in_ebx, in_edi, in_esi, rd32(sp0 - 0x10u));
                t13 = g->edx;
                t14 = rd32(sp0 - 0x10u) + 1u;
                wr32(sp0 - 0x10u, t14);
                edx = t13;
                ebx = (uint32_t)(int16_t)t7;
                esi = rd32(sp0 - 0xcu);
                loc_10 = t14;
            }
        }
    COW_AT(101987d4)
        wr32(sp0 - 0xcu, esi + 1u);
        t15 = rd32(ebp + rd32(self + 0x18u) + 0x10u);
        wr32(sp0 - 0x24u, t15);
        wr32(sp0 - 0x28u, 0xbu);
        g->eax = rd32(self + 0x18u);
        g->edx = edx;
        t16 = rd32(self + 0x18u);
        g->esp = sp0 - 0x20u;
        t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t15);
        t18 = g->edx;
        if (t17 != 0u)
        {
            edx = t18;
            ebp = ebp + 0x10u;
            esi = esi + 1u;
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            goto L_10198775;
        }
        eax = t17;
        edx = t18;
    COW_AT(101987f1)
        ebx = rd32(sp0 - 0x1cu);
        ebp = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
    COW_AT(101987f3)
    g->ebx = ebx;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10198730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10198769u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->esi = 0u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10198775u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1019877cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10198783u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101987d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101987f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101987f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10198730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10198730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
