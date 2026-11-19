/* f_0x102821b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102821b0(Guest* g)
{
    double d1;
    double d13;
    double d14;
    double d2;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102821d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102821d7;
    case 0x102821dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102821df;
    case 0x102821e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102821e9;
    case 0x102821f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102821f1;
    case 0x1028221fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1028221f;
    case 0x10282229u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10282229;
    case 0x1028223fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; goto E_1028223f;
    case 0x10282254u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; goto E_10282254;
    case 0x1028226bu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0xcu); goto E_1028226b;
    case 0x1028227au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0xcu); goto E_1028227a;
    case 0x1028228au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = g->edi; goto E_1028228a;
    default: break;
    }
#endif

    COW_AT(102821b0)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x89cu, arg1);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a0u) != rd32(rd32(COW_IMG(0x1099d200u)) + 0x8acu))
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a0u);
        ecx = rd32(COW_IMG(0x1099d200u));
    COW_AT(102821df)
        edx = eax * 5u;
        ebx = rd32(COW_IMG(0x1099d63cu) + eax * 0x28u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a0u);
        ecx = rd32(COW_IMG(0x1099d200u));
        edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8acu);
    COW_AT(102821d7)
        ebx = rd32(ecx + 0x900u);
    }
    COW_AT(102821e9)
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(1028221f)
        wr32(sp0 - 0xcu, 0x3f800000u);
        wr32(sp0 - 0x10u, 0x3f800000u);
    }
    else
    {
    COW_AT(102821f1)
        d1 = fr(g, (double)(int32_t)rd32(ecx + 0x2d8u) / (double)(int32_t)rd32(COW_IMG(0x1099d620u) + arg1 * 0x28u));
        wrf32(sp0 - 0xcu, (float)(double)(float)d1);
        d2 = fr(g, (double)(int32_t)rd32(ecx + 0x2d4u) / (double)(int32_t)rd32(COW_IMG(0x1099d61cu) + arg1 * 0x28u));
        wrf32(sp0 - 0x10u, (float)(double)(float)d2);
        eax = arg1 * 0x28u;
    }
    COW_AT(10282229)
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102838c0u), 2, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    if (arg1 != rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u))
    {
    COW_AT(10282254)
        wr32(sp0 - 0xcu, in_edi);
        if (rd32(COW_IMG(0x1099d63cu) + arg1 * 0x28u) != 0u)
        {
            edi = COW_IMG(0x1099d63cu) + arg1 * 0x28u;
        }
        else
        {
            ecx = rd32(COW_IMG(0x1099d63cu) + arg1 * 0x28u);
    COW_AT(1028226b)
            t7 = COW_IMG(0x1099d63cu) + arg1 * 0x28u;
            wr32(sp0 - 0x10u, t7);
            wr32(sp0 - 0x14u, 0u);
            t8 = rd32(COW_IMG(0x1099d638u) + arg1 * 0x28u);
            wr32(sp0 - 0x18u, t8);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(t8) + 0x3cu), ecx, 3, t8, 0u, t7);
            edi = t7;
        }
    COW_AT(1028227a)
        wr32(sp0 - 0x10u, ebx);
        wr32(sp0 - 0x14u, rd32(edi));
        wr32(sp0 - 0x18u, rd32(COW_IMG(0x1066941cu)));
        g->edx = rd32(edi);
        t9 = rd32(rd32(COW_IMG(0x1066941cu)));
        t10 = rd32(edi);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t9 + 0x7cu), t9, 3, rd32(COW_IMG(0x1066941cu)), t10, ebx);
        t11 = g->ecx;
        t12 = g->edx;
        ecx = t11;
        edx = t12;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1099d200u));
    COW_AT(1028223f)
        wr32(sp0 - 0xcu, ebx);
        t3 = rd32(ecx + 0x8fcu);
        wr32(sp0 - 0x10u, t3);
        wr32(sp0 - 0x14u, rd32(COW_IMG(0x1066941cu)));
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t4 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t4 + 0x7cu), t3, 3, rd32(COW_IMG(0x1066941cu)), t3, ebx);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    COW_AT(1028228a)
    d13 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x1099d620u) + arg1 * 0x28u);
    wrf32(sp0 - 0xcu, (float)d13);
    d14 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x1099d61cu) + arg1 * 0x28u);
    wrf32(sp0 - 0x10u, (float)d14);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10283a30u), 4, 0u, 0u, cow_f2bits(d14), cow_f2bits(d13));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102821b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102821d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102821dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102821e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102821f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028221fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10282229u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028223fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10282254u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028226bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 * 0x28u;
        g->esi = arg1;
        g->edi = COW_IMG(0x1099d63cu) + arg1 * 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1028227au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028228au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102821b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102821b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
