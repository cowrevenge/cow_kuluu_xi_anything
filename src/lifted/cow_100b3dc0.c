/* f_0x100b3dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100b3dc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b3dd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100b3dd1;
    case 0x100b3dd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100b3dd5;
    case 0x100b3de2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100b3de2;
    case 0x100b3de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100b3de6;
    case 0x100b3df4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100b3df4;
    case 0x100b3df8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100b3df8;
    case 0x100b3e02u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100b3e02;
    case 0x100b3e06u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100b3e06;
    default: break;
    }
#endif

    COW_AT(100b3dc0)
    g->eax = arg1;
    t1 = cow_cdecl(g, COW_IMG(0x100b3660u), 1, arg1);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_100b3dd5;
    }
    eax = t1;
    COW_AT(100b3dd1)
    return 0xffffffffu;
L_100b3dd5: ;
    COW_AT(100b3dd5)
    if (rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u) != 0u)
    {
        ecx = rd32(eax);
        eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
        goto L_100b3de6;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
    COW_AT(100b3de2)
    return 0xffffffffu;
L_100b3de6: ;
    COW_AT(100b3de6)
    if (rd32(eax + 0x120u) >> 7u & 1u)
    {
        edx = rd32(eax + 0x120u) >> 7u;
        goto L_100b3df8;
    }
    COW_AT(100b3df4)
    return 0xffffffffu;
L_100b3df8: ;
    COW_AT(100b3df8)
    if ((int8_t)rd8(eax + 0x120u) < 0) goto L_100b3e06;
    COW_AT(100b3e02)
    return 0xffffffffu;
L_100b3e06: ;
    COW_AT(100b3e06)
    g->eax = eax;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x100b3830u), rd32(eax + 0xd4u), 1, arg2);
    return t2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b3dc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b3dd1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b3dd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b3de2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b3de6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b3df4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b3df8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b3e02u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100b3e06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
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
void cow_adapter_100b3dc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100b3dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
