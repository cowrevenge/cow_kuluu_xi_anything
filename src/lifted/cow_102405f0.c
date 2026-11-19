/* f_0x102405f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102405f0(Guest* g)
{
    uint32_t eax;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10240601u: eax = g->eax; self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10240601;
    case 0x10240610u: self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10240610;
    case 0x1024061fu: eax = g->eax; self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1024061f;
    case 0x10240636u: eax = g->eax; self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10240636;
    case 0x10240641u: eax = g->eax; self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10240641;
    case 0x10240645u: eax = g->eax; self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10240645;
    case 0x1024064eu: eax = g->eax; self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1024064e;
    case 0x10240656u: eax = g->eax; self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10240656;
    case 0x1024065bu: eax = g->eax; self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1024065b;
    case 0x10240664u: eax = g->eax; self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10240664;
    case 0x10240676u: self = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_10240676;
    case 0x102406acu: eax = g->eax; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_102406ac;
    default: break;
    }
#endif

    COW_AT(102405f0)
    if (rd32(self + 0x1cu) == 1u)
    {
        eax = rd32(self + 0x1cu);
        edx = 1u;
        goto L_102406ac;
    }
    COW_AT(10240601)
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = 1u;
        goto L_102406ac;
    }
    COW_AT(10240610)
    t1 = rd32(COW_IMG(0x102406b0u) + rd8(COW_IMG(0x102406c0u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1024061fu: goto L_1024061f;
    case 0x10240636u: goto L_10240636;
    case 0x10240676u: goto L_10240676;
    case 0x102406acu: eax = (uint32_t)(int16_t)arg1 - 1u; edx = 1u; goto L_102406ac;
    default: rt_fatal(g, COW_IMG(0x10240618u), "switch");
    }
    return 0;
L_1024061f: ;
    COW_AT(1024061f)
    t22 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x18u, t22);
    g->eax = t22;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x1023ffd0u), self, 0);
    t24 = g->ecx;
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_thiscall(g, COW_IMG(0x10037b30u), t24, 0);
    t27 = g->edx;
    g->ebx = in_ebx;
    g->edx = t27;
    return t26;
L_10240636: ;
    COW_AT(10240636)
    if (rd32(self + rd32(self + 0x18u) * 4u + 0x20u) != 0u)
    {
        eax = rd32(self + 0x18u);
        goto L_1024064e;
    }
    eax = rd32(self + 0x18u);
    COW_AT(10240641)
    if (eax == 1u) goto L_1024064e;
    COW_AT(10240645)
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t16 = g->edx;
    g->ebx = in_ebx;
    g->edx = t16;
    return t15;
L_1024064e: ;
    COW_AT(1024064e)
    if (!(rd8(COW_IMG(0x10456a4cu)) & 1u)) goto L_10240664;
    COW_AT(10240656)
    if (eax != 2u) goto L_10240664;
    COW_AT(1024065b)
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x10037c50u), self, 0);
    t18 = g->edx;
    g->ebx = in_ebx;
    g->edx = t18;
    return t17;
L_10240664: ;
    COW_AT(10240664)
    wr32(self + 0x1cu, 1u);
    t19 = rd32(self + 8u);
    wr8(t19 + 0x5du, 1u);
    g->eax = eax;
    g->edx = 1u;
    g->esp = sp0 - 4u;
    t20 = cow_thiscall(g, COW_IMG(0x10037b90u), t19, 0);
    t21 = g->edx;
    g->ebx = in_ebx;
    g->edx = t21;
    return t20;
L_10240676: ;
    COW_AT(10240676)
    wr32(self + 0x18u, 3u);
    g->edx = 1u;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1023ffd0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(t2 + 8u);
    t5 = rd16(t2 + 0x18u);
    wr16(t4 + 0x4cu, (uint16_t)(t5 + 1u));
    t6 = (t3 & 0xffff0000u) | rd16(rd32(t2 + 8u) + 0x4cu);
    g->eax = t4;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10118170u), rd32(t2 + 8u), 1, t6);
    t8 = g->edx;
    g->edx = t8;
    t9 = rd32(COW_IMG(0x104e1d4cu));
    t10 = cow_thiscall(g, COW_IMG(0x10124b70u), t9, 0);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10037b30u), t11, 0);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_102406ac: ;
    COW_AT(102406ac)
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102405f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10240601u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10240610u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024061fu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10240636u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10240641u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10240645u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024064eu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10240656u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024065bu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10240664u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10240676u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        self = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x102406acu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102405f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102405f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
