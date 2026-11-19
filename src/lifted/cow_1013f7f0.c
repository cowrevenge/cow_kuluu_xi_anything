/* f_0x1013f7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013f7f0(Guest* g)
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
    case 0x1013f7f8u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1013f7f8;
    case 0x1013f803u: self = g->ecx; in_edx = g->edx; goto E_1013f803;
    case 0x1013f80au: self = g->ecx; in_edx = g->edx; goto E_1013f80a;
    case 0x1013f815u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013f815;
    case 0x1013f81bu: self = g->ecx; in_edx = g->edx; goto E_1013f81b;
    case 0x1013f826u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013f826;
    case 0x1013f82cu: self = g->ecx; in_edx = g->edx; goto E_1013f82c;
    case 0x1013f835u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013f835;
    case 0x1013f83cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013f83c;
    case 0x1013f841u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013f841;
    case 0x1013f844u: self = g->ecx; in_edx = g->edx; goto E_1013f844;
    case 0x1013f84fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013f84f;
    case 0x1013f855u: self = g->ecx; in_edx = g->edx; goto E_1013f855;
    case 0x1013f85eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013f85e;
    case 0x1013f861u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1013f861;
    default: break;
    }
#endif

    COW_AT(1013f7f0)
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1013f861;
    }
    COW_AT(1013f7f8)
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1013f861;
    }
    COW_AT(1013f803)
    t1 = rd32(COW_IMG(0x1013f864u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1013f80au: goto L_1013f80a;
    case 0x1013f81bu: goto L_1013f81b;
    case 0x1013f82cu: goto L_1013f82c;
    case 0x1013f844u: goto L_1013f844;
    case 0x1013f855u: goto L_1013f855;
    default: rt_fatal(g, COW_IMG(0x1013f803u), "switch");
    }
    return 0;
L_1013f80a: ;
    COW_AT(1013f80a)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 1u, 0u, 1u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(1013f815)
    g->edx = edx;
    return eax;
L_1013f81b: ;
    COW_AT(1013f81b)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 3u, 0u, 1u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(1013f826)
    g->edx = edx;
    return eax;
L_1013f82c: ;
    COW_AT(1013f82c)
    g->ecx = self;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x101cc0d0u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, in_edx, 1, 2, 0x7fu, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(1013f835)
    if ((uint8_t)eax == 0u) goto L_1013f861;
    COW_AT(1013f83c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t9 = cow_stdcall(g, COW_IMG(0x1013f880u), 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
    COW_AT(1013f841)
    g->edx = edx;
    return eax;
L_1013f844: ;
    COW_AT(1013f844)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 2u, 0u, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(1013f84f)
    g->edx = edx;
    return eax;
L_1013f855: ;
    COW_AT(1013f855)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10226490u), 2, 1u, 0u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(1013f85e)
L_1013f861: ;
    COW_AT(1013f861)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013f7f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013f7f8u:
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
    case 0x1013f803u:
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
    case 0x1013f80au:
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
    case 0x1013f815u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013f81bu:
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
    case 0x1013f826u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013f82cu:
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
    case 0x1013f835u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1013f83cu:
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
    case 0x1013f841u:
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
    case 0x1013f844u:
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
    case 0x1013f84fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1013f855u:
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
    case 0x1013f85eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1013f861u:
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
void cow_adapter_1013f7f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1013f7f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
