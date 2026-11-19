/* f_0x10196e40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10196e40(Guest* g)
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
    case 0x10196e4cu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_10196e4c;
    case 0x10196e5bu: self = g->ecx; in_edx = g->edx; goto E_10196e5b;
    case 0x10196e62u: self = g->ecx; in_edx = g->edx; goto E_10196e62;
    case 0x10196e71u: self = g->ecx; in_edx = g->edx; goto E_10196e71;
    case 0x10196e80u: self = g->ecx; in_edx = g->edx; goto E_10196e80;
    case 0x10196e8fu: self = g->ecx; in_edx = g->edx; goto E_10196e8f;
    case 0x10196e9eu: in_edx = g->edx; goto E_10196e9e;
    case 0x10196eb4u: in_edx = g->edx; goto E_10196eb4;
    case 0x10196ecau: self = g->ecx; in_edx = g->edx; goto E_10196eca;
    case 0x10196f03u: eax = g->eax; edx = g->edx; goto E_10196f03;
    default: break;
    }
#endif

    COW_AT(10196e40)
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10196f03;
    }
    COW_AT(10196e4c)
    if ((uint32_t)(int16_t)arg2 - 1u > 6u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_10196f03;
    }
    COW_AT(10196e5b)
    t1 = rd32(COW_IMG(0x10196f08u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10196e62u: goto L_10196e62;
    case 0x10196e71u: goto L_10196e71;
    case 0x10196e80u: goto L_10196e80;
    case 0x10196e8fu: goto L_10196e8f;
    case 0x10196e9eu: goto L_10196e9e;
    case 0x10196eb4u: goto L_10196eb4;
    case 0x10196ecau: goto L_10196eca;
    default: rt_fatal(g, COW_IMG(0x10196e5bu), "switch");
    }
    return 0;
L_10196e62: ;
    COW_AT(10196e62)
    g->edx = in_edx;
    g->esp = sp0;
    t19 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 3u, 0u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_10196e71: ;
    COW_AT(10196e71)
    g->edx = in_edx;
    g->esp = sp0;
    t17 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 3u, 1u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_10196e80: ;
    COW_AT(10196e80)
    g->edx = in_edx;
    g->esp = sp0;
    t15 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x42u, 0u);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_10196e8f: ;
    COW_AT(10196e8f)
    g->edx = in_edx;
    g->esp = sp0;
    t13 = cow_call_regs(g, COW_IMG(0x10193830u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x42u, 1u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_10196e9e: ;
    COW_AT(10196e9e)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a730u), 1u, 0u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_10196eb4: ;
    COW_AT(10196eb4)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037a71cu), 1u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10196eca: ;
    COW_AT(10196eca)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0x8fu);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10312031u), 2, COW_IMG(0x106626d8u), t2);
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10196f30u), 0u, COW_IMG(0x106626d8u), 0u, 0u, 1u, 0u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_10196f03: ;
    COW_AT(10196f03)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10196e40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10196e4cu:
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
    case 0x10196e5bu:
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
    case 0x10196e62u:
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
    case 0x10196e71u:
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
    case 0x10196e80u:
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
    case 0x10196e8fu:
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
    case 0x10196e9eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10196eb4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10196ecau:
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
    case 0x10196f03u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
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
void cow_adapter_10196e40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10196e40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
