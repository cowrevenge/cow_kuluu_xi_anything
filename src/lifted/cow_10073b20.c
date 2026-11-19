/* f_0x10073b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10073b20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10073b32u: ecx = g->ecx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b32;
    case 0x10073b3cu: eax = g->eax; ecx = g->ecx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b3c;
    case 0x10073b49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b49;
    case 0x10073b50u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b50;
    case 0x10073b54u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b54;
    case 0x10073b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b56;
    case 0x10073b5au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b5a;
    case 0x10073b5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10073b5b;
    case 0x10073b62u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10073b62;
    case 0x10073b66u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10073b66;
    case 0x10073b68u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10073b68;
    case 0x10073b73u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10073b73;
    case 0x10073b74u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b74;
    case 0x10073b76u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b76;
    case 0x10073b7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10073b7b;
    default: break;
    }
#endif

    COW_AT(10073b20)
    if ((rd16(rd32(arg1) + 0x18u) & 0x7fffu) != 0u)
    {
        eax = arg1;
        edx = 0x7fffu;
    }
    else
    {
        ecx = rd32(arg1);
    COW_AT(10073b32)
        if (rd8(ecx + 0x1au) >> 2u & 1u)
        {
            eax = (arg1 & 0xffffff00u) | rd8(ecx + 0x1au) >> 2u;
            edx = 0x7fffu;
            goto L_10073b76;
        }
        eax = (arg1 & 0xffffff00u) | rd8(ecx + 0x1au) >> 2u;
    COW_AT(10073b3c)
        g->eax = eax;
        g->edx = 0x7fffu;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10072240u), ecx, 0);
        t2 = g->edx;
        if ((rd16(t1 + 0x18u) & (uint16_t)t2) != 0u)
        {
            eax = t1;
            edx = t2;
            goto L_10073b7b;
        }
        edx = t2;
        edi = t1;
    COW_AT(10073b49)
        if (rd32(edi + 8u) == 0u)
        {
            eax = rd32(edi + 8u);
    COW_AT(10073b54)
            ecx = 0u;
        }
        else
        {
            eax = rd32(edi + 8u);
    COW_AT(10073b50)
            ecx = rd32(eax);
        }
    COW_AT(10073b56)
        if (ecx != 0u)
        {
    COW_AT(10073b5a)
L_10073b5b: ;
    COW_AT(10073b5b)
            if (rd32(ecx + 8u) == 0u)
            {
                eax = rd32(ecx + 8u);
    COW_AT(10073b66)
                esi = 0u;
            }
            else
            {
                eax = rd32(ecx + 8u);
    COW_AT(10073b62)
                esi = rd32(eax);
            }
    COW_AT(10073b68)
            g->edx = edx;
            g->esp = sp0 - 8u;
            t3 = cow_call_regs(g, COW_IMG(0x100721f0u), eax, ecx, g->edx, 1, 0);
            t4 = g->edx;
            if (esi != 0u)
            {
                ecx = esi;
                edx = t4;
                goto L_10073b5b;
            }
            eax = t3;
            edx = t4;
    COW_AT(10073b73)
        }
    COW_AT(10073b74)
        ecx = edi;
L_10073b76: ;
    COW_AT(10073b76)
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x100721f0u), eax, ecx, g->edx, 1, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
L_10073b7b: ;
    COW_AT(10073b7b)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10073b20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10073b32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->edx = 0x7fffu;
        (void)sp0;
        return 1;
    }
    case 0x10073b3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 0x7fffu;
        (void)sp0;
        return 1;
    }
    case 0x10073b49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10073b50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10073b54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10073b56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10073b5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10073b5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10073b62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10073b66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10073b68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10073b73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10073b74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10073b76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10073b7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
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
void cow_adapter_10073b20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10073b20(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
