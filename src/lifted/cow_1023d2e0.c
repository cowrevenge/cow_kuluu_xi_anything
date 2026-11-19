/* f_0x1023d2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023d2e0(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023d2f1u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d2f1;
    case 0x1023d302u: edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d302;
    case 0x1023d311u: edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d311;
    case 0x1023d31au: edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d31a;
    case 0x1023d324u: edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d324;
    case 0x1023d33bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d33b;
    case 0x1023d342u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d342;
    case 0x1023d353u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d353;
    case 0x1023d360u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d360;
    case 0x1023d369u: edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d369;
    case 0x1023d385u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023d385;
    default: break;
    }
#endif

    COW_AT(1023d2e0)
    if (rd32(self + 0x30u) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1023d385;
    }
    COW_AT(1023d2f1)
    if ((uint32_t)(int16_t)arg1 - 3u > 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_1023d385;
    }
    COW_AT(1023d302)
    t1 = rd32(COW_IMG(0x1023d38cu) + rd8(COW_IMG(0x1023d398u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x1023d311u: edx = rd8(COW_IMG(0x1023d398u) + (uint32_t)(int16_t)arg1 - 3u); goto L_1023d311;
    case 0x1023d31au: edx = rd8(COW_IMG(0x1023d398u) + (uint32_t)(int16_t)arg1 - 3u); goto L_1023d31a;
    case 0x1023d385u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = rd8(COW_IMG(0x1023d398u) + (uint32_t)(int16_t)arg1 - 3u); goto L_1023d385;
    default: rt_fatal(g, COW_IMG(0x1023d30au), "switch");
    }
    return 0;
L_1023d311: ;
    COW_AT(1023d311)
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x10037b30u), 1u, 0);
    t19 = g->edx;
    g->esi = in_esi;
    g->edx = t19;
    return t18;
L_1023d31a: ;
    COW_AT(1023d31a)
    if ((uint16_t)arg2 != 1u) goto L_1023d369;
    COW_AT(1023d324)
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10123a70u), ((uint32_t)(int16_t)arg1 - 3u & 0xffff0000u) | (uint16_t)arg2, 1u, g->edx, 1, 4, 0x3fu, 0xa6u, 4u, 0xffffffffu);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_1023d360;
    }
    ecx = t3;
    edx = t4;
    COW_AT(1023d33b)
    if (rd32(self + 0x34u) != 0u)
    {
        eax = rd32(self + 0x34u);
        goto L_1023d353;
    }
    eax = rd32(self + 0x34u);
    COW_AT(1023d342)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_stdcall(g, COW_IMG(0x100dc130u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(self + 0x34u, t5);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10037b90u), t6, 0);
    t9 = g->edx;
    g->esi = in_esi;
    g->edx = t9;
    return t8;
L_1023d353: ;
    COW_AT(1023d353)
    wr32(self + 0x34u, eax - 1u);
    g->eax = eax - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t11 = g->edx;
    g->esi = in_esi;
    g->edx = t11;
    return t10;
L_1023d360: ;
    COW_AT(1023d360)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t13 = g->edx;
    g->esi = in_esi;
    g->edx = t13;
    return t12;
L_1023d369: ;
    COW_AT(1023d369)
    t14 = rd32(self + 8u);
    wr32(self + 0x30u, 1u);
    wr8(t14 + 0x5du, 1u);
    t15 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x14u, t15);
    wr32(self + 0x34u, 0u);
    g->eax = t15;
    g->edx = t14;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x10037b90u), 1u, 0);
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_1023d385: ;
    COW_AT(1023d385)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023d2e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023d2f1u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d302u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ecx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d311u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t in_esi;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ecx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d31au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ecx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d324u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = ((uint32_t)(int16_t)arg1 - 3u & 0xffff0000u) | (uint16_t)arg2;
        g->ecx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d33bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023d342u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023d353u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023d360u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023d369u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = ((uint32_t)(int16_t)arg1 - 3u & 0xffff0000u) | (uint16_t)arg2;
        g->ecx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023d385u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d2e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023d2e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
