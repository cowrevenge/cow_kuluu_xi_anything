/* f_0x10296110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10296110(Guest* g)
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029612du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1029612d;
    case 0x10296152u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10296152;
    case 0x10296164u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10296164;
    case 0x1029618fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1029618f;
    case 0x102961a2u: edx = g->edx; esi = g->esi; goto E_102961a2;
    case 0x102961a9u: edx = g->edx; esi = g->esi; goto E_102961a9;
    case 0x102961c3u: edx = g->edx; esi = g->esi; goto E_102961c3;
    case 0x102961ddu: edx = g->edx; esi = g->esi; goto E_102961dd;
    case 0x102961f7u: edx = g->edx; esi = g->esi; goto E_102961f7;
    case 0x10296211u: edx = g->edx; esi = g->esi; goto E_10296211;
    case 0x1029622bu: edx = g->edx; esi = g->esi; goto E_1029622b;
    default: break;
    }
#endif

    COW_AT(10296110)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x14u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1034f2d0u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_10296152;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1029612d)
    wr32(sp0 - 0x10u, 0x57u);
    wr32(sp0 - 0x14u, COW_IMG(0x103bbb70u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbb70u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103b9960u));
    g->ebx = arg1;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9960u), arg1);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
L_10296152: ;
    COW_AT(10296152)
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, esi);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1029cb00u), ecx, 5, esi, sp0 + 4u, in_edi, in_esi, in_ebx);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t9;
        goto L_1029618f;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10296164)
    wr32(sp0 - 0x10u, 0x5bu);
    wr32(sp0 - 0x14u, COW_IMG(0x103bbb70u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbb70u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103b994cu));
    g->ebx = arg1;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x18u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b994cu), arg1);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x24u, esi);
    g->edi = 0u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t15, 1, 3, esi, COW_IMG(0x103b994cu), arg1);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
L_1029618f: ;
    COW_AT(1029618f)
    if (arg1 - 0x50001u > 8u) goto L_1029622b;
    COW_AT(102961a2)
    t16 = rd32(COW_IMG(0x10296260u) + arg1 * 4u - 0x140004u);
    switch (t16 - RD)
    {
    case 0x102961a9u: goto L_102961a9;
    case 0x102961c3u: goto L_102961c3;
    case 0x102961ddu: goto L_102961dd;
    case 0x102961f7u: goto L_102961f7;
    case 0x10296211u: goto L_10296211;
    case 0x1029622bu: goto L_1029622b;
    default: rt_fatal(g, COW_IMG(0x102961a2u), "switch");
    }
    return 0;
L_102961a9: ;
    COW_AT(102961a9)
    wr32(sp0 - 0x10u, esi);
    g->eax = arg1 - 0x50001u;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t29 = cow_cdecl(g, COW_IMG(0x102946c0u), 1, esi);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t29;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t31, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t29;
L_102961c3: ;
    COW_AT(102961c3)
    wr32(sp0 - 0x10u, esi);
    g->eax = arg1 - 0x50001u;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_cdecl(g, COW_IMG(0x10295c50u), 1, esi);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t26;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t28, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t26;
L_102961dd: ;
    COW_AT(102961dd)
    wr32(sp0 - 0x10u, esi);
    g->eax = arg1 - 0x50001u;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_cdecl(g, COW_IMG(0x10293bc0u), 1, esi);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t23;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t25, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t23;
L_102961f7: ;
    COW_AT(102961f7)
    wr32(sp0 - 0x10u, esi);
    g->eax = arg1 - 0x50001u;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t20 = cow_cdecl(g, COW_IMG(0x102a51b0u), 1, esi);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t20;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t22, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t20;
L_10296211: ;
    COW_AT(10296211)
    wr32(sp0 - 0x10u, arg1);
    g->ebx = arg1;
    g->ecx = arg1;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x102a45d0u), arg1 - 0x50001u, g->ecx, edx, 1, 1, arg1);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t17;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t19, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t17;
L_1029622b: ;
    COW_AT(1029622b)
    wr32(sp0 - 0x10u, 0x62u);
    wr32(sp0 - 0x14u, COW_IMG(0x103bbb70u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = arg1 - 0x50001u;
    g->ecx = arg1;
    g->esp = sp0 - 0x10u;
    t32 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbb70u));
    t33 = g->ecx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103bbb40u));
    g->ebx = arg1;
    g->ecx = t33;
    g->edx = arg1;
    g->esp = sp0 - 0x18u;
    t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbb40u), arg1);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = 0u;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t36, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10296110(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029612du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10296152u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10296164u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029618fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102961a2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 0x50001u;
        g->ecx = arg1;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102961a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 0x50001u;
        g->ecx = arg1;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102961c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 0x50001u;
        g->ecx = arg1;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102961ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 0x50001u;
        g->ecx = arg1;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102961f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 0x50001u;
        g->ecx = arg1;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10296211u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 0x50001u;
        g->ecx = arg1;
        g->ebx = arg1;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1029622bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t esi;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->eax = arg1 - 0x50001u;
        g->ecx = arg1;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10296110(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10296110(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
