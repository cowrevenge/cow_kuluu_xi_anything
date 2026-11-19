/* f_0x100667a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100667a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_628;
    uint32_t loc_640;
    uint32_t loc_644;
    uint32_t loc_648;
    uint32_t loc_64c;
    uint32_t loc_650;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1628u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10066817u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_650 = rd32(sp0 - 0x650u); loc_64c = rd32(sp0 - 0x64cu); loc_648 = rd32(sp0 - 0x648u); loc_644 = rd32(sp0 - 0x644u); loc_640 = rd32(sp0 - 0x640u); loc_628 = rd32(sp0 - 0x628u); goto E_10066817;
    case 0x1006683au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_650 = rd32(sp0 - 0x650u); goto E_1006683a;
    case 0x10066842u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_650 = rd32(sp0 - 0x650u); goto E_10066842;
    case 0x10066893u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_650 = rd32(sp0 - 0x650u); goto E_10066893;
    case 0x100668afu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100668af;
    case 0x100668b4u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100668b4;
    case 0x100668b9u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_100668b9;
    case 0x100668ccu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_650 = rd32(sp0 - 0x650u); loc_64c = rd32(sp0 - 0x64cu); loc_648 = rd32(sp0 - 0x648u); loc_644 = rd32(sp0 - 0x644u); loc_640 = rd32(sp0 - 0x640u); loc_628 = rd32(sp0 - 0x628u); goto E_100668cc;
    default: break;
    }
#endif

    COW_AT(100667a0)
    wr32(sp0 - 0x640u, in_ebx);
    wr32(sp0 - 0x644u, in_ebp);
    wr32(sp0 - 0x648u, in_esi);
    wr32(sp0 - 0x64cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x64cu;
    t1 = cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t2 = g->edx;
    wr8(sp0 - 0x63bu, 7u);
    wr8(sp0 - 0x633u, 7u);
    wr16(sp0 - 0x636u, 0x3c3eu);
    wr16(sp0 - 0x62eu, 0x3c3eu);
    wr32(sp0 - 0x650u, arg1);
    wr8(sp0 - 0x63cu, 0x7cu);
    wr8(sp0 - 0x639u, 0x70u);
    wr8(sp0 - 0x63au, 2u);
    wr8(sp0 - 0x634u, 0x7cu);
    wr8(sp0 - 0x631u, 0x70u);
    wr8(sp0 - 0x632u, 3u);
    wr8(sp0 - 0x62fu, 0x1cu);
    g->eax = arg1;
    g->edx = (t2 & 0xffffff00u) | 0x70u;
    t3 = cow_thiscall(g, COW_IMG(0x10068200u), sp0 - 0x604u, 1, arg1);
    t4 = g->edx;
    wr32(sp0 - 0x628u, t3);
    if ((int32_t)arg3 >= (int32_t)t3)
    {
        eax = t3;
        edx = t4;
        loc_640 = in_ebx;
        loc_644 = in_ebp;
        loc_648 = in_esi;
        loc_64c = in_edi;
        goto L_100668cc;
    }
    eax = t3;
    edx = t4;
    ebx = 0u;
    ebp = in_ebp;
    esi = arg3;
    loc_640 = in_ebx;
    loc_644 = in_ebp;
    loc_648 = in_esi;
    loc_64c = in_edi;
    loc_628 = t3;
L_10066817: ;
    COW_AT(10066817)
    wr32(sp0 - 0x650u, arg4);
    wr32(sp0 - 0x654u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x650u;
    t5 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
    wr32(sp0 - 0x654u, t5);
    wr32(sp0 - 0x658u, sp0 - 0x634u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->edx = sp0 - 0x634u;
    g->esp = sp0 - 0x64cu;
    t6 = cow_thiscall(g, COW_IMG(0x100668f0u), self, 3, sp0 - 0x634u, t5, arg4);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
    COW_AT(10066842)
        wr32(sp0 - 0x650u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x64cu;
        t8 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
        t9 = g->edx;
        wr32(sp0 - 0x650u, t8);
        wr32(sp0 - 0x654u, sp0 - 0x614u);
        g->ebx = ebx;
        t10 = cow_thiscall(g, COW_IMG(0x100660a0u), self, 2, sp0 - 0x614u, t8);
        wr32(sp0 - 0x650u, 8u);
        wr32(sp0 - 0x624u, rd32(t10));
        t11 = rd32(t10 + 4u);
        wr32(sp0 - 0x620u, t11);
        t12 = rd32(t10 + 8u);
        wr32(sp0 - 0x61cu, t12);
        wr32(sp0 - 0x624u, rd32(t10));
        t13 = rd32(t10 + 4u);
        wr32(sp0 - 0x620u, t13);
        t14 = rd32(t10 + 8u);
        wr32(sp0 - 0x61cu, t14);
        t15 = rd32(t10 + 0xcu);
        wr8(sp0 - 0x637u, (uint8_t)t15);
        eax = sp0 - 0x63cu;
        edx = t14;
        ebx = t15;
        loc_650 = 8u;
    }
    else
    {
        edx = t7;
    COW_AT(1006683a)
        wr32(sp0 - 0x650u, 0xcu);
        eax = sp0 - 0x634u;
        loc_650 = 0xcu;
    }
    COW_AT(10066893)
    wr32(sp0 - 0x654u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x64cu;
    cow_thiscall(g, COW_IMG(0x10065d60u), arg2, 2, eax, loc_650);
    t16 = g->edx;
    if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 - 0x628u))
    {
        eax = rd32(sp0 - 0x628u);
        edx = t16;
        ebp = arg2;
        esi = esi + 1u;
        loc_640 = rd32(sp0 - 0x640u);
        loc_644 = rd32(sp0 - 0x644u);
        loc_648 = rd32(sp0 - 0x648u);
        loc_64c = rd32(sp0 - 0x64cu);
        loc_628 = rd32(sp0 - 0x628u);
        goto L_10066817;
    }
    eax = rd32(sp0 - 0x628u);
    edx = t16;
    COW_AT(100668af)
    if ((int32_t)ebx < 20)
    {
        loc_640 = rd32(sp0 - 0x640u);
        loc_644 = rd32(sp0 - 0x644u);
        loc_648 = rd32(sp0 - 0x648u);
        loc_64c = rd32(sp0 - 0x64cu);
    }
    else
    {
    COW_AT(100668b4)
        if ((int32_t)ebx > 24)
        {
            loc_640 = rd32(sp0 - 0x640u);
            loc_644 = rd32(sp0 - 0x644u);
            loc_648 = rd32(sp0 - 0x648u);
            loc_64c = rd32(sp0 - 0x64cu);
        }
        else
        {
    COW_AT(100668b9)
            wr32(sp0 - 0x650u, 8u);
            wr32(sp0 - 0x654u, sp0 - 0x63cu);
            wr8(sp0 - 0x637u, 0x1du);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x64cu;
            t17 = cow_thiscall(g, COW_IMG(0x10065d60u), arg2, 2, sp0 - 0x63cu, 8u);
            t18 = g->edx;
            eax = t17;
            edx = t18;
            loc_640 = rd32(sp0 - 0x640u);
            loc_644 = rd32(sp0 - 0x644u);
            loc_648 = rd32(sp0 - 0x648u);
            loc_64c = rd32(sp0 - 0x64cu);
        }
    }
L_100668cc: ;
    COW_AT(100668cc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x64cu;
    t19 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t20 = g->edx;
    g->ebx = rd32(sp0 - 0x640u);
    g->esi = rd32(sp0 - 0x648u);
    g->edi = rd32(sp0 - 0x64cu);
    g->ebp = rd32(sp0 - 0x644u);
    g->edx = t20;
    return t19;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100667a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10066817u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_628;
        uint32_t loc_640;
        uint32_t loc_644;
        uint32_t loc_648;
        uint32_t loc_64c;
        uint32_t loc_650;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_650 = rd32(sp0 - 0x650u);
        loc_64c = rd32(sp0 - 0x64cu);
        loc_648 = rd32(sp0 - 0x648u);
        loc_644 = rd32(sp0 - 0x644u);
        loc_640 = rd32(sp0 - 0x640u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x64cu;
        (void)sp0;
        return 1;
    }
    case 0x1006683au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_650;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_650 = rd32(sp0 - 0x650u);
        g->esp = sp0 - 0x64cu;
        wr32(sp0 - 0x658u, sp0 - 0x634u);
        (void)sp0;
        return 1;
    }
    case 0x10066842u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_650;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_650 = rd32(sp0 - 0x650u);
        g->esp = sp0 - 0x64cu;
        wr32(sp0 - 0x658u, sp0 - 0x634u);
        (void)sp0;
        return 1;
    }
    case 0x10066893u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_650;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_650 = rd32(sp0 - 0x650u);
        g->esp = sp0 - 0x650u;
        wr32(sp0 - 0x658u, sp0 - 0x634u);
        (void)sp0;
        return 1;
    }
    case 0x100668afu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x64cu;
        g->ebp = arg2;
        wr32(sp0 - 0x658u, sp0 - 0x634u);
        (void)sp0;
        return 1;
    }
    case 0x100668b4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x64cu;
        g->ebp = arg2;
        wr32(sp0 - 0x658u, sp0 - 0x634u);
        (void)sp0;
        return 1;
    }
    case 0x100668b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x64cu;
        g->ebp = arg2;
        wr32(sp0 - 0x658u, sp0 - 0x634u);
        (void)sp0;
        return 1;
    }
    case 0x100668ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_628;
        uint32_t loc_640;
        uint32_t loc_644;
        uint32_t loc_648;
        uint32_t loc_64c;
        uint32_t loc_650;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_650 = rd32(sp0 - 0x650u);
        loc_64c = rd32(sp0 - 0x64cu);
        loc_648 = rd32(sp0 - 0x648u);
        loc_644 = rd32(sp0 - 0x644u);
        loc_640 = rd32(sp0 - 0x640u);
        loc_628 = rd32(sp0 - 0x628u);
        g->esp = sp0 - 0x64cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100667a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100667a0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
