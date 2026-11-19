/* f_0x10107120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10107120(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1010712bu: eax = g->eax; edx = g->edx; goto E_1010712b;
    case 0x1010713eu: edx = g->edx; g->esi = rd32(sp0 - 4u); goto E_1010713e;
    case 0x10107143u: eax = g->eax; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10107143;
    case 0x1010714bu: eax = g->eax; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1010714b;
    case 0x1010714fu: eax = g->eax; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1010714f;
    case 0x10107155u: eax = g->eax; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10107155;
    case 0x10107157u: eax = g->eax; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10107157;
    case 0x10107161u: eax = g->eax; edx = g->edx; esi = g->esi; g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10107161;
    case 0x1010716au: eax = g->eax; edx = g->edx; goto E_1010716a;
    case 0x1010717cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1010717c;
    case 0x10107185u: eax = g->eax; ecx = g->ecx; goto E_10107185;
    case 0x10107188u: eax = g->eax; ecx = g->ecx; goto E_10107188;
    case 0x1010718bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1010718b;
    case 0x1010718fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1010718f;
    case 0x10107193u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10107193;
    case 0x10107195u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10107195;
    default: break;
    }
#endif

    COW_AT(10107120)
    if ((uint16_t)arg3 > 0x12bu) goto L_10107193;
    COW_AT(1010712b)
    if (rd32(COW_IMG(0x103669a4u)) == 0u)
    {
        eax = COW_IMG(0x103669a0u);
    }
    else
    {
        edx = rd32(COW_IMG(0x103669a4u));
    COW_AT(1010713e)
        eax = COW_IMG(0x103669a0u);
        esi = 0u;
L_10107143: ;
    COW_AT(10107143)
        if ((uint16_t)arg1 == rd16(eax)) goto L_10107161;
        edx = (edx & 0xffff0000u) | rd16(eax);
    COW_AT(1010714b)
        if (esi != 0u)
        {
    COW_AT(1010714f)
            if ((uint16_t)edx == 1u)
            {
    COW_AT(10107155)
                esi = eax;
            }
        }
    COW_AT(10107157)
        if (rd32(eax + 0xcu) != 0u)
        {
            edx = rd32(eax + 0xcu);
            eax = eax + 8u;
            goto L_10107143;
        }
        eax = eax + 8u;
    }
L_10107161: ;
    COW_AT(10107161)
    if (rd32(eax + 4u) == 0u) goto L_10107193;
    eax = rd32(eax + 4u);
    COW_AT(1010716a)
    if (rd32(eax + (uint16_t)arg3 * 0xcu) == 0u) goto L_10107193;
    ecx = eax + (uint16_t)arg3 * 0xcu;
    eax = rd32(eax + (uint16_t)arg3 * 0xcu);
    COW_AT(1010717c)
    if (arg2 == 0u) goto L_10107195;
    COW_AT(10107185)
    if (arg2 == 1u) goto L_1010718f;
    COW_AT(10107188)
    if (arg2 != 2u) goto L_10107193;
    COW_AT(1010718b)
    return rd32(ecx + 4u);
L_1010718f: ;
    COW_AT(1010718f)
    return rd32(ecx + 8u);
L_10107193: ;
    COW_AT(10107193)
    eax = 0u;
L_10107195: ;
    COW_AT(10107195)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10107120(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1010712bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1010713eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->eax = COW_IMG(0x103669a0u);
        g->ecx = arg3;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10107143u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = arg3;
        g->edi = (g->edi & 0xffff0000u) | (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010714bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = arg3;
        g->edi = (g->edi & 0xffff0000u) | (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x1010714fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = arg3;
        g->edi = (g->edi & 0xffff0000u) | (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x10107155u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = arg3;
        g->edi = (g->edi & 0xffff0000u) | (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x10107157u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = arg3;
        g->edi = (g->edi & 0xffff0000u) | (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x10107161u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1010716au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1010717cu:
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
    case 0x10107185u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10107188u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        g->edx = arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1010718bu:
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
    case 0x1010718fu:
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
    case 0x10107193u:
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
    case 0x10107195u:
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
void cow_adapter_10107120(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10107120(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
