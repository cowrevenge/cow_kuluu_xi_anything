/* f_0x1023c290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1023c290(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023c29cu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023c29c;
    case 0x1023c2a4u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023c2a4;
    case 0x1023c2c1u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023c2c1;
    case 0x1023c2dau: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023c2da;
    case 0x1023c2e4u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023c2e4;
    case 0x1023c2f4u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023c2f4;
    default: break;
    }
#endif

    COW_AT(1023c290)
    if (rd32(self + 0x25cu) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
    COW_AT(1023c29c)
        if ((uint16_t)arg1 != 5u)
        {
            eax = in_eax;
            edx = in_edx;
        }
        else
        {
    COW_AT(1023c2a4)
            t1 = rd32(self + 8u);
            wr8(t1 + 0x5du, 1u);
            wr32(self + 0x25cu, 1u);
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
            t2 = g->edx;
            if (rd32(self + 0x14u) == 0u)
            {
                eax = rd32(self + 0x14u);
                edx = t2;
            }
            else
            {
                eax = rd32(self + 0x14u);
                edx = t2;
    COW_AT(1023c2c1)
                t3 = rd32(self + 0x18u);
                g->eax = eax;
                g->esp = sp0 - 4u;
                t4 = cow_thiscall_cdecl(g, eax, t3, 1, t3);
                t5 = rd32(self + 8u);
                g->edx = t5;
                t6 = cow_call_regs(g, COW_IMG(0x1015e790u), t4, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
                t7 = g->edx;
                eax = t6;
                edx = t7;
            }
    COW_AT(1023c2da)
            if (rd8(self + 0x258u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x258u);
            }
            else
            {
    COW_AT(1023c2e4)
                t8 = rd32(self + 8u);
                g->edx = edx;
                g->esp = sp0 - 4u;
                t9 = cow_call_regs(g, COW_IMG(0x1015e790u), t8, COW_IMG(0x10621838u), g->edx, 0, 2, t8, 1u);
                t10 = g->edx;
                eax = t9;
                edx = t10;
            }
        }
    }
    COW_AT(1023c2f4)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023c290(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023c29cu:
    {
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1023c2a4u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1023c2c1u:
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
    case 0x1023c2dau:
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
    case 0x1023c2e4u:
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
    case 0x1023c2f4u:
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
void cow_adapter_1023c290(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023c290(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
