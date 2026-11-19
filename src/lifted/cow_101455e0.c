/* f_0x101455e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101455e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101455ecu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_101455ec;
    case 0x101455f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101455f9;
    case 0x10145610u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10145610;
    case 0x10145626u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10145626;
    case 0x10145659u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10145659;
    case 0x10145665u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10145665;
    default: break;
    }
#endif

    COW_AT(101455e0)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(101455ec)
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint16_t)t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            esi = t1;
        }
        else
        {
            eax = t1;
            edx = t3;
            esi = t1;
    COW_AT(101455f9)
            if (rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) == 0u)
            {
                ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
                eax = COW_IMG(0x10480af0u) + (uint16_t)eax * 4u;
            }
            else
            {
                ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
                eax = COW_IMG(0x10480af0u) + (uint16_t)eax * 4u;
    COW_AT(10145610)
                t4 = rd32(ecx + 4u);
                wr32(self + 0x1cu, t4);
                t5 = rd32(rd32(eax) + 8u);
                wr32(self + 0x20u, t5);
                t6 = rd32(rd32(eax) + 0xcu);
                t7 = rd32(eax);
                wr32(self + 0x24u, t6);
                eax = t6;
                ecx = t5;
                edx = t7;
            }
        }
    COW_AT(10145626)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2bu);
        t9 = g->edx;
        g->edi = self;
        t10 = cow_thiscall(g, COW_IMG(0x1011adb0u), rd32(self + 8u), 2, 3u, t8);
        if (!(rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)esi * 4u) + 0x13cu) >> 0x1cu & 1u))
        {
            eax = t10;
            edx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)esi * 4u) + 0x13cu) >> 0x1cu;
        }
        else
        {
            eax = t10;
            edx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)esi * 4u) + 0x13cu) >> 0x1cu;
    COW_AT(10145659)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t11 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
    }
    COW_AT(10145665)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101455e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101455ecu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x101455f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10145610u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10145626u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10145659u:
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
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10145665u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101455e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101455e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
