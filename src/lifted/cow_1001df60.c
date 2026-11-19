/* f_0x1001df60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1001df60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001df7fu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1001df7f;
    case 0x1001df8cu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; goto E_1001df8c;
    case 0x1001dfe1u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1001dfe1;
    case 0x1001dfe8u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1001dfe8;
    case 0x1001dfebu: eax = g->eax; edx = g->edx; esi = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1001dfeb;
    default: break;
    }
#endif

    COW_AT(1001df60)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x1001e070u), self, 1, sp0 - 0x10u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x1cu, 0x48u);
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x48u);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t5;
        loc_14 = in_esi;
        loc_18 = in_edi;
    }
    else
    {
        eax = t4;
        edx = t5;
    COW_AT(1001df7f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t6 = cow_thiscall(g, COW_IMG(0x10039920u), eax, 0);
        t7 = g->edx;
        if (t6 == 0u)
        {
            eax = t6;
            edx = t7;
            loc_14 = in_esi;
            loc_18 = in_edi;
        }
        else
        {
            eax = t6;
            edx = t7;
            esi = t6;
    COW_AT(1001df8c)
            wr32(esi + 8u, self);
            wr32(sp0 - 0x1cu, sp0 - 0x10u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t8 = cow_thiscall(g, COW_IMG(0x100398e0u), esi, 1, sp0 - 0x10u);
            t9 = g->edx;
            wr16(esi + 0x24u, rd16(self + 0x34u));
            t10 = rd16(self + 0x36u);
            t11 = rd32(esi + 0x2cu);
            wr16(esi + 0x26u, (uint16_t)t10);
            wr8(esi + 0x28u, 0x20u);
            wr8(esi + 0x29u, 0x20u);
            wr32(esi + 0x20u, self + 0x50u);
            wr32(esi + 0x2cu, t11 | 8u);
            wr32(sp0 - 0x1cu, esi);
            g->eax = (((t8 & 0xffff0000u) | t10) & 0xffffff00u) | 0x20u;
            g->edx = t11 | 8u;
            t12 = cow_stdcall(g, COW_IMG(0x1003ab80u), 1, esi);
            t13 = g->edx;
            t14 = cow_thiscall(g, COW_IMG(0x10071f50u), self, 0);
            if (rd8(rd32(COW_IMG(0x1047b970u)) + 0x10u) != 1u)
            {
                eax = t14;
                edx = rd32(COW_IMG(0x1047b970u));
            }
            else
            {
                eax = t14;
                edx = rd32(COW_IMG(0x1047b970u));
    COW_AT(1001dfe1)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t15 = cow_thiscall(g, COW_IMG(0x10039a30u), esi, 0);
                t16 = g->edx;
                eax = t15;
                edx = t16;
            }
    COW_AT(1001dfe8)
            wr32(esi + 4u, rd32(esi + 4u) + 1u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
        }
    }
    COW_AT(1001dfeb)
    g->esi = loc_14;
    g->edi = loc_18;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001df60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001df7fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1001df8cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1001dfe1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1001dfe8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1001dfebu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001df60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1001df60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
