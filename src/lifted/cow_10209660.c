/* f_0x10209660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10209660(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_110;
    int64_t q14;
    int64_t q33;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t44;
    uint32_t t45;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 332u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10209673u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x114u); goto E_10209673;
    case 0x10209678u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x114u); goto E_10209678;
    case 0x102096bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_102096bf;
    case 0x102096d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_102096d0;
    case 0x102096d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_102096d5;
    case 0x102096e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_102096e6;
    case 0x10209721u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; goto E_10209721;
    case 0x10209777u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_10209777;
    case 0x102097cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102097cf;
    case 0x102097f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_10c = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); goto E_102097f2;
    case 0x1020980fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1020980f;
    case 0x10209819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_10209819;
    case 0x10209832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_10209832;
    case 0x10209834u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_10209834;
    case 0x10209879u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_10209879;
    default: break;
    }
#endif

    COW_AT(10209660)
    wr32(sp0 - 0x114u, in_esi);
    if (rd32(self + 0x80u) != 0u)
    {
        eax = rd32(self + 0x80u);
    }
    else
    {
    COW_AT(10209673)
        eax = COW_IMG(0x103d3c84u);
    }
    COW_AT(10209678)
    t1 = rd32(self + 0x20u);
    wr32(sp0 - 0x118u, t1);
    wr32(sp0 - 0x11cu, eax);
    wr32(sp0 - 0x120u, 0x66u);
    wr32(sp0 - 0x124u, 0xau);
    g->eax = eax;
    g->ecx = t1;
    g->esp = sp0 - 0x11cu;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x66u);
    t3 = g->ecx;
    wr32(sp0 - 0x120u, t2);
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    g->esp = sp0 - 0x110u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t2, rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), in_esi);
    wr32(sp0 - 0x128u, 0x80808080u);
    wr32(sp0 - 0x12cu, 0u);
    wr32(sp0 - 0x130u, sp0 - 0x100u);
    t4 = (uint32_t)(int16_t)rd16(self + 0x16u) + 0x18u;
    wr32(sp0 - 0x134u, t4);
    t5 = (uint32_t)(int16_t)rd16(self + 0x14u) + 0x10u;
    wr32(sp0 - 0x138u, t5);
    g->eax = sp0 - 0x100u;
    g->edx = t5;
    g->esp = sp0 - 0x10cu;
    t6 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t5, t4, sp0 - 0x100u, 0u, 0x80808080u, sp0 - 0x100u, rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), in_esi, rd32(sp0 - 0x110u));
    t7 = g->edx;
    if ((int32_t)rd32(self + 0x24u) > 0)
    {
        eax = t6;
        ecx = rd32(self + 0x24u);
        edx = t7;
    COW_AT(102096d0)
        if ((int32_t)ecx >= 60)
        {
    COW_AT(102096e6)
            q14 = (int64_t)cow_muls(0x88888889u, ecx);
            t15 = (uint32_t)((int32_t)(ecx + cow_qhi(q14)) >> 5u);
            t16 = t15 + (t15 >> 0x1fu);
            wr32(sp0 - 0x118u, t16);
            g->eax = t15 >> 0x1fu;
            g->ecx = ecx;
            g->edx = t16;
            g->esp = sp0 - 0x10cu;
            t17 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, t16, rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
            t18 = g->ecx;
            t19 = g->edx;
            wr32(sp0 - 0x118u, t17);
            wr32(sp0 - 0x11cu, 0x65u);
            wr32(sp0 - 0x120u, 0xau);
            g->edx = t19;
            g->esp = sp0 - 0x118u;
            t20 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x65u);
            t21 = g->edx;
            wr32(sp0 - 0x11cu, t20);
            wr32(sp0 - 0x120u, sp0 - 0x100u);
            g->ecx = sp0 - 0x100u;
            g->edx = t21;
            g->esp = sp0 - 0x10cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t20, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
            t22 = g->ecx;
            t23 = g->edx;
            eax = sp0 - 0x100u;
            ecx = t22;
            edx = t23;
        }
        else
        {
    COW_AT(102096d5)
            wr32(sp0 - 0x118u, 0xbau);
            wr32(sp0 - 0x11cu, 0xbu);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x114u;
            t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0xbau);
            t12 = g->ecx;
            t13 = g->edx;
            eax = t11;
            ecx = t12;
            edx = t13;
        }
    }
    else
    {
        eax = t6;
        ecx = rd32(self + 0x24u);
        edx = t7;
    COW_AT(102096bf)
        wr32(sp0 - 0x118u, 0xbbu);
        wr32(sp0 - 0x11cu, 0xbu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x114u;
        t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, 0xbbu);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    COW_AT(10209721)
    wr32(sp0 - 0x118u, in_ebx);
    wr32(sp0 - 0x11cu, in_ebp);
    wr32(sp0 - 0x120u, in_edi);
    wr32(sp0 - 0x124u, 0x80808080u);
    wr32(sp0 - 0x128u, eax);
    t24 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x2cu);
    wr32(sp0 - 0x12cu, t24);
    t25 = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - 0x10u);
    wr32(sp0 - 0x130u, t25);
    g->esp = sp0 - 0x11cu;
    cow_call_regs(g, COW_IMG(0x101ca3c0u), t25, g->ecx, g->edx, 1, 5, t25, t24, eax, 0x80808080u, in_edi);
    wr32(sp0 - 0x104u, COW_IMG(0x10385584u));
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x10cu, COW_IMG(0x1033b2ecu));
    wr32(sp0 - 0x110u, self + 0x2cu);
    ebx = (in_ebx & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x10385588u)) + rd16(self + 0x16u));
    ebp = 0u;
    edi = (in_edi & 0xffff0000u) | (uint16_t)(rd16(COW_IMG(0x10385584u)) + rd16(self + 0x14u));
    loc_104 = COW_IMG(0x10385584u);
    loc_108 = 0u;
    loc_10c = COW_IMG(0x1033b2ecu);
    loc_110 = self + 0x2cu;
L_10209777: ;
    COW_AT(10209777)
    wr32(sp0 - 0x124u, rd16(loc_110));
    wr32(sp0 - 0x128u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x12cu, sp0 - 0x100u);
    g->ebx = ebx;
    g->esp = sp0 - 0x118u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10352ff0u), rd16(loc_110), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu));
    wr32(sp0 - 0x130u, 0x3f800000u);
    wr32(sp0 - 0x134u, 0x3f800000u);
    wr32(sp0 - 0x138u, 1u);
    t26 = rd32(COW_IMG(0x1033b2dcu) + (uint32_t)(int8_t)rd8(self + rd32(sp0 - 0x108u) + 0x64u) * 4u);
    wr32(sp0 - 0x13cu, t26);
    wr32(sp0 - 0x140u, sp0 - 0x100u);
    t27 = ebp * 0x10u + ebx;
    wr32(sp0 - 0x144u, t27);
    wr32(sp0 - 0x148u, edi);
    g->esp = sp0 - 0x12cu;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t26, 7, edi, t27, sp0 - 0x100u, t26, 1u, 0x3f800000u, 0x3f800000u);
    if (ebp + 1u != (uint32_t)(int8_t)rd8(rd32(sp0 - 0x10cu)))
    {
        ebp = ebp + 1u;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
    }
    else
    {
        ecx = rd32(sp0 - 0x10cu);
    COW_AT(102097cf)
        wr32(sp0 - 0x10cu, ecx + 1u);
        t28 = rd32(sp0 - 0x104u) + 8u;
        t29 = rd32(sp0 - 0x104u);
        wr32(sp0 - 0x104u, t28);
        ebx = (ebx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + rd16(t29 + 0xcu));
        ebp = 0u;
        edi = (ecx + 1u & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + rd16(t29 + 8u));
        loc_10c = ecx + 1u;
        loc_104 = t28;
    }
    COW_AT(102097f2)
    t30 = rd32(sp0 - 0x108u) + 1u;
    t31 = rd32(sp0 - 0x108u);
    wr32(sp0 - 0x108u, t30);
    t32 = rd32(sp0 - 0x110u) + 2u;
    wr32(sp0 - 0x110u, t32);
    if ((int32_t)(t31 + 1u) < 28)
    {
        loc_108 = t30;
        loc_110 = t32;
        goto L_10209777;
    }
    edx = t32;
    loc_110 = t32;
    COW_AT(1020980f)
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        eax = rd32(self + 0x24u);
        ebx = rd32(sp0 - 0x118u);
        ebp = rd32(sp0 - 0x11cu);
        edi = rd32(sp0 - 0x120u);
    }
    else
    {
        ebx = rd32(sp0 - 0x118u);
        ebp = rd32(sp0 - 0x11cu);
        edi = rd32(sp0 - 0x120u);
    COW_AT(10209819)
        q33 = (int64_t)cow_muls(0x88888889u, (uint32_t)(int16_t)rd16(self + 0x1eu));
        t34 = (uint32_t)((int32_t)(cow_qhi(q33) + (uint32_t)(int16_t)rd16(self + 0x1eu)) >> 5u);
        if ((int32_t)(t34 + (t34 >> 0x1fu)) >= 0)
        {
            eax = t34 >> 0x1fu;
            ecx = (uint32_t)(int16_t)rd16(self + 0x1eu);
            edx = t34 + (t34 >> 0x1fu);
        }
        else
        {
            eax = t34 >> 0x1fu;
            ecx = (uint32_t)(int16_t)rd16(self + 0x1eu);
    COW_AT(10209832)
            edx = 0u;
        }
    COW_AT(10209834)
        wr32(sp0 - 0x118u, edx);
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10cu;
        t35 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, edx, rd32(sp0 - 0x114u), loc_110);
        t36 = g->ecx;
        t37 = g->edx;
        wr32(sp0 - 0x118u, t35);
        wr32(sp0 - 0x11cu, 0x64u);
        wr32(sp0 - 0x120u, 0xau);
        g->edx = t37;
        g->esp = sp0 - 0x118u;
        t38 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x64u);
        t39 = g->edx;
        wr32(sp0 - 0x11cu, t38);
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        g->ebx = ebx;
        g->ecx = sp0 - 0x100u;
        g->esp = sp0 - 0x10cu;
        t40 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t38, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u));
        t41 = g->ecx;
        wr32(sp0 - 0x124u, 0x80404040u);
        wr32(sp0 - 0x128u, sp0 - 0x100u);
        t42 = (t40 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) - 0x14u);
        wr32(sp0 - 0x12cu, t42);
        t43 = (t41 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - 4u);
        wr32(sp0 - 0x130u, t43);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x11cu;
        t44 = cow_call_regs(g, COW_IMG(0x101ca3c0u), t42, g->ecx, g->edx, 1, 5, t43, t42, sp0 - 0x100u, 0x80404040u, sp0 - 0x100u);
        t45 = g->edx;
        eax = t44;
        edx = t45;
    }
    COW_AT(10209879)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x114u);
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10209660(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10209673u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x10209678u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x102096bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x130u, sp0 - 0x100u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102096d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x130u, sp0 - 0x100u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102096d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x130u, sp0 - 0x100u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102096e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x130u, sp0 - 0x100u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10209721u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x130u, sp0 - 0x100u);
        wr32(sp0 - 0x124u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10209777u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x102097cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102097f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_10c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1020980fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10209819u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10209832u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10209834u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x12cu, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10209879u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10209660(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10209660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
