/* f_0x101d10c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101d10c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d10ceu: eax = g->eax; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_101d10ce;
    case 0x101d10d5u: eax = g->eax; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_101d10d5;
    case 0x101d10dfu: eax = g->eax; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_101d10df;
    case 0x101d10fcu: eax = g->eax; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_101d10fc;
    case 0x101d10feu: eax = g->eax; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_101d10fe;
    default: break;
    }
#endif

    COW_AT(101d10c0)
    if (rd32(arg1 + 8u) == 0u)
    {
        eax = rd32(arg1 + 8u);
        goto L_101d10fc;
    }
    eax = rd32(arg1 + 8u);
    COW_AT(101d10ce)
    if (rd32(eax + 0xcu) == 0u)
    {
        eax = rd32(eax + 0xcu);
        goto L_101d10fc;
    }
    eax = rd32(eax + 0xcu);
    COW_AT(101d10d5)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101d10fc;
    edx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(101d10df)
    t1 = rd32(arg1 + 4u);
    g->eax = arg2;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x101c49a0u), rd32(COW_IMG(0x10662dccu)), 4, arg2, t1, eax, 0u);
    if ((int32_t)t2 >= 0)
    {
        eax = (t2 & 0xffffff00u) | 1u;
        goto L_101d10fe;
    }
    eax = (t2 & 0xffffff00u) | 1u;
L_101d10fc: ;
    COW_AT(101d10fc)
    eax = eax & 0xffffff00u;
L_101d10fe: ;
    COW_AT(101d10fe)
    g->ebx = in_ebx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d10c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d10ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x101d10d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x101d10dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = arg1;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x101d10fcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x101d10feu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d10c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101d10c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
