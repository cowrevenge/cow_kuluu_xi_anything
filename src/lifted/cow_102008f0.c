/* f_0x102008f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_102008f0(Guest* g)
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
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
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10200905u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10200905;
    case 0x1020090au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1020090a;
    case 0x10200916u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10200916;
    case 0x10200931u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_10200931;
    case 0x10200936u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; goto E_10200936;
    case 0x10200a41u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10200a41;
    case 0x10200a46u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10200a46;
    case 0x10200a51u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10200a51;
    case 0x10200a68u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10200a68;
    case 0x10200a71u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10200a71;
    case 0x10200a7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10200a7b;
    default: break;
    }
#endif

    COW_AT(102008f0)
    wr32(sp0 - 4u, self);
    t1 = rd32(COW_IMG(0x10663abcu));
    wr8(COW_IMG(0x10663ac8u), 0u);
    wr32(sp0 - 8u, in_esi);
    if (rd32(t1 + 8u) != 0u)
    {
        ecx = rd32(t1 + 8u);
        goto L_1020090a;
    }
    eax = t1;
    COW_AT(10200905)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_1020090a: ;
    COW_AT(1020090a)
    if (arg3 != 0u) goto L_10200a41;
    COW_AT(10200916)
    wr32(sp0 - 0xcu, sp0 + 0xcu);
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->eax = arg3;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x10200650u), arg1, 2, sp0 - 4u, sp0 + 0xcu);
    t3 = g->edx;
    if (arg3 != 0u) goto L_10200936;
    eax = t2;
    edx = t3;
    COW_AT(10200931)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 8u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax & 0xffffff00u;
L_10200936: ;
    COW_AT(10200936)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_edi);
    wr32(arg3, rd32(arg5));
    t4 = rd32(arg5 + 4u);
    wr32(arg3 + 4u, t4);
    t5 = rd32(rd32(arg5 + 0x18u));
    t6 = rd32(arg5 + 0x18u);
    wr32(arg3 + 8u, t5);
    t7 = rd32(t6 + 4u);
    wr32(arg3 + 0xcu, t7);
    t8 = rd32(rd32(arg5 + 8u));
    t9 = rd32(arg5 + 8u);
    wr32(arg3 + 0x10u, t8);
    t10 = rd32(t9 + 4u);
    wr32(arg3 + 0x14u, t10);
    t11 = rd32(t9 + 8u);
    wr32(arg3 + 0x18u, t11);
    wr16(arg3 + 0x1cu, rd16(t9 + 0xcu));
    wr8(arg3 + 0x1eu, rd8(t9 + 0xeu));
    wr8(arg3 + 0x1fu, 0u);
    t12 = rd32(rd32(arg5 + 0xcu));
    t13 = rd32(arg5 + 0xcu);
    wr32(arg3 + 0x20u, t12);
    t14 = rd32(t13 + 4u);
    wr32(arg3 + 0x24u, t14);
    t15 = rd32(t13 + 8u);
    wr32(arg3 + 0x28u, t15);
    t16 = rd16(t13 + 0xcu);
    wr16(arg3 + 0x2cu, (uint16_t)t16);
    t17 = rd8(t13 + 0xeu);
    wr8(arg3 + 0x2eu, (uint8_t)t17);
    wr8(arg3 + 0x2fu, 0u);
    wr32(sp0 - 0x18u, (uint16_t)arg2);
    g->eax = (t13 & 0xffffff00u) | t17;
    g->ecx = (uint16_t)arg2;
    g->esp = sp0 - 0x14u;
    t18 = cow_cdecl(g, COW_IMG(0x10200a80u), 1, (uint16_t)arg2);
    t19 = g->ecx;
    wr32(arg3 + 0x48u, t18);
    wr32(sp0 - 0x1cu, 0u);
    t20 = rd32(rd32(arg5 + 0x18u) + 0x34u);
    wr32(sp0 - 0x20u, t20);
    t21 = rd32(arg5 + 0x18u);
    wr32(arg3 + 0x4cu, t20);
    g->edi = arg3 + 0x30u;
    g->eax = t20;
    g->ecx = t19;
    g->edx = t21;
    g->esp = sp0 - 0x18u;
    t22 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, t20, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x24u, t22);
    wr32(sp0 - 0x28u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x2cu, arg3 + 0x30u);
    g->ebx = arg3 + 0x20u;
    g->edx = t24;
    t25 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg3 + 0x30u, COW_IMG(0x1034f7e0u), t22, rd32(sp0 - 0x20u), 0u);
    t26 = g->edx;
    t27 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, arg3 + 0x10u);
    wr32(sp0 - 0x20u, 0x25u);
    wr32(sp0 - 0x24u, 1u);
    g->esp = sp0 - 0x14u;
    t28 = cow_fastcall(g, COW_IMG(0x101f4b20u), t27, t26, 4, 1u, 0x25u, arg3 + 0x10u, 0x80808080u);
    t29 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, arg3 + 0x20u);
    wr32(sp0 - 0x20u, 0x25u);
    wr32(sp0 - 0x24u, 2u);
    cow_fastcall(g, COW_IMG(0x101f4b20u), t27, t29, 4, 2u, 0x25u, arg3 + 0x20u, 0x80808080u);
    t30 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    t31 = rd32(arg3 + 0x48u);
    wr32(sp0 - 0x1cu, t31);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 3u);
    cow_fastcall(g, COW_IMG(0x101f4b20u), t27, t30, 4, 3u, 1u, t31, 0x80808080u);
    t32 = g->edx;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, arg3 + 0x30u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    g->eax = arg3 + 0x30u;
    t33 = cow_fastcall(g, COW_IMG(0x101f4b20u), t27, t32, 4, 4u, 1u, arg3 + 0x30u, 0x80808080u);
    t34 = g->edx;
    wr32(t27 + 0x48u, arg3);
    g->esi = arg3;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x102006b0u), arg1, 0);
    t36 = g->edx;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 8u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t36;
    return (t35 & 0xffffff00u) | 1u;
L_10200a41: ;
    COW_AT(10200a41)
    if (arg3 != 1u)
    {
        eax = arg3;
        edx = in_edx;
    }
    else
    {
    COW_AT(10200a46)
        if (rd32(arg1 + 0x54u) != 0u)
        {
            edx = in_edx;
        }
        else
        {
            eax = rd32(arg1 + 0x54u);
    COW_AT(10200a51)
            wr32(sp0 - 0xcu, 0x69u);
            wr32(sp0 - 0x10u, 7u);
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t37 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x69u);
            t38 = g->edx;
            wr32(arg1 + 0x3cu, t37);
            wr8(arg1 + 0x44u, 0x20u);
            wr8(arg1 + 0x45u, 0x18u);
            edx = t38;
        }
    COW_AT(10200a68)
        if (rd32(COW_IMG(0x105781f8u)) == 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
        }
        else
        {
            eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(10200a71)
            wr32(sp0 - 0xcu, 0x10u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t39 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x10u);
            t40 = g->edx;
            eax = t39;
            edx = t40;
        }
    }
    COW_AT(10200a7b)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102008f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10200905u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1020090au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10200916u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10200931u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10200936u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        g->esi = arg3;
        wr32(sp0 - 0x10u, sp0 - 4u);
        wr32(sp0 - 0xcu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10200a41u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10200a46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10200a51u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10200a68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10200a71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10200a7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102008f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102008f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
