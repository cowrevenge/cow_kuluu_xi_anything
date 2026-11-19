/* f_0x100759c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100759c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100759d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100759d3;
    case 0x100759ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100759dd;
    case 0x100759fdu: ecx = g->ecx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_100759fd;
    case 0x10075a05u: ecx = g->ecx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075a05;
    case 0x10075a1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075a1c;
    case 0x10075a27u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075a27;
    case 0x10075a41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075a41;
    case 0x10075a63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075a63;
    case 0x10075b1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075b1e;
    case 0x10075b21u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075b21;
    case 0x10075be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075be0;
    case 0x10075be2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075be2;
    case 0x10075be9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075be9;
    case 0x10075becu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075bec;
    case 0x10075c0du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10075c0d;
    default: break;
    }
#endif

    COW_AT(100759c0)
    if (arg2 != 0x80808080u) goto L_100759fd;
    COW_AT(100759d3)
    if (rd32(self) != 0u)
    {
        edi = rd32(self);
        goto L_10075be2;
    }
    COW_AT(100759dd)
    t1 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t1) + 0xf4u), rd32(t1), 3, t1, arg1, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100759fd: ;
    COW_AT(100759fd)
    if (rd32(self) == 0u) goto L_10075c0d;
    COW_AT(10075a05)
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x100755a0u), self, 0);
    if (rd32(rd32(COW_IMG(0x1047d158u)) + 4u) == 0u) goto L_10075be0;
    eax = rd32(COW_IMG(0x1047d158u));
    ecx = rd32(rd32(COW_IMG(0x1047d158u)) + 4u);
    COW_AT(10075a1c)
    if (rd32(eax + 0xcu) == 0u) goto L_10075be0;
    edx = rd32(eax + 0xcu);
    COW_AT(10075a27)
    t2 = rd32(eax + 8u);
    g->ebx = arg2;
    g->eax = eax;
    g->edx = t2;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x1006a060u), rd32(COW_IMG(0x1047bfa8u)), 3, ecx, t2, edx);
    t4 = g->edx;
    if (rd8(COW_IMG(0x1047d154u)) & 1u)
    {
        eax = (t3 & 0xffffff00u) | rd8(COW_IMG(0x1047d154u));
        edx = t4;
    }
    else
    {
        eax = (t3 & 0xffffff00u) | rd8(COW_IMG(0x1047d154u));
        edx = t4;
    COW_AT(10075a41)
        wr8(COW_IMG(0x1047d154u), (uint8_t)(eax | 1u));
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047d210u), 0);
        t6 = g->ecx;
        t7 = g->edx;
        g->edx = t7;
        t8 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10075c30u));
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    COW_AT(10075a63)
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047d210u), edx, 2, COW_IMG(0x10354874u), COW_IMG(0x103547d8u));
    t10 = g->edx;
    t11 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t11;
    g->edx = t10;
    t12 = cow_thiscall(g, rd32(rd32(t11) + 0xc8u), rd32(t11), 3, t11, 0x3cu, arg2);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_stdcall(g, COW_IMG(0x10044010u), 1, 4u);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x10044130u), rd32(COW_IMG(0x1047bba8u)), 0);
    t17 = g->edx;
    wr32(t16, 0u);
    wr32(t16 + 4u, 0u);
    wr32(t16 + 8u, 0u);
    wr32(t16 + 0xcu, 0x3f800000u);
    wr32(t16 + 0x14u, 0u);
    wr32(t16 + 0x18u, 0u);
    t18 = rd32(COW_IMG(0x1047d200u));
    wr32(t16 + 0x20u, 0u);
    wr32(t16 + 0x24u, 0u);
    wr32(t16 + 0x28u, 0x3f800000u);
    wr32(t16 + 0x30u, 0x3f800000u);
    wrf32(t16 + 0x1cu, (float)(double)(int32_t)t18);
    wr32(t16 + 0x34u, 0u);
    wr32(t16 + 0x38u, 0u);
    t19 = rd32(COW_IMG(0x1047d150u));
    wr32(t16 + 0x40u, 0u);
    wr32(t16 + 0x44u, 0x3f800000u);
    wr32(t16 + 0x4cu, 0u);
    wr32(t16 + 0x50u, 0x3f800000u);
    wrf32(t16 + 0x3cu, (float)(double)(int32_t)t19);
    t20 = rd32(COW_IMG(0x1047d200u));
    wrf32(t16 + 0x54u, (float)(double)(int32_t)t20);
    t21 = rd32(COW_IMG(0x1047d150u));
    wr32(t16 + 0x5cu, 0u);
    wr32(t16 + 0x60u, 0x3f800000u);
    wr32(t16 + 0x68u, 0x3f800000u);
    wr32(t16 + 0x6cu, 0x3f800000u);
    wrf32(t16 + 0x58u, (float)(double)(int32_t)t21);
    cow_stdcall(g, COW_IMG(0x100441a0u), 0);
    if (rd32(rd32(self) + 0x40u) != 0u)
    {
        ecx = rd32(rd32(self) + 0x40u);
    }
    else
    {
        eax = rd32(self);
    COW_AT(10075b1e)
        ecx = rd32(eax + 0x44u);
    }
    COW_AT(10075b21)
    t22 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t22;
    g->edx = rd32(t22);
    t23 = rd32(t22);
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, rd32(t23 + 0xf4u), ecx, 3, t22, 0u, ecx);
    t25 = g->edx;
    g->edx = t25;
    cow_thiscall(g, COW_IMG(0x10043f40u), rd32(COW_IMG(0x1047bba8u)), 5, 0u, 2u, 5u, 0u, 0xffffffffu);
    t26 = g->edx;
    t27 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t28 = rd32(t27);
    cow_thiscall(g, rd32(t28 + 0xc8u), t28, 3, t27, 0x1bu, 0u);
    t29 = g->ecx;
    t30 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->edx = rd32(t30);
    t31 = rd32(t30);
    cow_thiscall(g, rd32(t31 + 0xc8u), t29, 3, t30, 0xfu, 1u);
    t32 = g->edx;
    t33 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    t34 = rd32(t33);
    cow_thiscall(g, rd32(t34 + 0xc8u), t34, 3, t33, 0xeu, 1u);
    t35 = g->ecx;
    t36 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->eax = t36;
    g->edx = rd32(t36);
    t37 = rd32(t36);
    t38 = cow_thiscall(g, rd32(t37 + 0xc8u), t35, 3, t36, 7u, 1u);
    t39 = g->edx;
    cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), t39, 2, 0u, 0u);
    t40 = rd32(rd32(COW_IMG(0x1047d158u)) + 4u);
    t41 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)) + 0xf4u), rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu)), 3, t41, arg1, t40);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10075be0: ;
    COW_AT(10075be0)
    edi = rd32(self);
L_10075be2: ;
    COW_AT(10075be2)
    if (rd32(edi + 0x40u) != 0u)
    {
        eax = rd32(edi + 0x40u);
    }
    else
    {
    COW_AT(10075be9)
        eax = rd32(edi + 0x44u);
    }
    COW_AT(10075bec)
    t42 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t42) + 0xf4u), t42, 3, t42, arg1, eax);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10075c0d: ;
    COW_AT(10075c0d)
    t43 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(t43) + 0xf4u), arg1, 3, t43, arg1, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100759c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100759d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100759ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100759fdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075a05u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075a1cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075a27u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075a41u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075a63u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075b1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075b21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075be0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075be2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10075be9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10075becu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10075c0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100759c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100759c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
