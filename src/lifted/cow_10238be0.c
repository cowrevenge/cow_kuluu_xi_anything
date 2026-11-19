/* f_0x10238be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10238be0(Guest* g)
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10238be8u: in_edx = g->edx; goto E_10238be8;
    case 0x10238beau: in_edx = g->edx; goto E_10238bea;
    case 0x10238befu: eax = g->eax; in_edx = g->edx; goto E_10238bef;
    case 0x10238bfdu: edx = g->edx; goto E_10238bfd;
    case 0x10238c0au: eax = g->eax; edx = g->edx; goto E_10238c0a;
    default: break;
    }
#endif

    COW_AT(10238be0)
    if (arg1 == 0u) goto L_10238bfd;
    COW_AT(10238be8)
    if (arg1 == 0u || (int32_t)arg1 < 0)
    {
        eax = arg1;
        edx = in_edx;
        goto L_10238c0a;
    }
    COW_AT(10238bea)
    if ((int32_t)arg1 > 2)
    {
        eax = arg1;
        edx = in_edx;
        goto L_10238c0a;
    }
    COW_AT(10238bef)
    g->eax = rd32(arg3);
    g->edx = in_edx;
    t1 = rd32(arg3);
    g->esp = sp0;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), arg3, 2, 6u, 1u);
    t3 = g->edx;
    g->edx = t3;
    return t2;
L_10238bfd: ;
    COW_AT(10238bfd)
    g->eax = arg1;
    g->edx = rd32(arg3);
    t4 = rd32(arg3);
    g->esp = sp0;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), arg3, 2, 5u, 1u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_10238c0a: ;
    COW_AT(10238c0a)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10238be0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10238be8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg1;
        g->zf = (uint8_t)(arg1 == 0u);
        g->sf = (uint8_t)((int32_t)arg1 < 0);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10238beau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10238befu:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10238bfdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10238c0au:
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
void cow_adapter_10238be0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10238be0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
