/* f_0x1003de10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1003de10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003de16u: eax = g->eax; edx = g->edx; goto E_1003de16;
    case 0x1003de1cu: eax = g->eax; edx = g->edx; goto E_1003de1c;
    case 0x1003de29u: eax = g->eax; edx = g->edx; goto E_1003de29;
    case 0x1003de35u: eax = g->eax; edx = g->edx; goto E_1003de35;
    case 0x1003de38u: eax = g->eax; edx = g->edx; goto E_1003de38;
    case 0x1003de3au: eax = g->eax; edx = g->edx; goto E_1003de3a;
    default: break;
    }
#endif

    COW_AT(1003de10)
    eax = self;
L_1003de16: ;
    COW_AT(1003de16)
    if ((uint8_t)rd32(eax) == 0u)
    {
        edx = rd32(eax);
        goto L_1003de38;
    }
    edx = rd32(eax);
    COW_AT(1003de1c)
    if (eax + (edx >> 8u & 0x1fu) * 4u == 0u)
    {
        eax = eax + (edx >> 8u & 0x1fu) * 4u;
        edx = edx >> 8u & 0x1fu;
        goto L_1003de3a;
    }
    eax = eax + (edx >> 8u & 0x1fu) * 4u;
    COW_AT(1003de29)
    if ((uint8_t)rd32(eax) != arg1) goto L_1003de16;
    edx = (uint8_t)rd32(eax);
    COW_AT(1003de35)
    g->edx = edx;
    return eax;
L_1003de38: ;
    COW_AT(1003de38)
    eax = 0u;
L_1003de3a: ;
    COW_AT(1003de3a)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003de10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003de16u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003de1cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003de29u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1003de35u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1003de38u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1003de3au:
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
void cow_adapter_1003de10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1003de10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
