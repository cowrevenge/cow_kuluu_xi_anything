/* f_0x101f7c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f7c60(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f7c6au: self = g->ecx; in_edx = g->edx; goto E_101f7c6a;
    case 0x101f7c71u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101f7c71;
    case 0x101f7c91u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101f7c91;
    case 0x101f7c99u: self = g->ecx; in_edx = g->edx; goto E_101f7c99;
    case 0x101f7c9cu: ecx = g->ecx; in_edx = g->edx; goto E_101f7c9c;
    case 0x101f7ca3u: ecx = g->ecx; in_edx = g->edx; goto E_101f7ca3;
    case 0x101f7cb1u: ecx = g->ecx; in_edx = g->edx; goto E_101f7cb1;
    case 0x101f7cc6u: self = g->ecx; in_edx = g->edx; goto E_101f7cc6;
    case 0x101f7ccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f7ccf;
    case 0x101f7cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f7cd4;
    case 0x101f7cfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f7cfe;
    case 0x101f7d0cu: ecx = g->ecx; in_edx = g->edx; goto E_101f7d0c;
    case 0x101f7d1cu: ecx = g->ecx; in_edx = g->edx; goto E_101f7d1c;
    case 0x101f7d21u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f7d21;
    case 0x101f7d34u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f7d34;
    default: break;
    }
#endif

    COW_AT(101f7c60)
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101f7c91;
    COW_AT(101f7c6a)
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
        goto L_101f7d34;
    }
    COW_AT(101f7c71)
    t1 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x101fa420u), t2, rd32(COW_IMG(0x10663888u)), g->edx, 0, 1, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101f7c91: ;
    COW_AT(101f7c91)
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101f7d0c;
    COW_AT(101f7c99)
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101f7cc6;
    COW_AT(101f7c9c)
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_101f7d34;
    }
    COW_AT(101f7ca3)
    if (rd32(COW_IMG(0x1066389cu)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_101f7d34;
    }
    ecx = rd32(COW_IMG(0x1066389cu));
    COW_AT(101f7cb1)
    g->eax = (uint32_t)(int16_t)arg2 - 3u;
    g->esp = sp0;
    t6 = cow_fastcall(g, COW_IMG(0x101fccf0u), ecx, in_edx, 0);
    t7 = g->edx;
    wr32(rd32(COW_IMG(0x1066389cu)) + 0x6cu, COW_IMG(0x101f7d70u));
    g->edx = t7;
    return t6;
L_101f7cc6: ;
    COW_AT(101f7cc6)
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x100f94d0u), self, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t10;
        goto L_101f7cfe;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(101f7ccf)
    if (rd32(eax) != 1u) goto L_101f7cfe;
    COW_AT(101f7cd4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x45u);
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0;
    t13 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101f7d40u), 0u, t11, 0u, 0u, 1u, 0u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_101f7cfe: ;
    COW_AT(101f7cfe)
    g->esp = sp0;
    t15 = cow_call_regs(g, COW_IMG(0x101fb910u), eax, rd32(COW_IMG(0x10663894u)), edx, 1, 0);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_101f7d0c: ;
    COW_AT(101f7d0c)
    if ((int16_t)rd16(rd32(COW_IMG(0x10663888u)) + 0x106u) < 2)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663888u));
    COW_AT(101f7d1c)
        g->edx = in_edx;
        g->esp = sp0;
        t17 = cow_call_regs(g, COW_IMG(0x101f9070u), (uint32_t)(int16_t)arg2 - 1u, ecx, g->edx, 1, 0);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    COW_AT(101f7d21)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t19 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10384ff4u), 1u, 0u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_101f7d34: ;
    COW_AT(101f7d34)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f7c60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f7c6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x101f7c71u:
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
    case 0x101f7c91u:
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
    case 0x101f7c99u:
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
    case 0x101f7c9cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x101f7ca3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101f7cb1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101f7cc6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x101f7ccfu:
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
    case 0x101f7cd4u:
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
    case 0x101f7cfeu:
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
    case 0x101f7d0cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101f7d1cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101f7d21u:
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
    case 0x101f7d34u:
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
void cow_adapter_101f7c60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101f7c60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
