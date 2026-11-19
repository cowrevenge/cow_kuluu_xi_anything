/* f_0x102d2888 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=10 */
uint32_t cow_fn_102d2888(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_bc;
    uint32_t loc_c0;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg10 = rd32(sp0 + 0x28u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 220u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d28abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xbcu); goto E_102d28ab;
    case 0x102d28b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xbcu); goto E_102d28b5;
    case 0x102d28bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xbcu); g->esi = rd32(sp0 - 0xc0u); goto E_102d28bd;
    case 0x102d28c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xbcu); g->esi = rd32(sp0 - 0xc0u); goto E_102d28c7;
    case 0x102d28ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xbcu); g->esi = rd32(sp0 - 0xc0u); goto E_102d28cc;
    case 0x102d28d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xbcu); g->esi = rd32(sp0 - 0xc0u); goto E_102d28d2;
    case 0x102d28d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0xc0u); in_ebx = rd32(sp0 - 0xbcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xbcu); g->esi = rd32(sp0 - 0xc0u); goto E_102d28d9;
    case 0x102d28f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_102d28f4;
    case 0x102d294au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_102d294a;
    case 0x102d294cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_4 = rd32(sp0 - 4u); goto E_102d294c;
    case 0x102d294du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_4 = rd32(sp0 - 4u); goto E_102d294d;
    default: break;
    }
#endif

    COW_AT(102d2888)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xbcu, in_ebx);
    g->edx = in_edx;
    g->esp = sp0 - 0xbcu;
    t1 = cow_thiscall(g, COW_IMG(0x102dd5dau), sp0 - 0x10u, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x102e0f8cu), sp0 - 0x20u, 0);
    t4 = g->edx;
    if (arg1 != 0u)
    {
        eax = t3;
        edx = t4;
    COW_AT(102d28b5)
        wr32(sp0 - 0xc0u, in_esi);
        if (arg4 != 0u) goto L_102d28c7;
L_102d28bd: ;
    COW_AT(102d28bd)
        ebx = 0x8876086cu;
        loc_4 = in_ebp;
        loc_bc = in_ebx;
        loc_c0 = in_esi;
L_102d294c: ;
    COW_AT(102d294c)
        esi = loc_c0;
    }
    else
    {
        eax = t3;
        edx = t4;
    COW_AT(102d28ab)
        ebx = 0x8876086cu;
        esi = in_esi;
        loc_4 = in_ebp;
        loc_bc = in_ebx;
    }
    COW_AT(102d294d)
    g->eax = eax;
    g->esp = sp0 - 0xbcu;
    t10 = cow_fastcall(g, COW_IMG(0x102e1021u), sp0 - 0x20u, edx, 0);
    t11 = g->edx;
    cow_fastcall(g, COW_IMG(0x102dd5e4u), sp0 - 0x10u, t11, 0);
    t12 = g->edx;
    g->ebx = rd32(sp0 - 0xbcu);
    g->esi = esi;
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = t12;
    return ebx;
L_102d28c7: ;
    COW_AT(102d28c7)
    if (arg8 == 0u) goto L_102d28bd;
    COW_AT(102d28cc)
    if (rd32(sp0 + 0x24u) == 0xffffffffu)
    {
    COW_AT(102d28d2)
        wr32(sp0 + 0x24u, 0x80004u);
    }
    COW_AT(102d28d9)
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, arg3);
    wr32(sp0 - 0xd0u, arg2);
    wr32(sp0 - 0xd4u, arg1);
    wr32(sp0 - 0xd8u, sp0 - 0xb8u);
    g->eax = sp0 - 0xb8u;
    g->esp = sp0 - 0xc0u;
    t5 = cow_fastcall(g, COW_IMG(0x102e1026u), sp0 - 0x20u, edx, 6, sp0 - 0xb8u, arg1, arg2, arg3, 0u, 0u);
    t6 = g->edx;
    if ((int32_t)t5 < 0)
    {
        eax = t5;
        edx = t6;
        goto L_102d294a;
    }
    edx = t6;
    COW_AT(102d28f4)
    wr32(sp0 - 0xc4u, in_edi);
    wr32(sp0 - 0x68u, arg5);
    wr32(sp0 - 0x6cu, arg4);
    wr32(sp0 - 0x64u, arg6);
    wr32(sp0 - 0x60u, 0u);
    esi = arg8;
    edi = sp0 - 0x5cu;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(sp0 - 0xc8u, 6u);
    t7 = rd32(sp0 + 0x24u);
    wr32(sp0 - 0xc8u, t7);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 1u);
    esi = sp0 - 0x5cu;
    edi = sp0 - 0x44u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x28u, arg10);
    wr32(sp0 - 0x24u, arg7);
    wr32(sp0 - 0xccu, sp0 - 0x6cu);
    wr32(sp0 - 0xd0u, sp0 - 0xb8u);
    g->ebp = sp0 - 0x54u;
    g->eax = sp0 - 0xb8u;
    g->edx = edx;
    g->esp = sp0 - 0xc4u;
    t8 = cow_thiscall(g, COW_IMG(0x102e0e72u), sp0 - 0x10u, 3, sp0 - 0xb8u, sp0 - 0x6cu, t7);
    t9 = g->edx;
    if ((int32_t)t8 >= 0)
    {
        eax = t8;
        edx = t9;
        ebx = 0u;
        loc_4 = rd32(sp0 - 4u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_c0 = rd32(sp0 - 0xc0u);
        goto L_102d294c;
    }
    eax = t8;
    edx = t9;
L_102d294a: ;
    COW_AT(102d294a)
    ebx = eax;
    loc_4 = rd32(sp0 - 4u);
    loc_bc = rd32(sp0 - 0xbcu);
    loc_c0 = rd32(sp0 - 0xc0u);
    goto L_102d294c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d2888(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d28abu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xbcu;
        g->ebp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102d28b5u:
    {
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
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xbcu;
        g->ebx = 0u;
        g->ebp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102d28bdu:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xc0u;
        g->ebp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102d28c7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        in_esi = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x54u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102d28ccu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        in_esi = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x54u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102d28d2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        in_esi = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x54u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102d28d9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        in_esi = rd32(sp0 - 0xc0u);
        in_ebx = rd32(sp0 - 0xbcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xc0u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x54u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102d28f4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xc0u;
        g->ebx = 0u;
        g->ebp = sp0 - 0x54u;
        g->esi = arg4;
        wr32(sp0 - 0xd8u, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x102d294au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0xc0u;
        g->ebp = sp0 - 0x54u;
        wr32(sp0 - 0xd8u, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x102d294cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xc0u;
        g->ebp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x102d294du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xbcu;
        g->ebp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d2888(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d2888(g);
    g->esp = sp0;
    rt_return(g, r, 40u);
}
/* COW_ADAPTER END */
