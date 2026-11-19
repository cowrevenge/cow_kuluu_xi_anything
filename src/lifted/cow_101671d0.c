/* f_0x101671d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101671d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101671f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101671f0;
    case 0x101671f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101671f8;
    case 0x10167216u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10167216;
    case 0x1016721eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1016721e;
    case 0x1016723fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1016723f;
    case 0x10167247u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10167247;
    case 0x10167267u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10167267;
    case 0x1016726fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1016726f;
    case 0x10167290u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10167290;
    case 0x10167298u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10167298;
    case 0x101672a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x20u); goto E_101672a2;
    case 0x101672a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x20u); goto E_101672a4;
    case 0x101672c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x20u); goto E_101672c3;
    case 0x101672ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x20u); goto E_101672cc;
    case 0x101672ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x20u); goto E_101672ce;
    case 0x101672edu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x20u); goto E_101672ed;
    default: break;
    }
#endif

    COW_AT(101671d0)
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x49u);
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1047d128u)));
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), 0x49u, 0u, 0xffffffffu);
    t1 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t1;
    }
    else
    {
        eax = rd32(sp0 - 8u);
        edx = t1;
    COW_AT(101671f0)
        wr32(COW_IMG(0x10667a74u), eax + 0x30u);
        eax = eax + 0x30u;
    }
    COW_AT(101671f8)
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x53u);
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1047d128u)));
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), 0x53u, 0u, 0xffffffffu);
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
    }
    else
    {
        eax = rd32(sp0 - 8u);
    COW_AT(10167216)
        wr32(COW_IMG(0x1066714cu), eax + 0x30u);
        eax = eax + 0x30u;
    }
    COW_AT(1016721e)
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0x5f6e6f6du);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1047d128u)));
    g->edx = rd32(COW_IMG(0x1047d128u));
    t2 = rd32(COW_IMG(0x1047d128u));
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, t2, 4u, 0x5f6e6f6du, 0xffffffffu);
    t3 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        edx = t3;
    }
    else
    {
        eax = rd32(sp0 - 8u);
        edx = t3;
    COW_AT(1016723f)
        wr32(COW_IMG(0x1057829cu), eax + 0x30u);
    }
    COW_AT(10167247)
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0x32636e6du);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1047d128u)));
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), 4u, 0x32636e6du, 0xffffffffu);
    t4 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t4;
    }
    else
    {
        eax = rd32(sp0 - 8u);
        edx = t4;
    COW_AT(10167267)
        wr32(COW_IMG(0x105782a0u), eax + 0x30u);
        eax = eax + 0x30u;
    }
    COW_AT(1016726f)
    wr32(sp0 - 0x20u, 0xffffffffu);
    wr32(sp0 - 0x24u, 0x6376656cu);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, rd32(COW_IMG(0x1047d128u)));
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), 4u, 0x6376656cu, 0xffffffffu);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = rd32(sp0 - 8u);
        ecx = t5;
        edx = t6;
    COW_AT(10167290)
        wr32(COW_IMG(0x10667a78u), eax + 0x30u);
    }
    COW_AT(10167298)
    wr32(sp0 - 0x20u, in_esi);
    if (rd32(COW_IMG(0x10667a74u)) != 0u)
    {
    COW_AT(101672a2)
        esi = 0u;
L_101672a4: ;
    COW_AT(101672a4)
        wr32(sp0 - 0x24u, 0x64u);
        t7 = esi + rd32(COW_IMG(0x10667a74u));
        wr32(sp0 - 0x28u, t7);
        g->ecx = ecx;
        g->edx = rd32(COW_IMG(0x10667a74u));
        t8 = rd32(COW_IMG(0x10667a74u));
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x1021e870u), 10, t7, 0x64u, in_esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        t9 = g->ecx;
        t10 = g->edx;
        if ((int32_t)(esi + 0x64u) < 102400)
        {
            ecx = t9;
            esi = esi + 0x64u;
            goto L_101672a4;
        }
        ecx = t9;
        edx = t10;
    }
    COW_AT(101672c3)
    if (rd32(COW_IMG(0x1066714cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066714cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1066714cu));
    COW_AT(101672cc)
        esi = 0u;
L_101672ce: ;
    COW_AT(101672ce)
        wr32(sp0 - 0x24u, 0x30u);
        t11 = esi + rd32(COW_IMG(0x1066714cu));
        wr32(sp0 - 0x28u, t11);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x1066714cu));
        g->edx = t11;
        t12 = rd32(COW_IMG(0x1066714cu));
        g->esp = sp0;
        t13 = cow_cdecl(g, COW_IMG(0x1021e870u), 10, t11, 0x30u, in_esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        t14 = g->ecx;
        t15 = g->edx;
        if ((int32_t)(esi + 0x30u) < 135168)
        {
            eax = t13;
            esi = esi + 0x30u;
            goto L_101672ce;
        }
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    COW_AT(101672ed)
    g->esp = sp0 - 0x20u;
    t16 = cow_call_regs(g, COW_IMG(0x1022bda0u), eax, ecx, edx, 1, 0);
    t17 = g->edx;
    t18 = cow_fastcall(g, COW_IMG(0x1022be30u), t16, t17, 0);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = cow_call_regs(g, COW_IMG(0x10223930u), t18, t19, t20, 1, 0);
    t22 = g->edx;
    t23 = cow_fastcall(g, COW_IMG(0x102239c0u), t21, t22, 0);
    t24 = g->ecx;
    t25 = g->edx;
    t26 = cow_call_regs(g, COW_IMG(0x10226180u), t23, t24, t25, 1, 0);
    t27 = g->edx;
    t28 = cow_fastcall(g, COW_IMG(0x10226210u), t26, t27, 0);
    g->esi = in_esi;
    return t28;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101671d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101671f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101671f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10167216u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1016721eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1016723fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10167247u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10167267u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1016726fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10167290u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10167298u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101672a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101672a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101672c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101672ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101672ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101672edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101671d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101671d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
