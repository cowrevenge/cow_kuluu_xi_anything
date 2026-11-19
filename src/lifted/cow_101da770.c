/* f_0x101da770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101da770(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101da77fu: in_edx = g->edx; goto E_101da77f;
    case 0x101da786u: in_edx = g->edx; goto E_101da786;
    case 0x101da79cu: in_edx = g->edx; goto E_101da79c;
    case 0x101da7b2u: in_edx = g->edx; goto E_101da7b2;
    case 0x101da7c8u: in_edx = g->edx; goto E_101da7c8;
    case 0x101da7deu: in_edx = g->edx; goto E_101da7de;
    case 0x101da7f4u: in_edx = g->edx; goto E_101da7f4;
    case 0x101da80au: in_edx = g->edx; goto E_101da80a;
    case 0x101da80eu: in_edx = g->edx; goto E_101da80e;
    case 0x101da812u: in_edx = g->edx; goto E_101da812;
    case 0x101da814u: in_edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101da814;
    case 0x101da828u: eax = g->eax; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_101da828;
    default: break;
    }
#endif

    COW_AT(101da770)
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_101da828;
    }
    COW_AT(101da77f)
    t1 = rd32(COW_IMG(0x101da82cu) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101da786u: goto L_101da786;
    case 0x101da79cu: goto L_101da79c;
    case 0x101da7b2u: goto L_101da7b2;
    case 0x101da7c8u: goto L_101da7c8;
    case 0x101da7deu: goto L_101da7de;
    case 0x101da7f4u: goto L_101da7f4;
    case 0x101da80au: goto L_101da80a;
    case 0x101da80eu: goto L_101da80e;
    case 0x101da812u: goto L_101da812;
    default: rt_fatal(g, COW_IMG(0x101da77fu), "switch");
    }
    return 0;
L_101da786: ;
    COW_AT(101da786)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t16 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ef54u), 1u, 0u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_101da79c: ;
    COW_AT(101da79c)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ef2cu), 1u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101da7b2: ;
    COW_AT(101da7b2)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ef18u), 1u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101da7c8: ;
    COW_AT(101da7c8)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ef04u), 1u, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_101da7de: ;
    COW_AT(101da7de)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037eef0u), 1u, 0u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101da7f4: ;
    COW_AT(101da7f4)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037eec8u), 1u, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_101da80a: ;
    COW_AT(101da80a)
    loc_4 = 0x22u;
L_101da814: ;
    COW_AT(101da814)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_stdcall(g, COW_IMG(0x101da6a0u), 1, loc_4);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x101d8140u), t2, rd32(COW_IMG(0x10663428u)), g->edx, 0, 2, 0u, 0u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101da828: ;
    COW_AT(101da828)
    g->edx = edx;
    return eax;
L_101da80e: ;
    COW_AT(101da80e)
    loc_4 = 0x23u;
    goto L_101da814;
L_101da812: ;
    COW_AT(101da812)
    loc_4 = 0x21u;
    goto L_101da814;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101da770(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101da77fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da786u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da79cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da7b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da7c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da7deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da7f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da80au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da80eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da812u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da814u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_edx;
        uint32_t loc_4;
        in_edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101da828u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101da770(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101da770(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
