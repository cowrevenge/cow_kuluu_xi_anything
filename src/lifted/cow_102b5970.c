/* f_0x102b5970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_102b5970(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b5995u: eax = g->eax; edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b5995;
    case 0x102b599du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b599d;
    case 0x102b59d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b59d7;
    case 0x102b59dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b59db;
    case 0x102b59e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b59e2;
    case 0x102b59f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b59f5;
    case 0x102b5a26u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b5a26;
    case 0x102b5a2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b5a2d;
    case 0x102b5a30u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b5a30;
    case 0x102b5a47u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b5a47;
    case 0x102b5a52u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102b5a52;
    default: break;
    }
#endif

    COW_AT(102b5970)
    q1 = (int64_t)cow_muls(0x55555556u, arg2);
    t2 = rd32(arg1 + 0x34u);
    wr32(arg1 + 0x48u, arg2);
    t3 = cow_qhi(q1) + (cow_qhi(q1) >> 0x1fu);
    wr32(arg1 + 0x44u, t3);
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
    COW_AT(102b5995)
        g->eax = eax;
        g->esp = sp0 - 8u;
        t4 = cow_stdcall(g, COW_IMG(0x102a9540u), 0);
        wr32(arg1 + 0x34u, t4);
    }
    COW_AT(102b599d)
    wr32(rd32(arg1 + 0x34u) + 0x14u, arg3);
    t5 = rd32(arg1 + 0x34u);
    g->ecx = t5;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102a9910u), 4, t5, 0u, arg4, 3u);
    t6 = g->ecx;
    t7 = rd32(arg1 + 0x34u);
    g->ecx = t6;
    g->edx = arg5;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102a9910u), 4, t7, 1u, arg5, 3u);
    t8 = g->ecx;
    t9 = g->edx;
    if (arg6 != 0u)
    {
        ecx = t8;
        edx = t9;
    COW_AT(102b59d7)
        if ((int32_t)arg2 > 0)
        {
    COW_AT(102b59db)
            if (rd32(arg1 + 0x4cu) == 0u)
            {
                eax = rd32(arg1 + 0x4cu);
            }
            else
            {
                eax = rd32(arg1 + 0x4cu);
    COW_AT(102b59e2)
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t10 = cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103c1fb0u), 0x1b2u);
                t11 = g->ecx;
                t12 = g->edx;
                eax = t10;
                ecx = t11;
                edx = t12;
            }
    COW_AT(102b59f5)
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t13 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, arg2 << 2u, COW_IMG(0x103c1fb0u), 0x1b2u);
            wr32(arg1 + 0x4cu, t13);
            esi = arg6;
            edi = t13;
            ecx = arg2 << 2u >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = 0u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        }
    }
    COW_AT(102b5a26)
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
    }
    else
    {
        eax = rd32(arg1 + 0x34u);
    COW_AT(102b5a2d)
        eax = rd32(eax + 0x54u);
    }
    COW_AT(102b5a30)
    g->eax = eax;
    g->ecx = arg3;
    g->edx = arg1 + 0x14u;
    g->esp = sp0 - 0xcu;
    t14 = cow_cdecl(g, COW_IMG(0x1028da40u), 3, arg1 + 0x14u, eax, arg3);
    t15 = g->ecx;
    t16 = g->edx;
    if (arg6 == 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
    COW_AT(102b5a47)
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x102b56d0u), 2, arg1, 0u);
    }
    COW_AT(102b5a52)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b5970(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b5995u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b599du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b59d7u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = arg6;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b59dbu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = arg6;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b59e2u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = arg6;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b59f5u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = arg6;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102b5a26u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102b5a2du:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102b5a30u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102b5a47u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102b5a52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b5970(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b5970(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
