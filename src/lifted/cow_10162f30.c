/* f_0x10162f30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10162f30(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10162f41u: edx = g->edx; in_ebx = g->ebx; goto E_10162f41;
    case 0x10162f4au: edx = g->edx; in_ebx = g->ebx; goto E_10162f4a;
    case 0x10162f4eu: edx = g->edx; in_ebx = g->ebx; goto E_10162f4e;
    case 0x10162f54u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; goto E_10162f54;
    default: break;
    }
#endif

    COW_AT(10162f30)
    if ((uint8_t)arg2 != 0u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(arg1 + 0x4du);
        goto L_10162f4a;
    }
    edx = (in_edx & 0xffffff00u) | rd8(arg1 + 0x4du);
    COW_AT(10162f41)
    g->eax = arg1;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10163050u), g->eax, g->ecx, edx, 0, 1, arg1);
    g->ebx = in_ebx;
    return t1;
L_10162f4a: ;
    COW_AT(10162f4a)
    if ((uint8_t)edx == 0u)
    {
        eax = arg1;
    }
    else
    {
    COW_AT(10162f4e)
        g->eax = arg1;
        g->esp = sp0;
        t2 = cow_call_regs(g, COW_IMG(0x10163020u), g->eax, g->ecx, edx, 0, 1, arg1);
        eax = t2;
    }
    COW_AT(10162f54)
    g->ebx = in_ebx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10162f30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10162f41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t in_ebx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10162f4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t in_ebx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10162f4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t in_ebx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10162f54u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10162f30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10162f30(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
