/* f_0x100c42f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100c42f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    cow_frame(g, sp0, 16u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c430eu: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100c430e;
    case 0x100c4313u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_100c4313;
    case 0x100c4340u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100c4340;
    case 0x100c4344u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100c4344;
    case 0x100c4346u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100c4346;
    case 0x100c4368u: eax = g->eax; edx = g->edx; self = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c4368;
    default: break;
    }
#endif

    COW_AT(100c42f0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10082b10u), self, in_edx, 0);
    t1 = g->edx;
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->eax = rd32(self);
    t2 = rd32(self);
    t3 = cow_thiscall(g, rd32(t2 + 0x1dcu), self, 1, sp0 - 4u);
    if (rd32(t3) == 0u)
    {
        loc_4 = self;
        loc_8 = in_esi;
    }
    else
    {
        eax = rd32(t3);
    COW_AT(100c430e)
        if (rd32(eax) == 0u)
        {
            loc_4 = self;
            loc_8 = in_esi;
        }
        else
        {
    COW_AT(100c4313)
            wr32(sp0 - 0xcu, sp0 - 4u);
            g->eax = sp0 - 4u;
            g->edx = rd32(self);
            t4 = rd32(self);
            g->esp = sp0 - 8u;
            t5 = cow_thiscall(g, rd32(t4 + 0x1dcu), self, 1, sp0 - 4u);
            t6 = g->edx;
            cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(rd32(t5)), 0);
            wr32(sp0 - 0xcu, sp0 - 4u);
            g->eax = sp0 - 4u;
            g->edx = rd32(self);
            t7 = rd32(self);
            t8 = cow_thiscall(g, rd32(t7 + 0x1dcu), self, 1, sp0 - 4u);
            t9 = g->edx;
            if (rd32(t8) == 0u)
            {
                edx = t9;
    COW_AT(100c4344)
                eax = 0u;
                pf = PARITY(0u);
                zf = 1u;
                sf = 0u;
            }
            else
            {
                eax = rd32(t8);
                edx = t9;
                pf = PARITY((uint8_t)rd32(t8));
                zf = rd32(t8) == 0u;
                sf = (int32_t)rd32(t8) < 0;
    COW_AT(100c4340)
                eax = rd32(eax);
            }
    COW_AT(100c4346)
            t10 = rd32(eax + 0x14u);
            wr32(sp0 - 0xcu, t10);
            g->cf = 0u;
            g->pf = pf;
            g->af = 0u;
            g->zf = zf;
            g->sf = sf;
            g->of = 0u;
            g->ecx = rd32(COW_IMG(0x1047d128u));
            t11 = rd32(COW_IMG(0x1047d128u));
            g->esp = sp0 - 8u;
            cow_stdcall(g, COW_IMG(0x10073b20u), 1, t10);
            t12 = g->ecx;
            wr32(sp0 - 0xcu, t12);
            wr32(sp0 - 0xcu, 0u);
            cow_thiscall(g, rd32(rd32(self) + 0x290u), self, 1, 0u);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
    }
    COW_AT(100c4368)
    wr32(self + 0x5c4u, 0u);
    g->esi = loc_8;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c42f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c430eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 4u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100c4313u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 4u);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x100c4340u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 8u;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100c4344u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100c4346u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 8u;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100c4368u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c42f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100c42f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
