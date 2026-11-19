/* f_0x101f47f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f47f0(Guest* g)
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
    case 0x101f47feu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101f47fe;
    case 0x101f480au: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101f480a;
    case 0x101f482au: eax = g->eax; edx = g->edx; goto E_101f482a;
    case 0x101f4831u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f4831;
    case 0x101f4835u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f4835;
    case 0x101f485au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f485a;
    case 0x101f485eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f485e;
    case 0x101f4887u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f4887;
    case 0x101f4891u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f4891;
    case 0x101f489eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f489e;
    case 0x101f48afu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f48af;
    case 0x101f48beu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101f48be;
    default: break;
    }
#endif

    COW_AT(101f47f0)
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101f48be;
    }
    ecx = rd32(COW_IMG(0x106631d4u));
    COW_AT(101f47fe)
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101f48be;
    }
    COW_AT(101f480a)
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x101d30f0u), in_eax, ecx, g->edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101d3ef0u), rd32(COW_IMG(0x106631d4u)), 1, t1);
    t4 = g->edx;
    if ((uint32_t)(int16_t)arg2 - 1u > 3u)
    {
        eax = t3;
        edx = t4;
        goto L_101f48af;
    }
    eax = t3;
    edx = t4;
    COW_AT(101f482a)
    t5 = rd32(COW_IMG(0x101f48c4u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t5 - RD)
    {
    case 0x101f4831u: goto L_101f4831;
    case 0x101f485au: goto L_101f485a;
    case 0x101f4887u: goto L_101f4887;
    case 0x101f489eu: goto L_101f489e;
    default: rt_fatal(g, COW_IMG(0x101f482au), "switch");
    }
    return 0;
L_101f4831: ;
    COW_AT(101f4831)
    if (eax == 0u) goto L_101f48af;
    COW_AT(101f4835)
    t16 = rd32(eax + 0x10u);
    t17 = (edx & 0xffffff00u) | rd8(eax + 5u);
    g->eax = eax;
    g->edx = t17;
    g->esp = sp0;
    t18 = cow_thiscall(g, COW_IMG(0x101d37e0u), rd32(COW_IMG(0x106631d4u)), 2, t17, t16);
    t19 = g->edx;
    g->edx = t19;
    t20 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ecbcu));
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_101f485a: ;
    COW_AT(101f485a)
    if (eax == 0u) goto L_101f48af;
    COW_AT(101f485e)
    t10 = rd32(eax + 0x10u);
    t11 = (edx & 0xffffff00u) | rd8(eax + 5u);
    g->eax = eax;
    g->edx = t11;
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x101d3c40u), rd32(COW_IMG(0x106631d4u)), 4, t11, t10, 1u, 1u);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ecbcu));
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101f4887: ;
    COW_AT(101f4887)
    if (rd32(COW_IMG(0x106631e4u)) == 0u) goto L_101f48be;
    ecx = rd32(COW_IMG(0x106631e4u));
    COW_AT(101f4891)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x101d6c90u), ecx, 1, COW_IMG(0x101f4a50u));
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101f489e: ;
    COW_AT(101f489e)
    g->edx = edx;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x101d3cc0u), eax, rd32(COW_IMG(0x106631d4u)), g->edx, 0, 3, 1u, 1u, 1u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_101f48af: ;
    COW_AT(101f48af)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t22 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037ecbcu));
    t23 = g->edx;
    eax = t22;
    edx = t23;
L_101f48be: ;
    COW_AT(101f48be)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f47f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f47feu:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_edx;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101f480au:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_edx;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101f482au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        g->ecx = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101f4831u:
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
    case 0x101f4835u:
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
    case 0x101f485au:
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
    case 0x101f485eu:
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
    case 0x101f4887u:
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
    case 0x101f4891u:
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
    case 0x101f489eu:
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
    case 0x101f48afu:
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
    case 0x101f48beu:
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
void cow_adapter_101f47f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101f47f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
