/* f_0x10060ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10060ef0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10060ef7u: eax = g->eax; in_edx = g->edx; self = g->ecx - 0xffffffccu; goto E_10060ef7;
    case 0x10060efeu: eax = g->eax; edx = g->edx; goto E_10060efe;
    default: break;
    }
#endif

    COW_AT(10060ef0)
    if (self == 0x34u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
    COW_AT(10060ef7)
        g->eax = rd32(self - 0x34u);
        g->edx = in_edx;
        t1 = rd32(self - 0x34u);
        g->esp = sp0;
        t2 = cow_thiscall(g, rd32(t1 + 0x18u), self - 0x34u, 1, 1u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    COW_AT(10060efe)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10060ef0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10060ef7u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        self = g->ecx - 0xffffffccu;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10060efeu:
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
void cow_adapter_10060ef0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10060ef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
