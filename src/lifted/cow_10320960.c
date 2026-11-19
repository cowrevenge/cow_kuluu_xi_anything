/* f_0x10320960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10320960(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10320970u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_10320970;
    case 0x10320976u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_10320976;
    case 0x1032097au: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_1032097a;
    case 0x1032097fu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_1032097f;
    case 0x10320983u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_10320983;
    case 0x1032098bu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_1032098b;
    case 0x1032098fu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_1032098f;
    case 0x10320994u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_10320994;
    case 0x1032099eu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_1032099e;
    case 0x103209a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_103209a0;
    case 0x103209a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_103209a4;
    case 0x103209acu: in_eax = g->eax; cf = g->cf; goto E_103209ac;
    case 0x103209b4u: in_eax = g->eax; cf = g->cf; goto E_103209b4;
    case 0x103209bbu: eax = g->eax; cf = g->cf; goto E_103209bb;
    case 0x103209c0u: eax = g->eax; cf = g->cf; goto E_103209c0;
    case 0x103209c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_103209c8;
    case 0x103209d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_103209d2;
    case 0x103209d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_103209d6;
    case 0x103209dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_103209db;
    case 0x103209dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; goto E_103209df;
    default: break;
    }
#endif

    COW_AT(10320960)
    if ((arg1 & 3u) != 0u) goto L_103209ac;
    ecx = arg2;
    edx = arg1;
L_10320970: ;
    COW_AT(10320970)
    if ((uint8_t)rd32(edx) != rd8(ecx))
    {
        eax = rd32(edx);
        cf = (uint8_t)rd32(edx) < rd8(ecx);
        goto L_103209a4;
    }
    eax = rd32(edx);
    COW_AT(10320976)
    if ((uint8_t)eax == 0u) goto L_103209a0;
    eax = (eax & 0xffffff00u) | (uint8_t)eax;
    COW_AT(1032097a)
    if ((uint8_t)(eax >> 8u) != rd8(ecx + 1u))
    {
        cf = (uint8_t)(eax >> 8u) < rd8(ecx + 1u);
        goto L_103209a4;
    }
    COW_AT(1032097f)
    if ((uint8_t)(eax >> 8u) == 0u) goto L_103209a0;
    eax = (eax & 0xffff00ffu) | (uint32_t)(uint8_t)(eax >> 8u) << 8u;
    COW_AT(10320983)
    if ((uint8_t)(eax >> 0x10u) != rd8(ecx + 2u))
    {
        cf = (uint8_t)(eax >> 0x10u) < rd8(ecx + 2u);
        eax = eax >> 0x10u;
        goto L_103209a4;
    }
    eax = eax >> 0x10u;
    COW_AT(1032098b)
    if ((uint8_t)eax == 0u) goto L_103209a0;
    eax = (eax & 0xffffff00u) | (uint8_t)eax;
    COW_AT(1032098f)
    if ((uint8_t)(eax >> 8u) != rd8(ecx + 3u))
    {
        cf = (uint8_t)(eax >> 8u) < rd8(ecx + 3u);
        goto L_103209a4;
    }
    COW_AT(10320994)
    if ((uint8_t)(eax >> 8u) != 0u)
    {
        ecx = ecx + 4u;
        edx = edx + 4u;
        goto L_10320970;
    }
    edx = edx + 4u;
    COW_AT(1032099e)
L_103209a0: ;
    COW_AT(103209a0)
    g->edx = edx;
    return 0u;
L_103209a4: ;
    COW_AT(103209a4)
    g->edx = edx;
    return (-cf << 1u) + 1u;
L_103209ac: ;
    COW_AT(103209ac)
    if (!(arg1 & 1u))
    {
        eax = in_eax;
        ecx = arg2;
        edx = arg1;
        goto L_103209c8;
    }
    COW_AT(103209b4)
    if (rd8(arg1) != rd8(arg2))
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        edx = arg1 + 1u;
        cf = rd8(arg1) < rd8(arg2);
        goto L_103209a4;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1);
    COW_AT(103209bb)
    if ((uint8_t)eax == 0u)
    {
        edx = arg1 + 1u;
        goto L_103209a0;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)eax;
    COW_AT(103209c0)
    if ((arg1 + 1u & 2u) == 0u)
    {
        ecx = arg2 + 1u;
        edx = arg1 + 1u;
        goto L_10320970;
    }
    ecx = arg2 + 1u;
    edx = arg1 + 1u;
L_103209c8: ;
    COW_AT(103209c8)
    if ((uint8_t)rd16(edx) != rd8(ecx))
    {
        eax = (eax & 0xffff0000u) | rd16(edx);
        cf = (uint8_t)rd16(edx) < rd8(ecx);
        edx = edx + 2u;
        goto L_103209a4;
    }
    eax = (eax & 0xffff0000u) | rd16(edx);
    edx = edx + 2u;
    COW_AT(103209d2)
    if ((uint8_t)eax == 0u) goto L_103209a0;
    eax = (eax & 0xffffff00u) | (uint8_t)eax;
    COW_AT(103209d6)
    if ((uint8_t)(eax >> 8u) != rd8(ecx + 1u))
    {
        cf = (uint8_t)(eax >> 8u) < rd8(ecx + 1u);
        goto L_103209a4;
    }
    COW_AT(103209db)
    if ((uint8_t)(eax >> 8u) == 0u) goto L_103209a0;
    COW_AT(103209df)
    ecx = ecx + 2u;
    goto L_10320970;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10320960(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10320970u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10320976u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1032097au:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1032097fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10320983u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1032098bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1032098fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10320994u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1032099eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x103209a0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x103209a4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x103209acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t in_eax;
        in_eax = g->eax;
        cf = g->cf;
        g->esp = sp0;
        g->ecx = arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x103209b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t in_eax;
        in_eax = g->eax;
        cf = g->cf;
        g->esp = sp0;
        g->ecx = arg2;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x103209bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        eax = g->eax;
        cf = g->cf;
        g->esp = sp0;
        g->ecx = arg2;
        g->edx = arg1 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x103209c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        eax = g->eax;
        cf = g->cf;
        g->esp = sp0;
        g->ecx = arg2 + 1u;
        g->edx = arg1 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x103209c8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x103209d2u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x103209d6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x103209dbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x103209dfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10320960(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10320960(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
