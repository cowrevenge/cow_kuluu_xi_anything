/* f_0x10152580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10152580(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10152595u: eax = g->eax; ecx = g->ecx; goto E_10152595;
    case 0x1015259fu: eax = g->eax; ecx = g->ecx; goto E_1015259f;
    case 0x101525b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101525b6;
    case 0x101525b9u: eax = g->eax; ecx = g->ecx; goto E_101525b9;
    case 0x101525cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101525cd;
    case 0x101525d0u: eax = g->eax; ecx = g->ecx; goto E_101525d0;
    case 0x101525e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101525e3;
    default: break;
    }
#endif

    COW_AT(10152580)
    if (rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u) == 0u)
    {
        eax = rd16(arg3 + 8u);
        goto L_101525d0;
    }
    eax = rd16(arg3 + 8u);
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 8u) * 4u);
    COW_AT(10152595)
    t1 = rd16(ecx + 0x210u);
    if ((uint16_t)t1 == 0u) goto L_101525b9;
    COW_AT(1015259f)
    t2 = rd32(arg3 + 4u);
    g->eax = t2;
    g->edx = arg3;
    g->esp = sp0;
    COW_RET(0x101525b6u);
    t3 = cow_thiscall(g, COW_IMG(0x10152150u), rd32(COW_IMG(0x10578484u)), 3, t2, eax, ecx + 0x214u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(101525b6)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101525b9: ;
    COW_AT(101525b9)
    t5 = rd32(arg3 + 4u);
    g->eax = t5;
    g->edx = arg3;
    g->esp = sp0;
    COW_RET(0x101525cdu);
    t6 = cow_thiscall(g, COW_IMG(0x10152150u), rd32(COW_IMG(0x10578484u)), 3, t5, eax, ecx + 0x7cu);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(101525cd)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101525d0: ;
    COW_AT(101525d0)
    t8 = rd32(arg3 + 4u);
    g->eax = t8;
    g->edx = arg3;
    g->esp = sp0;
    COW_RET(0x101525e3u);
    t9 = cow_thiscall(g, COW_IMG(0x10152150u), rd32(COW_IMG(0x10578484u)), 3, t8, eax, 0u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(101525e3)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10152580(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10152595u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1015259fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101525b6u:
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
    case 0x101525b9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101525cdu:
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
    case 0x101525d0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101525e3u:
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
void cow_adapter_10152580(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10152580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
