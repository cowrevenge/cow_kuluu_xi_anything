/* f_0x10206ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10206ef0(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10206f05u: eax = g->eax; in_edx = g->edx; goto E_10206f05;
    case 0x10206f10u: in_edx = g->edx; goto E_10206f10;
    case 0x10206f17u: in_edx = g->edx; goto E_10206f17;
    case 0x10206f1fu: in_edx = g->edx; goto E_10206f1f;
    case 0x10206f36u: in_edx = g->edx; goto E_10206f36;
    case 0x10206f4du: in_edx = g->edx; goto E_10206f4d;
    case 0x10206f64u: eax = g->eax; in_edx = g->edx; goto E_10206f64;
    case 0x10206f8du: eax = g->eax; edx = g->edx; goto E_10206f8d;
    case 0x10206f9cu: eax = g->eax; edx = g->edx; goto E_10206f9c;
    default: break;
    }
#endif

    COW_AT(10206ef0)
    if ((uint16_t)arg1 == 6u) goto L_10206f64;
    COW_AT(10206efb)
    if ((uint16_t)arg1 != 5u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        edx = in_edx;
        goto L_10206f9c;
    }
    COW_AT(10206f05)
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_10206f8d;
    }
    COW_AT(10206f10)
    t1 = rd32(COW_IMG(0x10206fa0u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10206f17u: goto L_10206f17;
    case 0x10206f1fu: goto L_10206f1f;
    case 0x10206f36u: goto L_10206f36;
    case 0x10206f4du: goto L_10206f4d;
    case 0x10206f64u: goto L_10206f64;
    default: rt_fatal(g, COW_IMG(0x10206f10u), "switch");
    }
    return 0;
L_10206f17: ;
    COW_AT(10206f17)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0;
    t14 = cow_call_regs(g, COW_IMG(0x10206830u), g->eax, g->ecx, in_edx, 1, 0);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_10206f1f: ;
    COW_AT(10206f1f)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t10 = cow_stdcall(g, COW_IMG(0x10206a50u), 0);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10206f36: ;
    COW_AT(10206f36)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_stdcall(g, COW_IMG(0x10206a90u), 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_10206f4d: ;
    COW_AT(10206f4d)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_stdcall(g, COW_IMG(0x10206ad0u), 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10206f64: ;
    COW_AT(10206f64)
    g->eax = rd32(COW_IMG(0x10664420u));
    t16 = rd32(COW_IMG(0x10664420u));
    g->esp = sp0;
    t17 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, t16);
    t18 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x10664420u)) + 0xau);
    t19 = cow_call_regs(g, COW_IMG(0x101f7080u), t17, rd32(COW_IMG(0x10663740u)), t18, 0, 2, t18, 0u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_10206f8d: ;
    COW_AT(10206f8d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t21 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037e29cu));
    t22 = g->edx;
    eax = t21;
    edx = t22;
L_10206f9c: ;
    COW_AT(10206f9c)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10206ef0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10206f05u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10206f10u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10206f17u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10206f1fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10206f36u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10206f4du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10206f64u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10206f8du:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10206f9cu:
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
/* blocks no state can start at, and why (the gittable lists their sites):
     10206efb: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10206ef0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10206ef0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
