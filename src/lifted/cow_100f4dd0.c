/* f_0x100f4dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f4dd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_24;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f4de0u: ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_100f4de0;
    case 0x100f4de7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_100f4de7;
    case 0x100f4dedu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_100f4ded;
    case 0x100f4df6u: ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_100f4df6;
    case 0x100f4e05u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_100f4e05;
    case 0x100f4e11u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4e11;
    case 0x100f4e15u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4e15;
    case 0x100f4e21u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4e21;
    case 0x100f4e24u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_24 = rd32(sp0 - 0x24u); goto E_100f4e24;
    case 0x100f4e37u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4e37;
    case 0x100f4e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4e53;
    case 0x100f4e7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f4e7e;
    case 0x100f4e8bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_100f4e8b;
    case 0x100f4e94u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_100f4e94;
    default: break;
    }
#endif

    COW_AT(100f4dd0)
    if (arg2 > 3u) goto L_100f4e94;
    COW_AT(100f4de0)
    t1 = rd32(COW_IMG(0x100f4ea0u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f4de7u: goto L_100f4de7;
    case 0x100f4dedu: goto L_100f4ded;
    case 0x100f4df6u: goto L_100f4df6;
    case 0x100f4e8bu: goto L_100f4e8b;
    default: rt_fatal(g, COW_IMG(0x100f4de0u), "switch");
    }
    return 0;
L_100f4de7: ;
    COW_AT(100f4de7)
    g->esi = in_esi;
    return 0u;
L_100f4ded: ;
    COW_AT(100f4ded)
    g->esi = in_esi;
    return 0x16u;
L_100f4df6: ;
    COW_AT(100f4df6)
    wr32(sp0 - 0x24u, in_esi);
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        eax = arg2;
        edx = in_edx;
        loc_24 = in_esi;
    }
    else
    {
        ecx = rd32(COW_IMG(0x103601bcu));
    COW_AT(100f4e05)
        t2 = rd32(ecx + 0x80u);
        wr32(sp0 - 0x28u, t2);
        g->eax = t2;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x24u;
        t3 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, t2);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    COW_AT(100f4e11)
        if (eax == 0u)
        {
            loc_24 = rd32(sp0 - 0x24u);
        }
        else
        {
    COW_AT(100f4e15)
            wr32(sp0 - 0x28u, 0x10u);
            wr32(sp0 - 0x2cu, eax);
            wr32(sp0 - 0x30u, arg1 + 0x24u);
            g->eax = arg1 + 0x24u;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t6 = cow_cdecl(g, COW_IMG(0x100f3010u), 4, arg1 + 0x24u, eax, 0x10u, rd32(sp0 - 0x24u));
            t7 = g->edx;
            eax = t6;
            edx = t7;
    COW_AT(100f4e21)
            loc_24 = rd32(sp0 - 0x24u);
        }
    }
    COW_AT(100f4e24)
    t8 = rd32(arg1 + 0xbcu);
    wr32(sp0 - 0x28u, t8);
    t9 = (edx & 0xffffff00u) | rd8(arg1 + 0xc4u);
    wr32(sp0 - 0x2cu, t9);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t10 = cow_cdecl(g, COW_IMG(0x1031012bu), 2, t9, t8);
    eax = t10;
    COW_AT(100f4e37)
    wr32(sp0 - 0x30u, eax);
    t11 = rd32(arg1 + 0x40u);
    wr32(sp0 - 0x34u, t11);
    t12 = rd32(arg1 + 0x20u);
    wr32(sp0 - 0x38u, t12);
    t13 = rd32(arg1 + 0xa4u);
    wr32(sp0 - 0x3cu, t13);
    wr32(sp0 - 0x40u, 0x20u);
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->esp = sp0 - 0x38u;
    t14 = cow_call_regs(g, COW_IMG(0x100f4eb0u), sp0 - 0x20u, g->ecx, g->edx, 1, 3, sp0 - 0x20u, 0x20u, t13);
    eax = t14;
    COW_AT(100f4e53)
    wr32(sp0 - 0x3cu, eax);
    wr32(sp0 - 0x40u, arg1 + 0x24u);
    t15 = rd32(arg1 + 0x3cu);
    wr32(sp0 - 0x44u, t15);
    t16 = rd32(arg1 + 0x38u);
    wr32(sp0 - 0x48u, t16);
    t17 = rd32(arg1 + 0x1cu);
    wr32(sp0 - 0x4cu, t17);
    t18 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0x50u, t18);
    t19 = rd32(arg1 + 0xb8u);
    wr32(sp0 - 0x54u, t19);
    t20 = rd32(arg1 + 0xa0u);
    wr32(sp0 - 0x58u, t20);
    g->edx = t18;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10310388u), 8, t20, t19, t18, t17, t16, t15, arg1 + 0x24u, eax);
    t21 = g->edx;
    edx = t21;
    COW_AT(100f4e7e)
    g->esi = rd32(sp0 - 0x24u);
    g->edx = edx;
    return 0x17u;
L_100f4e8b: ;
    COW_AT(100f4e8b)
    g->esi = in_esi;
    return 6u;
L_100f4e94: ;
    COW_AT(100f4e94)
    g->esi = in_esi;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f4dd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f4de0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f4de7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100f4dedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100f4df6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f4e05u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4e11u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4e15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4e21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x30u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4e24u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4e37u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4e53u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x44u;
        g->esi = arg1;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100f4e7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x100f4e8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x100f4e94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f4dd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f4dd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
