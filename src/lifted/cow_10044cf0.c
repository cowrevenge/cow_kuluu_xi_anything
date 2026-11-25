/* f_0x10044cf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10044cf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10044cfau: eax = g->eax; ecx = g->ecx; goto E_10044cfa;
    case 0x10044cfdu: eax = g->eax; self = g->ecx; goto E_10044cfd;
    case 0x10044d07u: eax = g->eax; ecx = g->ecx; goto E_10044d07;
    case 0x10044d0au: eax = g->eax; self = g->ecx; goto E_10044d0a;
    case 0x10044d14u: eax = g->eax; ecx = g->ecx; goto E_10044d14;
    case 0x10044d24u: eax = g->eax; ecx = g->ecx; goto E_10044d24;
    default: break;
    }
#endif

    COW_AT(10044cf0)
    if (rd8(self + 0x187u) == 0u) goto L_10044cfd;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x187u);
    COW_AT(10044cfa)
    return (eax & 0xffffff00u) | 1u;
L_10044cfd: ;
    COW_AT(10044cfd)
    if (rd32(self + 0x108u) == 0u) goto L_10044d0a;
    eax = rd32(self + 0x108u);
    COW_AT(10044d07)
    return eax & 0xffffff00u;
L_10044d0a: ;
    COW_AT(10044d0a)
    if (rd32(self + 0xfcu) == 0u) goto L_10044d24;
    ecx = rd32(self + 0xfcu);
    COW_AT(10044d14)
    g->edx = rd32(rd32(ecx) + 0xa4u);
    return rd32(rd32(ecx) + 0xa4u) != 0u;
L_10044d24: ;
    COW_AT(10044d24)
    g->edx = rd32(0xa4u);
    return rd32(0xa4u) != 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10044cf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10044cfau:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10044cfdu:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10044d07u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10044d0au:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10044d14u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10044d24u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10044cf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10044cf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
