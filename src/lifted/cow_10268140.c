/* f_0x10268140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10268140(Guest* g)
{
    uint32_t al_m4;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10268163u: in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_10268163;
    case 0x1026816au: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_1026816a;
    case 0x10268177u: in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_10268177;
    case 0x1026817bu: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_1026817b;
    case 0x10268188u: in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_10268188;
    case 0x1026818cu: ecx = g->ecx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_1026818c;
    case 0x10268193u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_10268193;
    case 0x102681a0u: in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_102681a0;
    case 0x102681a5u: in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_102681a5;
    case 0x102681aau: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_102681aa;
    case 0x102681b7u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_102681b7;
    case 0x102681d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_102681d1;
    case 0x102681e1u: ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_102681e1;
    case 0x102681e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_102681e6;
    case 0x102681f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_102681f9;
    case 0x102681feu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_102681fe;
    case 0x1026820eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_1026820e;
    case 0x10268213u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_10268213;
    case 0x1026822bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_1026822b;
    case 0x10268230u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_10268230;
    case 0x10268243u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_10268243;
    case 0x10268254u: ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_10268254;
    case 0x1026825bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_1026825b;
    case 0x10268263u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_10268263;
    case 0x1026826au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x10u); in_esi = rd32(sp1 - 0xcu); al_m4 = rd32(sp1 - 4u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x10u); g->esi = rd32(sp1 - 0xcu); goto E_1026826a;
    default: break;
    }
#endif

    COW_AT(10268140)
    if (arg5 == 0u) goto L_10268188;
    COW_AT(10268163)
    if (arg4 != 0u) goto L_10268177;
    COW_AT(1026816a)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = arg3;
    return 0x80004003u;
L_10268177: ;
    COW_AT(10268177)
    if ((arg5 & 3u) == arg5) goto L_10268188;
    COW_AT(1026817b)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = arg3;
    return 0x80070057u;
L_10268188: ;
    COW_AT(10268188)
    if (arg3 == 0u)
    {
        ecx = arg5;
        goto L_102681b7;
    }
    COW_AT(1026818c)
    if (arg2 != 0u) goto L_102681a0;
    COW_AT(10268193)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = arg3;
    return 0x80004003u;
L_102681a0: ;
    COW_AT(102681a0)
    if ((arg3 & 3u) == 1u)
    {
        ecx = arg2;
        goto L_102681b7;
    }
    COW_AT(102681a5)
    if ((arg3 & 3u) == 2u)
    {
        ecx = arg2;
        goto L_102681b7;
    }
    COW_AT(102681aa)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = arg3;
    return 0x80070057u;
L_102681b7: ;
    COW_AT(102681b7)
    t1 = rd32(arg1 + 0x34u);
    g->ecx = ecx;
    g->edx = arg3;
    g->esp = sp1 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t1);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->ecx;
    t3 = g->edx;
    if ((arg3 & 3u) != 1u)
    {
        ecx = t2;
        edx = t3;
        al_m4 = t1;
    COW_AT(102681e1)
        if ((arg3 & 3u) == 2u)
        {
    COW_AT(102681e6)
            t6 = rd32(arg2) + rd32(arg1 + 0x18u);
            t7 = rd32(arg2);
            t8 = rd32(arg1 + 0x18u);
            wr32(arg1 + 0x18u, t6);
            t9 = rd32(arg2 + 4u);
            wr32(arg1 + 0x1cu, rd32(arg1 + 0x1cu) + t9 + (t7 + t8 < t8));
            ecx = t7;
            edx = t9;
        }
    }
    else
    {
        al_m4 = t1;
    COW_AT(102681d1)
        t4 = rd32(arg2);
        wr32(arg1 + 0x18u, t4);
        t5 = rd32(arg2 + 4u);
        wr32(arg1 + 0x1cu, t5);
        ecx = t4;
        edx = t5;
    }
    COW_AT(102681f9)
    if ((arg5 & 3u) != 1u)
    {
    COW_AT(1026820e)
        if ((arg5 & 3u) != 3u)
        {
    COW_AT(1026822b)
            if ((arg5 & 3u) == 2u)
            {
    COW_AT(10268230)
                t18 = rd32(arg4) + rd32(arg1 + 0x20u);
                t19 = rd32(arg4);
                t20 = rd32(arg1 + 0x20u);
                wr32(arg1 + 0x20u, t18);
                t21 = rd32(arg4 + 4u);
                wr32(arg1 + 0x24u, t21 + rd32(arg1 + 0x24u) + (t19 + t20 < t20));
                ecx = t19;
                edx = t21;
            }
        }
        else
        {
    COW_AT(10268213)
            t12 = rd32(arg4) + rd32(arg1 + 0x18u);
            t13 = rd32(arg4 + 4u);
            t14 = rd32(arg1 + 0x1cu);
            t15 = rd32(arg4);
            t16 = rd32(arg1 + 0x18u);
            wr32(arg1 + 0x20u, t12);
            t17 = t13 + t14 + (t15 + t16 < t16);
            wr32(arg1 + 0x24u, t17);
            ecx = t12;
            edx = t17;
        }
    }
    else
    {
    COW_AT(102681fe)
        t10 = rd32(arg4);
        wr32(arg1 + 0x20u, t10);
        t11 = rd32(arg4 + 4u);
        wr32(arg1 + 0x24u, t11);
        ecx = t10;
        edx = t11;
    }
    COW_AT(10268243)
    g->edx = edx;
    g->esp = sp1 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, al_m4);   /* kernel32.dll!LeaveCriticalSection */
    t22 = g->edx;
    if ((arg5 & 3u) == 0u)
    {
        eax = 0u;
        edx = t22;
    }
    else
    {
    COW_AT(10268254)
        g->eax = 0u;
        g->edx = rd32(arg1);
        t23 = rd32(arg1);
        g->esp = sp1 - 0x10u;
        t24 = cow_thiscall(g, rd32(t23 + 0x54u), arg1, 0);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    COW_AT(1026825b)
    if ((arg3 & 3u) != 0u)
    {
    COW_AT(10268263)
        g->eax = rd32(arg1);
        g->edx = edx;
        t26 = rd32(arg1);
        g->esp = sp1 - 0x10u;
        t27 = cow_thiscall(g, rd32(t26 + 0x50u), arg1, 0);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    COW_AT(1026826a)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10268140(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x10268163u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->eax = arg3 & 3u;
        g->ecx = arg5;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x1026816au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10268177u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->eax = arg3 & 3u;
        g->ecx = arg5;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x1026817bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10268188u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->eax = arg3 & 3u;
        g->ecx = arg5;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x1026818cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->eax = arg3 & 3u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x10268193u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102681a0u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->eax = arg3 & 3u;
        g->ecx = arg2;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x102681a5u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->eax = arg3 & 3u;
        g->ecx = arg2;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x102681aau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102681b7u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x102681d1u:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x102681e1u:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->eax = arg3 & 3u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x102681e6u:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x102681f9u:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x102681feu:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x1026820eu:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x10268213u:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x1026822bu:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x10268230u:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x10268243u:
    {
        uint32_t al_m4;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg5 & 3u;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x10268254u:
    {
        uint32_t al_m4;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x1026825bu:
    {
        uint32_t al_m4;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp1 - 8u, arg3 & 3u);
        (void)sp0;
        return 1;
    }
    case 0x10268263u:
    {
        uint32_t al_m4;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026826au:
    {
        uint32_t al_m4;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x10u);
        in_esi = rd32(sp1 - 0xcu);
        al_m4 = rd32(sp1 - 4u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10268140(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10268140(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
