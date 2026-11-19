/* f_0x101e6250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e6250(Guest* g)
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 16u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e625fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e625f;
    case 0x101e626eu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e626e;
    case 0x101e6275u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e6275;
    case 0x101e6288u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e6288;
    case 0x101e629au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101e629a;
    case 0x101e62b9u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e62b9;
    case 0x101e62c8u: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e62c8;
    case 0x101e62d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101e62d6;
    case 0x101e62f5u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e62f5;
    case 0x101e6304u: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e6304;
    case 0x101e6312u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101e6312;
    case 0x101e6336u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e6336;
    case 0x101e633du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e633d;
    case 0x101e634cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101e634c;
    default: break;
    }
#endif

    COW_AT(101e6250)
    wr32(sp0 - 4u, in_esi);
    if (rd16(sp0 + 4u) != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101e634c;
    }
    COW_AT(101e625f)
    if ((uint32_t)(int16_t)arg2 - 1u > 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101e633d;
    }
    COW_AT(101e626e)
    t1 = rd32(COW_IMG(0x101e6350u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101e6275u: goto L_101e6275;
    case 0x101e62b9u: goto L_101e62b9;
    case 0x101e62f5u: goto L_101e62f5;
    case 0x101e6336u: goto L_101e6336;
    default: rt_fatal(g, COW_IMG(0x101e626eu), "switch");
    }
    return 0;
L_101e6275: ;
    COW_AT(101e6275)
    t21 = rd32(COW_IMG(0x10663520u));
    wr8(sp0 + 4u, 0u);
    if (t21 == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101e633d;
    }
    ecx = t21;
    COW_AT(101e6288)
    wr32(sp0 - 8u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t22 = cow_thiscall(g, COW_IMG(0x101e3510u), ecx, 1, sp0 + 4u);
    t23 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        eax = t22;
        edx = t23;
        goto L_101e633d;
    }
    eax = t22;
    edx = t23;
    COW_AT(101e629a)
    t24 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t24);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x101e5c10u), self, 1, t24);
    t26 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x1037f394u));
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f394u));
    t28 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t28;
    return t27;
L_101e62b9: ;
    COW_AT(101e62b9)
    t13 = rd32(COW_IMG(0x10663520u));
    wr8(sp0 + 4u, 0u);
    if (t13 == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101e633d;
    }
    ecx = t13;
    COW_AT(101e62c8)
    wr32(sp0 - 8u, sp0 + 4u);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x101e3510u), ecx, 1, sp0 + 4u);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_101e633d;
    }
    edx = t15;
    COW_AT(101e62d6)
    t16 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t16);
    g->eax = t16;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x101e5c50u), self, 1, t16);
    t18 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x1037f394u));
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f394u));
    t20 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t20;
    return t19;
L_101e62f5: ;
    COW_AT(101e62f5)
    t4 = rd32(COW_IMG(0x10663520u));
    wr8(sp0 + 4u, 0u);
    if (t4 == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_101e633d;
    }
    ecx = t4;
    COW_AT(101e6304)
    wr32(sp0 - 8u, sp0 + 4u);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x101e3510u), ecx, 1, sp0 + 4u);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_101e633d;
    }
    edx = t6;
    COW_AT(101e6312)
    t7 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t7);
    t8 = (uint32_t)(int16_t)rd16(self + 0x16u);
    wr32(sp0 - 0xcu, t8);
    g->eax = t7;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_stdcall(g, COW_IMG(0x101e5d60u), 2, t8, t7);
    t10 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x1037f394u));
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f394u));
    t12 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t12;
    return t11;
L_101e6336: ;
    COW_AT(101e6336)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x101e5f60u), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_101e633d: ;
    COW_AT(101e633d)
    wr32(sp0 - 8u, COW_IMG(0x1037f394u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f394u));
    t30 = g->edx;
    eax = t29;
    edx = t30;
L_101e634c: ;
    COW_AT(101e634c)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e6250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e625fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101e626eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101e6275u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101e6288u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101e629au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e62b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101e62c8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101e62d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e62f5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101e6304u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101e6312u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e6336u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101e633du:
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
    case 0x101e634cu:
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
void cow_adapter_101e6250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101e6250(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
