/* f_0x10079d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10079d40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_124;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 312u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10079d95u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; loc_124 = rd32(sp0 - 0x124u); goto E_10079d95;
    case 0x10079dc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079dc0;
    case 0x10079dfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079dfd;
    case 0x10079e13u: eax = g->eax; ecx = g->ecx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079e13;
    case 0x10079e22u: eax = g->eax; ecx = g->ecx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079e22;
    case 0x10079e27u: eax = g->eax; ecx = g->ecx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079e27;
    case 0x10079e32u: eax = g->eax; ecx = g->ecx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079e32;
    case 0x10079e3eu: eax = g->eax; ecx = g->ecx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079e3e;
    case 0x10079e49u: eax = g->eax; ecx = g->ecx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079e49;
    case 0x10079e4eu: eax = g->eax; ecx = g->ecx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079e4e;
    case 0x10079e52u: eax = g->eax; ecx = g->ecx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_ebx = rd32(sp0 - 0x120u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x120u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079e52;
    case 0x10079e71u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079e71;
    case 0x10079ed0u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); in_edi = rd32(sp0 - 0x11cu); in_esi = rd32(sp0 - 0x118u); g->edi = rd32(sp0 - 0x11cu); g->esi = rd32(sp0 - 0x118u); goto E_10079ed0;
    case 0x10079ee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); goto E_10079ee7;
    case 0x10079eefu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; edi = g->edi; goto E_10079eef;
    default: break;
    }
#endif

    COW_AT(10079d40)
    if (rd8(COW_IMG(0x1047d3a0u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        edx = in_edx;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047d3a0u));
    COW_AT(10079d52)
        wr32(sp0 - 0x118u, 0x5eu);
        wr32(sp0 - 0x11cu, 0xcu);
        wr8(COW_IMG(0x1047d3a0u), (uint8_t)(ecx | 1u));
        g->eax = (in_eax & 0xffffff00u) | 1u;
        g->ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
        g->edx = in_edx;
        g->esp = sp0 - 0x114u;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5eu);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(sp0 - 0x120u, 0x5fu);
        wr32(sp0 - 0x124u, 0xcu);
        wr32(COW_IMG(0x1047d4b0u), t1);
        g->ecx = t2;
        g->edx = t3;
        g->esp = sp0 - 0x11cu;
        t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x5fu);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x128u, 0x60u);
        wr32(sp0 - 0x12cu, 0xcu);
        wr32(COW_IMG(0x1047d4b4u), t4);
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 0x124u;
        t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x60u);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x130u, 0x61u);
        wr32(sp0 - 0x134u, 0xcu);
        wr32(COW_IMG(0x1047d4b8u), t7);
        g->edx = t9;
        g->esp = sp0 - 0x12cu;
        t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x61u);
        t11 = g->edx;
        wr32(COW_IMG(0x1047d4bcu), t10);
        eax = t10;
        edx = t11;
    }
    COW_AT(10079d95)
    wr32(sp0 - 0x118u, in_esi);
    wr32(sp0 - 0x11cu, in_edi);
    wr8(sp0 - 0x100u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0xffu;
    eax = 0u;
    ecx = 0x3fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t12 = rd16(arg2 + 4u);
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    if ((uint16_t)t12 != 0u)
    {
        ecx = (ecx & 0xffff0000u) | t12;
    COW_AT(10079dfd)
        wr32(sp0 - 0x120u, in_ebx);
        t19 = rd8(arg2 + 6u);
        wr8(sp0 - 0x113u, (uint8_t)(t19 + 1u));
        if ((uint16_t)ecx != 0u)
        {
            eax = (eax & 0xffffff00u) | t19;
    COW_AT(10079e22)
            if ((uint8_t)(ecx >> 8u) != 0u) goto L_10079e32;
    COW_AT(10079e27)
            wr8(sp0 - 0x114u, 9u);
            wr8(sp0 - 0x112u, 0xffu);
L_10079e4e: ;
    COW_AT(10079e4e)
            wr8(sp0 - 0x111u, (uint8_t)ecx);
        }
        else
        {
            eax = (eax & 0xffffff00u) | t19;
    COW_AT(10079e13)
            wr8(sp0 - 0x114u, 8u);
            wr8(sp0 - 0x112u, 0xffu);
            wr8(sp0 - 0x111u, 0xffu);
        }
L_10079e52: ;
    COW_AT(10079e52)
        t20 = rd32(sp0 - 0x114u);
        wr8(sp0 - 0x110u, 0xfdu);
        wr8(sp0 - 0x10bu, 0xfdu);
        t21 = rd8(arg2 + 7u);
        wr32(sp0 - 0x10fu, t20);
        wr8(sp0 - 0x10au, 0u);
        if ((uint8_t)eax == (uint8_t)t21)
        {
    COW_AT(10079ed0)
            wr32(sp0 - 0x120u, sp0 - 0x110u);
            wr32(sp0 - 0x124u, 0x69u);
            wr32(sp0 - 0x128u, 0xau);
            g->eax = eax;
            g->ecx = sp0 - 0x110u;
            g->esp = sp0 - 0x120u;
            t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x69u);
            t36 = g->ecx;
            wr32(sp0 - 0x124u, t35);
            wr32(sp0 - 0x128u, sp0 - 0x100u);
            eax = t35;
            ecx = t36;
            edx = sp0 - 0x100u;
            loc_124 = t35;
        }
        else
        {
            ecx = (ecx & 0xffffff00u) | t21;
    COW_AT(10079e71)
            t22 = rd32(COW_IMG(0x1047d4b0u) + (uint8_t)ecx * 4u);
            wr32(sp0 - 0x120u, t22);
            wr32(sp0 - 0x124u, arg2 + 0x48u);
            t23 = rd32(COW_IMG(0x1047d4b0u) + (uint8_t)eax * 4u);
            wr32(sp0 - 0x128u, t23);
            wr32(sp0 - 0x12cu, arg2 + 8u);
            wr32(sp0 - 0x130u, 0x68u);
            wr32(sp0 - 0x134u, 0xau);
            g->eax = (uint8_t)eax;
            g->ecx = arg2 + 0x48u;
            g->edx = t23;
            g->esp = sp0 - 0x12cu;
            t24 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x68u);
            t25 = g->ecx;
            t26 = g->edx;
            wr32(sp0 - 0x130u, t24);
            wr32(sp0 - 0x134u, sp0 - 0x100u);
            g->eax = sp0 - 0x100u;
            g->edx = t26;
            g->esp = sp0 - 0x120u;
            t27 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t24, arg2 + 8u, rd32(sp0 - 0x128u), arg2 + 0x48u);
            t28 = g->edx;
            wr32(sp0 - 0x120u, sp0 - 0x100u);
            t29 = rd32(COW_IMG(0x10578158u));
            g->esp = sp0 - 0x11cu;
            t30 = cow_thiscall(g, COW_IMG(0x10129e80u), t29, 1, sp0 - 0x100u);
            t31 = g->ecx;
            wr32(sp0 - 0x120u, sp0 - 0x110u);
            wr32(sp0 - 0x124u, 0x6au);
            wr32(sp0 - 0x128u, 0xau);
            g->ecx = t31;
            g->edx = sp0 - 0x110u;
            g->esp = sp0 - 0x120u;
            t32 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x6au);
            t33 = g->ecx;
            t34 = g->edx;
            wr32(sp0 - 0x124u, t32);
            wr32(sp0 - 0x128u, sp0 - 0x100u);
            eax = sp0 - 0x100u;
            ecx = t33;
            edx = t34;
            loc_124 = t32;
        }
    COW_AT(10079ee7)
        g->edx = edx;
        g->esp = sp0 - 0x114u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, loc_124, sp0 - 0x110u, rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u));
        t37 = g->edx;
        edx = t37;
    }
    else
    {
    COW_AT(10079dc0)
        t13 = rd32(COW_IMG(0x1047d4b0u) + rd8(arg2 + 7u) * 4u);
        wr32(sp0 - 0x120u, t13);
        t14 = rd32(COW_IMG(0x1047d4b0u) + rd8(arg2 + 6u) * 4u);
        wr32(sp0 - 0x124u, t14);
        wr32(sp0 - 0x128u, arg2 + 8u);
        wr32(sp0 - 0x12cu, 0x67u);
        wr32(sp0 - 0x130u, 0xau);
        g->eax = rd8(arg2 + 6u);
        g->ecx = t14;
        t15 = rd8(arg2 + 6u);
        g->esp = sp0 - 0x128u;
        t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x67u);
        t17 = g->ecx;
        wr32(sp0 - 0x12cu, t16);
        wr32(sp0 - 0x130u, sp0 - 0x100u);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x11cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t16, arg2 + 8u, rd32(sp0 - 0x124u), rd32(sp0 - 0x120u));
        t18 = g->edx;
        edx = t18;
    }
    COW_AT(10079eef)
    wr32(sp0 - 0x120u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    t38 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x100u);
    t39 = g->edx;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x118u);
    g->edi = rd32(sp0 - 0x11cu);
    g->edx = t39;
    return t38;
L_10079e32: ;
    COW_AT(10079e32)
    wr8(sp0 - 0x112u, (uint8_t)(ecx >> 8u));
    if ((uint8_t)ecx != 0u) goto L_10079e49;
    COW_AT(10079e3e)
    wr8(sp0 - 0x114u, 0xau);
    wr8(sp0 - 0x111u, 0xffu);
    goto L_10079e52;
L_10079e49: ;
    COW_AT(10079e49)
    wr8(sp0 - 0x114u, 7u);
    goto L_10079e4e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10079d40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10079d95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x10079dc0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x11cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079dfdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x11cu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079e13u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->edx = 0xffu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079e22u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->edx = 0xffu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079e27u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->edx = 0xffu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079e32u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->edx = 0xffu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079e3eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->edx = 0xffu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079e49u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->edx = 0xffu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079e4eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->edx = 0xffu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079e52u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_ebx = rd32(sp0 - 0x120u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x120u;
        g->edx = 0xffu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079e71u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x11cu;
        g->edx = 0xffu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10079ed0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        in_edi = rd32(sp0 - 0x11cu);
        in_esi = rd32(sp0 - 0x118u);
        g->esp = sp0 - 0x11cu;
        g->edx = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x10079ee7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x128u;
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        wr32(sp0 - 0x120u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x10079eefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     10079d52: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10079d40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10079d40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
