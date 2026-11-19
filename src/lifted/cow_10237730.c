/* f_0x10237730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10237730(Guest* g)
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10237742u: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10237742;
    case 0x10237756u: in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237756;
    case 0x1023775du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023775d;
    case 0x10237765u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237765;
    case 0x1023776eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023776e;
    case 0x10237774u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237774;
    case 0x10237784u: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237784;
    case 0x10237791u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237791;
    case 0x1023779au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023779a;
    case 0x102377c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102377c3;
    case 0x102377e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102377e7;
    case 0x102377ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_102377ec;
    case 0x10237802u: in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237802;
    case 0x10237808u: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237808;
    case 0x1023781eu: in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023781e;
    case 0x10237824u: in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237824;
    case 0x1023782au: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023782a;
    case 0x10237831u: eax = g->eax; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237831;
    case 0x10237847u: in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237847;
    case 0x10237856u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237856;
    case 0x10237861u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237861;
    case 0x10237868u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237868;
    case 0x10237876u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10237876;
    default: break;
    }
#endif

    COW_AT(10237730)
    if (rd32(self + 0x20u) == 1u) goto L_10237861;
    COW_AT(10237742)
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10237856;
    }
    COW_AT(10237756)
    t1 = rd32(COW_IMG(0x1023787cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1023775du: goto L_1023775d;
    case 0x1023776eu: goto L_1023776e;
    case 0x10237802u: goto L_10237802;
    case 0x1023781eu: goto L_1023781e;
    case 0x10237847u: goto L_10237847;
    case 0x10237856u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_10237856;
    default: rt_fatal(g, COW_IMG(0x10237756u), "switch");
    }
    return 0;
L_1023775d: ;
    COW_AT(1023775d)
    if ((int16_t)arg2 < 9) goto L_1023776e;
    COW_AT(10237765)
    if ((int16_t)arg2 <= 10)
    {
        eax = (uint32_t)(int16_t)arg2;
        edx = in_edx;
        goto L_10237876;
    }
L_1023776e: ;
    COW_AT(1023776e)
    if ((int16_t)arg2 < 9)
    {
    COW_AT(10237774)
        t10 = (uint32_t)(int16_t)arg2 - 1u;
        t11 = rd32(self + 0x1cu);
        wr32(self + 0x14u, t10);
        if (t11 != (uint32_t)(int16_t)arg2)
        {
            ecx = t10;
            edx = t11;
    COW_AT(10237784)
            g->eax = (uint32_t)(int16_t)arg2;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t12 = cow_thiscall(g, COW_IMG(0x102375a0u), self, 1, ecx);
            t13 = g->ecx;
            t14 = g->edx;
            cow_thiscall(g, COW_IMG(0x10037b30u), t13, 0);
        }
    }
    COW_AT(10237791)
    if (rd32(COW_IMG(0x10456aa4u)) != 0u) goto L_102377c3;
    COW_AT(1023779a)
    t15 = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u);
    t16 = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u);
    g->eax = t16;
    g->edx = rd32(COW_IMG(0x10668facu));
    t17 = rd32(COW_IMG(0x10668facu));
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x102516d0u), rd32(COW_IMG(0x106693fcu)), 2, t16, t15);
    t19 = g->edx;
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t19;
    return t18;
L_102377c3: ;
    COW_AT(102377c3)
    if ((int32_t)(rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
        edx = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
    }
    else
    {
        ecx = rd32(rd32(COW_IMG(0x10668fb4u)) + 0x14u) & 0x80000007u;
        edx = rd32(rd32(COW_IMG(0x10668facu)) + 0x14u) + rd32(rd32(COW_IMG(0x10668fb8u)) + 0x14u) * 8u;
    COW_AT(102377e7)
        ecx = (ecx - 1u | 0xfffffff8u) + 1u;
    }
    COW_AT(102377ec)
    t20 = ecx + edx * 8u;
    t21 = rd32(COW_IMG(0x10668fd8u));
    wr32(t21 + 0x1cu, t20);
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t20;
    return t21;
L_10237802: ;
    COW_AT(10237802)
    if ((uint16_t)arg2 != 9u) goto L_10237824;
    COW_AT(10237808)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = rd32(self);
    t4 = rd32(self);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), self, 2, 4u, 9u);
    t6 = g->edx;
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t6;
    return t5;
L_1023781e: ;
    COW_AT(1023781e)
    if ((uint16_t)arg2 == 9u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        goto L_10237831;
    }
L_10237824: ;
    COW_AT(10237824)
    if ((uint16_t)arg2 == 0xau)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
    }
    else
    {
    COW_AT(1023782a)
        t7 = (uint32_t)(int16_t)arg2 - 1u;
        wr32(self + 0x14u, t7);
        eax = t7;
    }
L_10237831: ;
    COW_AT(10237831)
    wr32(self + 0x18u, 1u);
    wr32(self + 0x20u, 1u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10037b90u), 1u, 0);
    t9 = g->edx;
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t9;
    return t8;
L_10237847: ;
    COW_AT(10237847)
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x20u, 1u);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10037bf0u), 1u, 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10237856: ;
    COW_AT(10237856)
    wr32(self + 0x1cu, (uint32_t)(int16_t)arg2);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_10237861: ;
    COW_AT(10237861)
    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 8u);
    COW_AT(10237868)
        t22 = (in_edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 1u);
        g->edx = t22;
        g->esp = sp0 - 8u;
        t23 = cow_call_regs(g, COW_IMG(0x10118db0u), in_eax, ecx, g->edx, 0, 2, t22, 0u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
L_10237876: ;
    COW_AT(10237876)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10237730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10237742u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = 1u;
        wr32(sp0 - 8u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x10237756u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ecx = 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1023775du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237765u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1023776eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237774u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237784u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237791u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1023779au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x102377c3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x102377e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x102377ecu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237802u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ecx = 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237808u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1023781eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ecx = 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237824u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ecx = 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x1023782au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237831u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237847u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ecx = 1u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237856u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = (in_edi & 0xffff0000u) | (uint16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x10237861u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10237868u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10237876u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10237730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10237730(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
