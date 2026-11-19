/* f_0x101d95b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101d95b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d95c6u: eax = g->eax; edx = g->edx; goto E_101d95c6;
    case 0x101d95f9u: eax = g->eax; edx = g->edx; goto E_101d95f9;
    case 0x101d9608u: eax = g->eax; edx = g->edx; goto E_101d9608;
    case 0x101d9615u: eax = g->eax; edx = g->edx; goto E_101d9615;
    default: break;
    }
#endif

    COW_AT(101d95b0)
    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
    COW_AT(101d95b8)
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        g->esp = sp0;
        t1 = cow_call_regs(g, COW_IMG(0x101d75d0u), g->eax, g->ecx, in_edx, 1, 1, 0u);
        t2 = g->edx;
        if ((int32_t)t1 < 0)
        {
            eax = t1;
            edx = t2;
    COW_AT(101d9608)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0;
            t8 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x6cu);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
        else
        {
            eax = t1;
    COW_AT(101d95c6)
            g->edx = rd32(COW_IMG(0x1066345cu));
            t3 = rd32(COW_IMG(0x1066345cu));
            g->esp = sp0;
            cow_call_regs(g, COW_IMG(0x100dfbe0u), eax, g->ecx, g->edx, 1, 4, eax, arg1, t3, rd32(COW_IMG(0x10663460u)));
            t4 = g->edx;
            t5 = rd32(COW_IMG(0x105781f8u));
            wr8(COW_IMG(0x1066344eu), 1u);
            wr8(COW_IMG(0x1066344du), 0u);
            if (t5 == 0u)
            {
                eax = t5;
                edx = t4;
            }
            else
            {
                eax = t5;
                edx = t4;
    COW_AT(101d95f9)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0;
                t6 = cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x80000000u);
                t7 = g->edx;
                eax = t6;
                edx = t7;
            }
        }
    }
    COW_AT(101d9615)
    g->esp = sp0;
    t10 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, rd32(COW_IMG(0x10578204u)), edx, 0, 4, 0u, 1u, 0u, 0u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f718u));
    t13 = g->edx;
    g->edx = t13;
    return t12;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d95b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d95c6u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101d95f9u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101d9608u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101d9615u:
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
/* blocks no state can start at, and why (the gittable lists their sites):
     101d95b8: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d95b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101d95b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
