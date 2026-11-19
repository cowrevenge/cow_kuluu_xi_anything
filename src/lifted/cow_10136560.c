/* f_0x10136560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10136560(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10136574u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10136574;
    case 0x1013658fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1013658f;
    case 0x10136596u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10136596;
    case 0x1013659du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1013659d;
    case 0x101365acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101365ac;
    case 0x101365b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101365b6;
    case 0x101365ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101365cc;
    case 0x101365d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101365d3;
    case 0x101365d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101365d8;
    case 0x10136630u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10136630;
    case 0x10136657u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10136657;
    case 0x1013665eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1013665e;
    case 0x10136669u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10136669;
    default: break;
    }
#endif

    COW_AT(10136560)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 8u) == 0u)
    {
        edx = in_edx;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        ecx = rd32(self + 8u);
    COW_AT(10136574)
        t1 = rd32(self + 0x64u);
        wr16(sp0 - 8u, 0u);
        wr16(sp0 - 6u, 0u);
        wr16(sp0 - 4u, 0u);
        wr16(sp0 - 2u, 0u);
        if (t1 == 0u)
        {
            edx = in_edx;
        }
        else
        {
            eax = t1;
    COW_AT(1013658f)
            if (rd32(eax + 8u) == 0u)
            {
                edx = in_edx;
            }
            else
            {
                eax = rd32(eax + 8u);
    COW_AT(10136596)
                if (rd8(self + 0x48u) != 0u)
                {
                    edx = (in_edx & 0xffffff00u) | rd8(self + 0x48u);
                }
                else
                {
    COW_AT(1013659d)
                    t2 = (uint32_t)(int16_t)rd16(eax + 0x3cu);
                    wr32(sp0 - 0x14u, t2);
                    t3 = (uint32_t)(int16_t)rd16(eax + 0x3au);
                    wr32(sp0 - 0x18u, t3);
                    g->edx = t2;
                    g->esp = sp0 - 0x10u;
                    cow_call_regs(g, COW_IMG(0x10119110u), t3, ecx, g->edx, 0, 2, t3, t2);
                    t4 = g->ecx;
                    t5 = g->edx;
                    ecx = t4;
                    edx = t5;
                }
            }
        }
    COW_AT(101365ac)
        if (rd8(rd32(self + 8u) + 0x6au) != 0u)
        {
            loc_c = in_esi;
            loc_10 = in_edi;
        }
        else
        {
            eax = rd32(self + 8u);
    COW_AT(101365b6)
            t6 = rd32(self + 0x50u);
            wr32(sp0 - 0x14u, t6);
            g->edx = rd32(self + 0x64u);
            t7 = rd32(self + 0x64u);
            g->esp = sp0 - 0x10u;
            t8 = cow_call_regs(g, COW_IMG(0x10129290u), eax, rd32(t7 + 0x18u), g->edx, 0, 1, t6);
            t9 = g->edx;
            if (rd8(self + 0x48u) != 0u)
            {
                edx = t9;
                loc_c = in_esi;
                loc_10 = in_edi;
            }
            else
            {
                edx = t9;
    COW_AT(101365cc)
                if (rd32(self + 0x64u) == 0u)
                {
                    loc_c = rd32(sp0 - 0xcu);
                    loc_10 = rd32(sp0 - 0x10u);
                }
                else
                {
                    eax = rd32(self + 0x64u);
    COW_AT(101365d3)
                    if (rd32(eax + 8u) == 0u)
                    {
                        loc_c = rd32(sp0 - 0xcu);
                        loc_10 = rd32(sp0 - 0x10u);
                    }
                    else
                    {
    COW_AT(101365d8)
                        wr32(sp0 - 0x14u, 1u);
                        g->edi = 0u;
                        g->esp = sp0 - 0x10u;
                        cow_thiscall(g, COW_IMG(0x101192e0u), rd32(self + 8u), 1, 1u);
                        wr8(rd32(self + 8u) + 0x62u, 1u);
                        wr8(rd32(self + 8u) + 0x69u, 1u);
                        wr32(sp0 - 0x14u, sp0 - 8u);
                        t10 = rd32(self + 8u);
                        wr8(t10 + 0x6au, 1u);
                        g->edx = t10;
                        cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, rd32(rd32(self + 0x64u) + 8u), g->edx, 0, 1, sp0 - 8u);
                        t11 = g->edx;
                        wr32(sp0 - 0x14u, 0u);
                        wr32(sp0 - 0x18u, 0u);
                        wr32(sp0 - 0x1cu, 1u);
                        t12 = ((t11 & 0xffff0000u) | (uint16_t)((uint32_t)rd16(self + 0x4eu) << 4u)) + 4u;
                        wr32(sp0 - 0x20u, t12);
                        t13 = rd32(sp0 - 4u) - rd32(sp0 - 8u);
                        wr32(sp0 - 0x24u, t13);
                        t14 = rd32(sp0 - 6u);
                        wr32(sp0 - 0x28u, t14);
                        t15 = rd32(sp0 - 8u);
                        wr32(sp0 - 0x2cu, t15);
                        g->edx = t14;
                        cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t15, t14, t13, t12, 1u, 0u, 0u);
                        t16 = g->edx;
                        edx = t16;
                        loc_c = rd32(sp0 - 0xcu);
                        loc_10 = rd32(sp0 - 0x10u);
                    }
                }
            }
        }
    COW_AT(10136630)
        wr32(sp0 - 0x14u, self + 0x30u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t17 = cow_call_regs(g, COW_IMG(0x10118f70u), self + 0x30u, rd32(self + 8u), g->edx, 0, 1, self + 0x30u);
        t18 = g->edx;
        wr32(sp0 - 0x14u, 0u);
        t19 = rd32(self + 8u);
        wr32(sp0 - 0x18u, t19);
        cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t18, 2, t19, 0u);
        t20 = g->edx;
        t21 = (uint32_t)(int16_t)rd16(self + 0x4eu);
        t22 = rd16(self + 0x4eu);
        wr32(self + 0x5cu, t21);
        if ((int16_t)t22 <= 4)
        {
            eax = t21;
            edx = t20;
        }
        else
        {
            eax = t21;
            edx = t20;
    COW_AT(10136657)
            wr32(self + 0x5cu, 4u);
        }
    COW_AT(1013665e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t23 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
        t24 = g->edx;
        wr32(self + 0x58u, t23);
        edx = t24;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(10136669)
    g->esi = loc_c;
    g->edi = loc_10;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10136560(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10136574u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1013658fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10136596u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1013659du:
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
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101365acu:
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
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101365b6u:
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
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101365ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101365d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101365d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10136630u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10136657u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1013665eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10136669u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10136560(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10136560(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
