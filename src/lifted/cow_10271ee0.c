/* f_0x10271ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10271ee0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10271eedu: eax = g->eax; in_edx = g->edx; goto E_10271eed;
    case 0x10271ef8u: eax = g->eax; in_edx = g->edx; goto E_10271ef8;
    case 0x10271f08u: eax = g->eax; in_edx = g->edx; goto E_10271f08;
    case 0x10271f0du: eax = g->eax; in_edx = g->edx; goto E_10271f0d;
    case 0x10271f1au: eax = g->eax; in_edx = g->edx; goto E_10271f1a;
    case 0x10271f2bu: eax = g->eax; edx = g->edx; goto E_10271f2b;
    default: break;
    }
#endif

    COW_AT(10271ee0)
    if (arg1 == 0u)
    {
        eax = rd32(COW_IMG(0x1099b0fcu));
        goto L_10271f08;
    }
    eax = rd32(COW_IMG(0x1099b0fcu));
    COW_AT(10271eed)
    wr32(COW_IMG(0x1099b0fcu), eax + 1u);
    if (eax + 1u != 1u)
    {
        eax = eax + 1u;
        edx = in_edx;
        goto L_10271f2b;
    }
    eax = eax + 1u;
    COW_AT(10271ef8)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x1028ec90u), 3, COW_IMG(0x1099b13cu), eax, eax);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_10271f08: ;
    COW_AT(10271f08)
    if ((int32_t)eax <= 1)
    {
        edx = in_edx;
    }
    else
    {
    COW_AT(10271f0d)
        t3 = rd32(COW_IMG(0x1099b0fcu)) - 1u;
        t4 = rd32(COW_IMG(0x1099b0fcu));
        wr32(COW_IMG(0x1099b0fcu), t3);
        if (t4 != 1u)
        {
            eax = t3;
            edx = in_edx;
        }
        else
        {
            eax = t3;
    COW_AT(10271f1a)
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0;
            t5 = cow_cdecl(g, COW_IMG(0x1028ec90u), 3, COW_IMG(0x1099b13cu), 1u, 0u);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
    }
L_10271f2b: ;
    COW_AT(10271f2b)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10271ee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10271eedu:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10271ef8u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10271f08u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10271f0du:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10271f1au:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10271f2bu:
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
void cow_adapter_10271ee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10271ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
