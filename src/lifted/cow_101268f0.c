/* f_0x101268f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101268f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012690du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1012690d;
    case 0x1012691fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1012691f;
    case 0x1012692du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1012692d;
    case 0x10126931u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10126931;
    case 0x1012695fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1012695f;
    case 0x1012696au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1012696a;
    default: break;
    }
#endif

    COW_AT(101268f0)
    wr32(self + 0x20u, 0u);
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x844u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        loc_4 = self;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(1012690d)
        t3 = rd32(self + 0x30u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall(g, COW_IMG(0x10126b60u), eax, 2, self, t3);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            edx = t6;
            loc_4 = self;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edi = t4;
    COW_AT(1012691f)
            if (!(rd8(self + 0x20u) & 1u))
            {
                pf = PARITY(rd8(self + 0x20u) & 1u);
                zf = !(rd8(self + 0x20u) & 1u);
                sf = (int8_t)(rd8(self + 0x20u) & 1u) < 0;
                loc_4 = self & 0xffffff00u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | 1u;
                pf = PARITY(rd8(self + 0x20u) & 1u);
                zf = !(rd8(self + 0x20u) & 1u);
                sf = (int8_t)(rd8(self + 0x20u) & 1u) < 0;
    COW_AT(1012692d)
                loc_4 = (self & 0xffffff00u) | (uint8_t)eax;
            }
    COW_AT(10126931)
            g->cf = 0u;
            g->pf = pf;
            g->af = 0u;
            g->zf = zf;
            g->sf = sf;
            g->of = 0u;
            g->eax = arg3;
            g->edx = arg1;
            g->esp = sp0 - 0xcu;
            t7 = cow_thiscall(g, COW_IMG(0x10126bc0u), edi, 4, arg1, arg2, arg3, loc_4);
            t8 = g->edx;
            wr8(self + 0x34u, 0u);
            g->edx = t8;
            cow_thiscall(g, COW_IMG(0x10126480u), self, 1, edi);
            t9 = g->edx;
            if (rd32(self + 0x1cu) != 0u)
            {
                eax = rd32(self + 0x1cu);
                edx = t9;
            }
            else
            {
                edx = t9;
    COW_AT(1012695f)
                t10 = rd32(self + 0x30u);
                wr32(self + 0x1cu, edi);
                g->eax = rd32(t10);
                g->edx = edx;
                t11 = rd32(t10);
                g->esp = sp0 - 0xcu;
                t12 = cow_thiscall(g, rd32(t11 + 0x48u), t10, 0);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
        }
    }
    COW_AT(1012696a)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101268f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012690du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1012691fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1012692du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 4u, self & 0xffffff00u);
        (void)sp0;
        return 1;
    }
    case 0x10126931u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1012695fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1012696au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101268f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101268f0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
