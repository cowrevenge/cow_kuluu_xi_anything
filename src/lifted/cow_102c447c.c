/* f_0x102c447c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c447c(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c4484u: eax = g->eax; in_edx = g->edx; goto E_102c4484;
    case 0x102c448bu: eax = g->eax; in_edx = g->edx; goto E_102c448b;
    case 0x102c449au: eax = g->eax; in_edx = g->edx; goto E_102c449a;
    case 0x102c449eu: eax = g->eax; in_edx = g->edx; goto E_102c449e;
    case 0x102c44a3u: eax = g->eax; edx = g->edx; goto E_102c44a3;
    case 0x102c44a5u: eax = g->eax; edx = g->edx; goto E_102c44a5;
    default: break;
    }
#endif

    COW_AT(102c447c)
    if (arg1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(102c4484)
        if (arg2 == 0u)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(102c448b)
            if (rd32(arg1 + 0x24cu) == 0u)
            {
                eax = rd32(arg1 + 0x24cu);
    COW_AT(102c449e)
                g->esp = sp0;
                cow_call_regs(g, COW_IMG(0x102c44a6u), g->eax, arg1, in_edx, 1, 2, arg1, arg2);
                t2 = g->edx;
                edx = t2;
            }
            else
            {
                eax = rd32(arg1 + 0x24cu);
    COW_AT(102c449a)
                g->edx = in_edx;
                g->esp = sp0 - 8u;
                cow_thiscall(g, eax, arg1, 0);
                t1 = g->edx;
                edx = t1;
            }
    COW_AT(102c44a3)
        }
    }
    COW_AT(102c44a5)
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c447c(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c4484u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c448bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102c449au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        wr32(sp0 - 8u, arg1);
        wr32(sp0 - 4u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102c449eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0 - 8u;
        g->ecx = arg1;
        wr32(sp0 - 8u, arg1);
        wr32(sp0 - 4u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102c44a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, arg1);
        wr32(sp0 - 4u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102c44a5u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c447c(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c447c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
