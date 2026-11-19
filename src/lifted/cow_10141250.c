/* f_0x10141250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10141250(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014125fu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014125f;
    case 0x10141277u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10141277;
    case 0x10141280u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10141280;
    case 0x1014128eu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1014128e;
    case 0x101412adu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101412ad;
    case 0x101412c1u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101412c1;
    case 0x101412c8u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101412c8;
    case 0x101412d7u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101412d7;
    case 0x101412e7u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101412e7;
    case 0x101412fcu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101412fc;
    default: break;
    }
#endif

    COW_AT(10141250)
    if (rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u) != 1u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
    COW_AT(10141277)
        if (rd32(COW_IMG(0x10578254u)) != 1u)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(10141280)
            t3 = rd32(self + 8u);
            g->edx = t3;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x1015e530u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, t3);
            t4 = g->edx;
            edx = t4;
        }
    }
    else
    {
        eax = rd32(COW_IMG(0x1057876cu));
    COW_AT(1014125f)
        t1 = rd32(self + 8u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t1, 1u, 1u, 0u, 0u);
        t2 = g->edx;
        edx = t2;
    }
    COW_AT(1014128e)
    t5 = rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u);
    wr32(COW_IMG(0x10578254u), t5);
    g->eax = t5;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t7 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101412c1;
    }
    eax = t6;
    COW_AT(101412ad)
    t8 = rd32(self + 8u);
    g->edx = t8;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t8, 1u);
    t10 = g->edx;
    g->esi = in_esi;
    g->edx = t10;
    return t9;
L_101412c1: ;
    COW_AT(101412c1)
    if (rd32(eax + 0x70u) != 0u)
    {
    COW_AT(101412c8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_stdcall(g, COW_IMG(0x10141070u), 0);
        t12 = g->edx;
        wr32(self + 0x18u, t11);
        if (t11 != 0xffffffffu)
        {
            eax = t11;
            edx = t12;
        }
        else
        {
            edx = t12;
    COW_AT(101412d7)
            t13 = rd32(self + 8u);
            g->edx = edx;
            g->esp = sp0 - 4u;
            t14 = cow_call_regs(g, COW_IMG(0x1015e790u), t13, COW_IMG(0x10621838u), g->edx, 0, 2, t13, 1u);
            t15 = g->edx;
            eax = t14;
            edx = t15;
        }
    COW_AT(101412e7)
        t16 = rd32(self + 0x18u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, COW_IMG(0x101410d0u), self, 1, t16);
        t18 = g->edx;
        wr8(self + 0x14u, (uint8_t)t17);
        g->edx = t18;
        t19 = cow_call_regs(g, COW_IMG(0x101411a0u), t17, self, g->edx, 1, 0);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    COW_AT(101412fc)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10141250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014125fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10141277u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10141280u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1014128eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101412adu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101412c1u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101412c8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101412d7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101412e7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101412fcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10141250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10141250(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
