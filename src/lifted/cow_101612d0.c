/* f_0x101612d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101612d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101612dau: eax = g->eax; ecx = g->ecx; goto E_101612da;
    case 0x101612dfu: eax = g->eax; ecx = g->ecx; goto E_101612df;
    case 0x101612f7u: ecx = g->ecx; goto E_101612f7;
    case 0x101612fcu: eax = g->eax; ecx = g->ecx; goto E_101612fc;
    default: break;
    }
#endif

    COW_AT(101612d0)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_101612df;
    }
    COW_AT(101612da)
    return 0u;
L_101612df: ;
    COW_AT(101612df)
    if ((int32_t)(arg1 & 0x1fu) >= 0)
    {
        eax = arg1 & 0x1fu;
    }
    else
    {
    COW_AT(101612f7)
        eax = ((arg1 & 0x1fu) - 1u | 0xffffffe0u) + 1u;
    }
    COW_AT(101612fc)
    return eax * 2u + ecx + ((uint16_t)arg1 >> 5u) * 0x40u + 0x2d010u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101612d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101612dau:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101612dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101612f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0;
        g->eax = arg1 & 0x1fu;
        g->edx = (uint16_t)arg1 >> 5u << 5u;
        (void)sp0;
        return 1;
    }
    case 0x101612fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = (uint16_t)arg1 >> 5u << 5u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101612d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101612d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
