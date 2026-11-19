/* f_0x1015f6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015f6a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015f6b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015f6b5;
    case 0x1015f6bau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1015f6ba;
    case 0x1015f6ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015f6cc;
    case 0x1015f6d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015f6d6;
    case 0x1015f6e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015f6e1;
    case 0x1015f6e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015f6e8;
    case 0x1015f6eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1015f6ea;
    case 0x1015f6fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1015f6fc;
    case 0x1015f711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015f711;
    case 0x1015f716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015f716;
    case 0x1015f721u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015f721;
    case 0x1015f727u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015f727;
    case 0x1015f72eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; goto E_1015f72e;
    case 0x1015f736u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1015f736;
    case 0x1015f73du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1015f73d;
    default: break;
    }
#endif

    COW_AT(1015f6a0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x101604b0u), g->eax, g->ecx, in_edx, 1, 0);
    t2 = g->edx;
    if (rd32(COW_IMG(0x10621944u)) == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x10621944u));
        edx = t2;
    COW_AT(1015f6b5)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x101630e0u), ecx, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    COW_AT(1015f6ba)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10124bc0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t5 = g->edx;
    if (rd32(self + 0x54u) == 0u)
    {
        eax = rd32(self + 0x54u);
        edx = t5;
    }
    else
    {
        eax = rd32(self + 0x54u);
        edx = t5;
    COW_AT(1015f6cc)
        if (rd32(eax + 0x88u) != 0u)
        {
            esi = rd32(eax + 0x88u);
    COW_AT(1015f6d6)
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t6 = cow_fastcall(g, COW_IMG(0x1015dce0u), self, edx, 0);
            t7 = g->edx;
            if ((uint8_t)t6 != 0u)
            {
                eax = t6;
                edx = t7;
            }
            else
            {
                eax = t6;
                edx = t7;
    COW_AT(1015f6e1)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t8 = cow_thiscall(g, COW_IMG(0x10234930u), esi, 0);
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
        }
    }
    COW_AT(1015f6e8)
    ebx = in_ebx & 0xffffff00u;
L_1015f6ea: ;
    COW_AT(1015f6ea)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621838u), 0);
    t11 = g->edx;
    wr32(sp0 - 4u, t10);
    if (t10 == 0u)
    {
        eax = t10;
        edx = t11;
        loc_4 = t10;
        goto L_1015f736;
    }
    edx = t11;
    loc_4 = t10;
L_1015f6fc: ;
    COW_AT(1015f6fc)
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->esp = sp0 - 0x10u;
    t12 = cow_call_regs(g, COW_IMG(0x1015ee00u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t13 = g->edx;
    if (t12 == 0u)
    {
        edx = t13;
    }
    else
    {
        eax = t12;
        edx = t13;
        esi = t12;
    COW_AT(1015f711)
        if (rd8(esi + 0x60u) == (uint8_t)ebx)
        {
    COW_AT(1015f716)
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t14 = cow_call_regs(g, COW_IMG(0x10160700u), eax, self, g->edx, 1, 0);
            t15 = g->edx;
            if ((uint8_t)t14 == 0u)
            {
                eax = t14;
                edx = t15;
                goto L_1015f727;
            }
            eax = t14;
            edx = t15;
    COW_AT(1015f721)
            if ((rd8(esi + 0x34u) & 0x40u) == 0u) goto L_1015f72e;
L_1015f727: ;
    COW_AT(1015f727)
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101177d0u), esi, 0);
            t16 = g->edx;
            edx = t16;
        }
    }
L_1015f72e: ;
    COW_AT(1015f72e)
    if (rd32(sp0 - 4u) != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_1015f6fc;
    }
    eax = rd32(sp0 - 4u);
    loc_4 = rd32(sp0 - 4u);
L_1015f736: ;
    COW_AT(1015f736)
    if ((int8_t)((uint8_t)ebx + 1u) < 9)
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
        goto L_1015f6ea;
    }
    COW_AT(1015f73d)
    g->esp = sp0 - 0x10u;
    t17 = cow_call_regs(g, COW_IMG(0x10124eb0u), eax, rd32(COW_IMG(0x104e1d4cu)), edx, 1, 0);
    t18 = g->edx;
    cow_call_regs(g, COW_IMG(0x10160650u), g->eax, g->ecx, t18, 1, 0);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015f6a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015f6b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1015f6bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1015f6ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015f6d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015f6e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015f6e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015f6eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015f6fcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015f711u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015f716u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015f721u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015f727u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015f72eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015f736u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015f73du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015f6a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1015f6a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
