/* f_0x1000a2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1000a2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000a2c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000a2c4;
    case 0x1000a2d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000a2d1;
    case 0x1000a2deu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1000a2de;
    case 0x1000a2f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1000a2f9;
    case 0x1000a303u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; goto E_1000a303;
    case 0x1000a305u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000a305;
    case 0x1000a30du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000a30d;
    case 0x1000a31du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1000a31d;
    case 0x1000a320u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1000a320;
    case 0x1000a337u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1000a337;
    case 0x1000a356u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1000a356;
    default: break;
    }
#endif

    COW_AT(1000a2b0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    t1 = rd8(self + 0x158u);
    wr8(self + 0x158u, (uint8_t)(t1 - 1u));
    if ((uint8_t)(t1 - 1u) == 0u)
    {
    COW_AT(1000a320)
        t9 = rd32(self + 0x94u);
        wr32(sp0 - 0xcu, t9);
        t10 = rd32(self + 0x90u);
        wr32(sp0 - 0x10u, t10);
        t11 = rd32(self + 0xcu);
        wr32(sp0 - 0x14u, t11);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x7cu), rd32(rd32(self + 0xcu)), 3, t11, t10, t9);
        edi = in_edi;
        loc_4 = self;
        loc_8 = in_esi;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)(t1 - 1u);
    COW_AT(1000a2c4)
        if (rd32(self + (uint8_t)eax * 4u + 0x10u) == 0u)
        {
            eax = (uint8_t)eax;
    COW_AT(1000a305)
            if (rd32(eax * 4u + self + 0x30u) == 0u)
            {
                edi = in_edi;
                loc_4 = self;
                loc_8 = in_esi;
            }
            else
            {
                edx = rd32(eax * 4u + self + 0x30u);
    COW_AT(1000a30d)
                wr32(sp0 - 0xcu, in_edi);
                t7 = rd32(eax * 4u + self + 0x70u);
                wr32(sp0 - 0x10u, t7);
                wr32(sp0 - 0x14u, edx);
                t8 = rd32(self + 0xcu);
                wr32(sp0 - 0x18u, t8);
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x7cu), t8, 3, t8, edx, t7);
    COW_AT(1000a31d)
                edi = rd32(sp0 - 0xcu);
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
            }
        }
        else
        {
            ecx = rd32(self + (uint8_t)eax * 4u + 0x10u);
    COW_AT(1000a2d1)
            wr32(sp0 - 0xcu, sp0 - 4u);
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0x14u, ecx);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(rd32(ecx) + 0x3cu), ecx, 3, ecx, 0u, sp0 - 4u);
    COW_AT(1000a2de)
            t2 = rd32(self + rd8(self + 0x158u) * 4u + 0x70u);
            wr32(sp0 - 0xcu, t2);
            t3 = rd32(sp0 - 4u);
            wr32(sp0 - 0x10u, t3);
            t4 = rd32(self + 0xcu);
            wr32(sp0 - 0x14u, t4);
            g->edx = t3;
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x7cu), rd32(rd32(self + 0xcu)), 3, t4, t3, t2);
            t5 = g->edx;
            edx = t5;
    COW_AT(1000a2f9)
            t6 = rd32(sp0 - 4u);
            wr32(sp0 - 0xcu, t6);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(rd32(t6) + 8u), rd32(t6), 1, t6);
    COW_AT(1000a303)
            edi = in_edi;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
    }
    COW_AT(1000a337)
    t12 = self + rd8(self + 0x158u) * 0x18u + 0x98u;
    wr32(sp0 - 0xcu, t12);
    t13 = rd32(self + 0xcu);
    wr32(sp0 - 0x10u, t13);
    g->eax = t13;
    g->edx = rd32(rd32(self + 0xcu));
    t14 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, rd32(t14 + 0xa0u), t12, 2, t13, t12);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(1000a356)
    g->esi = rd32(sp0 - 8u);
    g->edi = edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000a2b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000a2c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1000a2d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1000a2deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1000a2f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1000a303u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1000a305u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1000a30du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1000a31du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1000a320u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1000a337u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1000a356u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000a2b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000a2b0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
