/* f_0x1013fa70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013fa70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013fa78u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1013fa78;
    case 0x1013fa83u: self = g->ecx; in_edx = g->edx; goto E_1013fa83;
    case 0x1013fa8au: self = g->ecx; in_edx = g->edx; goto E_1013fa8a;
    case 0x1013fa9bu: self = g->ecx; in_edx = g->edx; goto E_1013fa9b;
    case 0x1013faacu: self = g->ecx; in_edx = g->edx; goto E_1013faac;
    case 0x1013fabdu: self = g->ecx; in_edx = g->edx; goto E_1013fabd;
    case 0x1013facdu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013facd;
    case 0x1013fad5u: self = g->ecx; in_edx = g->edx; goto E_1013fad5;
    case 0x1013fae6u: self = g->ecx; in_edx = g->edx; goto E_1013fae6;
    case 0x1013faf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013faf2;
    default: break;
    }
#endif

    COW_AT(1013fa70)
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1013faf2;
    }
    COW_AT(1013fa78)
    if ((uint32_t)(int16_t)arg2 - 1u > 5u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1013faf2;
    }
    COW_AT(1013fa83)
    t1 = rd32(COW_IMG(0x1013faf8u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1013fa8au: goto L_1013fa8a;
    case 0x1013fa9bu: goto L_1013fa9b;
    case 0x1013faacu: goto L_1013faac;
    case 0x1013fabdu: goto L_1013fabd;
    case 0x1013fad5u: goto L_1013fad5;
    case 0x1013fae6u: goto L_1013fae6;
    default: rt_fatal(g, COW_IMG(0x1013fa83u), "switch");
    }
    return 0;
L_1013fa8a: ;
    COW_AT(1013fa8a)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t15 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 4u, 0u, 0u);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_1013fa9b: ;
    COW_AT(1013fa9b)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 1u, 1u, 1u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_1013faac: ;
    COW_AT(1013faac)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 3u, 1u, 1u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1013fabd: ;
    COW_AT(1013fabd)
    g->ecx = self;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x101cc0d0u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, in_edx, 1, 2, 0x7fu, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t8;
        goto L_1013faf2;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(1013facd)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t9 = cow_stdcall(g, COW_IMG(0x1013f880u), 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1013fad5: ;
    COW_AT(1013fad5)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 2u, 0u, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1013fae6: ;
    COW_AT(1013fae6)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10226490u), 2, 1u, 1u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1013faf2: ;
    COW_AT(1013faf2)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013fa70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013fa78u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013fa83u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1013fa8au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1013fa9bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1013faacu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1013fabdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1013facdu:
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
    case 0x1013fad5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1013fae6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1013faf2u:
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
void cow_adapter_1013fa70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1013fa70(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
